// D-Refal - sentential program language
// Copyright (C) 2008-2009 Islamov Marat Shamilevich
// islamov.marat@gmail.com
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#ifndef REF_DATA_H_INCLUDED
#define REF_DATA_H_INCLUDED

#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <string>
#include <map>

#include "config.h"

class RefExecBracket;
class RefChain;

// ����������� ����� - ������ ���� ������ �����
class RefData : public RefObject {
public:

    virtual bool operator >(RefData &rd)  {
        RUNTIMEERROR("operator >", "Not comparable");
    };

    virtual bool operator ==(RefData &rd) = 0;//{ return false; };
    virtual TResult init(RefData **&activeTemplate, Session* s, RefData **&currentRight, RefData **&currentLeft)=0; //  --> operator==() => [return GO] else [return BACK]
    virtual TResult back(RefData **&activeTemplate, Session* s, RefData **&currentRight, RefData **&currentLeft)=0;

    virtual void    forceback(RefData *&activeTemplate, Session* s) {
        SYSTEMERROR("RefData.forceback NOT DEFINE for "
                    << toString());
    }; // �������������� �����. ����� ������� �� ������ ���� ���������

};


static RefData* nullDataPoint = 0;


inline RefData** MOVE_TO_next_term(RefData** &p) {
    return ++p;
}
inline RefData** MOVE_TO_pred_term(RefData** &p) {
    return --p;
}
inline RefData** MOVE_TO_next_template(RefData** &p) {
    return ++p;
}
inline RefData** MOVE_TO_pred_template(RefData** &p) {
    return --p;
}


class RefNULL : public RefData {
public:
    RefNULL();
    virtual unistring toString() {
        #ifdef DEBUG
        return " . ";
        #endif
        return "";
    };

    virtual bool operator==(RefData&);
    virtual TResult init(RefData **&, Session* , RefData **&, RefData **&);
    virtual TResult back(RefData **&, Session* , RefData **&, RefData **&);
    void forceback(RefData *&, Session *) {};
};



// ����������� ����� - ������ ���� �������� ���������� ����� (������� � ���������)
class RefVariableBase :  public RefData {
public:
    BASE_CLASS_CAST(RefVariableBase);
    virtual unistring getName() = 0;
    virtual bool IRefVarStacked() {
        return true;
    };
};


class RefVariable : public RefVariableBase { // ������� ����������
protected:
    unistring name;
public:
    BASE_CLASS_CAST(RefVariable);
    RefVariable(unistring name = EmptyUniString);
    unistring getName() {
        return name;
    }
    void setName(unistring s) {
        name = s;
    }

    virtual void    forceback(RefData *&, Session* s) { }; // �������������� �����. ����� ������� �� ������ ���� �������
};


// ������ �� ���������� (�������� ����������)
class RefLinkToVariable : public RefData {
public:
    RefVariable *lnkData; // ������ ������ �� ����������. (������ ��� ������� �������� � ������� ����������. ��������� ������� \x0. ��� ������ �������� �������� �� ����������)
public:
    CLASS_OBJECT_CAST(RefLinkToVariable);
    RefLinkToVariable(unistring name);
    unistring toString();

    bool operator==(RefData&);
    virtual TResult init(RefData **&, Session* , RefData **&, RefData **&);
    virtual TResult back(RefData **&, Session* , RefData **&, RefData **&);
    virtual void forceback(RefData *&, Session *) {};
};


// ������ - ��� ���� ������ � ������� �� ����� ����
class RefBracketBase;



class RefChain : public RefObject  {
public:
    size_t leng;

    RefData** first;
    RefData** after;

	inline RefData** get_first(){ return first; };
    inline RefData** get_last (){
		//return (leng ? first+leng-1 : 0);
		return first+leng-1;
	};

    RefChain();
    RefChain(RefData **a11, RefData **a12, RefData **a21, RefData **a22, RefData **a31, RefData **a32);
    virtual ~RefChain() {
        free(first);
    };

    // TODO: ������� �������� ����������
    RefChain& operator+=(RefChain &ch);   // � ������ �������� ���������������� ����� �������!
    RefChain& operator+=(RefChain *ch);  // � ������ �������� ���������������� ����� �������!
	RefChain& operator+=(RefBracketBase  *br);
    RefChain& operator+=(RefData  *ch);  // ������� ����������� ��������!!!
    RefChain* Copy(Session *s =0);

    unistring toString();
    unistring explode(); // ����� ����� ��� ��������������
};

RefData** beginOfTerm(RefData** r);
RefData** endOfTerm  (RefData** r);

class RefBracketBase : public RefData {
public:
    BASE_CLASS_CAST(RefBracketBase);
	size_t opened_ind;
	size_t closed_ind;
	RefChain *chain;

	RefBracketBase (){opened_ind = closed_ind = SIZE_MAX; chain=0; }
	bool isOpen(RefData** p){
		#ifdef TESTCODE
		if (closed_ind-opened_ind <=0 || !chain || ((chain->first+opened_ind)!= p && (chain->first+closed_ind)!=p))SYSTEMERROR("brack-error");
		#endif

		return ((chain->first+opened_ind)==p);
	};
	RefBracketBase **getOther(RefData** p){
		#ifdef TESTCODE
		if (closed_ind-opened_ind <=0 || !chain || (chain->first+opened_ind!=p && chain->first+closed_ind!=p))SYSTEMERROR("brack-error");
		if (! ref_dynamic_cast<RefBracketBase>(* chain->first+opened_ind)) SYSTEMERROR("brack-error");
		if (! ref_dynamic_cast<RefBracketBase>(* chain->first+closed_ind)) SYSTEMERROR("brack-error");
		#endif
		return (RefBracketBase**)(chain->first+opened_ind==p ? chain->first+closed_ind : chain->first+opened_ind);
	};

};

class RefExecBracket : public RefBracketBase {
public:
    CLASS_OBJECT_CAST(RefExecBracket);

	bool       operator ==(RefData &rd);
    TResult    init(RefData *&tpl,  Session* s, RefData *&l, RefData *&r );
    TResult    back(RefData *&tpl,  Session* s, RefData *&l, RefData *&r );
    unistring toString() {
        std::ostringstream s;
		s << "<br>" ;//<< "." << (long)this << "other:" << (long)other;
        return s.str();
    };

};


class RefData_DOT : public RefBracketBase {
public:
	CLASS_OBJECT_CAST(RefData_DOT);
	unistring explode(){ return "[br]"; };
    bool operator ==(RefData &rd) { return false; };
    TResult init(RefData **&activeTemplate, Session* s, RefData **&currentRight, RefData **&currentLeft);
    TResult back(RefData **&activeTemplate, Session* s, RefData **&currentRight, RefData **&currentLeft);

};




class TVarBody : public RefObject {
public:
    RefData** first;
    RefData** second;
};

#endif // REF_KERNEL_H_INCLUDED

