#ifndef datacursor_h
#define datacursor_h

#include "DataContainerType.h"

#include <stddef.h>

class DataContainer;
class DataChain;

// ��������� �� ������� �������
class DataCursor {
public:
    DataContainer *container; // ������� ���������� � ���� ����������
    size_t index; // index=? ����� container �������; index = ����������� ������ ��������, ����� container ���������. ��������� �� 0
    DataCursor& operator++ ();
    DataCursor& operator-- ();
    DataCursor operator-(const int&);
    DataCursor operator+(const int&);
    bool operator!=(const DataCursor);
    bool operator==(const DataCursor);
    bool operator! ();
	void next_container(); // ����������� ������� ������ �� ������ ���������� ����������

    DataCursor (DataContainer* c, size_t idx = 0);
    DataCursor (int i=0);

	void replaceBy(DataChain *chain);

	DataContainerType getType();

	//bool isFirstInComplexData();
	//bool isLastInComplexData();
};

inline bool DataCursor::operator==(const DataCursor cur){
	return container==cur.container && index==cur.index;
}

inline bool DataCursor::operator!=(const DataCursor cur){
	return container!=cur.container || index!=cur.index;
}


#endif
