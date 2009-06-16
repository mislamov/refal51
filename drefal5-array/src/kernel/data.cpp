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

#include "data.h"
//#include "datastructs.h"
//#include "kernel.h"
#include "session.h"

#include <stdlib.h>
#include <iostream>
#include <sstream>


//TResult RefData::init(RefData*&tpl, Session* s, RefData *&, RefData *&) {
//    SYSTEMERROR("unexpected called for " << toString());
//    return ERROR;
//}
//
//TResult RefData::back(RefData*&tpl,Session* s, RefData *&, RefData *&) {
//    SYSTEMERROR("unexpected called for " << toString());
//    return ERROR;
//}





//RefBracketBase::RefBracketBase( RefData *rp) : RefData(rp){ // открывающая
//    other = 0;
//    is_opened = true;
//};
//
//
//
//
//RefBracketBase::RefBracketBase( RefBracketBase *dr, RefData *rp) : RefData(rp){ // закрывающая
//        other = dr;
//        is_opened = false;
//        dr->other = this;
////        if (name == EmptyUniString) {  }
//};




//bool   RefBracketBase::operator==(RefData &rd){ return false; };

//TResult RefBracketBase::init(RefData*&tpl,Session* s, RefData *&){ SYSTEMERROR(" RefBracketBase::init zagluska!"); };
//TResult RefBracketBase::back(RefData*&tpl,Session* s, RefData *&, RefData *&){ SYSTEMERROR(" RefBracketBase::back zagluska!"); };








RefChain::RefChain(RefData **l, RefData **r) {
    #ifdef TESTCODE
    co::chaincount++;
    theProtect = (bool)l;
    #endif
    if (!l) {
        first = 0;
        after = r;
        leng = 0;
    } else {
        first  = l;
        leng = r-l+1;
    }
};


RefChain& RefChain::operator+=(RefData *ch) {
    noProtectOnly();

    #ifdef TESTCODE
    if (!this->second) SYSTEMERROR("bad chain!");
    #endif

    if (! this->first && !this->after) {
        first = (RefData**)malloc( sizeof(RefData*) );
        if (!first) std::cerr << "NO MEMORY";
        memcpy(first, &ch, sizeof(RefData*));
        leng = 1;
        return *this;
    }


    first   =  (RefData**) realloc(first, (++leng)*sizeof(RefData*));

    if (! this->first) {
        std::cerr << "\nNO MEMORY !";
    }
    memcpy(first+leng-1, &ch, sizeof(RefData*));

    return *this;
};


unistring RefChain::toString() {
    unistring result = "";
    for (size_t i=0; i<leng; i++) {
        result += first[i]->toString();
    }
    return result;
};

unistring RefChain::explode()     {
    unistring result = "";
    for (size_t i=0; i<leng; i++) {
        result += first[i]->explode();
    }
    return result;
};


RefChain& RefChain::operator+=(RefChain &ch) {
    noProtectOnly();

    if (! ch.first) return *this; // пустой вектор не прибавляем

    if (! this->first) { // прибавляем к пустому вектору.
        this->first = ch.first;
        this->leng  = ch.leng;
        return *this;
    }

    first = (RefData**) realloc(first, (leng+ch.leng)*sizeof(RefData*));
    memcpy(first+leng, ch.first, ch.leng*sizeof(RefData*));

    leng += ch.leng;
    return *this;
};


RefChain* RefChain::Copy(Session *s) {
    if (!first) return new RefChain();

    SYSTEMERROR("zaglushka");




};



////////////////////////////////////////////
//


bool RefNULL::operator==(RefData&) {
    return false;
};

TResult RefNULL::init(RefData**&tpl, Session* s, RefData **&l, RefData **&r) {
    SYSTEMERROR("RefNULL::init() tring!");
};
TResult RefNULL::back(RefData**&tpl, Session* s, RefData **&, RefData **&) {
    LOG("vremenno RefNULL::back - potom produmat kak ubrat Ref_NULL iz skobok voobshe!");
    --tpl;
    return BACK;
    SYSTEMERROR("RefNULL::RefNULL() tring!");
};






unistring RefLinkToVariable::toString() {
    std::ostringstream s;
    s << "[LNK::"<< lnkData->toString() <<"]" << (long)this ;
    return s.str();
};

bool RefLinkToVariable::operator==(RefData&) {
    return false;
};


TResult RefLinkToVariable::init(RefData**&tpl, Session* s, RefData **&l, RefData **&r) {

    TVarBody *pd  =  s->getBodyByLink(this->lnkData);

    if ( !pd ) {
        SYSTEMERROR("INTERNAL ERROR: link to not exists variable! link = " << this->toString());
        return ERROR;
    };

    RefData
    **ldata = pd->first,
              **rdata = pd->second;

    if (!ldata ) {
        MOVE_TO_next_template(tpl);
        return GO; // ссылка на пустой отрезок - верна
    }

    MOVE_TO_next_term(r);
    if (*r==*ldata) { // сопоставление с собой
        r = rdata;
        MOVE_TO_next_template(tpl);
        return GO;
    }

//    RefData *lend = rdata;
//    MOVE_TO_next_term(lend); // граница сравнения
//
//    MOVE_TO_pred_term(r); /// todo: оптимизировать
//    while ((ldata!=lend) ) { // проверка на конец сравниваемого
//        MOVE_TO_next_term(r);
//        if ( !(*r == *ldata)) {
//            tpl=tpl->getPred();
//            return BACK;
//        }
//
//        MOVE_TO_next_term(ldata);
//    };
//    tpl = tpl->getNext();
//    return GO;

    while ((**r == **ldata) && (ldata != rdata)  ) {
        MOVE_TO_next_term(r);
        MOVE_TO_next_term(ldata);
    }

    if (**r == **ldata) { // TODO: оптимизировать. убрать вызов ==
        MOVE_TO_next_template(tpl);
        return GO;
    }
    MOVE_TO_pred_template(tpl);
    return BACK;
};


TResult RefLinkToVariable::back(RefData**&tpl, Session* s, RefData **&l, RefData **&r) {
    MOVE_TO_pred_template(tpl);
    return BACK;
};

RefVariable::RefVariable(unistring name) : RefVariableBase() {
    setName(name);
};







RefData** beginOfTerm(RefData** r){
    RefBracketBase *br;
    if ( !(br = ref_dynamic_cast<RefBracketBase>(*r)) || (br->is_opened)){
        return r;
    }
    br=br->other;
    while(*r != br){
        --r;
        #ifdef TESTCODE
        if (!r) SYSTEMERROR("alarm");
        #endif
    }
    return r;
};

RefData** endOfTerm(RefData** r){
    RefBracketBase *br;
    if ( !(br = ref_dynamic_cast<RefBracketBase>(*r)) || !(br->is_opened)){
        return r;
    }
    br=br->other;
    while(*r != br){
        ++r;
        #ifdef TESTCODE
        if (!r) SYSTEMERROR("alarm");
        #endif
    }
    return r;
};

