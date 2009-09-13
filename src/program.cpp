// DiRefal - sentential program language
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

#include <sstream>

#include "program.h"
#include "system.h"


RefProgram::RefProgram(){
	this->regModule(new ModSystem());
}


void RefProgram::regModule(RefModuleBase *module){ // ����������� ������ � ��������� (����� ���������)
		if (module->getName() == EmptyUniString) 
			SYSTEMERROR("Empty module name");
		if (modules.find(module->getName()) != modules.end()) 
			SYSTEMERROR("Several loads of module [" << module->getName() << "] ");
		modules[module->getName()] = module;
};


//TODO: �������������� - ��� ��������
RefChain*  RefProgram::executeExpression (RefChain *chain, Session *sess){ // ��������� �������
	RefChain* result = new RefChain(chain->getLength());
	for (RefData **iter=(*chain)[0], **iend = (*chain)[-1]+1; iter < iend; ++iter){
		RefDataBracket *databr = ref_dynamic_cast<RefDataBracket>(*iter);
		if (databr){
			if (ref_dynamic_cast<RefStructBrackets>(databr)){
				*result += new RefStructBrackets( executeExpression(databr->chain, sess) );
			} else {
				#ifdef TESTCODE
				if (! ref_dynamic_cast<RefExecBrackets>(databr)) AchtungERROR;
				#endif
				//RefExecBrackets
				RefChain *arg = executeExpression(databr->chain, sess); // ��������� ���������� exec-������
				if (arg->isEmpty()) SYSTEMERROR("Unexpected empty argument for function call-brackets! " << databr->chain->debug());
				RefData **functionid = (*arg)[0];
				//TODO: ������� �������� �������������� ������� �� ����������� ��������
				RefWord *fname = ref_dynamic_cast<RefWord>(*functionid);
				RefFunctionBase *func = 0;
				if (!fname || !(func = this->findFunction(fname->getValue()))){
					RUNTIMEERROR((*functionid)->explode(), "Function not found in program");
				}
				RefChain *fresult;
				if (arg->getLength() > 1){
					fresult = func->eval((*arg)[1], (*arg)[-1], sess);
				} else {
					#ifdef TESTCODE
					if (arg->getLength() != 1) AchtungERROR;
					#endif
					fresult = func->eval(0, 0, sess);
				}
				delete arg;
				arg = executeExpression(fresult, sess); // ������� ��������! ��������
				delete fresult;
				*result += arg;
				delete arg;
			}
		} else {
			*result += *iter;
		}
	}
return result;
};

RefFunctionBase* RefProgram::findFunction(unistring id){
	std::map<unistring, RefModuleBase*>::iterator modit = modules.begin(), end = modules.end();
	RefModuleBase* mod = 0;

	RefFunctionBase* obj;
	while (modit != end){
		mod = &(*modit->second);
		
		if (obj = mod->getFunctionByName(id)){
			return obj;
		}
		++modit;
	};
	RUNTIMEERROR("FindFunction", "function " << id << " not found in program");
	return 0;
};


RefTemplateBase* RefProgram::findTemplate(unistring id){
	std::map<unistring, RefModuleBase*>::iterator modit = modules.begin(), end = modules.end();
	RefModuleBase* mod = 0;

	RefTemplateBase* obj;
	while (modit != end){
		mod = &(*modit->second);
		
		if (obj = mod->getTemplateByName(id)){
			return obj;
		}
		++modit;
	};
	RUNTIMEERROR("FindTemplate", "template" << id << " not found in program");
	return 0;
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
			if (result && ref_dynamic_cast<RefVariable>(result)) {
				return result;
			}
			if (result) {
				SYSTEMERROR("not variable loading like variable: " << result->debug());
			}
		} else {
			usermod = dynamic_cast<RefUserModule*>(mod);
			if (!usermod) SYSTEMERROR("unknown children of RefModuleBase");
			RefTemplateBase *tp = usermod->getTemplateByName(code);
			if (tp){
				RefTemplateBase *templ = ref_dynamic_cast<RefTemplateBase>(tp);
				if (templ){
					return new RefUserVar(code, value);
				}
			} 
		}
		++modit;
	}

	return 0;
};

void RefUserModule::initilizeAll(){
	std::map<unistring, RefFunctionBase*>::iterator funit = functions.begin(), fend = functions.end();
	std::map<unistring, RefTemplateBase*>::iterator tplit = templates.begin(), tend = templates.end();

	while (tplit != tend){
		tplit->second->initilizeAll();
		++tplit;
	}

	while (funit != fend){
		funit->second->initilizeAll();
		++funit;
	}

};

unistring RefUserModule::debug(){
	unistring result = "\n@UserModule " + getName() + "\n";

	std::map<unistring, RefFunctionBase*>::iterator funit = functions.begin(), fend = functions.end();
	std::map<unistring, RefTemplateBase*>::iterator tplit = templates.begin(), tend = templates.end();

	while (tplit != tend){
		result += tplit->second->debug() + "\n";
		++tplit;
	}

	while (funit != fend){
		result += funit->second->debug() + "\n";
		++funit;
	}
	return result;	
};
