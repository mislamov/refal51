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

#include "symbols.h"
#include "session.h"
#include "rfunction.h"

RefChain *Session::executeExpression(RefChain *chain) {

    std::stack<RefData**> openExecs; // ������ �� ������ ��� ������������� ������
    RefData **l_exec;
    RefData **r_exec;
    RefData **chain_last;  // �� ��-� ����� ����������
    RefExecBracket *tmpBr = 0;
    r_exec = chain->get_first();

    do {
        chain_last = &(chain->get_first()[chain->leng]); // �� ��-� ����� ����������
        /// ����� ������ � ��������� ���������
        while (r_exec < chain_last) {
            if (tmpBr = ref_dynamic_cast<RefExecBracket>(*r_exec)) { // > ��� <
                if (! tmpBr->isOpen(r_exec)) { // > - ����� ��, ��� ������
                    l_exec = openExecs.top();
                    openExecs.pop();
                    break;
                }
                // <
                openExecs.push(r_exec);
            }
            ++r_exec;
        }
        // ������ l_exec � r_exec - ��� ������ �� ������ ��� < � > �����.
        if (r_exec == chain_last) { // ������ ���������
            // openExecs - ����������� � ��� ���������. ���� ������������, �� ��� �������.
            return chain;
        }

        // ����: l_exec � r_exec
        /// ��������� ���� ������� �� �����������
        #ifdef TESTCODE
        if (! dynamic_cast<RefWord*>(l_exec[1])) SYSTEMERROR("NOt func NAME: " << l_exec[1]->toString() );
        #endif
        RefFunctionBase* function = dynamic_cast<RefFunctionBase *>( this->findFunctionById(  (ref_dynamic_cast<RefWord>(l_exec[1]))->getValue()  ) );
        if (!function) RUNTIMEERROR(l_exec[1]->toString(), "FUNCTION by ID [" << l_exec[1]->toString() << "] NOT DEFINED!");

        RefChain *newchain = 0;
        RefBuildInFunction *b_funct = dynamic_cast<RefBuildInFunction *>(function);
        // ���� �� ���������������� �������, �� ����������
        if (b_funct) {
            newchain = b_funct->execute(l_exec[2], r_exec[-1], this);
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
                if (matching(*sent, (*sent)->leftPart, &(l_exec[2]), &(r_exec[-1]), false, false)) {
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
        RefChain *tmpchain = new RefChain(a11, a12, newchain->get_first(), &( newchain->get_first()[newchain->leng-1] ), a21, a22);
//  ������� ������ chain
        delete newchain;
        chain = tmpchain;
        // ������ chain �������� ��������� �����������

        r_exec = &( chain->get_first()[a12-a11] );
    } while (true);

};

// ������� �����������: �������� ���������� ����������. �������� �� � �������� ��������
// ������ �����������
RefChain *Session::substituteExpression(RefChain *chain) {
    // �������� �� ��������� ��������� (RefChain ��������)
    // ���� �������� ����������, �� ��������� ����� �� ��������
	// ���� �������� - �� ������
	
	RefData **a1, **a2, **b1, **b2, **c1, **c2;
	// 1 - ���������� ����� ������ ������� + ����� ����� ����������
	

	return 0;
};


RefObject* Session::findFunctionById(unistring id) {
	return 0;
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







