#include "commands.h"

bool INC (DataCursor &l, DataCursor r){
	if (l==r) return false;
	++l;
	return true;
}

bool SLIDE(DataCursor &curr, const DataCursor end, DataCursor l, const DataCursor r){
	if (l==r) return true; // сравнение с пусто подцепочкой
	++l;
	//todo: обязательно оптимизировать! можно сравнивать целыми контейнерами,
	while (equal(curr, l) && curr!=end && l!=r) // все должно совпадать
	{
		++l;
		++curr;
	}
	return (l==r && equal(curr, r));
}
