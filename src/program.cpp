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

#include <sstream>

#include "program.h"
#include "system.h"


RefProgram::RefProgram(int argc, char **argv){
	step = 0;
	argchain = 0;
	this->regModule(new ModSystem());
	this->argv = argv;
	this->argc = argc;
}


RefProgram::~RefProgram(){
	std::list<std::pair <unistring, RefModuleBase*> >::iterator
		iter = modules.begin(),
		iend = modules.end();
	while(iter != iend){
		//std::cout << "\n~~~ " << iter->first;

		delete iter->second;
		iter->second = 0;
		++iter;
	}

}

MODULE_LIST::iterator MODULE_LIST::find(unistring key){
		MODULE_LIST::iterator iter = begin();
		while (iter != end() && iter->first != key){
			++iter;
		}
		return iter;
}


void RefProgram::regModule(RefModuleBase *module){ // ����������� ������ � ��������� (����� ���������)
	if (module->getName() == EmptyUniString)
		SYSTEMERRORn("Empty module name");
	if (modules.find(module->getName()) != modules.end())
		SYSTEMERRORn("Several loads of module [" << module->getName() << "] ");
	modules.push_front( std::pair<unistring, RefModuleBase*>(module->getName(), module) );
	//modules[module->getName()] = module;
};


// � ���������.
RefChain*  RefProgram::executeExpression2 (RefChain *chain, Session *sess){ // ��������� �������
	if (!chain || chain->isEmpty()) {
		return chain; // new RefChain();
	}

#ifdef DEBUG
	std::cout << "executeExpression: " << chain->debug() << "\n";
#endif

	RefData* gc_save_point = sess->gc_last;

	RefChain* result = new RefChain(sess, chain->getLength());

	RefData
		**iter=chain->at_first(),       // ���� ������
		**iend = chain->at_afterlast(); // ����� �������� ����� ���� ������

	for (; iter < iend; ++iter){

		RefDataBracket *databr = (*iter)->isDataBracket();

		if (databr){
			if (ref_dynamic_cast<RefStructBrackets>(databr)){
				*result += new RefStructBrackets( sess, executeExpression(databr->chain, sess) );
			} else {
#ifdef TESTCODE
				if (! ref_dynamic_cast<RefExecBrackets>(databr)) AchtungERRORs(sess);
#endif

				//RefExecBrackets
				RefChain *arg = executeExpression(databr->chain, sess); // ��������� ���������� exec-������
				if (arg->isEmpty()) SYSTEMERRORs(sess, "Unexpected empty argument for function call-brackets! " << databr->chain->debug());
				RefData **functionid = arg->at_first();
				//TODO: ������� �������� �������������� ������� �� ����������� ��������
				RefWordBase *fname = ref_dynamic_cast<RefWordBase>(*functionid);
				RefFunctionBase *func = 0;
				if (!fname || !(func = this->findFunction(fname->getValue()))){
					RUNTIMEERRORs(sess, "Function not found in program");
				}
				RefChain *fresult;
				if (arg->getLength() > 1){
					fresult = func->exec(arg->at(1), arg->at_afterlast(), arg, sess);
				} else {
#ifdef TESTCODE
					if (arg->getLength() != 1) AchtungERRORs(sess);
#endif
					fresult = func->exec(0, 0, arg, sess);
				}

				//arg = executeExpression(fresult, sess); // ������� ��������! ��������
				//*result += arg;  // arg ��������� ���������� +=
				//continue;



				if (! fresult->isEmpty()){

					if (++iter < iend){ // ���� ��� ���� �������������� �����
						*fresult += new RefChain(sess, chain, iter, iend-1);  // ��������� �����
					}
					iter = fresult->at_first();
					--iter;
					iend = fresult->at_afterlast();
					chain = fresult;
					//std :: cout << "\n\n\n" << fresult->debug() << "\n";
					(*(iend-1))->debug();
				} else {
					// ���� ��������� ��� ����, �� ��������� ������
				}
			}
		} else {
			RefSegment* seg = ref_dynamic_cast<RefSegment>(*iter);
			RefChain *chch = 0;
			if (seg){
				RefChain *tmpch = new RefChain(sess, seg->own, seg->own->at(seg->from), seg->own->at(seg->to));
				chch = executeExpression(tmpch, sess);
				*result += chch;
			} else {
				*result += *iter;
			}
		}
	}

	//sess->gc_prepare(gc_save_point); - ������� �� �������� ������ � ���� (�������� ��� �������� � ��� ������ ������)
	sess->gc_exclude(result);
	sess->gc_clean(gc_save_point);

	//std::cout << "executeExpression: " << result->debug() << "\n";
	return result;
};


class RefChainDoubleLinkManager : public RefChain {
	Session *session;
public:
	RefChainDoubleLinkManager(Session *sess) : RefChain(sess, 64){ session = sess; };
	RefChain* save(RefData *ch, RefChainDoubleLinkManager *&chain) {
		ref_assert(chain==this);
		if (leng == sysize){
			chain = new RefChainDoubleLinkManager(session);
			chain->save(ch, chain);
		} else {
			*chain += ch;
		}
		return chain;
	};


	RefData **at_last(){ return ((RefChain*)this)->at_last(); };
};




inline void gcollect(Session *sess, RefData* gc_save_point, RefChain *result, size_t cc){
		//sess->gc_prepare(gc_save_point); - ������� �� �������� ������ � ���� (�������� ��� �������� � ��� ������ ������)
		sess->gc_exclude(result);
		sess->gc_clean(gc_save_point);
}

//--------- ��� ��������
RefChain*  RefProgram::executeExpression (RefChain *chain, Session *sess){ // ��������� �������
	RefData* gc_save_point = sess->gc_last;
	size_t gc_save_count = co::datas;

#ifdef DEBUG
	std::cout << "\nRefProgram::executeExpression:\t" << chain->debug() << "\n" << std::flush;
#endif

	PooledTuple2<RefData**, RefData**> pastWay; // <�, ��>   - ������������ ���� ������
	PooledTuple3<RefData**, RefData**, size_t> futurWay;// <�, ��, �������> - �������������� ��� ��������� ����
	PooledTuple2<size_t, size_t> brackets; // <������ ������ � way, ������ �� �������> - ���� ������, � ������� �������
	PooledStack<RefSegment**> segments;

	RefData
		**iend  = chain->at_afterlast(),
		**iter  = chain->at_first();
	RefDataBracket *tmpbr;
	size_t
		tmpsizet,
		br_index,
		treelevel = 0; // ������� ������� ���������. ��� ������ � ������ - �������������

	RefSegment *segment = 0;

	// ����� ��� ������ �� [ ������ ��� ����� �������� ]
	RefChainDoubleLinkManager *tmpForInstances = new RefChainDoubleLinkManager(sess);

	while(true){
		/*
		if (!iter){
		// ������ ����
		std::cout << "\n" << treelevel << ": -----";
		} else {
		std::cout << "\n" << treelevel << "\t" << ((iter == iend)?" -------":(*iter)->debug());
		}

		std::cout << "\n##########################\n";
		for (size_t i=1; i<=pastWay.getLength(); ++i){
		RefData **a, **b;
		pastWay.getByIndex(i, a, b);
		std::cout << i << ") " << the_explode(a, b) << "\n";
		}

		for (size_t i=1; i<=futurWay.getLength(); ++i){
		RefData **a, **b; size_t t;
		futurWay.getByIndex(i, a, b, t);
		std::cout << i << "] " << t << ":: " << the_explode(a, b-1) << "\n";
		}

		//*/

		if (!iter || (iter == iend)){  //// ��������� ������ ������ ����������

			if (futurWay.getLength() && (futurWay.top3()==treelevel)){ // �� ������ ������ ���� ������������� �����
				futurWay.top_pop(iter, iend, tmpsizet);
				continue;
			}

			if (brackets.getLength()==0){  // ���������� ������� ��� postWay ���������
				if (futurWay.getLength()==0){  // ��������� ���������� ����� ���������. ����������� ���������
					ref_assert(treelevel==0);

					RefChain *result = new RefChain(sess);
					if (pastWay.getLength()==0){
						gcollect(sess, gc_save_point, result, gc_save_count);
						return result;
					}

					PooledTuple2<RefData**,RefData**>::TUPLE2
						*lnk = pastWay.getPoolLinkForIndex(0),
						*lnkiter = lnk,
						*lnknend = pastWay.getPoolLinkAfterLast();
					size_t count = 0;

					while(lnkiter != lnknend){
						count += ((lnkiter->i2 - lnkiter->i1) + 1);
						++lnkiter;
					}
					RefData
						**dt = (RefData**)malloc(sizeof(RefData*)*count),
						**dest = dt;
					if (!dt) RUNTIMEERRORn("memory limit");
					while (lnk != lnknend){
						br_index = lnk->i2 - lnk->i1 + 1; // ���������� ���������� ��� �����������
						memcpy(dest, lnk->i1, sizeof(RefData*)*br_index);
						dest += br_index;
						++lnk;
					}

					result->first = dt;
					result->leng  = count;
					gcollect(sess, gc_save_point, result, gc_save_count);
					return result;
				} else {
					// ���������� ������� ���������� ����������
					futurWay.top_pop(iter, iend, tmpsizet);
					ref_assert(tmpsizet==treelevel);
					continue;
				}
			} else
				// ���� �����������������, ��������� ������������ �� ������� �������� ������������� ��� ��������
				// �� ����� ������ �� ��������� ����� iter == iend (����)
				/*if (brackets.equalTop(0, 0)) { //�� � �������?
					//// ����������� �� �������;
					brackets.pop();
					futurWay.top_pop(iter, iend, tmpsizet); // ������ � tmpsizet - ������� ���������������� ��� ��������� ����
#ifdef TESTCODE
					if (tmpsizet!=treelevel){
						if (!iter){
							// ������ ����
							std::cout << "\n" << treelevel << ": -----";
						} else {
							std::cout << "\n" << treelevel << "\t" << ((iter == iend)?" -------":(*iter)->debug());
						}

						std::cout << "\n##########################\n";
						for (size_t i=1; i<=pastWay.getLength(); ++i){
							RefData **a, **b;
							pastWay.getByIndex(i, a, b);
							std::cout << i << ") " << the_explode(a, b) << "\n";
						}

						for (size_t i=1; i<=futurWay.getLength(); ++i){
							RefData **a, **b; size_t t;
							futurWay.getByIndex(i, a, b, t);
							std::cout << i << "] " << t << ":: " << the_explode(a, b-1) << "\n";
						}
					}
#endif

					ref_assert(tmpsizet==treelevel);
					continue;
				} else*/ {
					//// ������ �� ������ ������ � ���������� ��� �� ����������
					--treelevel;
					size_t br_index;
					brackets.top_pop(br_index, tmpsizet);
					PooledTuple2<RefData**,RefData**>::TUPLE2
						*lnkbr = pastWay.getPoolLinkForIndex(br_index), // databracket
						*lnkiter = lnkbr + 1,
						*lnknend = pastWay.getPoolLinkAfterLast();

					RefDataBracket *bb = (RefDataBracket*)*(lnkbr->i2);
					lnkbr->i1 = lnkbr->i2;

					if (lnkiter==lnknend){ // ������ �����
						bb->chain = new RefChain(sess);
						//ref_assert(lnkbr->i1 == lnkbr->i2);
						continue;
					}

					// ������ ���� ������. ������� ������, ����� ��������
					size_t count = 0;
					while(lnkiter != lnknend){
						count += lnkiter->i2 - lnkiter->i1 + 1;
						++lnkiter;
					}
					++lnkbr; // ���� �� ������
					RefData
						**arg = (RefData**)malloc(count * sizeof(RefData*)),
						**dest = arg;
					if (!arg) RUNTIMEERRORn("memory limit");
					tmpsizet = 0;
					while(lnkbr != lnknend){
						tmpsizet = lnkbr->i2 - lnkbr->i1 + 1; // ���������� ���������� ��� �����������
						memcpy(dest, lnkbr->i1, sizeof(RefData*)*tmpsizet);
						dest += tmpsizet;
						++lnkbr;
					}
					bb->chain = new RefChain(sess, arg, count);

					pastWay.flushfrom(br_index);  // ������ ������ - ��������� ���� � ������������ �������

					//std::cout << "\n()()\tready: " << bb->debug();

					if (ref_dynamic_cast<RefExecBrackets>(bb)){  //  <F>
						//��������� �������
						ref_assert(count>0);
						//TODO: ������� �������� �������������� ������� �� ����������� ��������
						RefWordBase *fname = ref_dynamic_cast<RefWordBase>(*arg);
						RefFunctionBase *func = 0;
						if (!fname || !(func = this->findFunction(fname->getValue()))){
							RUNTIMEERRORs(sess, "Function not found in program");
						}
						RefChain *fresult;
						if (count > 1){
							//fresult = func->exec(arg+1, arg+count-1, bb->chain, sess);
							fresult = func->exec(bb->chain->at(1), bb->chain->at_last() /*arg+count-1*/, bb->chain, sess);
						} else {
							ref_assert(count==1);
							fresult = func->exec(0, 0, bb->chain, sess);
						}
						pastWay.pop(); // �� ����� ������� <>
						iter = fresult->at_first();
						iend = fresult->first ? fresult->at_afterlast() : 0;
					} else {  // (F)
						pastWay.pop();
						tmpForInstances->save(bb, tmpForInstances);
						pastWay.put(tmpForInstances->at_last(), tmpForInstances->at_last());  // �������������� (�� ~ setForTop)
					}

					continue;
				}
		} // end: if iter==end

		// ����� ���� �������
		if (segment = ref_dynamic_cast<RefSegment>(*iter)){
			//std::cout << iend << "\n" << std::flush;
			//std::cout << "\t" << *iend << "\n" << std::flush;
			//if (*(++iter) != *iend){
			if (++iter != iend){
				// ����������� ��������� �����, ��� ����� ��������
				futurWay.put(iter, iend, treelevel);
				// ���� ����������������, ��������� �� ���� ��������� ������ � ������ � ������� - ���������� �������
				// ��� ����� ���������� ����� ������� � �� ����� ��� ������ treelevel
				//brackets.put(0, 0); // ������ � ���� ������ ������� ����, ��� �� �������� � �������, � �� � ������
			}

			// ������� � �������
			iend = segment->own->first + segment->to + 1;
			iter = segment->own->first + segment->from;
			continue;
		}

		// ������: () ��� <>
		if (tmpbr = (*iter)->isDataBracket()){
			if (++iter != iend){
				// ����������� ��������� �����, ��� ����� ������
				futurWay.put(iter, iend, treelevel);
			}
/* todo: ����������������� � ������
			if (tmpbr->chain->isEmpty()){
			    // ( $empty )
			    pastWay.put(iter, iter);
			    ++iter;
			    continue;
			}
*/
			treelevel++;

			brackets.put(pastWay.getLength(), 1);      // 1 - ����� �� ������������� � ���������, ���� ��� ������ � �������� 0
			RefData *tmp = tmpbr->getNewInstance(sess);
			((RefDataBracket*)tmp)->chain = 0;//tmpbr->chain;
			tmpForInstances->save(tmp, tmpForInstances);
			pastWay.put(0, tmpForInstances->at_last());  // ������ 0 - �������� ��� ������ - RefDataBracket

			// ������� � ������
			if (tmpbr->chain->isEmpty()){
			    iend = 0;
			    iter = 0;
			} else {
                iend = tmpbr->chain->at_afterlast();
                iter = tmpbr->chain->at_first();
			}
			continue;
		}

		//// ���� ����� ���� �������� ��������� ��������
		if ((*iter)->isRefSymbol()){
			RefData** ifrom = iter;
			do {
				//sess->MOVE_TO_next_term(iter);  - ����������� ����������� ��� �������������, ������� ++ :
				//unistring ccc = (*iter)->debug();
				//std::cout << "\n\t\t\t" << (*iter)->debug();
				++iter;
			} while(iter != iend && (*iter)->isRefSymbol());
			pastWay.put(ifrom, iter-1);
			continue;
		}

		// ��������� (����, �� �� ������)
		RefPoint *rpoint = ref_dynamic_cast<RefPoint>(*iter);
		if (rpoint){
			pastWay.put(iter, iter);
			++iter;
			continue;
		}


		SYSTEMERRORs(sess, "UNREALISED executing for point: " << (*iter)->debug());
		//++iter; // ������ ++, � �� next_term, ��� ��� ������� ������������� �����
	}

};


RefFunctionBase* RefProgram::findFunction(unistring id){
	MODULE_LIST::iterator modit = modules.begin(), end = modules.end();
	RefModuleBase* mod = 0;

	RefFunctionBase* obj;
	while (modit != end){
		mod = &(*modit->second);

		if (obj = mod->getFunctionByName(id)){
			return obj;
		}
		++modit;
	};
	RUNTIMEERRORn("function " << id << " not found in program");
	return 0;
};


RefTemplateBase* RefProgram::findTemplate(unistring id){
	MODULE_LIST::reverse_iterator modit = modules.rbegin(), end = modules.rend();
	RefModuleBase* mod = 0;

	RefTemplateBase* obj;
	while (modit != end){
		mod = &(*modit->second);

		if (obj = mod->getTemplateByName(id)){
			return obj;
		}
		++modit;
	};
	RUNTIMEERRORn("template [" << id << "] not found in program");
	return 0;
};



RefData* RefProgram::createSymbolByCode(unistring code, unistring value){
	MODULE_LIST::iterator modit = modules.begin(), end = modules.end();
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

	COMPILETIMEERRORn("Definition for " << code << " not found in loaded modules");
};



// ������� ���������� � ������ �� ����. ���� � ������������ ������� (����� ���������� ���������� � ���������������� ��������)
RefData* RefProgram::createVariableByTypename(unistring code, unistring value){
	MODULE_LIST::iterator modit = modules.begin(), end = modules.end();
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
				SYSTEMERRORn("not variable loading like variable: " << result->debug());
			}
		} else {
			usermod = dynamic_cast<RefUserModule*>(mod);
			if (!usermod) SYSTEMERRORn("unknown children of RefModuleBase");
			RefTemplateBase *tp = usermod->getTemplateByName(code);
			if (tp){
				RefTemplateBase *templ = ref_dynamic_cast<RefTemplateBase>(tp);
				if (templ){
					return new RefVarChains(code, value);
				}
			}
		}
		++modit;
	}

	return 0;
};

void RefUserModule::initilizeAll(RefProgram* program){
	std::map<unistring, RefFunctionBase*>::iterator funit = functions.begin(), fend = functions.end();
	std::map<unistring, RefTemplateBase*>::iterator tplit = templates.begin(), tend = templates.end();

	while (tplit != tend){
		tplit->second->initilizeAll(program);
		++tplit;
	}

	while (funit != fend){
		funit->second->initilizeAll(program);
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



void RefModuleBase::setFunctionByName(unistring name, RefFunctionBase* o){
	std::map<unistring, RefFunctionBase*>::iterator iter = functions.find(name);
	if (iter != functions.end()) { COMPILETIMEERRORn("function multi-definition: " << iter->first); }
	functions[name] = o;
};

void RefModuleBase::setTemplateByName(unistring name, RefTemplateBase* o){
	std::map<unistring, RefTemplateBase*>::iterator iter = templates.find(name);
	if (iter != templates.end()) { COMPILETIMEERRORn("template multi-definition" << iter->first); }
	templates[name] = o;
};


RefData* RefDllModule::constructSymbol(unistring typecode, unistring value){
	std::map<unistring, RefData*(*)(unistring)>::iterator iter = dataConstructors.find(typecode);
	if (iter==dataConstructors.end()) return 0;
	return (*iter->second)(value);
};


RefData* RefDllModule::constructVariable(unistring typecode, unistring value){
	std::map<unistring, RefData*(*)(unistring)>::iterator iter = varConstructors.find(typecode);
	if (iter==varConstructors.end()) return 0;
	return (*iter->second)(value);
};




RefModuleBase::~RefModuleBase(){
	std::set<void*> deleted;

	std::map<unistring, RefFunctionBase*>::iterator it = functions.begin();
	while(it != functions.end()){
		//std::cout << "\n~ " << it->first;
		if (deleted.find(it->second)==deleted.end()) {
			deleted.insert(it->second);
			delete it->second;
		}
		it->second = 0;
		++it;
	}

	deleted.clear();

	std::map<unistring, RefTemplateBase*>::iterator itt = templates.begin();
	while(itt != templates.end()){
		//std::cout << "\n~ " << itt->first;
		if (deleted.find(itt->second)==deleted.end()) {
			deleted.insert(itt->second);
			delete itt->second;
		}
		itt->second = 0;
		++itt;
	}
};
RefFunctionBase* RefModuleBase::getFunctionByName(unistring nm, Session *sess){
	std::map<unistring, RefFunctionBase*>::iterator iter = functions.find(nm);
	if (iter != functions.end()) return iter->second;
	return 0;
};
RefTemplateBase* RefModuleBase::getTemplateByName(unistring nm, Session *sess){
	std::map<unistring, RefTemplateBase*>::iterator iter = templates.find(nm);
	if (iter != templates.end()) return iter->second;
	return 0;

};
