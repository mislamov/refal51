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


    LOG("<" << getName() << " " << std::flush << RefChain(argfirst,argsecond).toString() << " >" );


    std::list<RefSentence *>::iterator sent = body.begin(); // ������� ����������� �������
    bool reslt = false;

    do {
        LOG("\ttring this: " << (*sent)->toString() );

        /// todo: ������� ��� ����� ������ ������ ��� ������� ����������� �������
        SessionOfMaching* stateBeforeMatch = s->matchSessions.back();

        if (s->matching( (*sent)->leftPart, argfirst, argsecond, false)){
            LOG("\tsucessfull!");
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
            delete newoe; // ������ ������� ������� ������ �������� - ����� ������ ������� � ���� ������

            reslt = true;
        } else {
            // �� ���� ���� ������� ���������� �� ������, �� � ��� ���������� ����� � ��������� ��������� � �������� ������
            #ifdef DEBUG
            if (stateBeforeMatch != s->matchSessions.back()) SYSTEMERROR("unbalansed sub-sessions and recover-dots"); // ��...
            #endif
            sent++;
        }
    } while (!reslt && sent != body.end());  // std: body.end() - ������� ����� ����������

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
    std::cout << "\n====================================\n< " << this->getName() << std::flush << " " << vectorToString(lp, rp) << " >";
    // �������� �������
    RefData *lold, *rold;
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
        return true;
    };

    lold->next = result->first;
    rold->pred = result->second;
    result->first->pred = lold;
    result->second->next = rold;

    delete result;
};


// matching  � ������ �������� ��� ��������������� ���������. � ������ ������ - ��������� ���������
// �� ���� �����-������� �� ������ ��������������� ����� ���������. ������� ��������� �������� ��������� (��������)
TResult  RefCondition::init(Session* s, RefData *&l){
    // ������� ����� ���� ������ � ����� ������� � �������������� � ������ ���������� � �����
    RefData_DOT *d = dynamic_cast<RefData_DOT *>(l->next);
    if (!d){
        return BACK;
    }

    s->showStatus();

    RefChain *newpz = s->RightPartToObjectExpression(this->rightPart);  /// todo: ��� ��������� - ���-�� ��� �� � ��������
    std::cout << "\nCOND-EVALUTE:::\t" << newpz->toString() << " : " << this->leftPart->toString();

    newpz = evalutor(newpz, s);

    std::cout << "\nCOND-EVALUTE-OO:\t" << newpz->toString() << " : " << this->leftPart->toString();

    if (s->matching( this->leftPart, newpz->first, newpz->second, false )){
        std::cout << "\n\nCOND-RETURN:::\tinit-> GO" << std::flush << "\n\n\n";
        return GO;
    } else {
        newpz->clear(); // ������������� ��������� - �������
        delete newpz;

        std::cout << "\n\nCOND-RETURN:::\tinit-> BACK" << std::flush << "\n\n\n";

        s->showStatus();

        return BACK;
    }

};

TResult  RefCondition::back(Session* s, RefData *&l, RefData *&r){

    if (s->matching( this->leftPart, 0, 0, true )){ // ���������� ����� ���������
        std::cout << "\n\nCOND-RETURN:::\tback-> GO" << std::flush << "\n\n\n";
        return GO;
    } else {
        std::cout << "\n\nCOND-RETURN:::\tback-> BACK" << std::flush << "\n\n\n";
        return BACK;
    }

};





RefTemplateBase::RefTemplateBase(unistring name) : RefModuleBase(name) {
};

RefUserTemplate::RefUserTemplate(unistring name, RefChain *lp) : RefTemplateBase(name) {
    if (lp) {
        setLeftPart(lp);
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
        //  ����������: ������� ��������� ��� ������� - ������ ��������� ��� ������������� �������
        SessionOfMaching *sess = new SessionOfMaching(s->getPole_zrenija());
        s->matchSessions.push_back(sess);
        //  ����������: ��������� ����� ������ �� ������ ��� ��������  }
        //sess->templReturnBackPoint.push( (RefTemplateBridgeVar *)this->other );  //  }
        sess->templReturnBackPoint =  (RefTemplateBridgeVar *)this->other ;  //  }

        return GO;
    } else {             //  }
        /// �������� ������������� ����������
        SessionOfMaching *sess = s->matchSessions.back();
        //  ����������: �������� ����� �������� ������� � ����� �����   } (this)
        //sess->templReturnBackPoint.pop();
        sess->templReturnBackPoint = 0;
        //  ����������: ���������� ��������� � ���� ���������������� ����������
        s->matchSessions.pop_back();
        //??? = sess;
        RUNTIMEERROR("RefTemplateBridgeVar::init", "not realized line upper");
        return GO;
    }
};

RefData*  RefTemplateBridgeVar::next_point( ThisId var_id, Session *s){
    if (this->isOpen()){
        // ��������� �� ����������� ������-���� ������ �������
        // �� ���� ������ ��� ������ ���� ��������� (��� ������������� ������ ����� ��������)
        return this->getBridge();
    } else {
        return next; //?
    }
};


TResult  RefTemplateBridgeVar::back(Session* s, RefData *&l, RefData *&r){
    if (this->isOpen()){  //  {
        /// ��������� ������������� ���������� �������� ����
        //  ����������: ������� ��������� ��� ���������� � �������� ������
        delete s->matchSessions.back();
        s->matchSessions.pop_back();
        //  ����������: �������� ����� ��������
        //sess->templReturnBackPoint.pop();
        s->matchSessions.back()->templReturnBackPoint = 0;

        return BACK;
    } else {              //  }
        /// ����� � ����� �������� �������������� ���������� ����������������� ����
        //  ����������: ��������� �� ���� ���������� ��������� ������������� � ������ �� �������
        SessionOfMaching *sess /*= ???*/;
        RUNTIMEERROR("RefTemplateBridgeVar::back", "not realized line upper");
        s->matchSessions.push_back(sess);
        //  ����������: ���������� ����� ��������   } (this)
        //sess->templReturnBackPoint.push( this );
        sess->templReturnBackPoint = this ;

        return BACK;
    }
};

RefData*  RefTemplateBridgeVar::pred_point( ThisId var_id, Session *s){
    if (this->isOpen()){
        return pred; //?
    } else {
        // ��������� �� ���� ������-���� ������ �������
        // �� ���� ������ ��� ������ ���� ��������� (��� ������������� ������ ����� ��������)
        return this->getBridge();
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
        //return sess->templReturnBackPoint.top();
        return s->matchSessions.back()->templReturnBackPoint;
    }
};


TResult  RefTemplateBridgeTmpl::back(Session* s, RefData *&l, RefData *&r){
    if (this->isOpen()){  //  {
        /// ��������� ������������� �������� �������
        //  � ���������� ����� ������� ��������� � ����� ��������
        return BACK;
    } else {              //  }
        /// ����� � ����� ��������� ��������������� ����������������� �������
        //  ������: � ���������� ���� ���������� � ������������ ���������, ������������� ����� ��������
        return BACK;
    }
};

RefData*  RefTemplateBridgeTmpl::pred_point( ThisId var_id, Session *s){
    if (this->isOpen()){
        //return sess->templReturnBackPoint.top()->other;
        return s->matchSessions.back()->templReturnBackPoint->other;
    } else {
        return pred;
    }
};

