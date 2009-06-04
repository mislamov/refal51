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

#include "datastructs.h"
#include "session.h"

#include <sstream>

/**-----------------  �������  --------------------------**/

bool RefData_DOT::operator ==(RefData &rd) {
    RefData_DOT *aux = ref_dynamic_cast<RefData_DOT >(&rd);
    return  aux && (aux->is_opened == is_opened);
};

TResult RefData_DOT::init(RefData*&tpl, Session* s, RefData *&l, RefData *&r) {
    RefData_DOT* aux;
    if (is_opened) { // (
        aux = ref_dynamic_cast<RefData_DOT >(l);

        if (aux && aux->is_opened) {
            tpl=tpl->getNext();
            return GO;
        }
        ; // DOT �� ������� ��������� �� ����. ��������
        tpl=tpl->getPred();
        return ERROR;
    };

    // )
    MOVE_TO_NEXT_TERM(r, 0/*this->myid()*/, s);
    aux = ref_dynamic_cast<RefData_DOT >(r);
    if ( !aux || aux->is_opened) {
        tpl=tpl->getPred();
        return BACK;
    }
    /// ?? tpl=tpl->getNext();
    return SUCCESS;
};


TResult RefData_DOT::back(RefData*&tpl, Session* sess, RefData *&l, RefData *&r) {
    if (is_opened) { /*sess->extention_number = 0;*/
        /// ?? tpl=tpl->getPred();
        return FAIL;
    };
    tpl=tpl->getPred();
    return BACK;
};


unistring  RefData_DOT::toString() {
    #ifndef DEBUG
    return "";
    #endif
    std::ostringstream s;
    s << (is_opened?" [":" ]")
    /*  << "." << std::hex << (unsigned short)this << ' '; //<< ":other=" << (long)this->other << " ";// */
//        s << "." << (long)this << ' ';
    ;
    return s.str();
};
RefData* RefData_DOT::next_term( ThisId var_id, Session *s ) {
    return next;
};
RefData* RefData_DOT::pred_term( ThisId var_id, Session *s ) {
    return pred;
};



/**------------------- ������ -----------------**/

#define SAVE_STATE(activeTemplate) { \
    s->getCurrentSopostStack()->push( new TVarBody(l, r, activeTemplate) ); \
}; \

#define RESTORE_STATE(activeTemplate) { \
    TVarBody *tvb = s->getCurrentSopostStack()->top(); \
    l=tvb->l;r=tvb->r; \
    if (tvb->owner!=activeTemplate) SYSTEMERROR("mmmm"); \
    s->getCurrentSopostStack()->pop(); \
}; \

#define SAVE_STATE_AND_VAR(name, activeTemplate) { \
    s->getCurrentSopostStack()->push( s->setVarBody(name, new TVarBody(l, r, this)) ); \
};



TResult  RefGroupBracket::init(RefData*&tpl, Session *s, RefData *&l, RefData *&r) {
    #ifdef TESTCODE
    if (l)  {       SYSTEMERROR("RefData::init() l is NULL !");    };
    if (!r) {       SYSTEMERROR("RefData::init() tring to matching with NULL address!");    };
    #endif

    if (isOpen()) { ///      {
        // ��������� ����� ������� ��� }
        SAVE_STATE_AND_VAR(getName(), this);
    } else {        ///      }.name
        TVarBody *vb = s->getVarBody(name); /// ������� ����������� ��� ����� �� �����
        #ifdef TESTCODE
        if (vb->first || l) SYSTEMERROR("Skobki !~ 0"); // ���������� ���������� �������� ����  � ����� �������� �� ���, ��� ������ ������� ���������� ��� ������ �������������� � ������ ����������. � ���� ���� ���������� - �� �������� ������ ���������
        #endif
        if (vb->second != r) { // ���� �� �� ������ ���������
            vb->first  = vb->second->getNext();
            //vb->second = ��� ����� ����
        }
        #ifdef TESTCODE
        ///once
        /// ? :: getCurrentSopostStack()->push( setVarBody(group->getName(), vb) );
        /// ��������� ��������� �� vb � �����
        TVarBody *vb2 = s->getVarBody(name);
        if (vb2->first != vb->first || vb2->second!=vb->second) {
            SYSTEMERROR("alarm! once verify")
        } else {
            LOG("ONCE VERIFY OK");
        }
        #endif
    }

    tpl=tpl->getNext();
    return GO;
};

TResult  RefGroupBracket::back(RefData*&tpl, Session *s, RefData *&l, RefData *&r) {
    RESTORE_STATE(this);  // ?
    tpl=tpl->getPred();
    return BACK;
};


/**-------------------  ��������  ---------------------**/

//-----------  o  -----------
ref_variant_dot::ref_variant_dot( RefData* rp) : RefData(rp) {
    is_system (false);
};

RefData*   ref_variant_dot::pred_template (ThisId id, Session *s) {
    if (s->result_sost == FORCEBACK) {
        return krest;
    };
    return nextffwd;
};

//----------  o  ------------
TResult	   ref_variant_dot::init(RefData*&tpl, Session *s, RefData *&l, RefData *&r) {
    #ifdef TESTCODE
    if ( l) { SYSTEMERROR("RefData::init() l is NULL !"); };
    if (!r) { SYSTEMERROR("RefData::init() tring to matching with NULL address!"); };
    #endif

    #ifdef TESTCODE
    TVarBody* vb = dynamic_cast<TVarBody *>( s->matchSessions.back()->StackOfSopost.top());
    if ((!vb) || (! dynamic_cast<RefGroupBracket *>(vb->owner)))
        SYSTEMERROR("net ozhifaemoj skobki na vershine steka sopostavlenij");
    #endif
    r = ((TVarBody *)( s->matchSessions.back()->StackOfSopost.top()))->second;
    tpl=tpl->getNext();
    return GO;
};

//----------  o  ------------
TResult	   ref_variant_dot::back(RefData*&tpl, Session *s, RefData *&l, RefData *&r) {
    //tpl=tpl->getPred();
    //return BACK;
    l = 0;
    r = ((TVarBody *)( s->matchSessions.back()->StackOfSopost.top()))->second;
    tpl=this->nextffwd->getNext()->getNext();
    return GO;
};

bool	   ref_variant_dot::operator==(RefData&rd) {
    return false;
};

//----------  |  ------------
ref_variant_vert::ref_variant_vert( RefData* rp) : RefData(rp) {
    is_system (false);
};
TResult	  ref_variant_vert::init(RefData*&tpl, Session *s, RefData *&l, RefData *&r)	{
    s->matchSessions.back()->StackOfVariants.push(this);
    tpl = this->vopr->getNext();
    return GO;
};
TResult	  ref_variant_vert::back(RefData*&tpl, Session *s, RefData *&l, RefData *&r)	{
    SYSTEMERROR("unecpected");
    // �� ��� ������ ������ ����������� � ?::back()
    s->matchSessions.back()->StackOfVariants.pop();
    tpl=tpl;
    return BACK;
};
RefData*  ref_variant_vert::next_template (ThisId id, Session*) {
    return vopr->getNext();
}
; //  return "}.vname"
void      ref_variant_vert::forceback (RefData*&tpl, Session *s)	{
    SYSTEMERROR("not released");
    s->matchSessions.back()->StackOfVariants.pop();
};
bool	  ref_variant_vert::operator==(RefData&rd) {
    return false;
};

//----------  =>  ------------
ref_variant_ffwd::ref_variant_ffwd(RefData *rp) : RefData (rp) {
    is_system (false);
};
TResult	 ref_variant_ffwd::init(RefData*&tpl, Session *, RefData *&, RefData *&) {
    SYSTEMERROR("unexpected");
    return GO;
};
TResult	 ref_variant_ffwd::back(RefData*&tpl, Session *, RefData *&, RefData *&) {
    SYSTEMERROR("unexpected");
    return GO;
};
bool	 ref_variant_ffwd::operator==(RefData&rd) {
    return false;
};

//----------  ?  ------------
ref_variant_vopr::ref_variant_vopr( RefData* rp) : RefData(rp) {
    is_system (false);
};
TResult		ref_variant_vopr::init(RefData*&tpl, Session *, RefData *&, RefData *&) {
    SYSTEMERROR("unexpected"); // ���� �� ������� ��� ����� ���� �������
    return BACK;
};
TResult     ref_variant_vopr::back(RefData*&tpl, Session* s, RefData *&l, RefData *&r) {
    ref_variant_vert *rvv = s->matchSessions.back()->StackOfVariants.top();
    s->matchSessions.back()->StackOfVariants.pop();
    tpl=rvv->getPred();
    return BACK;
}
; //
RefData*	ref_variant_vopr::pred_template (ThisId id, Session *s) {
    //if (s->message4nextpred == mFORCEBACK){ return pred; } - ������, ��� ��� ���������� ���� �� ��������� ������� � ��������������
    ref_variant_vert *rvv = s->matchSessions.back()->StackOfVariants.top();
    return rvv;
};
bool ref_variant_vopr::operator==(RefData&rd) {
    return false;
};
void ref_variant_vopr::forceback(RefData*&tpl, Session* s) {
    //s->matchSessions.back()->StackOfVariants.pop();
};

//----------  x  ------------
ref_variant_krest::ref_variant_krest( RefData* rp) : RefData(rp) {
    is_system (false);
};
TResult		ref_variant_krest::init(RefData*&tpl, Session *, RefData *&l, RefData *&r) {
    SYSTEMERROR("unexpected");
    return BACK;
};
RefData*	ref_variant_krest::pred_template (ThisId id, Session *s) {
    return begbr;
};
bool ref_variant_krest::operator==(RefData&rd) {
    return false;
};





//----------  [...]  ------------
TResult  ref_repeater::init(RefData*&tpl, Session *s, RefData *&l, RefData *&r) {
    if (isOpen()) { ///  [
        if (! getMin()) { // [0..x]
            tpl=other->getNext();
            s->matchSessions.back()->StackOfRepeaterDoned.push(0);
        } else {
            s->matchSessions.back()->StackOfRepeater.push(0);
            tpl=tpl->getNext();
        }
        return GO;
    }
    ///  ]
    infint currentStep = s->matchSessions.back()->StackOfRepeater.top();
    s->matchSessions.back()->StackOfRepeater.pop();
    ++currentStep;

    if (currentStep < getMin()) {
        s->matchSessions.back()->StackOfRepeater.push(currentStep);  ///todo: �������������� ++(...top()) ?
        tpl=other->getNext(); // �������� ������ ��������
        return GO;
    }
    tpl=tpl->getNext(); // ������ �� ��������
    s->matchSessions.back()->StackOfRepeaterDoned.push(currentStep);
    return GO;

};

TResult  ref_repeater::back(RefData*&tpl, Session *s, RefData *&l, RefData *&r) {
    if (isOpen()) {  ///   [
        infint currentStep = s->matchSessions.back()->StackOfRepeater.top();
        if (currentStep) {
            s->matchSessions.back()->StackOfRepeater.push(--currentStep);
            tpl=other->getPred(); // ������
            return BACK;
        }
        s->matchSessions.back()->StackOfRepeater.pop();
        tpl=tpl->getPred(); // ������� �� ��������
        return BACK;
    }
    ///   ]
    infint currentStep = s->matchSessions.back()->StackOfRepeaterDoned.top();
    s->matchSessions.back()->StackOfRepeaterDoned.pop();

    if (currentStep < getMax()) {
        s->matchSessions.back()->StackOfRepeater.push( currentStep );
        tpl=other->getNext();
        return GO;
    }
    --currentStep;
    s->matchSessions.back()->StackOfRepeater.push( currentStep );
    tpl=tpl->getPred();
    return BACK;
};

RefData*  ref_repeater::next_template (ThisId id, Session*s) {
    switch (s->message4nextpred) {
    case mNEXT:
        return next;
    case mPRED:
        return pred;
    case mOTHER_next:
        return other->getNext();
    case mOTHER_pred:
        return other->getPred();
    default:
        ;
    }
    SYSTEMERROR("unexpected message");
};

RefData*  ref_repeater::pred_template (ThisId id, Session*s) {
    switch (s->message4nextpred) {
    case mNEXT:
        return next;
    case mPRED:
        return pred;
    case mOTHER_next:
        return other->getNext();
    case mOTHER_pred:
        return other->getPred();
    default:
        ;
    }
    SYSTEMERROR("unexpected message");
};

