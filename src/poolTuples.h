#ifndef REF_POOLTUPLES_INCLUDED
#define REF_POOLTUPLES_INCLUDED

#include "config.h"

class Session;


template <class T>
class PooledStack {
	friend class Session;

	size_t idx;  // pool+idx - ������� ����� ����������; pool+0 - ������ �������; idx - ���-�� ���������
	size_t size; // ���������� ����� ����
	T* pool;
public:
	inline size_t getCount(){ return idx; }
	inline size_t getLength(){ return idx; };
	inline bool empty(){ return !idx; };

	inline PooledStack(){
		idx = 0;
		size = POOLSIZE_DEFAULT;
		pool = (T*)malloc(sizeof(T)*size);
		if (!pool) RUNTIMEERRORn("memory limit");
		memset(pool, 0xff, sizeof(T)*size);
	};


	//~PooledStack(){ free(pool); };
	inline void push(T l){ return put(l); }
	inline void put(T l){
		if (idx >= size-1){
			size+=POOLSIZE_DEFAULT;
			pool = (T*)realloc(pool, sizeof(T)*size);
			if (!pool) RUNTIMEERRORn("memory limit");
		};
		pool[idx] = l;
		++idx;
	};

	inline T top_pop(){
#ifdef TESTCODE
		if (!idx)
			SYSTEMERRORn("link-stack is empty!");
#endif
		return pool[--idx];
	};


	inline void pop(){
#ifdef TESTCODE
		if (!idx)
			SYSTEMERRORn("link-stack is empty!");
#endif
		--idx;
	};

	inline T top(){
#ifdef TESTCODE
		if (idx<=0)
			SYSTEMERRORn("link-stack is empty!");
#endif
		return pool[idx-1];
	};

	inline T pretop(){
#ifdef TESTCODE
		if (idx<=1)
			SYSTEMERRORn("link-stack is not anouth!");
#endif
		return pool[idx-2];
	};

	inline void settop(T t){
#ifdef TESTCODE
		if (idx<=0)
			SYSTEMERRORn("link-stack is empty!");
#endif
		pool[idx-1] = t;
	};

	inline T getByIndex(size_t index){
		if (index <0 || index>=idx) return 0;
		return pool[index];
	};

	inline void setnullfor(T key){
		for (int i=1; i<=idx; ++i){
			if (pool[idx-i]==key){
				pool[idx-i]=0;
				return;
			}
		}
	};

	inline void clear(){
		idx = 0;
		size = POOLSIZE_DEFAULT;
		pool = (T*)realloc(pool, sizeof(T)*size);
		if (!pool) RUNTIMEERRORn("memory limit");
		memset(pool, 0xff, sizeof(T)*size);
	};

	inline void flush(){
		pool = (T*)realloc(pool, sizeof(T)*idx);
		if (!pool) RUNTIMEERRORn("memory limit");
	};

	inline void setLength(size_t newlen){
#ifdef TESTCODE
		if (newlen > idx) AchtungERRORn;
#endif
		idx = newlen;
	};

	void foreach( void (*fn)(T) ){
		for(int theindex = 0 ; theindex < idx; ++theindex){
			fn(pool[theindex]);
		}
	}
};



// ����-����. ��������� (put) � ��������������� (top_pop) ���������� �������� ���� T ����� ������� �����������.

/*template <class T>
class PooledClass {
protected:
T* pool;			// ������ �������. ������������� � 1. pool[0] - ��� ���������� �������������
size_t last_ind;	// ������ ���������� � ����� ��������
size_t poolsize;	// ������ ���������� � ����� ��������

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
if (!pool) RUNTIMEERROR("T-pool : not anouth memory");
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
*/


template <class T1, class T2>
class PooledTuple2 {
public:
	struct TUPLE2 {T1 i1; T2 i2; };
	//protected:
	TUPLE2* pool;		// ��������� � 1
	size_t last_ind;	// ������ ���������� � ����� ��������
	size_t poolsize;
public:
	inline PooledTuple2() {
#ifdef TESTCODE
		//std::cout << "\n\nsizeof(TUPLE2) = " << sizeof(TUPLE2) << "\n";
		//std::cout << "sizeof(T1) = " << sizeof(T1) << "   "<< "sizeof(T2) = " << sizeof(T2) << "   " << "\n\n";
		if (sizeof(TUPLE2) < sizeof(T1)+sizeof(T2))
			SYSTEMERRORn("Platform depend collision! sizeof(TUPLE2) < sizeof( struct{T1 T2} ).");
#endif

		last_ind = 0;
		poolsize = POOLSIZE_DEFAULT;
		pool = (TUPLE2*)malloc( sizeof(TUPLE2)*POOLSIZE_DEFAULT );
		if (!pool) RUNTIMEERRORn("memory limit");
#ifdef TESTCODE
		memset(pool, 0xff, sizeof(TUPLE2)*POOLSIZE_DEFAULT);
#endif
	};

	inline ~PooledTuple2() {
		free(pool);
	};

	// ��������� ��������� item ������������
	inline void put(T1 i1, T2 i2) {
		++last_ind ;
		if (last_ind >= poolsize) {
			// ��� ��������
			//LOG("TUPLE2-pool is full. realloc!");
			poolsize += POOLSIZE_DEFAULT;
			pool = (TUPLE2*) realloc(pool, poolsize*sizeof(TUPLE2) );
			if (!pool) RUNTIMEERRORn("TUPLE2-pool : not anouth memory");

#ifdef TESTCODE
			memset(pool+last_ind, 0xff, sizeof(TUPLE2)*POOLSIZE_DEFAULT);
#endif
		}

		//memcpy(pool+last_ind,	{&i1,	sizeof(TUPLE2));
		TUPLE2* pool_last_ind = (TUPLE2*) pool+last_ind;
		pool_last_ind->i1 = i1;
		pool_last_ind->i2 = i2;
		return;
	};

	inline void top(T1 &i1, T2 &i2) {
		TUPLE2* pool_last_ind = pool + last_ind;
		i1 = pool_last_ind->i1;
		i2 = pool_last_ind->i2;
	};

	inline TUPLE2* top_tuple_link(){
		return pool + last_ind;
	};


	inline T1 top1() {
		TUPLE2* pool_last_ind = pool + last_ind;
		return pool_last_ind->i1;
	};

	inline T2 top2() {
		TUPLE2* pool_last_ind = pool + last_ind;
		return pool_last_ind->i2;
	};

	inline void pop(){
#ifdef TESTCODE
		memset(pool+last_ind, 0xff, sizeof(TUPLE2));
#endif
		--last_ind;
	};

	inline bool top_pop(T1 &i1, T2 &i2) {
		if (!last_ind) {i1=0;i2=0; return false;}
		top(i1,i2);
#ifdef TESTCODE
		memset(pool+last_ind, 0xff, sizeof(TUPLE2));
#endif
		--last_ind;
		return true;
	};

	inline void flushfrom(size_t idx){
		ref_assert(idx <= last_ind);
#ifdef TESTCODE
		while(last_ind > idx+1){
			memset(pool+last_ind, 0xff, sizeof(TUPLE2));
			last_ind--;
		}
#else
		last_ind = idx+1;
#endif
	};

	inline void setnullfor(T1 key){
		TUPLE2 *tp = this->findTopByFirstKey(key);
		if (tp) return;
		tp->i1 = 0;
	};

	size_t getLength(){ return last_ind; }
	inline void setLength(size_t newlen){
#ifdef TESTCODE
		if (newlen > last_ind) AchtungERRORn;
#endif
		last_ind = newlen;
	};

	bool getByIndex(size_t index, T1 &i1, T2 &i2){
		if (index<=0 || index>last_ind) {
#ifdef DEBUG
			std::cout << "\nWARN! index<=0 || index>last_ind\n";
#endif
			i1 = 0;
			i2 = 0;
			return false;
		}
		TUPLE2* pool_index = pool + index;
		i1 = pool_index->i1;
		i2 = pool_index->i2;
		return true;
	}

	inline TUPLE2* getPoolLinkForIndex(size_t idx){
		ref_assert( idx <= last_ind );
		return pool + idx + 1;
	}

	inline TUPLE2* getPoolLinkAfterLast(){
		return pool+last_ind+1;
	}

	TUPLE2* findTopByFirstKey(T1 key){
		for(size_t i=last_ind; i; --i){
			if (pool[i].i1 == key) return pool+i;
		}
		return 0;
	}

	void clear() {
		last_ind = 0;
#ifdef TESTCODE
		memset(pool, 0xff, sizeof(TUPLE2)*poolsize);
#endif
		memset(pool, 0xff, sizeof(TUPLE2));
	};

	inline bool equalTop(T1 i1, T2 i2){
		TUPLE2* pool_last_ind = pool + last_ind;
		return i1 == pool_last_ind->i1  &&  i2 == pool_last_ind->i2;
	}
};


template <class T1, class T2, class T3>
class PooledTuple3 {
public:
	struct TUPLE3 {T1 i1; T2 i2; T3 i3;};
protected:
	TUPLE3* pool;		// ��������� � 1
	size_t last_ind;	// ������ ���������� � ����� ��������
	size_t poolsize;
public:
	PooledTuple3() {
#ifdef TESTCODE
		if (sizeof(TUPLE3) != sizeof(T1)+sizeof(T2)+sizeof(T3)) SYSTEMERRORn("Platform depend collision! sizeof(TUPLE3) != sizeof( struct{T1 T2 T3} ).");
#endif

		last_ind = 0;
		poolsize = POOLSIZE_DEFAULT;
		pool = (TUPLE3*)malloc( sizeof(TUPLE3)*POOLSIZE_DEFAULT );
		if (!pool) RUNTIMEERRORn("memory limit");
#ifdef TESTCODE
		memset(pool, 0xff, sizeof(TUPLE3)*POOLSIZE_DEFAULT);
#endif
	};

	~PooledTuple3() {
		free(pool);
	};

	// ��������� ��������� item ������������
	inline void put(T1 i1, T2 i2, T3 i3) {
		++last_ind ;
		if (last_ind >= poolsize) {
			// ��� ��������
			//LOG("TUPLE3-pool is full. realloc!");
			poolsize += POOLSIZE_DEFAULT;
			pool = (TUPLE3*) realloc(pool, poolsize*sizeof(TUPLE3) );
			if (!pool) RUNTIMEERRORn("TUPLE3-pool : not anouth memory");

#ifdef TESTCODE
			memset(pool+last_ind, 0xff, sizeof(TUPLE3)*POOLSIZE_DEFAULT);
#endif
		}

		//memcpy(pool+last_ind,	{&i1,	sizeof(TUPLE3));
		TUPLE3* pool_last_ind = (TUPLE3*) pool+last_ind;
		pool_last_ind->i1 = i1;
		pool_last_ind->i2 = i2;
		pool_last_ind->i3 = i3;
		return;
	};

	void top(T1 &i1, T2 &i2, T3 &i3) {
		TUPLE3* pool_last_ind = pool + last_ind;
		i1 = pool_last_ind->i1;
		i2 = pool_last_ind->i2;
		i3 = pool_last_ind->i3;
	};



	inline T1 top1() {
		TUPLE3* pool_last_ind = pool + last_ind;
		return pool_last_ind->i1;
	};

	inline T2 top2() {
		TUPLE3* pool_last_ind = pool + last_ind;
		return pool_last_ind->i2;
	};

	inline T3 top3() {
		TUPLE3* pool_last_ind = pool + last_ind;
		return pool_last_ind->i3;
	};

	bool top_pop(T1 &i1, T2 &i2, T3 &i3) {
		if (!last_ind) {i1=0;i2=0;i3=0; return false;}
		top(i1,i2,i3);
#ifdef TESTCODE
		memset(pool+last_ind, 0xff, sizeof(TUPLE3));
#endif
		--last_ind;
		return true;
	};

	bool pop() {
		if (!last_ind) {return false;}
#ifdef TESTCODE
		memset(pool+last_ind, 0xff, sizeof(TUPLE3));
#endif
		--last_ind;
		return true;
	};

	size_t getLength(){ return last_ind; }
	inline void setLength(size_t newlen){
#ifdef TESTCODE
		if (newlen > last_ind) AchtungERRORn;
#endif
		last_ind = newlen;
	};

	bool getByIndex(size_t index, T1 &i1, T2 &i2, T3 &i3){
		if (index<=0 || index>last_ind) {
			i1 = 0;
			i2 = 0;
			i3 = 0;
			return false;
		}
		TUPLE3* pool_index = pool + index;
		i1 = pool_index->i1;
		i2 = pool_index->i2;
		i3 = pool_index->i3;
		return true;
	}
	TUPLE3* findTopByFirstKey(T1 key){
		for(size_t i=last_ind; i; --i){
			if (pool[i].i1 == key) return pool+i;
		}
		return 0;
	}

	void clear() {
		last_ind = 0;
#ifdef TESTCODE
		memset(pool, 0xff, sizeof(TUPLE3)*poolsize);
#endif
		memset(pool, 0xff, sizeof(TUPLE3));
	};


	inline TUPLE3* getPoolLinkForIndex(size_t idx){
		ref_assert( idx <= last_ind );
		return pool + idx + 1;
	};

	inline TUPLE3* getPoolLinkAfterLast(){
		return pool+last_ind+1;
	};

	inline void flushfrom(size_t idx){
		ref_assert(idx <= last_ind);
		#ifdef TESTCODE
		while(last_ind > idx+1){
			memset(pool+last_ind, 0xff, sizeof(TUPLE3));
			last_ind--;
		}
		#else
		last_ind = idx+1;
		#endif
	};


};




template <class T1, class T2, class T3, class T4>
class PooledTuple4 {
protected:
	struct TUPLE4 {T1 i1; T2 i2; T3 i3; T4 i4; };

	TUPLE4* pool;       // ��������� � 1
	size_t last_ind;	// ������ ���������� � ����� ��������
	size_t poolsize;

public:
	PooledTuple4() {
#ifdef TESTCODE
		if (sizeof(TUPLE4) != sizeof(T1)+sizeof(T2)+sizeof(T3)+sizeof(T4)) SYSTEMERRORn("Platform depend collision! sizeof(TUPLE4) != sizeof( struct{T1 T2 T3 T4} ).");
#endif

		last_ind = 0;
		poolsize = POOLSIZE_DEFAULT;
		pool = (TUPLE4*)malloc( sizeof(TUPLE4)*POOLSIZE_DEFAULT );
		if (!pool) RUNTIMEERRORn("memory limit");
#ifdef TESTCODE
		memset(pool, 0xff, sizeof(TUPLE4)*POOLSIZE_DEFAULT);
#endif
	};

	~PooledTuple4() {
		free(pool);
	};

	// ��������� ��������� item ������������
	inline void put(T1 i1, T2 i2, T3 i3, T4 i4) {
		++last_ind ;
		if (last_ind >= poolsize) {
			// ��� ��������
			//LOG("TUPLE4-pool is full. realloc!");
			poolsize += POOLSIZE_DEFAULT;
			pool = (TUPLE4*) realloc(pool, poolsize*sizeof(TUPLE4) );
			if (!pool) RUNTIMEERRORn("TUPLE4-pool : not anouth memory");

#ifdef TESTCODE
			memset(pool+last_ind, 0xff, sizeof(TUPLE4)*POOLSIZE_DEFAULT);
#endif
		}

		//memcpy(pool+last_ind,	{&i1,	sizeof(TUPLE4));
		TUPLE4* pool_last_ind = (TUPLE4*) pool+last_ind;
		pool_last_ind->i1 = i1;
		pool_last_ind->i2 = i2;
		pool_last_ind->i3 = i3;
		pool_last_ind->i4 = i4;
		return;
	};

	void top(T1 &i1, T2 &i2, T3 &i3, T4 &i4) {
		TUPLE4* pool_last_ind = pool + last_ind;
		i1 = pool_last_ind->i1;
		i2 = pool_last_ind->i2;
		i3 = pool_last_ind->i3;
		i4 = pool_last_ind->i4;
	};


	inline T1 top1() {
		TUPLE4* pool_last_ind = pool + last_ind;
		return pool_last_ind->i1;
	};
	inline T2 top2() {
		TUPLE4* pool_last_ind = pool + last_ind;
		return pool_last_ind->i2;
	};
	inline T3 top3() {
		TUPLE4* pool_last_ind = pool + last_ind;
		return pool_last_ind->i3;
	};
	inline T4 top4() {
		TUPLE4* pool_last_ind = pool + last_ind;
		return pool_last_ind->i4;
	};


	bool top_pop(T1 &i1, T2 &i2, T3 &i3, T4 &i4) {
		if (!last_ind) {i1=0;i2=0;i3=0; return false;}
		top(i1,i2,i3,i4);
#ifdef TESTCODE
		memset(pool+last_ind, 0xff, sizeof(TUPLE4));
#endif
		--last_ind;
		return true;
	};

	bool pop() {
		if (!last_ind) {return false;}
#ifdef TESTCODE
		memset(pool+last_ind, 0xff, sizeof(TUPLE4));
#endif
		--last_ind;
		return true;
	};


	size_t getLength(){ return last_ind; }
	inline void setLength(size_t newlen){
#ifdef TESTCODE
		if (newlen > last_ind) AchtungERRORn;
#endif
		last_ind = newlen;
	};

	bool getByIndex(size_t index, T1 &i1, T2 &i2, T3 &i3, T4 &i4){
		if (index<=0 || index>last_ind) {
			i1 = 0;
			i2 = i3 = 0;
			i4 = 0;
			return false;
		}
		TUPLE4* pool_index = pool + index;
		i1 = pool_index->i1;
		i2 = pool_index->i2;
		i3 = pool_index->i3;
		i4 = pool_index->i4;
		return true;
	}

	void clear() {
		last_ind = 0;
#ifdef TESTCODE
		memset(pool, 0xff, sizeof(TUPLE4)*poolsize);
#endif
		memset(pool, 0xff, sizeof(TUPLE4));
	};

};












template <class T1, class T2, class T3, class T4, class T5>
class PooledTuple5 {
protected:
	struct TUPLE5 {T1 i1; T2 i2; T3 i3; T4 i4; T5 i5;};

	TUPLE5* pool;       // ��������� � 1
	size_t last_ind;	// ������ ���������� � ����� ��������
	size_t poolsize;

public:
	PooledTuple5() {
#ifdef TESTCODE
		if (sizeof(TUPLE5) != sizeof(T1)+sizeof(T2)+sizeof(T3)+sizeof(T4)+sizeof(T5)) SYSTEMERRORn("Platform depend collision! sizeof(TUPLE4) != sizeof( struct{T1 T2 T3 T4} ).");
#endif

		last_ind = 0;
		poolsize = POOLSIZE_DEFAULT;
		pool = (TUPLE5*)malloc( sizeof(TUPLE5)*POOLSIZE_DEFAULT );
		if (!pool) RUNTIMEERRORn("memory limit");
#ifdef TESTCODE
		memset(pool, 0xff, sizeof(TUPLE5)*POOLSIZE_DEFAULT);
#endif
	};

	~PooledTuple5() {
		free(pool);
	};

	// ��������� ��������� item ������������
	inline void put(T1 i1, T2 i2, T3 i3, T4 i4, T5 i5) {
		++last_ind ;
		if (last_ind >= poolsize) {
			// ��� ��������
			//LOG("TUPLE4-pool is full. realloc!");
			poolsize += POOLSIZE_DEFAULT;
			pool = (TUPLE5*) realloc(pool, poolsize*sizeof(TUPLE5) );
			if (!pool) RUNTIMEERRORn("TUPLE5-pool : not anouth memory");

#ifdef TESTCODE
			memset(pool+last_ind, 0xff, sizeof(TUPLE5)*POOLSIZE_DEFAULT);
#endif
		}

		//memcpy(pool+last_ind,	{&i1,	sizeof(TUPLE4));
		TUPLE5* pool_last_ind = (TUPLE5*) pool+last_ind;
		pool_last_ind->i1 = i1;
		pool_last_ind->i2 = i2;
		pool_last_ind->i3 = i3;
		pool_last_ind->i4 = i4;
		pool_last_ind->i5 = i5;
		return;
	};

	void top(T1 &i1, T2 &i2, T3 &i3, T4 &i4, T5 &i5) {
		TUPLE5* pool_last_ind = pool + last_ind;
		i1 = pool_last_ind->i1;
		i2 = pool_last_ind->i2;
		i3 = pool_last_ind->i3;
		i4 = pool_last_ind->i4;
		i5 = pool_last_ind->i5;
	};


	inline T1 top1() {
		TUPLE5* pool_last_ind = pool + last_ind;
		return pool_last_ind->i1;
	};
	inline T2 top2() {
		TUPLE5* pool_last_ind = pool + last_ind;
		return pool_last_ind->i2;
	};
	inline T3 top3() {
		TUPLE5* pool_last_ind = pool + last_ind;
		return pool_last_ind->i3;
	};
	inline T4 top4() {
		TUPLE5* pool_last_ind = pool + last_ind;
		return pool_last_ind->i4;
	};
	inline T5 top5() {
		TUPLE5* pool_last_ind = pool + last_ind;
		return pool_last_ind->i5;
	};


	bool top_pop(T1 &i1, T2 &i2, T3 &i3, T4 &i4, T5 &i5) {
		if (!last_ind) {i1=0;i2=0;i3=0;i4=0;i5=0; return false;}
		top(i1,i2,i3,i4,i5);
#ifdef TESTCODE
		memset(pool+last_ind, 0xff, sizeof(TUPLE5));
#endif
		--last_ind;
		return true;
	};


	inline void pop() {
		if (!last_ind) unexpectedERRORn;
#ifdef TESTCODE
		memset(pool+last_ind, 0xff, sizeof(TUPLE5));
#endif
		--last_ind;
	};

	size_t getLength(){ return last_ind; }

	inline void setLength(size_t newlen){
#ifdef TESTCODE
		if (newlen > last_ind) AchtungERRORn;
#endif
		last_ind = newlen;
	};

	bool getByIndex(size_t index, T1 &i1, T2 &i2, T3 &i3, T4 &i4, T5 &i5){
		if (index<=0 || index>last_ind) {
			i1 = i2 = i3 = i4 = i5 = 0;
			return false;
		}
		TUPLE5* pool_index = pool + index;
		i1 = pool_index->i1;
		i2 = pool_index->i2;
		i3 = pool_index->i3;
		i4 = pool_index->i4;
		i5 = pool_index->i5;
		return true;
	}

	T1 get1ByIndex(size_t index){
		if (index<=0 || index>last_ind) {
			return 0;
		}
		TUPLE5* pool_index = pool + index;
		return pool_index->i1;
	}

	void clear() {
		last_ind = 0;
#ifdef TESTCODE
		memset(pool, 0xff, sizeof(TUPLE5)*poolsize);
#endif
		memset(pool, 0xff, sizeof(TUPLE5));
	};

};




#endif // REF_POOLTUPLES_INCLUDED
