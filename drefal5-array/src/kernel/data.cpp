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
#include "symbols.h"
#include "sentence.h"
#include "session.h"

#include <stdlib.h>
#include <iostream>
#include <sstream>



RefChain::RefChain() {
	first = (RefData**)malloc(sizeof(RefData*) * 2);
	first[0] = nullDataPoint;
	first[1] = nullDataPoint;
    leng = 0;
};

RefChain::RefChain(unistring text){
	leng = text.length();
	first = (RefData**)malloc(sizeof(RefData*) * (leng+2));
	first[0] = nullDataPoint;
	RefData **iter = first+1;

	for(size_t i=0; i<leng; i++){
		*iter = new RefAlpha(text[i]);
		++iter;
	};

	first[leng+1] = nullDataPoint;
};

RefChain::RefChain(RefData* d) {
	first = (RefData**)malloc(sizeof(RefData*) * 3);
	first[0] = nullDataPoint;
	first[1] = d;
	first[2] = nullDataPoint;
    leng = 1;
};

RefChain::RefChain(size_t size) { // size is not lenght
	LOG("chain() systemsize not realised!");
	RefChain();
};


RefChain::RefChain(RefData** a11, RefData** a12, RefChain *f_result_chain, RefData** a31, RefData** a32) {
#ifdef TESTCODE
	if (a12-a11<-1) SYSTEMERROR("error");
	if (a32-a31<-1) SYSTEMERROR("error");
#endif
	if (a11==a12+1) {
		--a12;
		a11=0;
	}
	if (a31==a32+1) {
		--a32;
		a31=0;
	}

	std::cout << "\nRefChain::RefChain( " << the_text(a11, a12) << " ; " << f_result_chain->toString() << " ; " << the_text(a31, a32) << " )\n\n";

	//SYSTEMERROR("ne sdelano kopirovanie skobok");
	RefData** a21 = f_result_chain->get_first(); //TODO: � ���� ������ ���������?
	RefData** a22 = f_result_chain->get_last();

    leng = 0;
	size_t leng1 = a11?a12-a11+1:0;
	size_t leng2 = a22-a21+1;
	size_t leng3 = a31?a32-a31+1:0;

#ifdef TESTCODE
	if (leng1<0 || leng2<0 || leng3<0) SYSTEMERROR("alarm");
#endif

	if (a11) leng += leng1;
    if (a21) leng += leng2; 
    if (a31) leng += leng3;

    if (!leng) {
		first = (RefData**)malloc(sizeof(RefData*) * 2);
		first[0] = nullDataPoint;
		first[1] = nullDataPoint;
		leng = 0;
        return;
    }

    first = (RefData**)malloc( sizeof(RefData*)*(leng+2) );

	memset(first, 0xff, leng+2);

	first[0] = nullDataPoint;
	//RefData** ffirst = first+1;
    if (leng1) memcpy(first+1, a11, sizeof(RefData*) * leng1); // �������� ������ �������� ������� view
	if (leng2) memcpy(first+1+leng1, a21, sizeof(RefData*) * leng2); // �������� ��������� �������
    if (leng3) memcpy(first+1+leng1+leng2, a31, sizeof(RefData*) * leng3); // �������� ������ �������� ������� view
	first[leng+1] = nullDataPoint;

	// ���������� ������
	RefData** item = 0;
	RefBracketBase* britem = 0;
	for (size_t i=0; i<leng1; ++i){ // ���������� ������ � ������ �������� ������� view
		item = first+1+i;
		if (britem=ref_dynamic_cast<RefBracketBase>(*item)){
			britem->chain = this;
		}
	};
	for (size_t i=0; i<leng2; ++i){ // ���������� ������ � ���������� �������
		item = first+1+leng1+i;
		if (britem=ref_dynamic_cast<RefBracketBase>(*item)){
			if (britem->isOpen(a21+i)){
				britem->opened_ind += leng1;
				britem->chain = this;
			} else {
				britem->closed_ind += leng1;
			}
		}
	};
	for (size_t i=0; i<leng3; ++i){ // ���������� ������ �� ������ �������� ������� view
		item = first+1+leng1+leng2+i;
		if (britem=ref_dynamic_cast<RefBracketBase>(*item)){
			if (britem->isOpen(a31+i)){
				britem->opened_ind += (leng1+leng2);
				britem->chain = this;
			} else {
				britem->closed_ind += (leng1+leng2);
			}
		}
	};

	delete f_result_chain;
    return;

};


RefChain& RefChain::operator+=(RefLinkToVariable *vr) {
	*this += (RefData*)vr;
	#ifdef TESTCODE
	if (! ref_dynamic_cast<RefLinkToVariable>(*get_last())) SYSTEMERROR("alarm");
	#endif
	this->varsAndBrackets.put(leng-1);
	return *this;
};



ChainPattern::ChainPattern() : RefChain(){
	RefChain::operator +=( new RefData_DOT()); // ������ ����� - ������� �������
};

// ����� ������� ������, ���������� ��� ������� (���� �� ��� �� ������)
void ChainPattern::closeDot(){
	#ifdef TESTCODE
		if (! this->get_first()) SYSTEMERROR("closing empty Pattern!");
		RefData_DOT* dot = ref_dynamic_cast<RefData_DOT>(*(this->get_first()));
		if ((dot->opened_ind != 0) || dot->isSetClosed() ) SYSTEMERROR("alarm");
	#endif
	RefChain::operator +=((RefData_DOT*) *(this->get_first()) );
};

// ����� ������� ������, ���������� ��� ������� (���� �� ��� �� ������)
void ChainPattern::closeDotIfNotYet(){
	#ifdef TESTCODE
		if (! ref_dynamic_cast<RefData_DOT>(*(this->get_first()))) SYSTEMERROR("alarm!");
	#endif
		if ( ( (RefData_DOT*)(*(this->get_first()) ) )->isSetClosed()){
			return;
		}
		closeDot();
};

//  dot eeeee dot : : : : null
ChainPattern& ChainPattern::operator+=(RefConditionBase *cn){
	if (! ref_dynamic_cast<RefConditionBase>(*get_last())){
		closeDotIfNotYet();
		RefChain::operator +=( cn );
	}
	return *this;
};




RefChain& RefChain::operator+=(RefBracketBase *br) {
	*this += (RefData*)br;
	br->chain = this;
	if (! br->isSetOpened()){		// [
		#ifdef TESTCODE
		if (!ref_dynamic_cast<RefBracketBase>(* this->get_last())) SYSTEMERROR("alarm");
		#endif
		br->opened_ind = (get_last()-get_first());
		#ifdef TESTCODE
		if (! ref_dynamic_cast<RefBracketBase>(*get_last())) SYSTEMERROR("alarm");
		#endif
	} else {								// ]
		#ifdef TESTCODE
		if (br->isSetClosed()) SYSTEMERROR("chain + bracket alarm");
		if (!ref_dynamic_cast<RefBracketBase>(* get_last() )) SYSTEMERROR("alarm");
		#endif
		br->closed_ind = (get_last()-get_first());
	}
	varsAndBrackets.put( leng-1 );
	return *this;
};

RefChain& RefChain::operator+=(RefStructBracket *br) {
	if (! br->isSetOpened()){ // (
		*this += (RefBracketBase*)br;
		*this += refNullGlobal; // add null dot after open bracket
	} else {
		*this += (RefBracketBase*)br;
	}
	return *this;
};


RefChain& RefChain::operator+=(RefData *ch) {
	#ifdef TESTCODE
	if (!first || !get_first()) SYSTEMERROR("null first of chain");
	#endif

	first   =  (RefData**) realloc(first, (++leng + 2)*sizeof(RefData*) );
    if (! first) RUNTIMEERROR("membuffer", "memory limit");
    memcpy(first+leng, &ch, sizeof(RefData*));
	memcpy(first+leng+1, &nullDataPoint, sizeof(RefData*));

    return *this;
};


RefChain& RefChain::operator+=(RefChain &ch) {
    return (*this += &ch);
};


RefChain& RefChain::operator+=(RefChain *ch) {
	SYSTEMERROR("kopirovanie sjobok ne realisovano!");/*
	#ifdef TESTCODE
	if (!first || !get_first()) SYSTEMERROR("null first of chain");
	if (!ch->first || !ch->get_first()) SYSTEMERROR("null first of chain");
	#endif

    first   =  (RefData**) realloc(first, (this->leng + ch->leng + 2)*sizeof(RefData*) );
    if (! first) RUNTIMEERROR("membuffer", "memory limit");
    memcpy(&(first[leng+1]), ch->first+1, (ch->leng+1)*sizeof(RefData*)); // ������ � 0x00
    leng += ch->leng;
	//memcpy(first+leng+1, &nullDataPoint, sizeof(RefData*));
    return *this;*/
};


unistring RefChain::toString() {
    unistring result = "";
    for (size_t i=0; i<=leng+1; i++) {
		result += (first[i] ? first[i]->toString() : " _ ");
    }
    return result;
};

unistring RefChain::explode()     {
    unistring result = "";
    for (size_t i=1; i<=leng; i++) {
        result += first[i]->explode();
    }
    return result;
};



RefVariableBase** RefChain::getVarByName(unistring name){
		size_t ind = 1;
		RefVariableBase  *var = 0;
		RefVariableBase **var_tmpl = 0;
		RefCondition *condt = 0;
		while(ind <= leng){
			if ((var = ref_dynamic_cast<RefVariableBase>(first[ind])) && (var->getName()==name)) return (RefVariableBase**)(first+ind);
			if ((condt = ref_dynamic_cast<RefCondition>(first[ind])) && (var_tmpl= condt->leftPart->getVarByName(name))) return var_tmpl;
			++ind;
		}
		return 0;
};






unistring RefLinkToVariable::explode() {
    std::ostringstream s;
	s << "@."<< this->lnk->getName() <<" ";
    return s.str();
};


TResult RefLinkToVariable::init(RefData**&tpl, Session* s, RefData **&l, RefData **&r) {
	RefData **ldata, **rdata;
	MatchState* matchState;
	if ( ! s->getBodyByLink(this->lnk, ldata, rdata, matchState) ) {
        SYSTEMERROR("INTERNAL ERROR: link to not exists variable! link = " << this->toString());
        return ERROR;
    };

    if (!ldata ) {
        MOVE_TO_next_template(tpl);
        return GO; // ������ �� ������ ������� - �����
    }

    MOVE_TO_next_term(r);

	while(ldata<=rdata){
		if (*ldata != *r && !(**ldata == **r)) {
		    MOVE_TO_pred_template(tpl);
			return BACK;
		};
		RefBracketBase* br1 = ref_dynamic_cast<RefBracketBase>(*ldata);
		if (br1){
			if (br1->isOpen(ldata) != ((RefBracketBase*) *r)->isOpen(r)) {
				MOVE_TO_pred_template(tpl);
				return BACK;
			};
		}
		MOVE_TO_next_symbol(ldata);
		MOVE_TO_next_symbol(r);
	}

    MOVE_TO_next_template(tpl);
	//r = rdata;
	return GO;
};



TResult RefLinkToVariable::back(RefData**&tpl, Session* s, RefData **&l, RefData **&r) {
    MOVE_TO_pred_template(tpl);
    return BACK;
};

RefVariable::RefVariable(unistring name) : RefVariableBase() {
    setName(name);
};



TResult RefData_DOT::init(RefData **&tpl, Session *s, RefData **&l, RefData **&r){
    if (isOpen(tpl)) { // (
		if (r == s->current_view_l-1){
			MOVE_TO_next_template(tpl);
            return GO;
        }
        ; // DOT �� ������� ��������� �� ����. ��������
        MOVE_TO_pred_template(tpl);
        return ERROR;
    };

    // )
    MOVE_TO_next_term(r);

	if ( r != s->current_view_r+1) {
        MOVE_TO_pred_template(tpl);
        return BACK;
    };
    return SUCCESS;
};

TResult RefData_DOT::back(RefData **&tpl, Session *s, RefData **&l, RefData **&r){
	if (isOpen(tpl)) {
        return FAIL;
    };
    MOVE_TO_pred_template(tpl);
    return BACK;
};




TResult RefStructBracket::init(RefData **&tpl, Session *s, RefData **&l, RefData **&r){
    MOVE_TO_next_term(r);

    RefStructBracket* aux = ref_dynamic_cast<RefStructBracket >(*r);
    if (!aux || (isOpen(tpl)!=aux->isOpen(r)))  {
		MOVE_TO_pred_template(tpl);
        return BACK; //   )  (
    };
    if (isOpen(tpl)) {  //    (  (
		s->setTopDataSkob( (RefData**) aux->getOther(r));
        ++r; // jump into brackets (to NULL-dot)
		MOVE_TO_next_template(++tpl); // jump into brackets after NULL-dot
        return GO;
    };
    //    )  )
	if (aux != *(s->getTopDataSkob())) {
		MOVE_TO_pred_template(tpl);
        return BACK;
    };

	s->stackOfDataSkob_done.put( s->stackOfDataSkob.top_pop() );
	MOVE_TO_next_template(tpl);
    return GO;
};

TResult RefStructBracket::back(RefData **&tpl, Session *s, RefData **&l, RefData **&r){
	if (isOpen(tpl)) { ///  (
		s->stackOfDataSkob.top_pop(); /// clean?
    } else {
        /// )
		s->setTopDataSkob( s->stackOfDataSkob_done.top_pop() );
    }

	MOVE_TO_pred_template(tpl);
    //return FORCEBACK; - �� ����, � � �������� �� �����: (e.1 e.all)
    return BACK;
};




RefData** beginOfTerm(RefData** r) {
	if (!r || !*r) return r;
    RefBracketBase *br;
	if ( !(br = ref_dynamic_cast<RefBracketBase>(*r)) || (br->isOpen(r))) {
        return r;
    }
    return (RefData**)br->getOther(r);
};

RefData** endOfTerm(RefData** r) {
	if (!r || !*r) return r;
    RefBracketBase *br;
	if ( !(br = ref_dynamic_cast<RefBracketBase>(*r)) || !(br->isOpen(r))) {
        return r;
    }
    return (RefData**)br->getOther(r);
};
