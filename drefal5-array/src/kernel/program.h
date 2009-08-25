#ifndef PROGRAM_H
#define PROGRAM_H

#include <map>
#include <stack>

#include "config.h"
//#include "data.h"
#include "sentence.h"


class RefProgram;
class RefModuleBase;
class RefDllModule;
class RefUserModule;
class RefFunctionBase;
class RefBuildInFunction;
class RefUserFunction;
class RefTemplateBase;
class RefUserTemplate;



// ���������. �������� ������������ ������ � ������������ ��������� �������� �� ���
class RefProgram {
public:
	// TODO: ������� ������ ��� ��� ��������������.
	std::map<unistring, RefModuleBase*> modules;
	RefProgram(){};

	void regModule(RefModuleBase *module); // ����������� ������ � ��������� (����� ���������)
	RefData* createSymbolByCode(unistring code, unistring value);
	RefVariable* createVariableByTypename(unistring code, unistring value);
};


class RefModuleBase : public RefObject {
public:
    virtual unistring getName() =0;
	//virtual void setName(unistring s) {        name = s;    }

    RefModuleBase() {};
    virtual ~RefModuleBase() {};
    virtual RefObject* getObjectByName(unistring name, Session *s=0)=0;
    virtual void initilizeAll(Session *);

	// ������� RefData-������ �� rsl-���� code � �� ��������� value (��������� �������������)
	virtual RefData* createSymbolByCode(unistring code, unistring value);	// TODO: ����� �� ���� � ���������� ������� (� ���� "����" �������� ����������� ����� ������������� ������ ����? � �� ���������� ����������?)
};


class RefDllModule : public RefModuleBase {
    std::map<unistring, RefObject*> objects;
public:
	RefDllModule(){};
	virtual ~RefDllModule(){};
	RefObject* getObjectByName(unistring nm, Session *s=0){return objects[nm];};
    void setObjectByName(unistring name, RefObject* o){objects[name] = o; };
    unistring toString(){SYSTEMERROR("unrelised");};
};



// ���������������� ������ ����� ���� ������ ������ ��������� (������������ ������� � ������������ ����� ����)
class RefUserModule : public RefModuleBase {
protected:
	unistring name;
public:
    std::map<unistring, RefObject*> objects;
    unistring getName() {        return name;    };

    RefUserModule(unistring name, RefProgram* p);
    virtual ~RefUserModule() {};

    unistring explode(){SYSTEMERROR("unrelised");};
    RefObject* getObjectByName(unistring name, Session *s=0){SYSTEMERROR("unrelised");};

    std::stack<NeedInitilize *> initItems; // ���� ������ �� �������������������� ������ (������� ����������)
    void initilizeAll(Session *){SYSTEMERROR("unrelised");};
};





//  ������� - �� ������ ����� � ������������������. ������� ������� ������������ ����������� ������� 
class RefFunctionBase : public RefObject {
public:
    CLASS_CAST(UseRTTI);

	RefFunctionBase(){};
	virtual ~RefFunctionBase(){};
    virtual unistring getName() = 0;
    virtual RefChain *eval(RefData**, RefData**, Session*)=0;
};



class RefBuildInFunction : public RefFunctionBase {
public:
	RefBuildInFunction() : RefFunctionBase() {};
    virtual ~RefBuildInFunction() {};
    RefChain *eval(RefData**, RefData**, Session*){ SYSTEMERROR("not realised!"); };
};



class RefUserFunction : public RefFunctionBase {
    unistring name;
public:
    std::list<RefSentence *> body; // �����������

    /// ��������� - ����� ������� ��   // �������� � ��������� ��������� �������(�����. � �����)
	RefChain *eval(RefData **, RefData **, Session *s){SYSTEMERROR("urealised");}; // - ���������� � session
    unistring getName()  { return name; };
	unistring explode(){SYSTEMERROR("unrelised");};
    RefUserFunction(unistring nname) {        name = nname;    }
    virtual ~RefUserFunction() {};
};



class RefTemplateBase : public RefModuleBase {
public:
    BASE_CLASS_CAST(RefTemplateBase);

    RefTemplateBase (unistring name){SYSTEMERROR("unrelised");};
    virtual ~RefTemplateBase () {};
	RefTemplateBase () {SYSTEMERROR("unrelised");};
};



// ���������������� ������
class RefUserTemplate : public RefTemplateBase {
    RefChain *leftPart;
	unistring name;
public:
    CLASS_OBJECT_CAST(RefUserTemplate);

	unistring getName(){return name;};
	RefUserTemplate(unistring nam) : RefTemplateBase() {this->name = nam;};
    inline RefChain* getLeftPart() {        return leftPart;    };
    void setLeftPart(RefChain *){SYSTEMERROR("unrelised");};
    RefObject* getObjectByName(unistring name, Session *s) {        SYSTEMERROR("--== ZAGLUSHKA ==--");    };
    unistring explode() {        return (getName()+"$RefUserTemplate_::=_"+(leftPart?leftPart->toString():"$void"));    }
    virtual ~RefUserTemplate() {};
    RefUserTemplate(){SYSTEMERROR("unrelised");};
};



#endif
