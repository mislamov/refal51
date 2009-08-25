#include "program.h"
#include "../modules/system.h"

//////   ���������. �������� ������������ ������ � ������������ ��������� �������� �� ���
//////   class RefProgram

void RefProgram::regModule(RefModuleBase *module){ // ����������� ������ � ��������� (����� ���������)
		if (module->getName() == EmptyUniString) 
			SYSTEMERROR("Empty module name");
		if (modules.find(module->getName()) != modules.end()) 
			SYSTEMERROR("Several loads of module [" << module->getName() << "] ");
		modules[module->getName()] = module;
};

RefData* RefProgram::createSymbolByCode(unistring code, unistring value){
	std::map<unistring, RefModuleBase*>::iterator modit = modules.begin(), end = modules.end();
	RefModuleBase* mod = 0;
	RefDllModule* dllmod = 0;
	RefData* result = 0;

	while (modit != end){
		//TODO: ����� �������� ������� ����������� �������
		dllmod = dynamic_cast<RefDllModule*>(&(*modit->second));
		if (dllmod && (result=dllmod->constructSymbol(code, value))){
			return result;
		} // �� ������ ������ � �� dll-������� �� ����� ������������ ��������� �������� �� ����
		++modit;
	}

	COMPILETIMEERROR("Loader", "Definition for " << code << " not found in loaded modules");
};


// ������� ���������� � ������ �� ����. ���� � ������������ ������� (����� ���������� ���������� � ���������������� ��������)
RefData* RefProgram::createVariableByTypename(unistring code, unistring value){
	std::map<unistring, RefModuleBase*>::iterator modit = modules.begin(), end = modules.end();
	RefModuleBase* mod = 0;
	RefDllModule  *dllmod = 0;
	RefUserModule *usermod= 0;
	RefData* result = 0;

	while (modit != end){
		//TODO: ������� ����� �������� ������� ����������� �������
		mod = &(*modit->second);
		dllmod = dynamic_cast<RefDllModule*>(mod);
		if (dllmod){
			result=dllmod->constructVariable(code, value);
			if (result && ref_dynamic_cast<RefVariableBase>(result)) {
				return result;
			}
			if (result) {
				SYSTEMERROR("not variable loading like variable: " << result->toString());
			}
		} else {
			usermod = dynamic_cast<RefUserModule*>(mod);
			if (!usermod) SYSTEMERROR("unknown children of RefModuleBase");
			RefObject *obj = usermod->getObjectByName(code);
			if (obj){
				RefTemplateBase *templ = ref_dynamic_cast<RefTemplateBase>(obj);
				if (templ){
					return new RefUserVarNotInit(templ, code, value);
				}
			} 
		}
		++modit;
	}

	return 0;
};




////   class RefModuleBase

void RefModuleBase::initilizeAll(Session *) {        LOG("not realized!");    };
	


////  class RefUserModule

RefUserModule::RefUserModule(unistring name, RefProgram* p) : RefModuleBase() {
		this->name = name;
        p->regModule(this);
};
