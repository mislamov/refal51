#include "session.h"

#include "function.h"
#include "program.h"

#ifdef DEBUG
#define LOGSTEP(s) \
	std::cout <<variants_idxs.getCount()<< " "<< s << " | " << ((activeTemplate && *activeTemplate) ? (*activeTemplate)->debug():"null") << "\t\t~\t\t" << std::flush << (s=="BACK"?"":chain_to_text(r?r+1:0, arg_l?arg_r:0, 50)) << "\n" << std::flush;
#define LOGMATCH() \
	std::cout << "\n\n"<< co::objs<<" STEP: "<< ++(program->step) <<"\n###### maps:" << varMapStack.getCount() << "\n" << (isdemaching?"DMTCH|":"START| ") << (thetmplate && !thetmplate->isEmpty() ? thetmplate->debug() : "$empty") << "\t\t~\t\t" << std::flush << (!arg_l?" $empty":chain_to_text(arg_l, arg_r, 50)) << "\n" << std::flush;
#else
#define LOGSTEP(s)
#define LOGMATCH()
#endif




// ������������ ������� tmplate � ��������� ���������� arg.
// isdemaching - ������� ����, ��� ���� ���������� ������� �� ����������� �������� ��������� (���� � ������� �������)
// ������ ��� ������ ������� � �����. ��� �������
// �������� ���������� varMap� current_LR �������� �� ���.
// TODO: �������� ��� ������������ ��������� 2 chain � ����������, � �� 1 chain � 2 dot.
bool  Session::matching(RefObject *initer, RefChain *thetmplate, RefData **arg_l, RefData **arg_r, bool isdemaching) {
#ifdef TESTCODE
	if (! varMapStack.getCount()) SYSTEMERRORs(this, "createVarMap() wanted! No varmaps in stack for matching");
#endif

	//std::cout << thetmplate->debug() << "\n\t\t~  " << chain_to_text(arg_l, arg_r) << "\n" << std::flush;

	//LOG("New MATCHING : tmplateChain=" << thetmplate->debug() << "  isDematching="<<isdemaching);
    RefData **activeTemplate = 0, **l=0, **r=0;

    if (isdemaching) {
        // ���������� ����� �������� �������������
		if (thetmplate->isEmpty()) return false; // ��������� ������ �������� - �������
        result_sost = BACK;
		activeTemplate = (*thetmplate)[-1];
		current_view_borders.put(arg_l, (!arg_l ? 0 : arg_r) );
    } else {
        // �������� ����� ������������� � argl..argr
		if (thetmplate->isEmpty()) return !arg_l; // ��������� ������ �������� - �������
        result_sost = GO;
		l = 0;
		r = arg_l ? arg_l-1 : 0;
        activeTemplate = (*thetmplate)[0];
		current_view_borders.put(arg_l, (!arg_l ? 0 : arg_r) );
    }

	this->setTmplate(thetmplate);
	//LOGMATCH();
	//std::cout << "\n\n"<< co::objs<<" STEP: "<< ++(program->step) <<"\n###### maps:" << varMapStack.getCount() << "\n" << (isdemaching?"DMTCH|":"START| ") << (thetmplate && !thetmplate->isEmpty() ? thetmplate->debug() : "$empty") << "\t\t~\t\t" << std::flush << (!arg_l?" $empty":chain_to_text(arg_l, arg_r, 50)) << "\n" << std::flush;

	bool ireturn = false;

	while (! ireturn) {
        // ������������ ������� ������
        switch (result_sost) {

        case GO: {
			if (!activeTemplate || activeTemplate == tmplate()->at_afterlast()){ // ��������� ������ ���� �������������! DataDOT
				activeTemplate = 0;
				//TODO: �������� ��� ������ � ������ �������
				if (this->tmplate()!=thetmplate){ // ����������� ������������� user-�������
					#ifdef TESTCODE
						if (! termChainsJumpPoints.getLength()) AchtungERRORs(this);
					#endif
					#ifdef DEBUG
						std::cout << "SUCCESS JUMP " << (* termChainsJumpPoints.top())->explode() << "\n";
					#endif
					RefVarChains* var1 = ref_dynamic_cast<RefVarChains>(* termChainsJumpPoints.top());

					if (var1) {
						result_sost = var1->success(activeTemplate, this, l, r);
					} else {
						RefVariantsChains* var2 = ref_dynamic_cast<RefVariantsChains>(* termChainsJumpPoints.top());
						if (var2){
							result_sost = var2->success(activeTemplate, this, l, r);
						} else {
							RefRepeaterChain* var3 = ref_dynamic_cast<RefRepeaterChain>(* termChainsJumpPoints.top());
							result_sost = var3->success(activeTemplate, this, l, r);
						}
					}
					break;
				}
				activeTemplate = activeTemplate ? GET_pred_template(activeTemplate) : tmplate()->at_last();  // ����� ������ ��������, � �������� ��� ��� - ������
				result_sost = (r==arg_r) ? SUCCESS : BACK;  // �� ������� r ������ => ���������� � (*arg)[-1]
				break;
			}
            LOGSTEP("GO  ");
            #ifdef TESTCODE
            if (l && !r) {
				SYSTEMERRORs(this, "RefData::init() tring to matching with NULL address!");
			};
            #endif
            l=0;
            result_sost = (*activeTemplate)->init(activeTemplate, this, l, r); /// ��� ������
            break;
        }
        case BACK: {
			//if (activeTemplate== this->tmplate()->at_first()-1){ // ��������� ����� ���� �������������! DataDOT
			if (!activeTemplate || activeTemplate== this->tmplate()->at_first()-1){ // ��������� ����� ���� �������������! DataDOT
				activeTemplate = 0;
				//TODO: �������� ��� ������ � ������ �������
				if (this->tmplate()!=thetmplate){ // ����������� ������������� user-�������
					#ifdef TESTCODE
						if (! termChainsJumpPoints.getLength()) AchtungERRORs(this);
					#endif
					#ifdef DEBUG
						std::cout << "FAIL JUMP " << (* termChainsJumpPoints.top())->explode() << "\n";
					#endif
					RefVarChains* var1 = ref_dynamic_cast<RefVarChains>(* termChainsJumpPoints.top());
					if (var1){
						result_sost = var1->failed(activeTemplate, this, l, r);
					}else{
						RefVariantsChains* var2 = ref_dynamic_cast<RefVariantsChains>(* termChainsJumpPoints.top());
						if (var2){
							result_sost = var2->failed(activeTemplate, this, l, r);
						} else {
							RefRepeaterChain* var3 = ref_dynamic_cast<RefRepeaterChain>(* termChainsJumpPoints.top());
							result_sost = var3->failed(activeTemplate, this, l, r);
						}
					}
					break;
				}
				//activeTemplate = activeTemplate ? GET_next_template(activeTemplate) : tmplate()->at_first();  // ����� ������ ��������, � �������� ��� ��� - ������
				result_sost = FAIL;
				break;
			}
            LOGSTEP("BACK");
            result_sost = (*activeTemplate)->back(activeTemplate, this, l, r); /// ��� �����
            break;
        }

        case SUCCESS :
            #ifdef DEBUG
			std::cout << "SUCCESS\n######\n";
            #endif
			ireturn = true;
			break;

        case ERROR :
            #ifdef DEBUG
			std::cout << "ERROR\n######\n";
            #endif
			ireturn = true;
			break;
        case FAIL   :
            #ifdef DEBUG
			std::cout << "FAIL\n######\n";
            #endif
			ireturn = true;
			break;

        default:
			SYSTEMERRORs(this, "Unexpected result_sost value");
            break;
        }
    };


	current_view_borders.pop();
	popTmplate();
	return (result_sost==SUCCESS);
};

#ifdef TESTCODE
unistring Session::debug(){
		std::ostringstream s;

		s << "variants_idxs: ";
		for(size_t i=0; i<variants_idxs.getCount(); ++i){
			s << variants_idxs.getByIndex(i) << " ";
		}
		s << "\n";
		s << "variants_idxs_done: ";
		for(size_t i=0; i<variants_idxs_done.getCount(); ++i){
			s << variants_idxs_done.getByIndex(i) << " ";
		}
		s << "\n";

		for (int i=varMapStack.getCount()-1; i>=0; --i){
			s << "--------------------------------------- " << i+1 << "\n";
			s << varMapStack.pool[i]->debug();
		}


	RefChain *ch;
	char* st;


	return s.str();
};
#else
unistring Session::debug(){
		std::ostringstream s;

		s << "variants_idxs: ";
		for(size_t i=0; i<variants_idxs.getCount(); ++i){
			s << variants_idxs.getByIndex(i) << " ";
		}
		s << "\n";
		s << "variants_idxs_done: ";
		for(size_t i=0; i<variants_idxs_done.getCount(); ++i){
			s << variants_idxs_done.getByIndex(i) << " ";
		}
		s << "\n";

		for (size_t i=varMapStack.getCount(); i>0; --i){
			s << "--------------------------------------- " << i+2 << "\n";
			s << varMapStack.pool[i+1]->debug();
		}
		return s.str();
};
#endif


void Session::gc_clean(RefData* save_point){
		if (!save_point) save_point = this->gc_first;
		if (save_point==this->gc_last) return; // ����� ������ �������

		RefData *tmp=0, *pre=0, *iend=0;

		#ifdef DEBUG
		size_t tmpdbg = 0;
		/*std::cout << "\nsave_point: " << save_point <<
			"\ns_p->next: " << save_point->gc_next <<
			"\ngc_last:   " << gc_last << " " << (int)gc_last->gc_label <<
			"\ngc_last->next: " << gc_last->gc_next;*/
		#endif
		for(pre= save_point,
			iend=this->gc_last->gc_next; // null
			pre->gc_next!=iend;
			){
				if (! pre->gc_next->is_gc_mark()){
					tmp = pre->gc_next;
					pre->gc_next = pre->gc_next->gc_next;
					//std::cout << "\n~~~~ " << tmp /*->debug()*/ << std::flush;
					//if (ref_dynamic_cast<RefDataBracket>(tmp)) std::cout << "\n    (): " << ((RefDataBracket*)tmp)->chain << std::flush;

					delete tmp;

					#ifdef DEBUG
					++tmpdbg;
					#endif

				} else {
					pre = pre->gc_next;
				}
		}
		this->gc_last = pre;
		this->gc_last->gc_next = 0;

		#ifdef DEBUG
				std::cout << "############ GARBAGE: " << tmpdbg << " was deleted !\n" << std::flush;
		#endif
};


void Session::gc_prepare(RefData *save_point){
		#ifdef DEBUG
				size_t tmpdbg = 0;
		#endif
		for(
			RefData
			  *iter = (save_point ? save_point : this->gc_first),
			  *iend = this->gc_last->gc_next;
			iter!=iend;
			iter=iter->gc_next){
			iter->flush_gc_mark();
		#ifdef DEBUG
			++tmpdbg;
		#endif
		}

		#ifdef DEBUG
				std::cout << "############ GARBAGE: " << tmpdbg << " was prepared !\n" << std::flush;
		#endif
	};

void Session::gc_exclude(RefChain *chain){
		if (!chain) return;
		chain->set_gc_mark();
		if (chain->isEmpty()) return;
		for(RefData  **iter=chain->at_first(), **iend=chain->at_afterlast();
			iter<iend;
			++iter){
			(*iter)->set_gc_mark();
			if (ref_dynamic_cast<RefDataBracket>(*iter)){
				gc_exclude( ((RefDataBracket*)(*iter))->chain );
			}
		}
	};


/*
unistring MatchState::debug(){
		std::ostringstream s;

		s << "****\tMatchState:\t" << std::flush << chain_to_text(view_l, view_r) << "\t~\t" << tpl->debug() << "\n";
		s << varmap.debug();
		return s.str();
};
*/




// ���� �� ����� ���������� �� ������ ���������
bool VarMap::findByName(unistring name, RefData** &l, RefData** &r, VarMap *&vm) {
        for (size_t ind = last_ind; ind>=0; --ind) {
            if (pool[ind].i1->getName()==name) {
                l  = pool[ind].i2;
                r  = pool[ind].i3;
				vm = pool[ind].i4;
                return true;
            }
        }
            return false;
};

// ���� �� ������ �� ���������� �� ������ ���������
/*
bool VarMap::findByLink(RefVariable* var, RefData** &l, RefData** &r, VarMap *&vm) {
        for (size_t ind = last_ind; ind>=0; --ind) {
            if (pool[ind].i1==var) {
                l = pool[ind].i2;
                r = pool[ind].i3;
				vm = pool[ind].i4;
                return true;
            }
        }
            return false;
};
*/
bool VarMap::findByLink(RefVariable* var, RefData** &l, RefData** &r, VarMap *&vm) {
        for (size_t ind = last_ind+1; ind>0; --ind) {
            if (pool[ind-1].i1==var) {
                l = pool[ind-1].i2;
                r = pool[ind-1].i3;
				vm = pool[ind-1].i4;
                return true;
            }
        }
            return false;
};

bool VarMap::folowByWay(unistring path, RefData** &l, RefData** &r){
    #ifdef TESTCODE
	if (path == EmptyUniString) {
		AchtungERRORn;
	}
    #endif
	size_t t_from  = 0;
    size_t t_to    = 0;
    t_to = t_to-1;
    #ifdef TESTCODE
    size_t stmp = 0;
    stmp = stmp-3;
    stmp = stmp+3;
    if (stmp!=0) SYSTEMERRORn("Invalid size_t operation! 0-3+3 != 0 for size_t. Change session.cpp for this platform!");
    #endif

    unistring vname;
	VarMap *vm = this;

	do {
        t_from = t_to+1;
        t_to   = path.find(varPathSeparator, t_from);
        vname = path.substr(t_from, t_to-t_from);

		if (!vm) return false;
		vm->findByName(vname, l, r, vm);
    } while (t_to != std::string::npos);
	return true;
}


unistring VarMap::debug(){
		std::ostringstream s;

		s << "****\t\tVarMap pool:   (by"<< (creator?creator->debug().substr(0, 15):" 0 ") <<")" << std::flush << "\n";
		size_t ind = last_ind;
		while(ind){
			s << "****\t\t\t" << ind << ") " << std::flush << pool[ind].i1->debug() << " : " << chain_to_text( pool[ind].i2,  pool[ind].i3 ) << "\n";
			--ind;
		};
		return s.str();
};


// TODO: ��������������!
//RefChain*  Session::substituteExpression(RefChainConstructor *chain){
RefChain*  Session::substituteExpression(RefChain *chain){
	if (! chain->leng) {
		return new RefChain(this);
		//return chain; // � ����������� �� ���� ��� ������� ����� ������ ������ - ����������������� ������ ����
	}
	RefChain *result = new RefChain(this, chain->leng);
	RefLinkToVariable *link = 0;
	RefDataBracket   *brack = 0;
	RefData **enditem = chain->at_afterlast();
	for(RefData **item = chain->at_first(); item < enditem; ++item){
		link = ref_dynamic_cast<RefLinkToVariable>(*item);
		if (link){
			RefData **endi, **i;
			VarMap* vm = 0;
			if (! findVar(link->lnk, i, endi, vm)){
				std::cout << "\n\n" << this->debug() << "\n\n" << std::flush;
				SYSTEMERRORs(this, "Variable not found for link " + link->explode());
			};
			if (link->path != EmptyUniString){
				// ������������ � ���������������� ����������
				if (! vm->folowByWay(link->path, i, endi)) RUNTIMEERRORs(this, "Wrong way for variable " << link->lnk->toString() << " : " << link->path);
			}
			if (i){
				++endi;
				for( ; i < endi; ++i){
					*result += *i;
				}
			}

			continue;
		}
		brack = ref_dynamic_cast<RefDataBracket>(*item);
		if (brack){
			if (ref_dynamic_cast<RefStructBrackets>(brack)){
				//*result +=  new RefStructBrackets(this, substituteExpression((RefChainConstructor*) brack->chain) ); //TODO: ������! ����� RefChainConstructor != RefChain
				*result +=  new RefStructBrackets(this, substituteExpression((RefChain*) brack->chain) ); //TODO: ������! ����� RefChainConstructor != RefChain
			} else {
				// RefExecBracket
				//*result +=  new RefExecBrackets(this, substituteExpression((RefChainConstructor*) brack->chain) ); //TODO: ������! ����� RefChainConstructor != RefChain
				*result +=  new RefExecBrackets(this, substituteExpression((RefChain*) brack->chain) ); //TODO: ������! ����� RefChainConstructor != RefChain
			}

			continue;
		}
		*result += *item;
	}
	return result;
};


void Session::printExecTrace(){
	unistring tab = "";
	while (execTrace.getLength()){
		std::cout << tab  << "<" << execTrace.top1()->getName() << " " << chain_to_text(execTrace.top2(), execTrace.top3()) << " >\n";
		execTrace.pop();
		tab += "   ";
	}
}