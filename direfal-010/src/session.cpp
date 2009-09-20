#include "session.h"

#include "function.h"
#include "program.h"

#ifdef DEBUG
#define LOGSTEP(s) \
	std::cout << s << " | " << ((activeTemplate && *activeTemplate) ? (*activeTemplate)->debug():"null") << "\t\t~\t\t" << std::flush << (s=="BACK"?"":chain_to_text(r?r+1:0, arg_l?arg_r:0, 50)) << "\n" << std::flush;
#define LOGMATCH() \
	std::cout << "\n\nSTEP: "<< ++(program->step) <<"\n###### maps:" << varMapStack.getCount() << "\n" << (isdemaching?"DMTCH|":"START| ") << (thetmplate && !thetmplate->isEmpty() ? thetmplate->debug() : "$empty") << "\t\t~\t\t" << std::flush << (!arg_l?" $empty":chain_to_text(arg_l, arg_r, 50)) << "\n" << std::flush;
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
	LOGMATCH();

	while (true) {
        // ������������ ������� ������

        switch (result_sost) {

        case GO: {
			if (!activeTemplate || activeTemplate == tmplate()->at(-1)+1){ // ��������� ������ ���� �������������! DataDOT
				//TODO: �������� ��� ������ � ������ �������
				if (this->tmplate()!=thetmplate){ // ����������� ������������� user-�������
					#ifdef TESTCODE
						if (! termChainsJumpPoints.getLength()) AchtungERRORs(this);
					#endif
					RefVarChains* var1 = ref_dynamic_cast<RefVarChains>(* termChainsJumpPoints.top());
					if (var1) {
						result_sost = var1->success(activeTemplate, this, l, r);
					}else{
						RefVariantsChains* var2 = ref_dynamic_cast<RefVariantsChains>(* termChainsJumpPoints.top());
						result_sost = var2->success(activeTemplate, this, l, r);
					}
					break;
				}
				activeTemplate = activeTemplate ? GET_pred_template(activeTemplate) : tmplate()->at(-1);  // ����� ������ ��������, � �������� ��� ��� - ������
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
			//if (activeTemplate== this->tmplate()->at(0)-1){ // ��������� ����� ���� �������������! DataDOT
			if (!activeTemplate || activeTemplate== this->tmplate()->at(0)-1){ // ��������� ����� ���� �������������! DataDOT
				//TODO: �������� ��� ������ � ������ �������
				if (this->tmplate()!=thetmplate){ // ����������� ������������� user-�������
					#ifdef TESTCODE
						if (! termChainsJumpPoints.getLength()) AchtungERRORs(this);
					#endif
					RefVarChains* var1 = ref_dynamic_cast<RefVarChains>(* termChainsJumpPoints.top());
					if (var1){
						result_sost = var1->failed(activeTemplate, this, l, r);
					}else{
						RefVariantsChains* var2 = ref_dynamic_cast<RefVariantsChains>(* termChainsJumpPoints.top());
						result_sost = var2->failed(activeTemplate, this, l, r);
					}
					break;
				}
				//activeTemplate = activeTemplate ? GET_next_template(activeTemplate) : tmplate()->at(0);  // ����� ������ ��������, � �������� ��� ��� - ������
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
			current_view_borders.pop();
			popTmplate();
            return true;

        case ERROR :
            #ifdef DEBUG
			std::cout << "ERROR\n######\n";
            #endif
			current_view_borders.pop();
			popTmplate();
            return false;
        case FAIL   :
            #ifdef DEBUG
			std::cout << "FAIL\n######\n";
            #endif
			current_view_borders.pop();
			popTmplate();
            return false;



        default:
            break;
        }
    };
};


unistring Session::debug(){
		std::ostringstream s;

		for (int i=varMapStack.getCount()-1; i>=0; --i){
			s << "--------------------------------------- " << i+1 << "\n";
			s << varMapStack.pool[i]->debug();
		}
		return s.str();
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

bool VarMap::folowByWay(unistring path, RefData** &l, RefData** &r){
    #ifdef TESTCODE
	if (path == EmptyUniString) {
		AchtungERRORn;
	}
    #endif
	long t_from  = 0;
    long t_to    = -1;
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

/*
// TODO:� ����� �� ������������� �-�? ��������� ����� ��� ��������
void Session::saveVar   (RefData** activeTemplate, RefData** &l, RefData** &r) { // ��������� ��������� ����������
        RefVariable* var = ref_dynamic_cast<RefVariable>(*activeTemplate);
        if (var){
            saveVar(this, (RefVariable*)var, l, r);
        }
//		LOG("save: " << var->getName() << " : " << ((l && *l) ? (*l)->debug() : "null") << " .. " <<  (r&& *r &&(current_view_l()-1-r)?(*r)->debug():"null"));
};
    
// TODO:� ����� �� ������������� �-�? ��������� ����� ��� ��������
void Session::restoreVar(RefData** activeTemplate, RefData** &l, RefData** &r){ // ��������������� ��������� ����������
        RefVariable* var = ref_dynamic_cast<RefVariable>(*activeTemplate);
        if (!var) SYSTEMERROR("not var restoring!");

        restoreVar(this, var, l, r); // ��� �����-���������� varMatchState ������ �� ���������
};
*/

// TODO: ��������������!
RefChain*  Session::substituteExpression(RefChainConstructor *chain){
	if (! chain->leng) return new RefChain();

	RefChain *result = new RefChain(chain->leng);
	RefLinkToVariable *link = 0;
	RefDataBracket   *brack = 0;
	RefData **enditem = (*chain)[-1]+1;
	for(RefData **item = (*chain)[0]; item < enditem; ++item){
		link = ref_dynamic_cast<RefLinkToVariable>(*item);
		if (link){
			RefData **endi, **i;
			VarMap* vm = 0;
			findVar(link->lnk, i, endi, vm);
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
				*result +=  new RefStructBrackets( substituteExpression((RefChainConstructor*) brack->chain) ); //TODO: ������! ����� RefChainConstructor != RefChain
			} else {
				// RefExecBracket
				*result +=  new RefExecBrackets( substituteExpression((RefChainConstructor*) brack->chain) ); //TODO: ������! ����� RefChainConstructor != RefChain
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