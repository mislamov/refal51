#ifndef SESSION_H_INCLUDED
#define SESSION_H_INCLUDED

#ifndef POOLSIZE_DEFAULT
    #define POOLSIZE_DEFAULT 128
#endif


#include <stack>
#include <stdlib.h>

#include "data.h"
#include "rfunction.h"

class VarMap;
class MatchState;
class RefVariableBase;


class VarMapItem {
public:
    RefVariableBase* var;   // ���� ����������
    RefData** l;            // ��������..
    RefData** r;            // ..��������
    MatchState* matchState; // ��������� ������������� (��� �����-�� ��������)

    VarMapItem() {
        var=0;
        l=r=0;
        matchState=0;
    };

	VarMapItem(RefVariableBase* vv,RefData** ll,RefData** rr,MatchState* mm=0) {
        var=vv;
        l=ll;
		r=rr;
        matchState=mm;
    };
};


// ����-����. ��������� (put) � ��������������� (top_pop) ���������� �������� ���� T ����� ������� �����������.
template <class T>
class PooledClass {
protected:
	T* pool; // ������ �������. ������������� � 1. pool[0] - ��� ���������� �������������
    size_t last_ind;   // ������ ���������� � ����� ��������
    size_t poolsize;   // ������ ���������� � ����� ��������

public:
    PooledClass() {
        last_ind = 0;
        poolsize = POOLSIZE_DEFAULT;
        pool = (T*)malloc( sizeof(T)*POOLSIZE_DEFAULT );
		#ifdef TESTCODE
		memset(pool, 0xff, sizeof(T)*POOLSIZE_DEFAULT);
		#endif
    };

    ~PooledClass() {
        free(pool);
    };

    // ��������� ��������� item ������������
    void put_from(T* item) {
        ++last_ind ;
        if (last_ind >= poolsize) {
            // ��� ��������
            LOG("T-pool is full. realloc!");
            poolsize += POOLSIZE_DEFAULT;
            pool = (T*) realloc(pool, poolsize*sizeof(T) );
            if (!pool) {
                RUNTIMEERROR("T-pool", "not anouth memory");
                return;
            }
			#ifdef TESTCODE
			memset(pool+last_ind, 0xff, sizeof(T)*POOLSIZE_DEFAULT);
			#endif
        }
        
		memcpy(pool+last_ind, item, sizeof(T));
        return;
    };

    void top_pop_to(T* item) {        
        T* pool_last_ind = pool+last_ind;
		memcpy(item, pool_last_ind , sizeof(T));
		#ifdef TESTCODE
		memset(pool+last_ind, 0xff, sizeof(T));
		#endif
        --last_ind;

	};

    void clear() {
        last_ind = 0;
		#ifdef TESTCODE
		memset(pool, 0xff, sizeof(T)*poolsize);
		#endif
		memset(pool, 0xff, sizeof(T));
    };

};


class VarMap : public PooledClass<VarMapItem>{
public:
	VarMap(void *own = 0) {
        pool[0].var = (RefVariableBase*)own;
    };

    // ��������� ��������� ����������
    void put(RefVariableBase *var, RefData** l, RefData** r, MatchState* matchState) {
		 // TODO (Islamov#1#): ������ �������� �������
		put_from(&VarMapItem(var, l, r, matchState));        
    };

    void top_pop(RefData *var, RefData** &l, RefData** &r, MatchState* &matchState) {
        #ifdef TESTCODE
        if (var != pool[last_ind].var) {
            SYSTEMERROR("var != pool.var");
        }
        #endif

        VarMapItem* pool_last_ind = pool+last_ind;
        l = pool_last_ind->l;
        r = pool_last_ind->r;
        matchState = pool_last_ind->matchState;
        --last_ind;

        // TODO (Islamov#1#): ����� ������:
        #ifdef DEBUG
        memset(pool+last_ind+1, 0xff, sizeof(VarMapItem));
        #endif
    };

    // ���� �� ����� ���������� �� ������ ���������
    bool findByName(unistring name, RefData** &l, RefData** &r) {
        for (size_t ind = last_ind; ind>=0; --ind) {
            if (pool[ind].var->getName()==name) {
                l = pool[ind].l;
                r = pool[ind].r;
                return true;
            }
            return false;
        }
    };

};

// ���� ������������� (������������)
class MatchState {
    VarMap varmap; // ����� �������������
    RefData** view_l;   // �������� ������������� ����� �������
    RefData** view_r;

public:
    MatchState(RefData** ll, RefData** rr) {
        view_l=ll;
        view_r=rr;
    };

    // ��������� ��������� ����������
    void saveVar(Session *s, RefVariableBase *varOrData, RefData **&l, RefData **&r);
    void restoreVar(Session *s, RefVariableBase *varOrData, MatchState* &matchState, RefData **&l, RefData **&r);

};

template <class T>
class DataLinkPool {
	size_t idx;
	size_t size;
	T* pool;
public:
	DataLinkPool(){
		idx = 0;
		size = POOLSIZE_DEFAULT;
		pool = (T*)malloc(sizeof(T)*size);
		if (!pool) RUNTIMEERROR("Mem-buffer", "memory limit");
		memset(pool, 0xff, sizeof(T)*size);
	};

	void put(T l){
		if (idx >= size-1){
			size+=POOLSIZE_DEFAULT;
			pool = (T*)realloc(pool, sizeof(T)*size);
		};
		pool[idx] = l;
		++idx;
	};

	T top_pop(){ 
		#ifdef TESTCODE
		if (!idx) SYSTEMERROR("link-stack is empty!");
		#endif
		return pool[--idx]; 
	};

	T top(){ 
		return pool[idx-1]; 
	};
};

class Session {
    friend class MatchState;
	friend class RefData_DOT;

    std::stack<MatchState*>  matchStates;
    DataLinkPool<RefData**> stackOfDataSkob; // ���� ������������� ������
    RefData** current_view_l;
    RefData** current_view_r;
public:
	Session(){
		current_view_l = current_view_r = 0;
	};

    TResult  result_sost;

    TVarBody* getBodyByLink(RefVariable*) {
        SYSTEMERROR("not realized");
    };

    RefData** getTopDataSkob() {
        return (RefData**)stackOfDataSkob.top();
    };

    // ������������ ������� tmplate � ��������� ���������� � l �� r.
    // isdemaching - ������� ����, ��� ���� ���������� ������� �� ����������� �������� ��������� (���� � ������� �������)
    bool  matching(RefObject *initer, RefChain *tmplate, RefData **l, RefData **r, bool isdemaching, bool isRevers);
    // ���������� ��������� ��������� ��������� � ��������������� �������� � �� ��� ������� ������
    // ���������� ������������ � ����������� ���������������� �������� � ����� ����������� �������
    // ���� ���-� ��� <.>, �� ������������ �������� (�� �����!)
    RefChain*  executeExpression (RefChain *);
    // ������� �����������: �������� ���������� ����������. �������� �� � �������� ��������
    RefChain*  substituteExpression(RefChain *);

    RefObject* findFunctionById(unistring id);

    MatchState* saveCurrentStateLarge(RefData** ll, RefData** rr) { // ��������� � ���������� ������ �� ��������� ������������� ��� �����������
		MatchState* res = new MatchState(current_view_l=ll, current_view_r=rr);
		stackOfDataSkob.put(current_view_r+1);
        matchStates.push( res );
		return res;
    };
    MatchState* saveCurrentStateSmall(RefData** ll, RefData** rr) { // ��������� � ���������� ������ �� ��������� ������������� �������
		MatchState* res = new MatchState(current_view_l=ll, current_view_r=rr);
        matchStates.push( res );
		return res;
    };
    void restoreToLastSavedStateLarge(); // ������������ � ��������� �� ������ ���������� �����������
    void restoreToLastSavedState(); // ������������ � ����������� ���������
    void clearAllStatesAfter(MatchState*); // ������� �� �����, ��� ���� ������� ����� ���������� ��������� ���

    void SAVE_VAR_STATE   (RefData** activeTemplate, RefData** &l, RefData** &r) { // ��������� ��������� ����������
        RefVariableBase* var = ref_dynamic_cast<RefVariableBase>(*activeTemplate);
        if (var){
            matchStates.top()->saveVar(this, (RefVariableBase*)var, l, r);
        }
		LOG("save: " << var->getName() << " : " << ((l && *l) ? (*l)->toString() : "null") << " .. " <<  (*r&&(current_view_l-1-r)?(*r)->toString():"null"));
    };
    //void SAVE_VAR_STATE_AND_VALUE(RefData** activeTemplate); // ��������� ��������� � �������� ����������
    void RESTORE_VAR_STATE(RefData** activeTemplate, RefData** &l, RefData** &r){ // ��������������� ��������� ����������
        RefVariableBase* var = ref_dynamic_cast<RefVariableBase>(*activeTemplate);
        if (!var) SYSTEMERROR("not var restoring!");

        MatchState *varMatchState;
        matchStates.top()->restoreVar(this, var, varMatchState, l, r); // ��� �����-���������� varMatchState ������ �� ���������
    };

};

inline void MatchState::saveVar(Session *s, RefVariableBase *varOrData, RefData **&l, RefData **&r) {
    varmap.put(varOrData, l, r, 0);
};

inline void MatchState::restoreVar(Session *s, RefVariableBase *varOrData, MatchState* &matchState, RefData **&l, RefData **&r) {
    varmap.top_pop(varOrData, l, r, matchState);
};


/*
#define SAVE_STATE(activeTemplate) { \
    s->getCurrentSopostStack()->push( new TVarBody(l, r, activeTemplate) ); \
    std::cout << "\nsave : "; print_vector(l, r); std::cout << "\n" << std::flush; \
}; \

#define RESTORE_STATE(tpl) { \
    TVarBody *tvb = s->getCurrentSopostStack()->top(); \
    l=tvb->first;r=tvb->second; \
    if (tvb->owner!=tpl) SYSTEMERROR("mmmm: tvb->owner(" << tvb->owner->toString() << ") !=  tpl("<<tpl->toString()<<")"); \
    s->getCurrentSopostStack()->pop(); \
}; \

#define SAVE_STATE_AND_VAR(activeTemplate) { \
    s->getCurrentSopostStack()->push( s->setVarBody(name, new TVarBody(l, r, this)) ); \
    LOG( "\nsave(" << name << ") : "; print_vector(l, r); std::cout << "\n" ) \
};
*/


#endif
