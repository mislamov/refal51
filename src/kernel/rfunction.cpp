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
    return "\t\t\t"+(leftPart?leftPart->toString():"$notset")+"   ::==   "+(rightPart?rightPart->toString():"$noset");
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
            return result;
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

        return "RefUserFunction::" + name + result;

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

   /// �������� ����� ��������������
   //s->StacksOfSopost.push( recoverSopost = new std::stack<TVarBody *> );   // ����� ���-���� �������������
   //s->varTables.push( recoverVBody = new TVarBodyTable() );                // ����� ���-������� ����������
    do {
        //s->initializationTemplate( (*sent)->leftPart ); /// todo ������� ����� ��� ����������� - ����� ��������� ��������� ���� �������

        LOG("\ttring this: " << (*sent)->toString() );

        if (s->matching( (*sent)->leftPart, argfirst, argsecond)){
            LOG("\tsucessfull!");
            RefChain *newoe = s->RightPartToObjectExpression( (*sent)->rightPart ); // ������� ����� rightPart'� � ������� ���������� �� ��������

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

            //s->deinitializationTemplate( (*sent)->leftPart );

            reslt = true;
        } else {
            //s->deinitializationTemplate( (*sent)->leftPart );
            sent++;
        }
    } while (!reslt && sent != body.end());

    /// ������� ������ � ����� ��������������
    //std::cout << "\n\n/// back to recover-dot : ������� ������ � ����� ��������������\n" << std::flush;
    // ��������������� ��������� � ���� ������
    //RefChain *pz = s->deinitializationArg();  // �������� ������� � ����������������� ������

    //if (recoverVBody != s->varTables.top()) SYSTEMERROR("enother var table !"); // �������� ������������ ����� ��������������
    //if (recoverSopost != s->StacksOfSopost.top()) SYSTEMERROR("enother sopost stack !"); //  -- || --
    // ������� �� ����� �������-�
    //s->StacksOfSopost.pop(); /// todo �������
    //s->varTables.pop();      /// todo �������

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
        return s.str();
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



TResult  RefCondition::init(Session* s, RefData *&l){
    RefData_DOT *d = dynamic_cast<RefData_DOT *>(l->next);
    if (!d){
        return BACK;
    }

    s->showStatus();

    RefChain *newpz = s->RightPartToObjectExpression(this->rightPart);  /// todo: ��� ��������� - ��� �� � ��������
    s->initializationArg(newpz->first, newpz->second); // ��� ��� ����� � ������
    std::cout << "\nCOND-EVALUTE:::\t" << newpz->toString() << " : " << this->leftPart->toString();

    evalutor(newpz, s);

    std::cout << "\nCOND-EVALUTE-OO:\t" << newpz->toString() << " : " << this->leftPart->toString();
    //newpz =
    s->initializationTemplate(this->leftPart);
    if (s->matching( this->leftPart, 0, 0 )){ /// todo!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        // s->deinitializationArg(); - �� ���� �������! � ���� �������� �����?
        // �������� ���� ������ ����
        s->deinitializationTemplate(this->leftPart);
        std::cout << "\n\nCOND-RETURN:::\tinit-> GO" << std::flush << "\n\n\n";
        return GO;
    } else {
        newpz = s->deinitializationArg();
        s->deinitializationTemplate(this->leftPart);
        newpz->clear(); // ������������� ��������� - �������
        delete newpz;

        std::cout << "\n\nCOND-RETURN:::\tinit-> BACK" << std::flush << "\n\n\n";

    s->showStatus();


        return BACK;
    }
};

TResult  RefCondition::back(Session* s, RefData *&l, RefData *&r){

    s->initializationTemplate(this->leftPart);

    /// todo !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    if (s->matching( this->leftPart, 0, 0, true )){ // ���������� ����� ���������
        //s->deinitializationArg(); - �� ������� ��� - ����� ����� �����
        s->deinitializationTemplate(this->leftPart);

        std::cout << "\n\nCOND-RETURN:::\tback-> GO" << std::flush << "\n\n\n";
        return GO;
    } else {
        RefChain *pz = s->deinitializationArg();
        s->deinitializationTemplate(this->leftPart);
        pz->clear();
        delete pz;
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
    RefTemplateBridge *lbr = new RefTemplateBridge(), *rbr = new RefTemplateBridge(lbr, 0);
    lp->first = lp->first->predInsert(lbr);
    lp->second = lp->second->afterInsert(rbr);

    //std::cout << "newlp: " << lp->toString() << "\n" << std::flush;
    leftPart = lp;
};


