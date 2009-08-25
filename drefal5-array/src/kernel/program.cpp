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
		SYSTEMERROR("zaglushka");
};

RefVariable* RefProgram::createVariableByTypename(unistring code, unistring value){
		SYSTEMERROR("zaglushka");
};




////   class RefModuleBase

void RefModuleBase::initilizeAll(Session *) {        LOG("not realized!");    };
	
// ������� RefData-������ �� rsl-���� code � �� ��������� value (��������� �������������)
RefData* RefModuleBase::createSymbolByCode(unistring code, unistring value){
		// TODO: ����� �� ���� � ���������� ������� (� ���� "����" �������� ����������� ����� ������������� ������ ����? � �� ���������� ����������?)
		extern mSYSTEM msystem;
		return msystem.dataConstructors[code](value);
};


////  class RefUserModule

RefUserModule::RefUserModule(unistring name, RefProgram* p) : RefModuleBase() {
		this->name = name;
        p->regModule(this);
};
