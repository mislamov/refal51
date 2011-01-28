#ifndef commands_h
#define commands_h

#include "direfal.h"

bool INC (DataCursor &l, DataCursor r){
	if (l==r) return false;
	++l;
	return true;
}

bool SLIDE(DataCursor &curr, const DataCursor end, DataCursor l, const DataCursor r){
	if (l==r) return true; // ��������� � ����� �����������
	do {
		//todo: ����������� ��������������! ����� ���������� ������ ������������,
		++curr;
		++l;
	} while (equal(curr, l) && curr!=end && l!=r); // ��� ������ ���������
	return (l==r && equal(curr, r));
}

#endif
