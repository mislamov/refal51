#include "commands.h"

bool INC (DataCursor &l, DataCursor r){
	if (l==r) return false;
	++l;
	return true;
}

bool SLIDE(DataCursor &curr, const DataCursor end, DataCursor l, const DataCursor r){
	if (l==r) return true; // ��������� � ����� �����������

	//todo: ����������� ��������������! ����� ���������� ������ ������������,
	do {
		++l;
		++curr;
	} while (equal(curr, l) && curr!=end && l!=r); // ��� ������ ���������

	return (l==r && equal(curr, r));
}

bool SLIDE2(DataCursor &curr, const DataCursor end, DataCursor l, const DataCursor r){
	if (l==r) return true; // ��������� � ����� �����������
	++l;
	//todo: ����������� ��������������! ����� ���������� ������ ������������,
	while (equal(curr, l) && curr!=end && l!=r) // ��� ������ ���������
	{
		++l;
		++curr;
	}
	return (l==r && equal(curr, r));
}
