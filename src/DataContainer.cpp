#include "DataContainer.h"
#include "DataChain.h"
#include "ExecContext.h"

#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <cstdio>

DataContainer::DataContainer(const DataContainerType ttype, const DataContainerValue vvalue, const size_t len)
{
    //ctor
    this->type = ttype;
    this->value = vvalue;
    this->leng = len;

    this->next = this->prev = 0;
	// todo: ������� �� ������������ � �� �����, � ������� �������� ������ (������ ��������)
	if (ttype==struct_bracket || ttype==exec_bracket){
		ref_assert(vvalue.bracket_data.chain);
		vvalue.bracket_data.chain->links++;
	}
}

DataContainer::~DataContainer()
{
	// todo: ������� �� ������������ � �� �����, � ������� ��������� ������ (������ ��������)
	if (type==struct_bracket || type==exec_bracket){
		ref_assert(value.bracket_data.chain);
		value.bracket_data.chain->links--;
		if (value.bracket_data.chain->links == 0){
			value.bracket_data.chain->free();
		}
	}
}



DataContainer* newRefWord(unistring wr) {
    DataContainerValue vv;
    size_t lnt = wr.length()+1;

    char *vv_word_value = new char[lnt];
    vv_word_value[lnt] = 0;
    strncpy(vv_word_value, wr.c_str(), lnt);

    vv.word.value = vv_word_value;
    vv.word.leng  = lnt;

    DataContainer* resut = new DataContainer(word, vv);
    resut->prev = resut->next = 0;
    return resut;
};

size_t min(size_t a, size_t b){ return a>b?b:a; }

DataContainer* newRefExecBrackets(rf_function fn, DataChain *chain, unistring fname){
    DataContainerValue vv;
    vv.bracket_data.fn = fn;
	strncpy(vv.bracket_data.fname, fname.c_str(), min(fname.length(), 255));
	vv.bracket_data.fname[fname.length()] = 0;
    vv.bracket_data.chain  = chain;

    DataContainer* resut = new DataContainer(exec_bracket, vv);
    resut->prev = resut->next = 0;
    return resut;
};

DataContainer* newRefInteger(infint i){
    DataContainerValue vv;
    vv.num = i;

    DataContainer* resut = new DataContainer(integer, vv);
    resut->prev = resut->next = 0;
    return resut;
};

DataContainer* newRefStructBrackets(DataChain *chain){
    DataContainerValue vv;
    vv.bracket_data.fn = 0;
    vv.bracket_data.chain  = chain;

    DataContainer* resut = new DataContainer(struct_bracket, vv);
    resut->prev = resut->next = 0;
    return resut;
};

DataContainer* newRefText(unistring str){
	if (str=="") return 0;

    DataContainerValue vv;

	unichar *dt = new unichar[str.length()];
	memcpy(dt, str.c_str(), str.length()*sizeof(unichar));
	vv.text = dt;

	DataContainer* resut = new DataContainer(text, vv, str.length());
    resut->prev = resut->next = 0;
    return resut;

};

DataContainer* DataContainer::copy(ExecContext *context){    
	return new DataContainer(type, value, leng);
};

bool equal(DataChain *ch1, DataChain *ch2){
	if (ch1==ch2) return true;
	DataCursor a = ch1->at_before_first();
	DataCursor b = ch2->at_before_first();
	DataCursor aend = ch1->at_after_last();
	DataCursor bend = ch2->at_after_last();

	while (equal(a,b) && a!=aend && b!=bend){
		++a;
		++b;
	}
	return a==aend && b==bend;
};


bool equal(DataCursor cur1, DataCursor cur2){
	DataContainer *cont1 = cur1.container;
	DataContainer *cont2 = cur2.container;

	if (cont1->type != cont2->type) return false;

	switch (cont1->type){
	case struct_bracket:
				  return equal(cont1->value.bracket_data.chain, cont2->value.bracket_data.chain);
	case byte:    return cont1->value.byte==cont2->value.byte;
	case integer: return cont1->value.num==cont2->value.num;
	case real:	  return cont1->value.real==cont2->value.real;
	case word:	  return (cont1->value.word.leng==cont2->value.word.leng) && memcmp(cont1->value.word.value, cont2->value.word.value, cont1->value.word.leng*sizeof(unichar));
	case text:	  return (cont1->value.text)[cur1.index] == (cont2->value.text)[cur2.index];
	case bytes:	  return ((char*) cont1->value.text)[cur1.index] == ((char*) cont2->value.text)[cur2.index];
	default:	  SYSTEMERRORn("UNEXPECTED");
	}
};
