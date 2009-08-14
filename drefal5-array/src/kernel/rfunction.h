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

#ifndef REFFUNCTION_H_INCLUDED
#define REFFUNCTION_H_INCLUDED

#include <iostream>
#include <sstream>
#include <list>
#include <stack>

#include "data.h"

class RefSentence : public RefObject {
public:

    RefChain *leftPart;
    RefChain *rightPart;
    virtual unistring toString();

    RefSentence();
    RefSentence(RefChain* l, RefChain *r);
    virtual ~RefSentence() {};
};


class RefFunctionBase : public RefObject {
    unistring name;
public:
    CLASS_CAST(UseRTTI);

    RefFunctionBase();
    virtual ~RefFunctionBase();
    virtual unistring getName() = 0;
    //virtual RefChain *execute(RefData*&, RefData*&, Session*)=0;
};

class RefUserFunction : public RefFunctionBase {
    unistring name;
public:

    std::list<RefSentence *> body; // �����������

    /// ��������� - ����� ������� ��   // �������� � ��������� ��������� �������(�����. � �����)
    //virtual RefChain *execute(RefData *argfirst, RefData *argsecond, Session *s); - ���������� � session
    virtual unistring getName()  {
        return name;
    };
    virtual unistring toString();
    RefUserFunction(unistring nname) {
        name = nname;
    }
    virtual ~RefUserFunction() {};
};


class RefModuleBase : public RefObject {
protected:
    unistring name;
public:
    virtual unistring getName() {
        return name;
    }
    virtual void setName(unistring s) {
        name = s;
    }

public:
    RefModuleBase(unistring nname = EmptyUniString) {
        setName(nname);
    };
    virtual ~RefModuleBase() {};
    virtual RefObject* getObjectByName(unistring name, Session *s=0)=0;
    virtual void initilizeAll(Session *) {
        LOG("not realized!");
    };
};



// ��������� ��� ���������, ������� ���������� ������������������� ����� �������� ������
class NeedInitilize {
public:
    virtual bool initize(Session *) = 0;
};

// ����� - ����������������������� ���������� �������� ����. ����� ������������� ���������� �� ���� {RefTemplateBridgeVar RefTemplateBridgeVar}
class RefUserVarNotInit : public RefVariable, public NeedInitilize {
    unistring type;
public:
    CLASS_OBJECT_CAST(RefUserVarNotInit);
    bool initize(Session *); // ���������� �� ����
    void setType(unistring ttype) {
        type = ttype;
    };
    unistring getType() {
        return type;
    };

    unistring toString() {
        return "@RefUserVarNotInit.toString()";
    }
    bool operator ==(RefData &rd) {
        return false;
    };
    TResult init(RefData *&tpl, Session*, RefData *&, RefData *&);
    TResult back(RefData *&tpl, Session*, RefData *&, RefData *&);
    RefData*  Copy(RefData* where=0) {
        return 0;
    };

    ~RefUserVarNotInit() {
    };
};


class RefUserModule : public RefModuleBase {
public:
    std::map<unistring, RefObject*> objects;
    unistring getName() {
        return name;
    };

    RefUserModule() : RefModuleBase() {};
    virtual ~RefUserModule() {};

    unistring toString();
    RefObject* getObjectByName(unistring name, Session *s=0);

    std::stack<NeedInitilize *> initItems; // ���� ������ �� �������������������� ������ (������� ����������)
    void initilizeAll(Session *);
    /*  void print_inf(){
            std::cout << this->toString();
        }
    */
};


class RefDllModule : public RefModuleBase {
    std::map<unistring, RefObject*> objects;
public:
    RefDllModule();
    virtual ~RefDllModule();
    RefObject* getObjectByName(unistring nm, Session *s=0);
    void setObjectByName(unistring name, RefObject* o);
    unistring toString();
};



class RefBuildInFunction : public RefFunctionBase {
public:
    RefBuildInFunction(unistring name, RefDllModule *m);
    virtual ~RefBuildInFunction() {};
    RefChain *execute(RefData*, RefData*, Session*){ SYSTEMERROR("not realised!"); };

};




class RefConditionBase : public RefData {
public:
    BASE_CLASS_CAST(RefConditionBase);

    RefConditionBase() : RefData() {};
    ~RefConditionBase() {};
    void forceback(Session *) {
        SYSTEMERROR("RefConditionBase.forceback NOT DEFINE");
    };

};

class RefCondition : public RefConditionBase {
    RefChain *rightPart;
    RefChain *leftPart;
    bool isReverse; // ������� ������� $NOT
public:
    CLASS_OBJECT_CAST(RefCondition);
    RefObject *own;  // RefCondition or RefFunctionBase

    void setRightPart(RefChain *rp) {
        rightPart = rp;
    }
    void setLeftPart(RefChain *lp) {
        leftPart  = lp;
    }

    virtual bool operator ==(RefData &rd) {
        return false;
    };
    virtual TResult  init(RefData *&tpl, Session* , RefData *&, RefData *&); //
    virtual TResult  back(RefData *&tpl, Session* , RefData *&, RefData *&); //

    RefCondition(bool withnot) : RefConditionBase() {
        isReverse = withnot;
        rightPart = leftPart = 0;
    }

    virtual ~RefCondition() {};
    unistring toString() {
        std::ostringstream s;
        s << " @Condition/" << (isReverse?"$not$":"") <<  (ref_dynamic_cast<RefUserFunction>(own)?"F":"T") << "$" << rightPart->toString() << "::" << leftPart->toString() << ' ';
        return s.str();
    }
    RefData* Copy(RefData *where=0) {
        SYSTEMERROR("unexpected try to Copy REF-condition");
        return 0;
    };



};

/* ��������� �������. ��� ����� �������� � ������ ����� ���������� */
class RefMatchingCutter : public RefData {
public:
    CLASS_OBJECT_CAST(RefMatchingCutter);

    RefMatchingCutter() : RefData() {
    }
    virtual TResult  init(RefData *&tpl, Session* , RefData *&, RefData *&);
    virtual TResult  back(RefData *&tpl, Session* s, RefData *&, RefData *&);

    virtual unistring toString() {
        return " $CUTTER$ ";
    }

    virtual bool operator ==(RefData &rd) {
        SYSTEMERROR("alarm");
    };
    virtual void    forceback(RefData *&a, Session* s) {};


};

// ����������� ����� ��� ���� ������� ��������
class RefTemplateBase : public RefModuleBase {
public:
    BASE_CLASS_CAST(RefTemplateBase);

    RefTemplateBase (unistring name);
    virtual ~RefTemplateBase () {};
};

// ���������������� ������
class RefUserTemplate : public RefTemplateBase {
    RefChain *leftPart;
public:
    CLASS_OBJECT_CAST(RefUserTemplate);
    inline unistring getName() {
        return name;
    };
    RefUserTemplate(unistring name, RefChain *lp=0);
    inline RefChain* getLeftPart() {
        return leftPart;
    };
    void setLeftPart(RefChain *);
    RefObject* getObjectByName(unistring name, Session *s) {
        SYSTEMERROR("--== ZAGLUSHKA ==--");
    };
    unistring toString() {
        return (getName()+"$RefUserTemplate_::=_"+(leftPart?leftPart->toString():"$void"));
    }
    virtual ~RefUserTemplate() {};
};

class RefTemplateBridgeTmpl;

/**
// ����� ����� ���.������ � ������� ��������. �� ������� ����� �����
class RefTemplateBridgeVar : public RefBracketBase  {
    unistring name;
public:
    CLASS_OBJECT_CAST(RefTemplateBridgeVar);

    virtual bool IRefVarStacked() {
        return true;
    };

    RefTemplateBridgeTmpl* bridge; // ��������� �� ����������� ���� ���� �������. ��������� �� ������������� - ��� ������������� ������������ ������

RefTemplateBridgeVar () {
        bridge=0;
        name="NOT SET";
    };
    unistring toString() {
        if (is_opened) return ("[{]." + getName());
        else return  name+".[}]";
    };

    TResult init(RefData *&tpl, Session* s, RefData *&, RefData *&);
    TResult back(RefData *&tpl, Session* s, RefData *&, RefData *&);

    unistring getName() {
        if (is_opened)
            return ((RefTemplateBridgeVar*) other)->name;
        return name;
    }
    void setName(unistring nname) {
        name = nname;
    }
//
//    RefData* Copy(RefBracketBase *bb, RefData *rp=0) {
//        RefTemplateBridgeVar *b = (RefTemplateBridgeVar *)(bb);
//        #ifdef TESTCODE
//        b = ref_dynamic_cast<RefTemplateBridgeVar >(bb);
//        if (!b) SYSTEMERROR("not RefTemplateBridgeVar !");
//        #endif
//        RefTemplateBridgeVar *cp = new RefTemplateBridgeVar(b, rp);
//        cp->setName(this->getName());
//        RUNTIMEERROR("RefTemplateBridgeVar::Copy", "zaglushka!");
//        /// ??? ����� �� ���������� ���� ������������� � �������� ����������
//        return cp;
//    };
//
//    RefData* Copy(RefData *rp=0) {
//        RefTemplateBridgeVar *cp = new RefTemplateBridgeVar(rp);
//        cp->setName(this->getName());
//        RUNTIMEERROR("RefTemplateBridgeVar::Copy", "zaglushka!");
//        /// ??? ����� �� ���������� ���� ������������� � �������� ����������
//        return cp;
//    };

    virtual void    forceback(RefData *&a, Session* s);

};

// ����� ����� ���.������ � ������� ��������. �� ������� �������� �������
class RefTemplateBridgeTmpl : public RefBracketBase {
public:
    CLASS_OBJECT_CAST(RefTemplateBridgeTmpl);

    virtual bool IRefVarStacked() {
        return true;
    };

RefTemplateBridgeTmpl () : RefBracketBase() { };
RefTemplateBridgeTmpl (RefTemplateBridgeTmpl *nd) : RefBracketBase(nd) { };
    unistring toString() {
        if (is_opened) return "{[}";
        else return "{]}";
    };

    TResult init(RefData *&tpl, Session* s, RefData *&, RefData *&);
    TResult back(RefData *&tpl, Session* s, RefData *&, RefData *&);

    RefData* Copy(RefBracketBase *b, RefData *rp=0) {
        SYSTEMERROR("������ ����� �������� ������� �� �������������! �������� ������");
    };
    RefData* Copy(RefData *rp=0) {
        SYSTEMERROR("������ ����� �������� ������� �� �������������! �������� ������");
    };

    unistring getName() {
        SYSTEMERROR("unexpected call");
    };
    virtual void    forceback(Session* s) {};

};
*/

#endif // FUNCTION_H_INCLUDED