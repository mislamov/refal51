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
    r_exec = chain->first;

    do {
        chain_last = &(chain->first[chain->leng]); // �� ��-� ����� ����������
        /// ����� ������ � ��������� ���������
        while (r_exec < chain_last) {
            if (tmpBr = ref_dynamic_cast<RefExecBracket>(*r_exec)) { // > ��� <
                if (! tmpBr->is_opened) { // > - ����� ��, ��� ������
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

        RefData  **a11 = chain->first;
        RefData  **a12 = l_exec;
        --a12;
        RefData  **a21 = r_exec;
        ++a21;
        RefData  **a22 = &( chain->first[chain->leng-1] );

//  ����� chain = ff (chain_first..l_exec[-1] + newchain + r_exec[+1]..chain_last)  ����� ������ �� ������ ����� newchain
        RefChain *tmpchain = new RefChain(a11, a12, newchain->first, &( newchain->first[newchain->leng-1] ), a21, a22);
//  ������� ������ chain
        delete newchain;
        chain = tmpchain;
        // ������ chain �������� ��������� �����������

        r_exec = &( chain->first[a12-a11] );
    } while (true);

};

// ������� �����������: �������� ���������� ����������. �������� �� � �������� ��������
// ������ �����������
RefChain *Session::substituteExpression(RefChain *chain) {
    // �������� �� ��������� ��������� (RefChain ��������)
    // ���� ����������, �� ��������� ����� �� ��������
};


RefObject* Session::findFunctionById(unistring id) {
};



#define LOGSTEP(s)


// ������������ ������� tmplate � ��������� ���������� � l �� r.
// isdemaching - ������� ����, ��� ���� ���������� ������� �� ����������� �������� ��������� (���� � ������� �������)
// ������ ��� ������ ������� � �����. ��� �������
bool  Session::matching(RefObject *initer, RefChain *tmplate, RefData **ll, RefData **rr, bool isdemaching, bool isRevers) {
    LOG("New MATCHING : tmplateChain=" << tmplate->toString() << "  isDematching="<<isdemaching);
    RefData **activeTemplate, **l=0, **r=0;

    if (isdemaching) {
        // ���������� ����� �������� �������������
        result_sost = BACK;
        activeTemplate = tmplate->get_last();
    } else {
        // �������� ����� �������������
        result_sost = GO;
        current_l = ll;
        current_r = rr;

        if (ref_dynamic_cast<RefConditionBase >(initer)) {
            saveCurrentStateSmall(); // ����. ��������� ����� ����������� ������� �����������
        } else {
            saveCurrentStateLarge(); // ����. ��������� ����� ����������� ����� �����������
        }
    }

    // ������ �������� - ������ ��� RefData_DOT
//    if (! ref_dynamic_cast<RefData_DOT>(activeTemplate)) {
//        SYSTEMERROR("test: " << activeTemplate->toString());
//    }

    //LOG("\n\n~~~ " << tmplateChain->toString() << "  ~~  " << s->getPole_zrenija()->toString());

    while (true) {
        // ������������ ������� ������

        switch (result_sost) {

        case GO: {
            // ��������� ����
            LOGSTEP("GO  ");
            #ifdef TESTCODE
//            if (l)  { SYSTEMERROR("RefData::init() l is NULL !"); };
            if (!r) {
                SYSTEMERROR("RefData::init() tring to matching with NULL address!");
            };
            #endif
            l=0;
            result_sost = (*activeTemplate)->init(activeTemplate, this, l, r); /// ��� ������
            break;
        }
        case BACK: {
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







