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

#include "RefSymbolBase.hxx"
#include "rfunction.h"
#include "kernel.h"
#include "datastructs.h"
#include "evalutor.h"

RefFunctionBase::RefFunctionBase(){};
RefFunctionBase::~RefFunctionBase(){};



RefSentence::RefSentence() : RefObject() {
    leftPart = rightPart = 0;
};
RefSentence::RefSentence(RefChain *l, RefChain *r) : RefObject() {
    leftPart = l;
    rightPart = r;
};
unistring RefSentence::toString(){
    //return "$RefSentence: Lp="+(leftPart?leftPart->toString():"$notset")+"   Rp="+(rightPart?rightPart->toString():"$noset");
    return sss = "\t\t\t"+(leftPart?leftPart->toString():"$notset")+"   ::==   "+(rightPart?rightPart->toString():"$noset");
};




RefObject* RefUserModule::getObjectByName(unistring name, Session *s){
    return objects[name];
};


unistring RefUserModule::toString(){
            unistring result = "";
            std::map<unistring, RefObject*>::iterator it;
            RefUserFunction *f = 0;
            for (it = objects.begin(); it!=objects.end(); it++){
                result += it->first;
                if (f = dynamic_cast<RefUserFunction *>(it->second)){
                    result += " {\n";
                    std::list<RefSentence *>::iterator sit;
                    for (sit = f->body.begin(); sit!=f->body.end(); sit++){
                        result += (*sit)->toString();
                        result += ";\n";
                    };
                    result += "}\n\n";
                } else {
                    result += ": ";
                    result += it->second->toString();
                    result += "\n";
                }

            };
            return sss = result;
};



void RefUserModule::initilizeAll(Session *s){
    while (! initItems.empty()){
        initItems.top()->initize(s);
        initItems.pop();
    };
};





unistring RefUserFunction::toString() {
        std::string result = "";
        result += " {\n";
        std::list<RefSentence *>::iterator sit;
        for (sit = body.begin(); sit!=body.end(); sit++){
            result += (*sit)->toString();
            result += ";\n";
        };
        result += "}\n\n";

        return sss = "RefUserFunction::" + name + result;

};


/// ��������� - ����� ������� ��
bool RefUserFunction::execute(RefData *argfirst, RefData *argsecond, Session *s){

    //long &dc = co::datacount;


s->fcalls++;
        RefData *ldot;
        RefData *rdot;

        if (!argfirst){
            // ������ ��������
            ldot = argsecond;
        } else {
            ldot = argfirst ->pred;
        }
        rdot = argsecond->next;
        #ifdef DEBUG
        // ������ ���������� ������ ��� ����� ������� => �������� ���-��. ����� ���� �� �������� ����� ���������
        if (! ldot )
            SYSTEMERROR("RefUserFunction::execute( argfirst->pred != RefDATA not null, ...) !\RefUserFunction::execute( " << RefChain(argfirst, argsecond).toString() << " )");
        if (! rdot )
            SYSTEMERROR("RefUserFunction::execute(..., argsecond->next != RefDATA not null) !\RefUserFunction::execute( " << RefChain(argfirst, argsecond).toString() << " )");
        #endif


    LOG(s->step++ <<  "::  <" << getName() << " " << std::flush << RefChain(argfirst,argsecond).toString() << " >  ###############################################################" );


    std::list<RefSentence *>::iterator sent = body.begin(); // ������� ����������� �������
    bool reslt = false;

    do {
        LOG(s->step++ <<  "::  \ttring this: " << (*sent)->toString() );
        // s->showStatus();

        /// todo: ������� ��� ����� ������ ������ ��� ������� ����������� �������
        SessionOfMaching* stateBeforeMatch = s->matchSessions.back();

        if (s->matching(*sent, (*sent)->leftPart, argfirst, argsecond, false, false)){
            LOG(s->step++ <<  "\tsucessfull!");
            //s->showStatus();

            RefChain *newoe = s->RightPartToObjectExpression( (*sent)->rightPart ); // ������� ����� rightPart'� � ������� ���������� �� ��������

            /// todo: ���������� �� ��������� �����, ������� ������ newoe � ���������� ������. ��������� ���������� �������.
            // ������ ������������ �����:
            while (s->matchSessions.back() != stateBeforeMatch){
                delete s->matchSessions.back();
                s->matchSessions.pop_back();
            } // ����� ������������� ������

            // ������� ������ ������ ����������
            if (ldot->next != rdot){
                delChain(ldot->next, rdot->pred);
            }
            // ��������� ����� ������
            if (newoe->first){
                ldot->next = newoe->first;
                newoe->first->pred = ldot;
                #ifdef DEBUG
                if (!newoe->second) SYSTEMERROR("newoe->first && ! newoe->second ");
                #endif
                rdot->pred = newoe->second;
                newoe->second->next = rdot;
            } else {
                ldot->next = rdot;
                rdot->pred = ldot;
            }

            // ��� �� ���� ������� ���������� newoe! ��� ���������� �������� � ���� ������
            delete newoe; // ������� ������ _��������_ ������� - ����� ������ ������� � ���� ������

            reslt = true;
        } else {
            // �� ���� ���� ������� ���������� �� ������, �� � ��� ���������� ����� � ��������� ��������� � �������� ������
            #ifdef DEBUG
            if (stateBeforeMatch != s->matchSessions.back()) SYSTEMERROR("unbalansed sub-sessions and recover-dots"); // ��...
            #endif
            sent++;
        }
    } while (!reslt && sent != body.end());  // std: body.end() - ������� ����� ����������

s->fcalls--;
    return reslt;
};





RefDllModule::RefDllModule() : RefModuleBase() {
//        std::cout << "\nRefDllModule::RefDllModule() : " << (long)this << "\n";
};

RefDllModule::~RefDllModule() {
//        std::cout << "\nRefDllModule::~RefDllModule() : " << (long)this << "\n";
};

RefObject* RefDllModule::getObjectByName(unistring nm, Session *s){ return objects[nm]; };

void RefDllModule::setObjectByName(unistring name, RefObject* o){
    objects[name] = o;
};


unistring RefDllModule::toString(){
        std::ostringstream s;
        s << "RefDllModule[ objects: " << (objects.size()) << " ]" ;
        return sss = s.str();
};

RefBuildInFunction::RefBuildInFunction(unistring name, RefDllModule *m) : RefFunctionBase() {
    m->setObjectByName(name, this);
};


bool RefBuildInFunction::execute(RefData* lp, RefData* rp, Session* s){
    LOG( "\n====================================\n< " << this->getName() << std::flush << " " << vectorToString(lp, rp) << " >" );
    // �������� �������
    RefData *lold, *rold=0;
    if (! lp){ // ������ ������
        #ifdef DEBUG
        if (!rp) SYSTEMERROR("!lp && !rp");
        #endif
        lold = rp;
        if (lold) {
            rold = rp->next;
        };
    } else {
        lold = lp->pred;
        rold = rp->next;
    };
    // �������� �������
    RefChain *result = new RefChain();
    if (! this->eval(lp, rp, result, s)){
            // �� ��������� �������
            delete result;
            return false;
    };

    // ������ ������ ������
    if (lp) {
        delChain(lp, rp);
    }

    // ������� ���������. ��������� � result
    if (! result->first){
        // �� ������ ������
        lold->next = rold;
        rold->pred = lold;
        delete result; // ?
        return true;
    };

    lold->next = result->first;
    rold->pred = result->second;
    result->first->pred = lold;
    result->second->next = rold;

    delete result;
    return true;
};


// matching  � ������ �������� ��� ��������������� ���������. � ������ ������ - ��������� ���������
// �� ���� �����-������� �� ������ ��������������� ����� ���������. ������� ��������� �������� ��������� (��������)
TResult  RefCondition::init(Session* s, RefData *&l){
    /// todo: ���� �� �����. ������� ����� ���� ������ �������� ������� � �������������� � ������ ���������� �� � �����
    /// ������ ��� ������� � ����������� ����� ����� ���������, ��� ��� ������-�� � ������ ���������
    /// ��� ������� - ������� �������� ����� ������ ��������; ����� �������� ������� ��� �������

    if (dynamic_cast<RefFunctionBase *>(own)){
        // ������� ��� ����������� ������� ����� ���� ������ � ����� ������� � �������������� � ������ ���������� � �����,
        // � ������� �� ������� � ����� ����������������� �������
        RefData_DOT *d = dynamic_cast<RefData_DOT *>(l->next);
        if (!d){
            return BACK;
        }
    }

    //s->showStatus();
    RefChain *newpz = s->RightPartToObjectExpression(this->rightPart);  /// todo: ��� ��������� - ���-�� ��� �� � ��������

    //std::cout << "\nCOND-EVALUTE:::\t" << newpz->toString() << " : " << this->leftPart->toString();

    newpz = evalutor(newpz, s);

    //std::cout << "\nCOND-EVALUTE-OO:\t" << newpz->toString() << " : " << this->leftPart->toString();

    if (s->matching(this, this->leftPart, newpz->first, newpz->second, false, isReverse )){
        /// Go->Go
        //std::cout << "\n\nCOND-RETURN:::\tinit-> GO" << std::flush << "\n\n\n";
        //std::cout << "s.sopost.top: " << s->getCurrentSopostStack()->top()->toString() << flush;
        return (GO);
    } else {
        /// Go->Back
        //std::cout << "\nCLEAR: " << newpz->toString() << "\n\n" << flush;
        //���. � ����������� ���������: newpz->clear(); // ������������� ��������� - �������
        delete newpz;
        //std::cout << "\n\nCOND-RETURN:::\tinit-> BACK" << std::flush << "\n\n\n";
        //s->showStatus();
        return (BACK);
    }

};

TResult  RefCondition::back(Session* s, RefData *&l, RefData *&r){
    if (!isReverse && s->matching( this, this->leftPart, 0, 0, true, false)){ // ���������� ����� ���������
        /// Back->Go
        //std::cout << "\n\nCOND-RETURN:::\tback-> GO" << std::flush << "\n\n\n";
        return GO;
    } else {
        /// Back->Back
        //std::cout << "\n\nCOND-RETURN:::\tback-> BACK" << std::flush << "\n\n\n";
        return BACK;
    }

};





RefTemplateBase::RefTemplateBase(unistring name) : RefModuleBase(name) {
};

RefUserTemplate::RefUserTemplate(unistring name, RefChain *lp) : RefTemplateBase(name) {
    if (lp) {
        setLeftPart(lp);
    } else {
        leftPart = 0;
    }
};

void RefUserTemplate::setLeftPart(RefChain *lp){
    // ��������� ����� � ������ ���� �������
    RefTemplateBridgeTmpl *lbr = new RefTemplateBridgeTmpl(), *rbr = new RefTemplateBridgeTmpl(lbr, 0);
    lp->first = lp->first->predInsert(lbr);
    lp->second = lp->second->afterInsert(rbr);

    //std::cout << "newlp: " << lp->toString() << "\n" << std::flush;
    leftPart = lp;
};





/****************  ���������� ( ���������� )  *****************
**************************************************************/
TResult  RefTemplateBridgeVar::init(Session* s, RefData *&l){
    if (this->isOpen()){  //  {
        #ifdef DEBUG
        if (! dynamic_cast<RefTemplateBridgeVar*>(this->other) ) SYSTEMERROR("not RefTemplateBridgeVar pair!");
        #endif
        /// ������ ������������� ����������
        /* --== ���������� � Session::SaveTemplItem, �.�. ��� ���������� varMap, ������� ���� ������ ��� ��� �������� �������� � �� ��� �����
        //  ����������: ������� ��������� ��� ������� - ������ ��������� ��� ������������� �������
        SessionOfMaching *sess = new SessionOfMaching(s->getPole_zrenija());
        //  ������� ����������� ������ �������� � ����� ������������� - ������� �������� ������ �������������
        sess->StackOfDataSkob.push( s->matchSessions.back()->StackOfDataSkob.top()  );
        s->matchSessions.push_back(sess);
        //  ����������: ��������� ����� ������ �� ������ ��� ��������  }
        sess->templReturnBackPoint =  (RefTemplateBridgeVar *)this->other ;  //  }
        */

        return GO;
    } else {             //  }
        /// �������� ������������� ����������
        /*  --== �������� ���������� � Session::SaveTemplItem ��� ���������� ��������� � ���� ���������� */
        return GO;
    }
};

RefData*  RefTemplateBridgeVar::next_point( ThisId var_id, Session *s){
    if (this->isOpen()){
        // ��������� �� ����������� ������-���� ������ �������
        // �� ���� ������ ��� ������ ���� ��������� (��� ������������� ������ ����� ��������)
        #ifdef DEBUG
        if (! this->bridge) SYSTEMERROR("bridge back-dot not found!");
        #endif
        return this->bridge;
    } else {
        #ifdef DEBUG
        s->showStatus();
        #endif
        return next; //?
    }
};


TResult  RefTemplateBridgeVar::back(Session* s, RefData *&l, RefData *&r){
    if (this->isOpen()){  //  [{]
        /// ��������� ������������� ���������� �������� ����
        //  ����������: ������� ��������� ��� ���������� � �������� ������
//s->showStatus();
        //delete s->matchSessions.back();
        //s->matchSessions.pop_back();
//s->showStatus();
        //  ����������: �������� ����� ��������
        //sess->templReturnBackPoint.pop();
        //s->matchSessions.back()->templReturnBackPoint = 0;

        return BACK;
    } else {              //  [}]
        /// ����� � ����� �������� �������������� ���������� ����������������� ����
        /* --== ���������� � Session::RestoreTemplItem */
        //s->showStatus();
        return BACK;
    }
};

RefData*  RefTemplateBridgeVar::pred_point( ThisId var_id, Session *s){
    if (this->isOpen()){
        return pred; //?
    } else {
        // ��������� �� ���� ������-���� ������ �������
        // �� ���� ������ ��� ������ ���� ��������� (��� ������������� ������ ����� ��������)
        #ifdef DEBUG
        if (! this->bridge) SYSTEMERROR("bridge back-dot not found!");
        #endif
        if (s->message4nextpred == mFORCEBACK) return pred;
        return this->bridge;
    }
};


/**************  ���������� ( $Template ) ********************
**************************************************************/
TResult  RefTemplateBridgeTmpl::init(Session* s, RefData *&l){
    if (this->isOpen()){  //  {
        /// ������ ������������� �������� �������
        //  ������:  � ���������� ���� ������� ��������� � ����� ��������
        return GO;
    } else {              //  }
        /// �������� ������������� �������� �������
        //  ������:  � ���������� ����� ������ ����� ��������, ��������� ����� ���������� � ���� ����������
        return GO;
    }
};

RefData*  RefTemplateBridgeTmpl::next_point( ThisId var_id, Session *s){
    if (this->isOpen()){  //  {
        return next;
    } else {              //  }
        #ifdef DEBUG
        if (s->matchSessions.empty()) SYSTEMERROR("no sessions!");
        if (! s->getTemplReturnBackPoint()) {
            s->showStatus(); SYSTEMERROR("bridge back-dot not found!");
        }
        #endif

        return s->getTemplReturnBackPoint();
    }
};


TResult  RefTemplateBridgeTmpl::back(Session* s, RefData *&l, RefData *&r){
    if (this->isOpen()){  //    {
        /// ��������� ������������� �������� �������
        //  � ���������� ����� ������� ��������� � ����� ��������
        return BACK;
    } else {              //    }
        /// ����� � ����� ��������� ��������������� ����������������� �������
        //  ������: � ���������� ���� ���������� � ������������ ���������, ������������� ����� ��������
        return BACK;
    }
};

RefData*  RefTemplateBridgeTmpl::pred_point( ThisId var_id, Session *s){
    if (this->isOpen()){
        #ifdef DEBUG
        if (! s->matchSessions.back()->templReturnBackPoint)
            SYSTEMERROR("bridge back-dot not found!");
        #endif
        return s->matchSessions.back()->templReturnBackPoint->other;
    } else {
        return pred;
    }
};






// ����� - ����������������������� ���������� �������� ����.
// ����� ������������� ���������� �� ����   {RefTemplateBridgeVar   RefTemplateBridgeVar}
bool RefUserVarNotInit::initize(Session *s){ // ���������� �� ����
    RefUserTemplate *utempl =  dynamic_cast<RefUserTemplate *>( s->getObjectByName(this->getType()) );
    if (! utempl) SYSTEMERROR("User $Template '" << getType() << "' not defined!"); //     return false;
    // ������ ������
    RefTemplateBridgeVar
        *leftBridge  = new RefTemplateBridgeVar(),
        *rightBridge = new RefTemplateBridgeVar(leftBridge, leftBridge);
    #ifdef DEBUG
    if (! (this->pred && this->next) ) {
        SYSTEMERROR("@RefUserVarNotInit around by $null !");
    }
    #endif
    // ���������� ����������
    this->pred->next = leftBridge;
    leftBridge->pred = this->pred;
    this->next->pred = rightBridge;
    rightBridge->next = this->next;
    this->pred = this->next = 0;
    // ��������� ���
    /// todo: ������� ���������� ������ � ����� ����� - ��� ����� ������
    leftBridge->setName(this->getName());
    rightBridge->setName(this->getName());
    // ���������� �� ���� �������
    #ifdef DEBUG
    if (! dynamic_cast<RefTemplateBridgeTmpl *>(utempl->getLeftPart()->first) ) SYSTEMERROR("Template body error: no RefTemplateBridgeTmpl in the first");
    if (! dynamic_cast<RefTemplateBridgeTmpl *>(utempl->getLeftPart()->second) ) SYSTEMERROR("Template body error: no RefTemplateBridgeTmpl in the second");
    #endif
    leftBridge ->bridge = dynamic_cast<RefTemplateBridgeTmpl *>( utempl->getLeftPart()->first );  // ������ ���� ��� RefTemplateBridgeTmpl
    rightBridge->bridge = dynamic_cast<RefTemplateBridgeTmpl *>( utempl->getLeftPart()->second ); // ������ ���� ��� RefTemplateBridgeTmpl

    delete this;
    return true;
}
TResult RefUserVarNotInit::init(Session*, RefData *&){ SYSTEMERROR("ALARM!"); };
TResult RefUserVarNotInit::back(Session*, RefData *&, RefData *&){ SYSTEMERROR("ALARM!"); };

