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

#ifndef WIN32
	#include <pair.h>   // for MSVC 6.0 that doens't have a proper <utility>
#endif /* WIN32 */

#include <list>
#include <sstream>


#include "kernel.h"
#include "session.h"
#include "datastructs.h"

TVarBody::TVarBody(RefData* l, RefData* r, RefObject* o) {
    first=l;
    second=r;
    owner = o;
    //sess = 0;
};

TVarBody * TVarBody::folowByWay(unistring path) {
    #ifdef DEBUG
    if (path == EmptyUniString) SYSTEMERROR("mpty subVar path : " + toString());
    #endif

    size_t t_from  = 0;
    size_t t_to    = -1;
    unistring vname;
    TVarBody * varItem = this;
    do {
        t_from = t_to+1;
        t_to   = path.find(varPathSeparator, t_from);

        vname = path.substr(t_from, t_to-t_from);

        // ����������� �� ���������� �������������
        std::list<SessionOfMaching *>::reverse_iterator som = varItem->sessStack.rbegin();
        TVarBodyTable::iterator fnded;

        while ( som != varItem->sessStack.rend()) {

            TVarBodyTable varTable = ((*som)->varTable);
            fnded = varTable.find(vname);
            if (fnded != varTable.end()) {
                varItem  = (*fnded).second;
                break;
            }

            ++som;
        }

        if (som == varItem->sessStack.rend()) {
            SYSTEMERROR("subVariable not found : " << path << "  for  " << toString());
        }

    } while (t_to != std::string::npos);

    return varItem;

};


Session::Session() {
    fcalls = 1;
	step = 0;
};

Session::~Session() {
};

TVarBody* Session::setVarBody( unistring vname, TVarBody* vb) {
    #ifdef DEBUG
    if (! matchSessions.size()) {
        showStatus();
        SYSTEMERROR("matchSessions is EMPTY!");
    }
    #endif
    ( matchSessions.back()->varTable )[ vname ] = vb;
    //std::cout << "\nSET " << vname << " := " << std::flush << (vb?vb->toString():"$null") << std::flush;
    return vb;
};


TVarBody* Session::getVarBody( unistring vname ) {
    #ifdef DEBUG
    if (this->matchSessions.empty()) SYSTEMERROR("matchSessions is EMPTY!");
    #endif

    std::list<SessionOfMaching *>::reverse_iterator som = this->matchSessions.rbegin();
    TVarBodyTable::iterator fnded;
    //TVarBody* result = 0;

    while ( som != this->matchSessions.rend()) {

        TVarBodyTable varTable = ((*som)->varTable);
        fnded = varTable.find(vname);
        if (fnded != varTable.end()) {
            return  (*fnded).second;
        }

        ++som;
    }
    #ifdef DEBUG
    SYSTEMERROR("varieble not found in maps: " << vname);
    #endif
    return 0;
};

// ���� �� ���� �������
RefObject*  Session::getObjectByName(unistring name, Session *s) {
    ///todo: ��������� ������ �� ������ ���� � ���� ������, �� ������ ������ � ���
    std::map<unistring, RefModuleBase*>::reverse_iterator mod;
    RefObject* result = 0;
    //std::cout << "\n\n" << modules.size() << std::flush << "\n\n";


    for ( mod=this->modules.rbegin() ; mod != this->modules.rend(); ++mod ) {
        //std::cout << "\n\n" << mod->second->getName() << std::flush << "\n\n";

        if (result = mod->second->getObjectByName(name, s)) {
            return result;
        }
    }
    return 0;
};

// ���� ��������� ����� ��������
RefTemplateBridgeVar * Session::getTemplReturnBackPoint() {
    std::list<SessionOfMaching *>::reverse_iterator som;
    for (som = matchSessions.rbegin(); som != matchSessions.rend(); ++som ) {
        if ((*som)->templReturnBackPoint) {
            return (*som)->templReturnBackPoint;
        }
    }
    SYSTEMERROR("templReturnBackPoint NOT EXISTS");
};

unistring Session::varTableToText() {
    //std::string result = "";
    std::ostringstream s;
    s << "\n\nVARTABLES\t:[subsessions: " << this->matchSessions.size() << "]"<< "\n";
    //std::cout << "\n\nVARTABLES\t:[subsessions: " << this->matchSessions.size() << "]"<< "\n";

    std::list<SessionOfMaching *>::reverse_iterator som;
    for (som = matchSessions.rbegin(); som != matchSessions.rend(); ++som ) {
        s << "--=== Subsession: " << (*som) << "\n";
        TVarBodyTable tbl = (*som)->varTable;

        TVarBodyTable::iterator it;
        for (it = tbl.begin(); it != tbl.end(); ++it) {
            s << (*it).first << '\t' ;
            if ((*it).second) {
                s << vectorToString(((*it).second)->first, ((*it).second)->second) << '\n';
            } else {
                s << "$NULL" << '\n';
            }
        }
        s << "----------------------\n";
    }
    s << "======================\n";

    return s.str();
};




bool matchingBySession(Session *s, RefChain *tmplate, bool isdemaching);

/*  ������������ ������ � ����������. �������� ������ ���� ����������� (�.�. ������� ����� � ������ ����������)
    ������ ������ ���� � ������ (�� ������ ������ ��� ����� ����� �����. ������ ��� ��������)
    ���� ������ ������� ���� ������ ��������, �� ��� �� ������������� ����� ��������� ��������� �������
    ��������� ������ ������ �� ����� �������������

    ����� ����������� �������� ������� - ������ �.�. ��������. ��� ����� - �����
    ����� ��������� �������� ������� - ��� ����� ����� ��������� ��� ���������� ������

    ���� isdemaching==true, �� argleft � argrigh ������������.
    ���� isRevers==true, �� ������������� �����: ������� ������������� ��� �� �������������. ��� ��������� - �������
*/
bool  Session::matching(RefObject *initer, RefChain *tmplate, RefData *argleft, RefData *argrigh, bool isdemaching, bool isRevers) {
    if (isRevers && isdemaching) {
        return false;
    }

    bool succmatch = false;

    if (! isdemaching) {
        /// ����� ������������� � �������
        //  ��������� ����� ���� ������ � ����
        //  ������� ����� ��������������
        this->matchSessions.push_back( new SessionOfMaching(initer, argleft, argrigh) );
        //  showStatus();
        //  �������� �������
        succmatch = matchingBySession(this, tmplate, isdemaching);
    } else {
        /// ����������� ������� �������������, ������� � ����������� ��������� (������� ������� �������)
        //  ������������� ������ ���� ������ (���: ������ ���� �� ������� ����� ���������, ��� ��� �������������� ������� ������ ���� ������� ���� ����� - ��������� ���)
        //  ������ � ����� �������
        succmatch = matchingBySession(this, tmplate, isdemaching);
    }

    if (isRevers || !succmatch){
        // ���� ������ ��� �� ������ �� ������, �� �������� ��� ����������� (���������� �� �����, �������� ��������� ����� ����� � ���� �����)
        #ifdef DEBUG
        if (! this->matchSessions.size()) SYSTEMERROR("alarm");
        #endif
        delete this->matchSessions.back();
        this->matchSessions.pop_back();
    }

    //return (succmatch xor isRevers);
    return ((succmatch && !isRevers) || (!succmatch && isRevers));

};




bool matchingBySession(Session *s, RefChain *tmplate, bool isdemaching) {

    /** /
    std::cout << "\n\n###################################################\n";
    std::cout << "####\t" << s->getPole_zrenija()->toString() << "\n";
    std::cout << "####\t~\n";
    std::cout << "####\t" << tmplate->toString() << "\n";
    std::cout << "#######################################################\n";
    //std::cout << s->varTableToText();
    //s->showStatus();
    // */

//    std::cout << "\n\nMATCHING:\ntmpl: " << tmplate->toString();
//    std::cout << "\nargs: " << s->pole_zrenija.top()->toString();

    TResult
    pre_sost = isdemaching?BACK:GO,
               &result_sost = s->/*matchSessions.back()->*/result_sost;
    //result_sost;

    result_sost = isdemaching?BACK:GO;

    RefChain *args = s->getPole_zrenija();
    #ifdef DEBUG
    if (!args || !args->first || !args->second) {
        SYSTEMERROR("unexpected NULLs in session::matching arguments!");
    }
    #endif

    // ����������� ��� ��������: initialization(args->first, args->second);
    RefData *l=0, *r=0,
                     //*activeTemplate,
                     *&activeTemplate = s->matchSessions.back()->activeTemplate;

    activeTemplate = isdemaching?tmplate->second:tmplate->first; // ����: tmplate->second->pred - ��� ������ ��� ��������� �������. ������ tmplate->second ���� ����� ��������� ������

    l=r=s->getPole_zrenija()->first; // ��� isdemaching �� ����� - ��� ����� ������� ����� restore

    while (activeTemplate) {
        /* */
        #ifdef DEBUG
        std::cout << "\n" << s->step++ << ":>>   ";
        for (int i=1; i<s->fcalls; i++) {
            for (int j=1; j<i; j++) {
                std::cout << "\t";
            }
        }
        switch (result_sost) {
        case GO :
            std::cout << "GO   ";
            break;
        case BACK :
            std::cout << "BACK ";
            break;
        case ERROR :
            std::cout << "ERROR";
            break;
        default:
            std::cout << "???? ";
        }
        std::cout << " [s:"<< s->matchSessions.size() << "//" << s->matchSessions.back() <<"] ";
        //std::cout << "\n>>   " << (result_sost==GO?"GO":"BACK");
        std::cout << "\t" << activeTemplate->toString() << " \\"<<activeTemplate<<" \t\t~\t" /*<< getCurrentSopostStack().size()*/ << std::flush;
        std::cout << "\t";
        print_vector(r->next);
        s->message4nextpred = mERROR;
        #endif
        //*/
        pre_sost = result_sost;
        // ���� l � r  (l=r=pred)
        if (pre_sost==GO) {
            l = r; // ������� ���������� ����� ����������� - r - ����� ��������������� �������� ���������� ������� �����

            #ifdef DEBUG
            RefObject *lastowner = 0;
            if (s->getCurrentSopostStack()->empty()) {
                lastowner = 0;
            } else {
                lastowner = s->getCurrentSopostStack()->top()->owner;
            };
            #endif

            result_sost = activeTemplate->init(s, r); /// ��� ������
            if (result_sost == GO || result_sost == SUCCESS) { // ��������� �������� ��� �������� � SUCCESS ����� ��� ����������
                /// INIT -> GO
                if (l==r) { // r �� ���������� => ������
                    s->SaveTemplItem(activeTemplate, 0, l);
                } else {
                    move_to_next_point(l, 0, s);  ///
                    s->SaveTemplItem(activeTemplate, l, r);
                }
                //std::cout << "A: " << activeTemplate->toString() << "\n" << std::flush;
                //std::cout << "B: " << activeTemplate->next << "\n" << std::flush;
                move_to_next_point(activeTemplate, 0, s);
            } else
                if (result_sost == BACK) {
                    /// INIT -> BACK
                    // �� ��������� ������

                    #ifdef DEBUG
                    RefObject *newowner = 0;
                    if (s->getCurrentSopostStack()->empty()) {
                        newowner = 0;
                    } else {
                        newowner = s->getCurrentSopostStack()->top()->owner;
                    }
                    if (!lastowner  ||  lastowner != newowner) {
                        SYSTEMERROR("!lastowner  ||  lastowner != newowner,   \nlastowner=" << (lastowner?lastowner->toString():"null") << "\nnewowner=" << (newowner?newowner->toString():"null") );
                    }





                    #endif

                    //r = 0;
                    move_to_pred_point(activeTemplate, 0, s);
                }

        } else
            if (pre_sost==BACK) {
//s->showStatus();
                s->RestoreTemplItem(activeTemplate, l, r);
//s->showStatus();
                result_sost = activeTemplate->back(s, l, r); /// ��� �����
                if (result_sost == GO) {
                    /// BACK -> GO
                    #ifdef DEBUG
                    //if (!l) SYSTEMERROR("Unexpected situation: after back(l,r) method, l==null ! For simple variable it is mistake! Marat, prover - eli peremennaja ne prostaja, to vozmozhno nado ubrat etu proverku. Peremennaja: "+activeTemplate->toString() << "[" << activeTemplate << "]  BACK -> back() -> GO");
                    #endif

                    s->SaveTemplItem(activeTemplate, l, r);
                    //s->showStatus();
                    move_to_next_point(activeTemplate, 0, s);
                } else
                    if (result_sost == BACK) {
                        /// BACK -> BACK
                        // �� ��������� ������
                        //r = 0;
                        // �������� ��������� ��� ���������� - ���� �� ���� ������ ��� showStatus.
                        // ����� ������� ������ ��� varBridge, ���� ��� ����������� �� RefVariableBase
                        RefVariableBase* vart = dynamic_cast <RefVariableBase *>(activeTemplate);
                        if (vart && vart->getName() != EmptyUniString) {
                            //std::cout << "\n::::: del map for : " << vart->getName() << std::flush << "\n";
                            s->setVarBody(vart->getName(), 0);
                        }
                        move_to_pred_point(activeTemplate, 0, s);
                    }
            }

        switch (result_sost) {
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

        case SUCCESS :
            #ifdef DEBUG
            //LOG( "SUCCESS signal when maching!" );
            #endif
            return true;

        case FORCEBACK: {// ����� ������ ������ ��� ���������
            RefData *finish = 0;

            RefMatchingCutter* cutter = dynamic_cast<RefMatchingCutter*>(activeTemplate);
            if (cutter) {
                /// ���������
                #ifdef DEBUG
                s->showStatus();
                #endif
                // ��������� ���� ������������� ���������
                // � finish ��������� ��������� (������ ������) ������� ������������� � ���������
                while (s->getCurrentSopostStack()->size() != 1) {
                    //finish = dynamic_cast<RefData *>( s->getCurrentSopostStack()->top()->owner );
                    finish = (RefData *)( s->getCurrentSopostStack()->top()->owner );
                    LOG( ">> CUTTER BACKFORSE DROP: " << finish->toString() );
                    s->getCurrentSopostStack()->pop(); /// clean pered pop ?
                }
                //finish = dynamic_cast<RefData *>( s->getCurrentSopostStack()->top()->owner );
                finish = (RefData *)( s->getCurrentSopostStack()->top()->owner );


            } else {
                /// ������
                //RefBracketBase* br = dynamic_cast<RefBracketBase *>(activeTemplate);
                RefBracketBase* br = (RefBracketBase *)(activeTemplate);

                #ifdef DEBUG
                br = dynamic_cast<RefBracketBase *>(activeTemplate);
                if (!br) {
                    SYSTEMERROR("FORCEBACK not for barcket! But for : " << activeTemplate->toString());
                }
                #endif

                finish = br->getOther();

                while ( (! s->getCurrentSopostStack()->empty())  && s->getCurrentSopostStack()->top()->owner != finish) {
                    #ifdef DEBUG
                    if ( s->getCurrentSopostStack()->empty()) SYSTEMERROR("Empty getCurrentSopostStack() while FORCEBACKing when finish<>0");
                    #endif
                    LOG( ">> BACKFORSE DROP: " << s->getCurrentSopostStack()->top()->owner->toString() << " != " << (finish?finish->toString():"$null"));
                    s->getCurrentSopostStack()->pop(); /// clean pered pop ?
                }
            }

            #ifdef DEBUG
            if ( s->getCurrentSopostStack()->empty()) LOG( ">> BACKFORSE :  getCurrentSopostStack->empty !");
            #endif

            // ������ ������� �������� ������
            s->message4nextpred = mFORCEBACK;
            while (activeTemplate != finish) {
                LOG( ">> BACKFORSE forceback: " << activeTemplate->toString() );
                activeTemplate->forceback(s);  // �������������� ����� ����������
                move_to_pred_point(activeTemplate, 0, s);
            }
            ; // (


            //this->getCurrentSopostStack().pop(); /// clean pered pop ? // - for (
            //move_to_pred_point(activeTemplate, 0, this);
            result_sost = BACK;
        }
        break;

        default: break;
        }
    };

    /*
        std::cout << "\nActiveTemplate is NULL while matching: [" <<pre_sost<<']';
        std::cout << "\n>   tmpl:" << activeTemplate; if(activeTemplate) activeTemplate->print_inf();
        std::cout << "\n>>  vars:" << r; if(r) r->print_inf();
        std::cout << "\n>>> pre_sost:" << pre_sost << std::flush;
    */
    ///todo: ���� �����������������: �������� ������, ����� ���������� ������������� �������� ������� � ��������� -
    //SYSTEMERROR("ActiveTemplate is NULL while matching: [" << pre_sost << "]  ");
    //if (pre_sost == GO) return true; /// ?? ����� result_sost == GO ?
    if (result_sost == GO) return true; /// ?? ����� pre_sost == GO ?
    return false;

};

RefChain* Session::RightPartToObjectExpression(RefChain *src) { // ������� ������ ����� ��� ������������� - ����������� ����������
    //std::cout << "\n\nRightPartToObjectExpression( " << src->toString() << " )\n\n";
    //showStatus();
    RefChain* tmp = src->Copy( this );
    //std::cout << "RESULT RightPartToObjectExpression: " << tmp->toString()  << "\n" << std::flush;
    return tmp; ///todo: ���������

};






// ��������� ��������� ���������� �� ����� �������������
void Session::SaveTemplItem(RefData* v, RefData* l, RefData* r) {
    if (! dynamic_cast<IRefVarStacked *>(v)) return; /// ����. ������� ��������� �� ���
    //std::cout << "\n+++::\t" << v->toString() << "\t->\t" << vectorToString(l, r) << "      [" << getCurrentSopostStack()->size() << "]";

    // ���� ������ ����������� ������, ������ ��� ����
    RefBracketBase *rb = dynamic_cast<RefBracketBase *>(r);

    if (rb && (rb->isOpen()) && (!dynamic_cast<RefData_DOT *>(r))) {
        r = rb->getOther();
    }

    TVarBody *varBody = new TVarBody(l, r, v);      /// todo ... ��������� ��������� ������ ����������

    // ���������� �������� ���� �������������� �����������
    RefTemplateBridgeVar *bridge = dynamic_cast<RefTemplateBridgeVar *>(v);

    if (bridge) {

        /// ������ ����� ������ ������������ ���������� �������� ����
        if (! bridge->isOpen()) {      ///  [}]
            // ��������� ��������� ������������� � ���� ���������� (�������� ��������� ������� � ��������� ������� �������)
            SessionOfMaching *sess;
            do {
                sess = this->matchSessions.back();
                #ifdef DEBUG
                if (! sess) {
                    SYSTEMERROR("alarm!");
                }
                #endif
                varBody->sessStack.push_back(sess);
                this->matchSessions.pop_back();
            } while (! sess->templReturnBackPoint);
            //sess->templReturnBackPoint = 0; //??? �����?

            // ��������� ������ ������� ������������� (����������� �� ���, ��� ��� ������ ~ ����� �����. ~ ����� ���� ��� ����������)
            // ��������� �� ������ ������ ��� ������-����� �������������� � ������ ����������, �� ������ �� ������ �������� �������� � second
            RefData *leftSecond = getVarBody(bridge->getName())->second; /// todo ������� �����������. ��� ������������� �������������� ���������� � map
            #ifdef DEBUG
            if (getVarBody(bridge->getName())->first || l) SYSTEMERROR("Skobki !~ 0"); // ���������� ���������� �������� ���� �������� �� ���, ��� ������ ������� ���������� �������������� � ������ ����������. � ���� ���� ���������� - �� �������� ������ ���������
            #endif
            if (leftSecond != r) { // ���� �� �� ������ ���������
                varBody->first  = leftSecond->next;
                //varBody->second = ��� ����� ����
            } /*else {
                varBody ��� ����� ����
            }*/
            getCurrentSopostStack()->push( setVarBody(bridge->getName(), varBody) );

        } else {       ///  [{]
            //  ��������� ������������� � ���������� ���������
            getCurrentSopostStack()->push( setVarBody(bridge->getName(), varBody) );
            //  ������� ��������� ��� ������� - ������ ��������� ��� ������������� �������
            SessionOfMaching *sess = new SessionOfMaching(bridge, this);
            //  ������� ����������� ������ �������� � ����� ������������� - ������� �������� ������ �������������
            sess->StackOfDataSkob.push( matchSessions.back()->StackOfDataSkob.top()  );
            matchSessions.push_back(sess);
            //  ��������� ����� ������ �� ������ ��� ��������  }
            sess->templReturnBackPoint =  (RefTemplateBridgeVar *)bridge->other ;  //  }

        }

        //showStatus();
    } else {
        /// �� ������� ����������
        RefGroupBracket *group = dynamic_cast<RefGroupBracket *>(v);

        if (group) { /// ��������� ������
            if (group->isOpen()) { ///      {
                getCurrentSopostStack()->push( setVarBody(group->getName(), varBody) );
            } else {      ///      }.name
                RefData *leftSecond = getVarBody(group->getName())->second; /// todo ������� �����������. ��� ������������� �������������� ���������� � map
                #ifdef DEBUG
                if (getVarBody(group->getName())->first || l) SYSTEMERROR("Skobki !~ 0"); // ���������� ���������� �������� ����  � ����� �������� �� ���, ��� ������ ������� ���������� ��� ������ �������������� � ������ ����������. � ���� ���� ���������� - �� �������� ������ ���������
                #endif
                if (leftSecond != r) { // ���� �� �� ������ ���������
                    varBody->first  = leftSecond->next;
                    //varBody->second = ��� ����� ����
                } /*else {
                    varBody ��� ����� ����
                }*/
                getCurrentSopostStack()->push( setVarBody(group->getName(), varBody) );

            }
        } else {
            // ���� ������� �������� ���������� (����������� �� ����� ���������� - ��� �������), �� ...
            RefVariableBase* vart = dynamic_cast <RefVariableBase *>(v);

            if (vart && vart->getName() != EmptyUniString) {
                // ���� ���������� � ������, �� ����. � ����� ���������� � � �����
                getCurrentSopostStack()->push( setVarBody(vart->getName(), varBody) );
            } else {
                // ��� ��������� - ������ � �����
                getCurrentSopostStack()->push( varBody );
            }
        }
    }


};


void Session::RestoreTemplItem(RefData *owner, RefData* &l, RefData* &r) {
    if (! dynamic_cast<IRefVarStacked *>(owner)) return; /// ����. ������� ��������� �� ���
    //std::cout << "\n---::\t" << owner->toString() << "\t->\t" << vectorToString(l, r) << "      [" << getCurrentSopostStack()->size() << "]";

    RefTemplateBridgeVar *bridge = dynamic_cast<RefTemplateBridgeVar *>(owner);


    if (bridge) {
        if (bridge->isOpen()) {  ///  [{]
            delete matchSessions.back();   // �������� ��������� ��� ������� ����������
            matchSessions.pop_back();

            #ifdef DEBUG
            if (getCurrentSopostStack()->empty()) SYSTEMERROR("empty sopost stack!");
            if (getCurrentSopostStack()->top()->owner != owner) SYSTEMERROR("wrong owner for " << owner->toString() << " : " << getCurrentSopostStack()->top()->owner->toString() );
            #endif
            getCurrentSopostStack()->pop();

            return;
        } else {           ///   [}]

        }
    }

    #ifdef DEBUG
    if ( getCurrentSopostStack()->empty() ) {
        showStatus();
        SYSTEMERROR("empty stak!!!  " );
    }
    #endif

    TVarBody *varBody = getCurrentSopostStack()->top();
    getCurrentSopostStack()->pop();

    if (bridge && !bridge->isOpen()) { ///  [}]
        /// ������ ����� ����� �������� � ���������� �������� ����
        // ��������������� �������� ����� var-������ �����
        if (varBody->first) {
            // �������� ��������
            setVarBody(bridge->getName(), new TVarBody(0, varBody->first->pred, bridge->getOther()));
        } else {
            // ������ ��������
            setVarBody(bridge->getName(), new TVarBody(0, varBody->second, bridge->getOther()));
        }

        //  ����������: ��������� �� ���� ���������� ��� ��������� (������� � �������) ������������� � ������ �� ��������
        SessionOfMaching *sess;
        while (! varBody->sessStack.empty()) {
            sess = varBody->sessStack.back();
            this->matchSessions.push_back(sess);
            varBody->sessStack.pop_back();
        };

        //sess->templReturnBackPoint = bridge ;
        /// todo: ����� �� ���������� ������� ����� �������� � �������� �������������� � ������������, ��� ��� ���� ������� ��� ������ ����� ����������,
        /// �� ������ �� ���� �� ��������� �� ������ �����, �� ���������� ��������� ������� ���������� �������������.
        /// ������������ �� ���������� ������� �������, ���� � ��� ���������������� ����������, ������������ ����� �� ���������
        /// ������������� ������� (� �������) - �������� � ��������� ������� �������� ������
        /// ���� ������� ������������ - ����� � ���������� ������� �������

        //showStatus();
    }

    /// ��� ��������� ������ ������������ ������� ����������
    RefGroupBracket *group = dynamic_cast<RefGroupBracket *>(owner);

    if (group && !group->isOpen()) { /// }
        if (varBody->first) {
            // �������� ��������
            setVarBody(group->getName(), new TVarBody(0, varBody->first->pred, group->getOther()));
        } else {
            // ������ ��������
            setVarBody(group->getName(), new TVarBody(0, varBody->second, group->getOther()));
        }
    }

    #ifdef DEBUG
    if (varBody->owner != owner) {
        std::cout << "\n\n\size=" << getCurrentSopostStack()->size() << std::flush ;
        std::cout << "\ncall owner=" << owner << std::flush << owner->toString() << std::flush;
        std::cout << "\ntop  owner=" << varBody->owner << std::flush << varBody->owner->toString() << "\n\n" << std::flush;
        printf("\n");

        std::cout << "\n=======\nGetCurrentSopostStack::\n";
        while (! getCurrentSopostStack()->empty()) {
            std::cout << getCurrentSopostStack()->top()->toString() << "\n";
            getCurrentSopostStack()->pop();
        }
        std::cout << std::flush;

        showStatus();
        SYSTEMERROR("RestoreTemplItem for INCORRECT OWNER: " << std::flush << owner->toString() << "[" << owner << "] but " << varBody->owner->toString() << "[" << varBody->owner << "] expected!");
    }
    #endif
    l = varBody->first;
    r = varBody->second;

//showStatus();
    delete varBody;
//showStatus();
    //std::cout << "\nRestoreTemplItem::\t" << owner->toString() << "\t->\t" << vectorToString(l, r);
    return;
};






void Session::regModule(RefModuleBase *m) {
    //std::cout << "\n\n\n\nSession::regModule [" << m->getName() << "]  :: " << m->toString() << "\n\n\n\n";
    if (!m) SYSTEMERROR("Tring to load $null module!");
    modules[m->getName()] = m; // ������� ������ �������� - ����� �������������. ���� ������ �� �������� ��� ������ ����� ������
    m->initilizeAll(this);
    /// todo: ���������� � ���������������� ���������� ������ �� ������� � �������� �� ��������/������, �������� � ������������
};



// ���������� ������� �� ����� �� �������
RefFunctionBase * Session::findMethodFromModule(unistring fname) {
    #ifdef DEBUG
    if (modules.empty()) {
        SYSTEMERROR("No modules loaded!");
    }
    //else std::cout << "\n\n\n\n" << modules.size() << "\n\n\n\n";
    #endif

    /// todo: ��������� ������������� namespace:   < mymodule:myfunction   E.args >

    //std::map<unistring, RefModuleBase*>::iterator it;
    std::map<unistring, RefModuleBase*>::reverse_iterator it;
    RefFunctionBase *f = 0;

    // ����� �� �������
    //for (it = modules.end(); it!=modules.begin(); ) { // ������ �� ���� ��� ��������� ������ ����� ���������� (�� ������� �������� �������)
    //    it--;
    for (it = modules.rbegin(); it!=modules.rend(); ++it) { // ������ �� ���� ��� ��������� ������ ����� ���������� (�� ������� �������� �������)
        std::cout << "\n\n:::: " << it->first << " ::::\n\n" << std::flush;
        if (f = dynamic_cast<RefFunctionBase *>( it->second->getObjectByName(fname) )) {
            //LOG("implementation of " << fname << " finded (" << f << ") in " << it->first);
            return f;
        }
        //LOG("implementation of " << fname << " NOT FOUND in user-modules");
    }
    // ������� �� �������
    return 0;
};


unistring TVarBody::toString() {
    unistring s="VarBody for ";
    s+=owner->toString();
    s+=" with ";
    s+=vectorToString(first,second);
    return sss = s;
};


/*
DataForRepeater::DataForRepeater(RefData *o) {
        owner = o;
        from = to = step = mustbe = current_step = 0;
        leftPoint = 0;
};
*/

void Session::showStatus() {
    std::cout << "\n\n";
    std::cout << "************************************************************************\n";
    std::cout  << "[subsessions: " << this->matchSessions.size() << "]"<< "\n";

    std::list<SessionOfMaching *>::reverse_iterator som;
    for (som = matchSessions.rbegin(); som != matchSessions.rend(); ++som ) {
        std::cout << "\n--=== Subsession: " << (*som) << "\n";
        TVarBodyTable tbl = (*som)->varTable;

        std::cout << " varTable:\n";
        TVarBodyTable::iterator it;
        for (it = tbl.begin(); it != tbl.end(); ++it) {
            std::cout << "\t[ " << (*it).first << " ]\t" << std::flush;
            if ((*it).second) {
                std::cout << vectorToString(((*it).second)->first, ((*it).second)->second) << '\n';
            }
            //std::cout << "####:\t" << (*it).first << '\t' ;
            //if ((*it).second) { std::cout << ((*it).second)->toString() << '\n'; }
            else {
                std::cout << "$NULL" << '\n';
            }
        }

        std::cout << " : isfar=" << (*som)->isfar << "\n";
        std::cout << " : pole_zrenija=" << (*som)->pole_zrenija->toString()    << "\n";
        //std::cout << " : StackOfDataSkob=" << (*som)->StackOfDataSkob.size()    << "\n";
        std::cout << " : templReturnBackPoint=" << ((*som)&&(*som)->templReturnBackPoint ? (*som)->templReturnBackPoint->toString() : "$NULL")   << "\n";
        std::cout << " : StackOfSopost=" << (*som)->StackOfSopost.size()  << "  " << ((*som)->StackOfSopost.size() ? (*som)->StackOfSopost.top()->toString() : "") << "\n";
        //std::cout << " : StopBrackForceVar=" << ((*som)->StopBrackForceVar ? (*som)->StopBrackForceVar->toString() : "$NULL")   << "\n";


    }


    /*
    std::cout << "\n    pole_zrenija: size=" << pole_zrenija.size() << "  " << (pole_zrenija.empty() ? "" : pole_zrenija.top()->toString());
    std::cout << "\n    StopBrackForceVar: " << (StopBrackForceVar?StopBrackForceVar->toString():"null");
    std::cout << "\n    StacksOfSopost : size=" << StacksOfSopost.size();
    if (StacksOfSopost.size()) {    std::cout << "\n\t    StacksOfSopost.top() : size=" << StacksOfSopost.top()->size();   };
    std::cout << "\n    varTables : size=" << varTables.size() <<  varTableToText();
    std::cout << "\n    StackOfDataSkob : size=" << StackOfDataSkob.size() << std::flush;  std::cout << "  " << (StackOfDataSkob.empty() ? "" : StackOfDataSkob.top()->toString());
    std::cout << "\n    StackOfRepeatSkob : size=" << StackOfRepeatSkob.size() << "  " << (StackOfRepeatSkob.empty() ? "" : StackOfRepeatSkob.top()->toString());
    std::cout << "\n    StackOfRepeatSkobDoned : size=" << StackOfRepeatSkobDoned.size() << "  " << (StackOfRepeatSkobDoned.empty() ? "" : StackOfRepeatSkobDoned.top()->toString());
    std::cout << "\n    StackOfGroupSkob : size=" << StackOfGroupSkob.size() << "  " << (StackOfGroupSkob.empty() ? "" : StackOfGroupSkob.top()->toString());
    RefTemplateBridgeVar
    */
    std::cout << "************************************************************************\n";
    std::cout << "\n\n";

}



// ������� � ���������� ��������� (����� ��������������) ��� ������������� � ����� ����� ������
SessionOfMaching::SessionOfMaching(RefObject *own, RefData *argLeft, RefData *argRight){
                    owner = own;
                    //varTable = new TVarBodyTable();

                    isfar = false;
                    pole_zrenija = (new RefChain(argLeft, argRight))->aroundByDots();
                    //StackOfDataSkob.push(dynamic_cast<RefData_DOT *>(pole_zrenija->second));
                    StackOfDataSkob.push((RefData_DOT *)(pole_zrenija->second));
                    templReturnBackPoint = 0;
}

// ������� ����� ������ ���������. ����� ��� ������������� ������� �������� (���� ����� ��� ������������)
SessionOfMaching::SessionOfMaching(RefObject *own, Session *s){
                    owner = own;
                    isfar = true;
                    templReturnBackPoint = 0;
                    pole_zrenija = s->getPole_zrenija();
                    //StopBrackForceVar = 0;
}

// ������� ����� �������������� � ��������� ������
SessionOfMaching::~SessionOfMaching(){
                    if (!isfar){ // �� ����� ���� ������ (�� ������� ������)
                        //std::cout << "\nown: " << owner->toString() << "\n\n" << std::flush ;
                        if (dynamic_cast<RefCondition *>(owner)){
                            //std::cout << "\ndel: " << pole_zrenija->toString();
                            pole_zrenija->clear();
                        } else {
                            // ��������  �������
                            delete pole_zrenija->first;  // � ����������� ������ ������� ����� �������������
                            delete pole_zrenija->second; // � ����������� ������ ������� ����� �������������
                        }
                    }
                    // ������ ������
                    //LOG(" garbage collector nema!");
}

