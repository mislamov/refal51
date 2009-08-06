#ifndef SESSION_H_INCLUDED
#define SESSION_H_INCLUDED

#include <stack>

#include <stdlib.h>

#include "data.h"
#include "rfunction.h"

class VarMap;
class RefVariableBase;

class VarMapItem {
    public:
    RefVariableBase* var; // ���� ����������
    RefData** l;          // ��������..
    RefData** r;          // ..��������
    VarMap*   matchState; // ��������� ������������� (��� �����-�� ��������)

    VarMapItem() {
        var=0;
        l=r=0;
        matchState=0;
    };
};

size_t POOLSIZE_DEFAULT = 128;

class VarMap {
    VarMapItem *pool;
    size_t last_ind;   // ������ ���������� � ����� ��������
    size_t poolsize;   // ������ ���������� � ����� ��������

public:
    VarMap(void *own = 0){
        last_ind = 0;
        poolsize = POOLSIZE_DEFAULT;
        pool = (VarMapItem*)malloc( sizeof(VarMapItem)*POOLSIZE_DEFAULT );
        pool[0].var = (RefVariableBase*)own;
    };

    ~VarMap(){
        free(pool);
    };

    // ��������� ��������� ����������
    void put(RefVariableBase *var, RefData** l, RefData** r, VarMap* matchState) {
        ++last_ind ;
        if (last_ind >= poolsize) {
            // ��� ��������
            LOG("VarMapItem-pool is full. realloc!");
            poolsize += POOLSIZE_DEFAULT;
            pool = (VarMapItem*) realloc(pool, poolsize*sizeof(VarMapItem) );
            if (!pool) {
                RUNTIMEERROR("VarMapItem-pool", "not anouth memory");
                return;
            }
        }

        VarMapItem pool_last_ind = pool[last_ind];
        pool_last_ind.var = var;
        pool_last_ind.l = l;
        pool_last_ind.r = r;
        pool_last_ind.matchState = matchState;
        return;
    };

    void top_pop(RefVariableBase *var, RefData** &l, RefData** &r, VarMap* &matchState) {
        #ifdef TESTCODE
        if (var != pool[last_ind].var) {
            SYSTEMERROR("var != pool.var");
        }
        #endif

        VarMapItem pool_last_ind = pool[last_ind];
        l = pool_last_ind.l;
        r = pool_last_ind.r;
        matchState = pool_last_ind.matchState;
        --last_ind;

        // TODO (Islamov#1#): ����� ������:
        #ifdef DEBUG
        pool_last_ind = pool[last_ind+1];
        pool_last_ind.var = 0;
        pool_last_ind.l = 0;
        pool_last_ind.r = 0;
        pool_last_ind.matchState = 0;
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

    void clear(){
        last_ind = 0;
        pool[0].var = 0;
    };

};

class MatchState {
    VarMap varmap; // ����� �������������
    RefData** l;   // ��������
    RefData** r;

    MatchState(RefData** ll, RefData** rr){ l=ll; r=rr; };
};

class Session {
    std::stack<MatchState*>  matchStates;
    std::stack<RefBracketBase**> stackOfDataSkob; // ���� ������������� ������
    RefData** current_l;
    RefData** current_r;
public:
    TResult  result_sost;

    TVarBody* getBodyByLink(RefVariable*) {
        SYSTEMERROR("not realized");
    };
    RefBracketBase** getTopDataSkob() {
        return stackOfDataSkob.top();
    }

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

    MatchState* saveCurrentStateLarge(){ // ��������� � ���������� ������ �� ��������� ������������� ��� �����������
        matchStates.push( new MatchState(current_l, current_r) );
    };
    MatchState* saveCurrentStateSmall(){ // ��������� � ���������� ������ �� ��������� ������������� �������
        matchStates.push( new MatchState(current_l, current_r) );
    };
    void restoreToLastSavedStateLarge(); // ������������ � ��������� �� ������ ���������� �����������
    void restoreToLastSavedState(); // ������������ � ����������� ���������
    void clearAllStatesAfter(MatchState*); // ������� �� �����, ��� ���� ������� ����� ���������� ��������� ���
};


void SAVE_VAR_STATE   (RefData** activeTemplate); // ��������� ��������� ����������
void SAVE_VAR_STATE_AND_VALUE(RefData** activeTemplate); // ��������� ��������� � �������� ����������
void RESTORE_VAR_STATE(RefData** activeTemplate); // ��������������� ��������� ����������

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
