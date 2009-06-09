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
    #ifdef TESTCODE
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

        bool tmpBoolForMSVC = true;
        while ( som != varItem->sessStack.rend()) {

            TVarBodyTable varTable = ((*som)->varTable);
            fnded = varTable.find(vname);
            if (fnded != varTable.end()) {
                varItem  = (*fnded).second;
                tmpBoolForMSVC = false;
                break;
            }

            ++som;
        }

        if (tmpBoolForMSVC) {
            SYSTEMERROR("subVariable not found : " << path << "  for  " << toString());
        }

    } while (t_to != std::string::npos);

    return varItem;

};


Session::Session() {
    globalData = new RefChain();
    fcalls = 1;
    step = 0;
};

Session::~Session() {
};

TVarBody* Session::setVarBody( unistring vname, TVarBody* vb) {
    #ifdef TESTCODE
    if (! matchSessions.size()) {
        showStatus();
        SYSTEMERROR("matchSessions is EMPTY!");
    }
    #endif
    ( matchSessions.back()->varTable )[ vname ] = vb;
    //std::cout << "\nSET " << vname << " := " << std::flush << (vb?vb->toString():"$null") << std::flush;
    return vb;
};


TVarBody* Session::getVarBody( unistring vname, RefData* owner) {
    #ifdef TESTCODE
    if (this->matchSessions.empty()) SYSTEMERROR("matchSessions is EMPTY!");
    #endif

    std::list<SessionOfMaching *>::reverse_iterator som = this->matchSessions.rbegin();
    TVarBodyTable::iterator fneeded;
    //TVarBody* result = 0;

    while ( som != this->matchSessions.rend()) {

        TVarBodyTable varTable = ((*som)->varTable);
        fneeded = varTable.find(vname);
        if (fneeded != varTable.end() && (!owner || owner==(*fneeded).second->owner)) {
            return  (*fneeded).second;
        }

        ++som;
    }
    #ifdef TESTCODE
    SYSTEMERROR("varieble not found in maps: " << vname);
    #endif
    return 0;
};


// ���� �� ���� �������
RefObject*  Session::getObjectByName(unistring name, Session *s) {
    ///todo: ��������� ������ �� ������ ���� � ���� ������, �� ������ ������ � ���
    std::map<unistring, RefModuleBase*>::reverse_iterator mod;
    RefObject* result = 0;

    for ( mod=this->modules.rbegin() ; mod != this->modules.rend(); ++mod ) {

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




bool matchingBySession(Session *s, RefChain *tmplateChain, bool isdemaching);

/*  ������������ ������ � ����������. �������� ������ ���� ����������� (�.�. ������� ����� � ������ ����������)
������ ������ ���� � ������ (�� ������ ��������� �������� ��� ����� ����� �����. ������ ��� ��������)
���� ������ ������� ���� ������ ��������, �� ��� �� ������������� ����� ��������� ��������� �������
��������� ������ ������ �� ����� �������������

����� ����������� �������� ������� - ������ �.�. ��������. ��� ����� - �����
����� ��������� �������� ������� - ��� ����� ����� ��������� ��� ���������� ������

���� isdemaching==true, �� argleft � argrigh ������������.
���� isRevers==true, �� ������������� �����: ������� ������������� ��� �� �������������. ��� ��������� - �������
*/
bool  Session::matching(RefObject *initer, RefChain *tmplateChain, RefData *argleft, RefData *argright, bool isdemaching, bool isRevers) {
    if (isRevers && isdemaching) {
        return false;
    }

    bool succmatch = false;

    if (! isdemaching) {
        /// ����� ������������� � �������
        //  ��������� ����� ���� ������ � ����
        //  ������� ����� ��������������
        this->matchSessions.push_back( new SessionOfMaching(initer, argleft, argright) );
        //  showStatus();
        //  �������� �������
        succmatch = matchingBySession(this, tmplateChain, isdemaching);
    } else {
        /// ����������� ������� �������������, ������� � ����������� ��������� (������� ������� �������)
        //  ������������� ������ ���� ������ (���: ������ ���� �� ������� ����� ���������, ��� ��� �������������� ������� ������ ���� ������� ���� ����� - ��������� ���)
        //  ������ � ����� �������
        succmatch = matchingBySession(this, tmplateChain, isdemaching);
    }

    if (isRevers || !succmatch) {
        // ���� ������ ��� �� ������ �� ������, �� �������� ��� ����������� (���������� �� �����, �������� ��������� ����� ����� � ���� �����)
        #ifdef TESTCODE
        if (! this->matchSessions.size()) SYSTEMERROR("alarm");
        #endif
        delete this->matchSessions.back();
        this->matchSessions.pop_back();
    } else {
        // ������ �������������. ��������� ������
        if (dynamic_cast<RefCondition *>( initer)) {
            int i = 0;
            i++;
        };

    }

    //return (succmatch != isRevers);
    return ((succmatch && !isRevers) || (!succmatch && isRevers));

};




#ifdef DEBUG
#define LOGSTEP(sss) {    \
    std::cout << "\n" << s->step++ << ":>>   "; \
    for (int i=1; i<s->fcalls; i++) {   \
        for (int j=1; j<i; j++) {   \
            std::cout << "\t";  \
        }   \
    }   \
    std::cout << sss; \
    std::cout << " [s:"<< s->matchSessions.size() <<    \
    std::cout << "]\t" << activeTemplate->toString() << " \\"<<activeTemplate; \
    if (sss=="GO  ") { \
        std::cout <<" \t\t~\t"  << std::flush; \
        std::cout << "\t"; \
        print_vector(r?r->getNext():0); \
    } \
}
#else
#define LOGSTEP(s)
#endif





bool matchingBySession(Session *s, RefChain *tmplateChain, bool isdemaching) {
    LOG("New MATCHING : tmplateChain=" << tmplateChain->toString() << "  isDematching="<<isdemaching);
    TResult    &result_sost     = s->result_sost;
    SessionOfMaching * subsess  = s->matchSessions.back();
    RefData * activeTemplate, * l, * r;

    l = r = 0;
    //activeTemplate = s->matchSessions.back()->activeTemplate;

    if (isdemaching) {
        result_sost = BACK;
        activeTemplate = tmplateChain->second;
    } else {
        result_sost = GO;
        r = s->getPole_zrenija()->first;
        activeTemplate = tmplateChain->first;
    }


    // ������ �������� - ������ ��� RefData_DOT
    if (! ref_dynamic_cast<RefData_DOT>(activeTemplate)) {
        SYSTEMERROR("test: " << activeTemplate->toString());
    }

    LOG("\n\n~~~ " << tmplateChain->toString() << "  ~~  " << s->getPole_zrenija()->toString());

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
            result_sost = activeTemplate->init(activeTemplate, s, l, r); /// ��� ������
            break;
        }
        case BACK: {
            LOGSTEP("BACK");
            result_sost = activeTemplate->back(activeTemplate, s, l, r); /// ��� �����
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




RefChain* Session::RightPartToObjectExpression(RefChain *src) { // ������� ������ ����� ��� ������������� - ����������� ����������
    //std::cout << "\n\nRightPartToObjectExpression( " << src->toString() << " )\n\n";
    //showStatus();
    RefChain* tmp = src->Copy( this );
    //std::cout << "RESULT RightPartToObjectExpression: " << tmp->toString()  << "\n" << std::flush;
    return tmp; ///todo: ���������

};



// ��������� ��������� ���������� �� ����� �������������
void Session::SaveTemplItem(RefData* v, RefData* l, RefData* r) {
    #ifdef TESTCODE
    if (! v->IRefVarStacked()) {
        SYSTEMERROR("unexpected"); /// ����. ������� ��������� �� ���
    }
    #endif
    //std::cout << "\n+++::\t" << v->toString() << "\t->\t" << vectorToString(l, r) << "      [" << getCurrentSopostStack()->size() << "]";
    //std::cout << "\nSaveTemplItem::\t" << v->toString() << "\t->\t" << vectorToString(l, r);

    // ���� ������ ����������� ������, ������ ��� ����
    RefBracketBase *rb = ref_dynamic_cast<RefBracketBase >(r);
    if (rb && (rb->is_opened) && (!ref_dynamic_cast<RefData_DOT >(r))) {
        r = rb->getOther();

    }

    TVarBody *varBody = new TVarBody(l, r, v);      /// todo ... ��������� ��������� ������ ����������

    // ���������� �������� ���� �������������� �����������
    RefTemplateBridgeVar *bridge = ref_dynamic_cast<RefTemplateBridgeVar >(v);

    if (bridge) {

        /// ������ ����� ������ ������������ ���������� �������� ����
        if (! bridge->is_opened) {      ///  [}]
            // ��������� ��������� ������������� � ���� ���������� (�������� ��������� ������� � ��������� ������� �������)
            SessionOfMaching *sess;
            do {
                sess = this->matchSessions.back();
                #ifdef TESTCODE
                if (! sess) {
                    SYSTEMERROR("alarm!");
                }
                #endif
                varBody->sessStack.push_back(sess);
                this->matchSessions.pop_back();
            } while (! sess->templReturnBackPoint); /// ��������������?


            // ��������� ������ ������� ������������� (����������� �� ���, ��� ��� ������ ~ ����� �����. ~ ����� ���� ��� ����������)
            // ��������� �� ������ ������ ��� ������-����� �������������� � ������ ����������, �� ������ �� ������ �������� �������� � second
            RefData *leftSecond = getVarBody(bridge->getName())->second; /// todo ������� �����������. ��� ������������� �������������� ���������� � map
            #ifdef TESTCODE
            if (getVarBody(bridge->getName())->first || l) SYSTEMERROR("Skobki !~ 0"); // ���������� ���������� �������� ���� �������� �� ���, ��� ������ ������� ���������� �������������� � ������ ����������. � ���� ���� ���������� - �� �������� ������ ���������
            #endif
            if (leftSecond != r) { // ���� �� �� ������ ���������
                varBody->first  = leftSecond->getNext();
                //varBody->second = ��� ����� ����
            } /*else {
			  varBody ��� ����� ����
			  }*/
            getCurrentSopostStack()->push( setVarBody(bridge->getName(), varBody) );

        } else {     ///  [{]
            //  ��������� ������������� � ���������� ���������
            getCurrentSopostStack()->push( setVarBody(bridge->getName(), varBody) );
            //  ������� ��������� ��� ������� - ������ ��������� ��� ������������� �������
            SessionOfMaching *sess = new SessionOfMaching(bridge, this);
            //  ������� ����������� ������ �������� � ����� ������������� - ������� �������� ������ �������������
            sess->StackOfDataSkob.push( matchSessions.back()->StackOfDataSkob.top()  );
            matchSessions.push_back(sess);
            //  ��������� ����� ������ �� ������ ��� ��������  }
            sess->templReturnBackPoint =  (RefTemplateBridgeVar *)bridge->getOther() ;  //  }

        }

        //showStatus();
    } else  {
        /// �� ������� ����������
        RefGroupBracket *group = ref_dynamic_cast<RefGroupBracket >(v);

        if (group) { /// ��������� ������
            if (group->is_opened) { ///      {
                getCurrentSopostStack()->push( setVarBody(group->getName(), varBody) );
            } else {    ///      }.name
                RefData *leftSecond = getVarBody(group->getName())->second; /// todo ������� �����������. ��� ������������� �������������� ���������� � map
                #ifdef TESTCODE
                if (getVarBody(group->getName())->first || l) SYSTEMERROR("Skobki !~ 0"); // ���������� ���������� �������� ����  � ����� �������� �� ���, ��� ������ ������� ���������� ��� ������ �������������� � ������ ����������. � ���� ���� ���������� - �� �������� ������ ���������
                #endif
                if (leftSecond != r) { // ���� �� �� ������ ���������
                    varBody->first  = leftSecond->getNext();
                    //varBody->second = ��� ����� ����
                } /*else {
				  varBody ��� ����� ����
				  }*/
                getCurrentSopostStack()->push( setVarBody(group->getName(), varBody) );

            }
        } else {
            // ���� ������� �������� ���������� (����������� �� ����� ���������� - ��� �������), �� ...
            RefVariableBase* vart = ref_dynamic_cast <RefVariableBase >(v);

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


void Session::RestoreTemplItem(RefData *owner, RefData* &l, RefData* &r ) {
    //void Session::RestoreTemplItem(RefData *owner, RefData* &l, RefData* &r) {
    #ifdef TESTCODE
    if (! owner->IRefVarStacked() ) SYSTEMERROR("not right using"); /// ����. ������� ��������� �� ���
    #endif
    //std::cout << "\n---::\t" << owner->toString() << "\t->\t" << vectorToString(l, r) << "      [" << getCurrentSopostStack()->size() << "]";

    RefTemplateBridgeVar *bridge = ref_dynamic_cast<RefTemplateBridgeVar >(owner);

    if (bridge) {
        if (bridge->is_opened) {  ///  [{]
            delete matchSessions.back();   // �������� ��������� ��� ������� ����������
            matchSessions.pop_back();

            #ifdef TESTCODE
            if (getCurrentSopostStack()->empty()) SYSTEMERROR("empty sopost stack!");
            if (getCurrentSopostStack()->top()->owner != owner) SYSTEMERROR("wrong owner for " << owner->toString() << " : " << getCurrentSopostStack()->top()->owner->toString() );
            #endif
            getCurrentSopostStack()->pop();

            return;
        } else {         ///   [}]

        }
    }

    #ifdef TESTCODE
    if ( getCurrentSopostStack()->empty() ) {
        showStatus();
        SYSTEMERROR("empty stak!!!  " );
    }
    #endif

    TVarBody *varBody = getCurrentSopostStack()->top();
    getCurrentSopostStack()->pop();

    if (bridge && !bridge->is_opened) { ///  [}]
        /// ������ ����� ����� �������� � ���������� �������� ����
        // ��������������� �������� ����� var-������ �����
        if (varBody->first) {
            // �������� ��������
            setVarBody(bridge->getName(), new TVarBody(0, varBody->first->getPred(), bridge->getOther()));
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
    RefGroupBracket *group = ref_dynamic_cast<RefGroupBracket >(owner);

    if (group && !group->is_opened) { /// }
        if (varBody->first) {
            // �������� ��������
            setVarBody(group->getName(), new TVarBody(0, varBody->first->getPred(), group->getOther()));
        } else {
            // ������ ��������
            setVarBody(group->getName(), new TVarBody(0, varBody->second, group->getOther()));
        }
    }

    #ifdef TESTCODE
    if (varBody->owner != owner) {
        #ifdef DEBUG
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
        #endif
        SYSTEMERROR("RestoreTemplItem for INCORRECT OWNER: " << std::flush << owner->toString() << "[" << owner << "] but " << varBody->owner->toString() << "[" << varBody->owner << "] expected!");
    }
    #endif
    l    = varBody->first;
    r    = varBody->second;

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
    #ifdef TESTCODE
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
        //std::cout << "\n\n:::: " << it->first << " ::::\n\n" << std::flush;
        RefObject *oo = it->second->getObjectByName(fname);
        if (oo && (f=ref_dynamic_cast<RefFunctionBase >( oo ))) {
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
    return s;
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
SessionOfMaching::SessionOfMaching(RefObject *own, RefData *argLeft, RefData *argRight) {
    owner = own;

    isfar = false;
    pole_zrenija = (new RefChain(argLeft, argRight))->aroundByDots();

    StackOfDataSkob.push((RefData_DOT *)(pole_zrenija->second));
    templReturnBackPoint = 0;
}


// ������� ����� ������ ���������. ����� ��� ������������� ������� �������� (���� ����� ��� ������������)
SessionOfMaching::SessionOfMaching(RefObject *own, Session *s) {
    owner = own;
    isfar = true;
    templReturnBackPoint = 0;
    pole_zrenija = s->getPole_zrenija();
    //StopBrackForceVar = 0;
}


// ������� ����� �������������� � ��������� ������
SessionOfMaching::~SessionOfMaching() {
    if (!isfar) { // �� ����� ���� ������ (�� ������� ������)
        if (ref_dynamic_cast<RefCondition >(owner)) {
            pole_zrenija->clear();
        } else {
            // ��������  �������
            delete pole_zrenija->first;  // � ����������� ������ ������� ����� ������������� (dearound ?)
            delete pole_zrenija->second; // � ����������� ������ ������� ����� ������������� (dearound ?)
        }
    }

    while ( !StackOfSopost.empty()) {
        delete StackOfSopost.top();
        StackOfSopost.pop();
    }
    // ������ ������
    //LOG(" garbage collector nema!");
}

