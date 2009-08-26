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

#include "session.h"
#include "program.h"
#include "symbols.h"

RefChain *Session::executeExpression(RefChain *chain) {
	RefChain* result = 0;

    std::stack<RefData**> openExecs; // ������ �� ������ ��� ������������� ������
    RefData **l_exec;
    RefData **r_exec;
    RefData **chain_last;  // �� ��-� ����� ����������

	RefData** item;
    RefExecBracket *tmpBr = 0;


	if (! chain->varsAndBrackets.getCount()){ //// ��������� ��������� ��� ������
		//result = new RefChain(chain->leng); - �������� ����� ����� ������ ����������� ����
		//memcpy(result->first+1, chain->first+1, chain->leng);

		result = new RefChain();
		size_t end = chain->leng;
		for(size_t i=0; i < end; ++i){
			*result += chain[i];
		}
		return result;
	}


	size_t  r_exec_idx = 0; // ������ > � ����� ������ � ����������
	do {
		//// ����� ������ > � ������� ����� ������
		tmpBr   = 0;

		size_t  imax = chain->varsAndBrackets.getLength();
		for ( /* r_exec_idx ��� ����������� */; r_exec_idx<imax; ++r_exec_idx){
			item = chain[chain->varsAndBrackets.getByIndex(r_exec_idx)];
			if ((tmpBr = ref_dynamic_cast<RefExecBracket>(*item)) && (! tmpBr->isOpen(item))){
				break;
			}
		}
		if (r_exec_idx==imax){ //// �� ����� >
			return chain;
		}
		//// ����� >
		l_exec = tmpBr->getOther(item);
		r_exec = item;
		r_exec_idx = chain->getStackIndexOfBracket(l_exec); // ��������� ����� > ���������� � < - l_exec


		// ������ l_exec � r_exec - ��� ������ �� ������ ��� < � > �����.
		// ����: l_exec � r_exec


klghkjhlkj
	
	    /// ��������� ���� ������� �� �����������
        #ifdef TESTCODE
        if (! dynamic_cast<RefWord*>(l_exec[1])) SYSTEMERROR("Not func NAME: " << l_exec[1]->toString() );
        #endif
        RefFunctionBase* function = dynamic_cast<RefFunctionBase *>( this->program->findFunctionById(  (ref_dynamic_cast<RefWord>(l_exec[1]))->getValue()  ) );
        if (!function) RUNTIMEERROR(l_exec[1]->toString(), "FUNCTION by ID [" << l_exec[1]->toString() << "] NOT DEFINED!");

        RefChain *newchain = 0;
        RefBuildInFunction *b_funct = dynamic_cast<RefBuildInFunction *>(function);
        // ���� �� ���������������� �������, �� ����������
        if (b_funct) {
            newchain = b_funct->eval(l_exec+2, r_exec-1, this);
        } else {
            RefUserFunction* u_funct = (RefUserFunction *)(function);
            LOG("Exec " << u_funct->getName());
            // BEGIN of USER FUNCTION EVALUTION
            /// user function->execute : ������� �����������
            /// ������ matching (����� �������������� �������� �� ��� ���������!)
            /// ���� ����� - substituteExpression �� ������ �����
            /// ����� ��������� ������������
            /// ���� ������� ��� ���� ����������� - ��������� �������
            // END of USER FUNCTION EVALUTION


            std::list<RefSentence *>::iterator sent = u_funct->body.begin(); // ������� ����������� �������
            bool reslt = false;

            do {
				// ������ �������� ������ �������
#ifdef TESTCODE
				if (l_exec[0]!=r_exec[0]) SYSTEMERROR("unbalanced < and >");
#endif

				delete l_exec[0]; // <
				delete l_exec[1]; // F
				//delete r_exec[0]; // ==l_exec[0]
				l_exec[0] = l_exec[1] = r_exec[0] = nullDataPoint;

                if (matching(*sent, (*sent)->leftPart, l_exec+2, r_exec-1, false, false)) {
                    //LOG(step++ <<  "\tsucessfull!");
                    newchain = substituteExpression( (*sent)->rightPart ); // ������� ����� rightPart'� � ������� ���������� �� ��������
                    reslt = true;
                } else {
                    ++sent;
                }
            } while (!reslt && sent != u_funct->body.end());  // std: body.end() - ������� ����� ����������
        }

        if (! newchain) {
            RUNTIMEERROR(function->getName(), "ABORT!");
        }

        /// ��������� ����� ���� ������
        // ��������� � ����� ������ �� ����� chain �� l_exec
        // if (� newchain ���� ����� �����) {
        //      ������� ��� ������ <.> � newchain (��������� ����� ������������)
        //      ��� ���
        // } else {
        //      ��������� � ����� ������ �� newchain
        //      ����������� ������� ����� ������ ���� �� ����� newchain
        //      ��� ���
        // }
        // ��� ���


        #ifdef DEBUG
        if (chain->leng == 0) SYSTEMERROR("alarm");
        #endif

        RefData  **a11 = chain->get_first();
        RefData  **a12 = l_exec;
        --a12;
        RefData  **a21 = r_exec;
        ++a21;
        RefData  **a22 = &( chain->get_first()[chain->leng-1] );

//  ����� chain = ff (chain_first..l_exec[-1] + newchain + r_exec[+1]..chain_last)  ����� ������ �� ������ ����� newchain
        chain = new RefChain(a11, a12, newchain, a21, a22);
//  ��� ���� �������� newchain
		//TODO: ������� ������ ��� a12+1 .. a21-1

        r_exec = &( chain->get_first()[a12-a11] );
    } while (true);

};

// ������� �����������: �������� ���������� ����������. �������� �� � �������� ��������
// ������ �����������
/// TODO: ������ ��������������!
RefChain *Session::substituteExpression(ChainSubstitution *substitution) {
    // �������� �� ��������� ��������� (RefChain ��������)
    // ���� �������� ����������, �� ��������� ����� �� ��������
	// ���� �������� - �� ������

	//PooledTuple3<RefLinkToVariable**, RefData**, RefData**> varValues;
	PooledTuple2<RefData**, RefData**> partValues;

	DataLinkPooledStack<size_t> &linksAndBrs = substitution->varsAndBrackets;
	DataLinkPooledStack<RefBracketBase* > old_brackets;
	DataLinkPooledStack<RefBracketBase* > new_brackets;
	RefData **l, **r;
	MatchState *matchState;
	RefLinkToVariable* link = 0;
//*
	// 1) �������� ������ �������� ���������� � chain, �� �������� � ����
	// 2) ��������� ����� ������ ������� (����� ���� �������� ���������� - �� ���������� + ����� chain) � ������� ���
	size_t newChainLength = substitution->leng;

	size_t varsAndBracketsCount = substitution->varsAndBrackets.getLength(); // ���������� �������� ���������� � ������
	if (varsAndBracketsCount){
		// ��������� �������� ���������� � partValues - ���� ����� ������������� ���������
		size_t idx = 0;
		size_t currPosition = 0; // ������ �� ������ ������� - ��� ������
		RefData **part_l = substitution->get_first(), **part_r = 0;


		while(idx < varsAndBracketsCount){
			part_r = substitution->get_first() - 1 + linksAndBrs.getByIndex(idx);  // first + i_diff
			if (part_l != part_r){ // ���� ����� �������/���������� - ���� ��� ������������
				partValues.put(part_l, part_r-1);
				currPosition += (part_r - 1 - part_l);
			}
			link = ref_dynamic_cast<RefLinkToVariable>(*part_r);
			if (link){ // ���� ����������
				getBodyByLink( link->lnk, l, r, matchState);
				if (l) partValues.put(/*link,*/ l, r);  // ���� ���������� � �������� ���������
				#ifdef TESTCODE
				if (r-l < 0) SYSTEMERROR("unbalanced links!");
				#endif
				--newChainLength; // ������ �� �����
				newChainLength += (l?r-l+1:0); // �� ����� ��������. ��������� l � r - ��� ����� ���� ������, �� ��� ������ �������� - ������� ����������
				currPosition += (l?r-l+1:0);
			} else {
				// ���������� ������
				#ifdef TESTCODE
				if (!ref_dynamic_cast<RefBracketBase>(*part_r)) SYSTEMERROR("alarm");
				#endif
				if (*part_r == old_brackets.top()){ // ���������� ��� ������������ => ������� ��� ���� ������
					old_brackets.top_pop();
					RefBracketBase *nb = new_brackets.top_pop();
					nb->closed_ind = currPosition;
					partValues.put((RefData**)&nb, (RefData**)&nb);
					++currPosition;
				} else { // ����� ���������� (����)
					RefBracketBase* pr = (RefBracketBase*)*part_r;
					old_brackets.put(pr);
					RefBracketBase *nb = pr->newInstance();
					nb->opened_ind = currPosition;
					new_brackets.put(nb);
					partValues.put((RefData**)&nb, (RefData**)&nb);
					++currPosition;
				}
			}
			part_l = part_r+1;
			++idx;
		}

		if (part_l != substitution->get_last()+1){
			partValues.put(part_l, substitution->get_last());
		}


	} else {
		RefData** tmp_ptr = (RefData**)malloc( (newChainLength+2)*sizeof(RefData*) );
		if (!tmp_ptr) RUNTIMEERROR("memory", "memory limit");
		tmp_ptr[0] = nullDataPoint;
		tmp_ptr[newChainLength+1] = nullDataPoint;
		memcpy(tmp_ptr+1, substitution->get_first(), newChainLength*sizeof(RefData*));
		// ����������� ������
		RefData** iend = tmp_ptr+newChainLength+1;
		RefBracketBase* ibr = 0;
		RefChain *resultChain = new RefChain(tmp_ptr, newChainLength);

		RefData** it = 0;
		for (size_t i=1; i<newChainLength+1; ++i){
			it = tmp_ptr+i;
			if (ibr = ref_dynamic_cast<RefBracketBase>(*it)){
				if (ibr->isOpen(substitution->first+i)){  // 
					*it = ibr->newInstanceCopy(resultChain);
				} else {
					*it = *(it-(ibr->closed_ind - ibr->opened_ind));
				}
			}
		}

		return resultChain;
	}
//*/
	// 2a) ������� ����� ������ ������ ����� �� �����������. 
	//	   ������ �������� ���������� - ��������, ���-������ �������� �� �����
	RefData** newdatachain = (RefData**)malloc(sizeof(RefData*)*(newChainLength+2));
	if (! newdatachain) SYSTEMERROR("memory limit");
	newdatachain[0] = newdatachain[newChainLength+1] = nullDataPoint;
	RefData** dest = newdatachain+newChainLength;
	RefData** src = substitution->get_first();
	size_t tlen = 0;
#ifdef TESTCODE
	if (!src) SYSTEMERROR("alarm");
#endif




	// 3) ��������� ������� memcpy


	while(partValues.top_pop(/*link,*/ l, r)){
		tlen = r-l+1;
		#ifdef TESTCODE
		if (tlen<1) SYSTEMERROR("alarm");
		#endif
		//std::cout << "\n+\t" << getTextOfChain(l, r);
		memcpy(dest-tlen+1, l, tlen*sizeof(RefData**));
		dest -= tlen;
	}

	RefChain *resultChain = new RefChain(newdatachain, newChainLength);
	// 4) �������� � ������� ��������� ������, �������� � �������� ����������

	// 5) ������� ������� �� ������������ ������� � ���� ����� ������� ���� ������

	PooledTuple3<int, int, int> pol;
	int a1,a2,b1,b2,c1,c2;

	pol.put(-2, 0, SIZE_MAX);
	pol.put(0x012345678, 0x012345678, 0x012345678);

	pol.top_pop(a1,b1,c1);
	pol.top_pop(a2,b2,c2);
//*/

	//PooledClass
	

	return resultChain;
};

unistring getTextOfChain(RefData** from, RefData** to){
	if (!from || !*from) return "[null]";
	if (!to || (to-from)<0 || (to-from)>1024) return "[error string]";
	unistring res = "";
	int i = 0;
	while(&from[i] <= to){
		if(from[i]) res += from[i]->toString();
		++i;
	}
	return res;
};

#define LOGSTEP(s) \
	std::cout << s << "\t" << (*activeTemplate?(*activeTemplate)->toString():"null") << " ~ " << (s=="BACK"?"":getTextOfChain(r+1, rr+1)) << "\n" << std::flush;


// ������������ ������� tmplate � ��������� ���������� � l �� r.
// isdemaching - ������� ����, ��� ���� ���������� ������� �� ����������� �������� ��������� (���� � ������� �������)
// ������ ��� ������ ������� � �����. ��� �������
bool  Session::matching(RefObject *initer, RefChain *tmplate, RefData **ll, RefData **rr, bool isdemaching, bool isRevers) {
	#ifdef TESTCODE
		if (ll-rr>1) SYSTEMERROR("alarm!");
	#endif

	//this->setTopDataSkob(rr+1);
	//if (ll==rr+1){
	//	ll=rr;
	//}

    LOG("New MATCHING : tmplateChain=" << tmplate->toString() << "  isDematching="<<isdemaching);
    RefData **activeTemplate = 0, **l=0, **r=0;

    if (isdemaching) {
        // ���������� ����� �������� �������������
        result_sost = BACK;
        activeTemplate = tmplate->get_last();
    } else {
        // �������� ����� ������������� � ll..rr
        result_sost = GO;
        l = 0;
        r = ll-1;
        activeTemplate = tmplate->get_first();

        if (ref_dynamic_cast<RefConditionBase >(initer)) {
			saveCurrentStateSmall(ll, rr, tmplate); // ����. ��������� ����� ����������� ������� �����������
        } else {
            saveCurrentStateLarge(ll, rr, tmplate); // ����. ��������� ����� ����������� ����� �����������
        }
    }

	while (true) {
        // ������������ ������� ������

        switch (result_sost) {

        case GO: {
            // ��������� ����
			/*if (activeTemplate==datadotTemplate_end ){
				if (r==current_view_r){
					result_sost = SUCCESS;
					break;
				} else {
					result_sost = BACK;
					MOVE_TO_pred_template(activeTemplate);
					break;
				}
			};*/

            LOGSTEP("GO  ");
            #ifdef TESTCODE
            if (!r) {
                SYSTEMERROR("RefData::init() tring to matching with NULL address!");
            };
            #endif
            l=0;
            result_sost = (*activeTemplate)->init(activeTemplate, this, l, r); /// ��� ������
            break;
        }
        case BACK: {
			/*if (activeTemplate==datadotTemplate_beg){
				result_sost = FAIL;
				break;
			}*/

            LOGSTEP("BACK");
            result_sost = (*activeTemplate)->back(activeTemplate, this, l, r); /// ��� �����
            break;
        }

        case SUCCESS :
            return true;

        case ERROR :
            //return -1;
            #ifdef DEBUG
            LOG( "ERROR signal when maching!" );
            #endif
            return false;
        case FAIL   :
            #ifdef DEBUG
            LOG( "FAIL signal when maching!" );
            #endif
            return false;



        default:
            break;
        }
    };







};







