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



// ����������� ����� - ������ ���� ������ �����
class RefData : public RefObject {
public:
    virtual bool IRefVarStacked(){ return false; };

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


inline RefData** MOVE_TO_next_term(RefData** &p) { return ++p; }
inline RefData** MOVE_TO_pred_term(RefData** &p) { return --p; }
inline RefData** MOVE_TO_next_template(RefData** &p) { return ++p; }
inline RefData** MOVE_TO_pred_template(RefData** &p) { return --p; }


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
    virtual bool IRefVarStacked(){ return true; };
};


class RefVariable : public RefVariableBase { // ������� ����������
protected:
    unistring name;
public:
    BASE_CLASS_CAST(RefVariable);
    RefVariable(unistring name = EmptyUniString);
	unistring getName() { return name; }
    void setName(unistring s) { name = s; }

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




class RefBracketBase : public RefData {
public:
    bool is_opened; // true = begin- ; false = end-

    RefBracketBase*  other; // ������ ������ � ����� ������� ����� ���� � �� �� ����.
    BASE_CLASS_CAST(RefBracketBase);

    RefBracketBase(); // �����������
    RefBracketBase(RefBracketBase *dr); // �����������

    virtual bool       operator ==(RefData &rd);
};


class RefChain : public RefObject  {
    size_t leng;
    #ifdef TESTCODE
    bool   theProtect;
    #endif

public:
    RefData** first;
    RefData** after;

    void noProtectOnly(){
        #ifdef TESTCODE
        if (! theProtect) return;
        std::cerr << "\nPROTECT!\n" << std::flush;
        abort();
        #endif
    };

    //void clear(){ noProtectOnly(); free(first); }; // ����������� ����� ��� ������ first � second ������������

    RefChain(RefData **l=0, RefData **r=0);
    virtual ~RefChain() { free(first); };

    // TODO: ������� �������� ����������
    RefChain& operator+=(RefChain &ch); // � ������ �������� ���������������� ����� �������!
    RefChain& operator+=(RefData *ch);  // ������� ����������� ��������!!!
    RefChain* Copy(Session *s =0);

    unistring toString();
    unistring explode(); // ����� ����� ��� ��������������
};

RefData** beginOfTerm(RefData** r);
RefData** endOfTerm  (RefData** r);

class TVarBody : public RefObject {
    public:
        RefData** first;
        RefData** second;
};

#endif // REF_KERNEL_H_INCLUDED

