#ifndef SESSION_H_INCLUDED
#define SESSION_H_INCLUDED

#include <stack>

#include "data.h"
#include "rfunction.h"


class Session {
    std::stack<RefBracketBase**> stackOfDataSkob; // ���� ������������� ������
public:
    TVarBody* getBodyByLink(RefVariable*) {        SYSTEMERROR("not realized");    };
    RefBracketBase** getTopDataSkob(){ return stackOfDataSkob.top(); }

    // ������������ ������ tmplate � ��������� ���������� � l �� r.
    // isdemaching - ������� ����, ��� ���� ���������� ������� �� ����������� �������� ��������� (���� � ������� �������)
    bool  matching(RefObject *initer, RefChain *tmplate, RefData **l, RefData **r, bool isdemaching, bool isRevers);
    // ���������� ��������� ��������� ��������� � ��������������� �������� � �� ��� ������� ������
    // ���������� ������������ � ����������� ���������������� �������� � ����� ����������� �������
    void  executeExpression(RefChain *&);
    // ������� �����������: �������� ���������� ����������. �������� �� � �������� ��������
    void  substituteExpression(RefChain *&);


    RefObject* findFunctionById(unistring id);
};


void SAVE_STATE   (RefData** activeTemplate);    // ��������� ��������� ����������
void SAVE_VARSTATE(RefData** activeTemplate); // ��������� ��������� � �������� ����������
void RESTORE_STATE(RefData** activeTemplate); // ��������������� ��������� ����������

/*
#define SAVE_STATE(activeTemplate) { \
    s->getCurrentSopostStack()->push( new TVarBody(l, r, activeTemplate) ); \
    std::cout << "\nsave : "; print_vector(l, r); std::cout << "\n" << std::flush; \
}; \

#define RESTORE_STATE(tpl) { \
    TVarBody *tvb = s->getCurrentSopostStack()->top(); \
    l=tvb->first;r=tvb->second; \
    if (tvb->owner!=tpl) SYSTEMERROR("mmmm: tvb->owner(" << tvb->owner->toString() << ") !=  tpl("<<tpl->toString()<<")"); \
    s->getCurrentSopostStack()->pop(); \
}; \

#define SAVE_STATE_AND_VAR(activeTemplate) { \
    s->getCurrentSopostStack()->push( s->setVarBody(name, new TVarBody(l, r, this)) ); \
    LOG( "\nsave(" << name << ") : "; print_vector(l, r); std::cout << "\n" ) \
};
*/


#endif
