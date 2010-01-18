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
//#include "symbols.h"
//#include "sentence.h"
#include "session.h"
#include "program.h"

#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <map>
#include <stack>
#include <set>

size_t RefChain::alloc_portion = CHAIN_SYSTEM_PORTION_SIZE_INIT;


namespace co {
	size_t objs = 0;
	size_t datas = 0;
	size_t vars = 0;
	size_t chains = 0;
	size_t stbracks = 0;
}

char* c_str(std::string str){
	size_t l = str.length();
	char *ch = new char[l];
	strncpy(ch, str.c_str(), l);
	return ch;
};

RefData::RefData(Session *s) : RefObject(){
	if (s){
		s->gc_last->gc_next = this;
		s->gc_last = this;
		set_collected();  //  00001000 - �����������������
	}  else {
		gc_label = 0;  //  00000000 - �� �����������������
	}
	//gc_label = s->gc_currentlabel;
	co::datas++;
	this->gc_next = 0;
};

TResult RefDataNull::init(RefData **&activeTemplate, Session* s, RefData **&currentRight, RefData **&currentLeft){ unexpectedERRORs(s); };
TResult RefDataNull::back(RefData **&activeTemplate, Session* s, RefData **&currentRight, RefData **&currentLeft){ unexpectedERRORs(s); };


RefChain::RefChain(Session *s, RefData* d) : RefData(s){

    sysize = leng = 1;
	first = (RefData**)malloc(sizeof(RefData*) * sysize);
	first[0] = d;
	co::chains++;
};

RefChain::RefChain(Session *s, size_t size) : RefData(s) { // size is not lenght

	sysize = size;
	first = (RefData**)malloc(sizeof(RefData*) * sysize);
	leng = 0;
	*first = 0;
	co::chains++;
};


RefChain::RefChain(Session *s, RefChain *ownchain, RefData **from, RefData **to) : RefData(s) { // size is not lenght
	first = 0;
	leng = sysize = 0;
	if (ownchain && ownchain->isEmpty()) return;  // ���� �������� ������� � �� ���� - ������ �� ���������

    ref_assert(from <= to);
    ref_assert(!ownchain || ownchain->at_first() <= from);
    ref_assert(!ownchain || ownchain->at_last()  >= to);

	sysize = leng = to-from+1;
	first = (RefData**)malloc(sizeof(RefData*) * sysize);
	memcpy(first, from, sizeof(RefData*)*leng);
	co::chains++;
};



RefChain::~RefChain(){
	co::chains--;
	if (sysize) {
		free(first);
	}
};

RefChain* RefChain::operator+=(RefData *ch) {
	#ifdef TESTCODE
	if (leng>sysize) SYSTEMERRORn("Achtung!")
	#endif

	if (leng == sysize){
		sysize += RefChain::alloc_portion;
		first   =   (RefData**) realloc(first, sizeof(RefData*)*sysize );
		//LOG("realloc");
		if (! first) RUNTIMEERRORn("memory limit");
	}
	first[leng] = ch;
	++leng;

    return this;
};

// ����� - ch �� ����������!
RefChain* RefChain::operator+=(RefChain *ch) {
	sysize += ch->leng;
	first   =   (RefData**) realloc(first, sizeof(RefData*)*sysize );
	//LOG("realloc");
	if (! first) RUNTIMEERRORn("memory limit");
	memcpy(first+leng, ch->first, sizeof(RefData*)*(ch->leng));
	leng += ch->leng;
	//delete ch;
	ch = 0;
	return this;
};

RefChain* RefChain::operator+=(RefChain ch) {
	sysize += ch.leng;
	first   =   (RefData**) realloc(first, sizeof(RefData*)*sysize );
	//LOG("realloc");
	if (! first) RUNTIMEERRORn("memory limit");
	memcpy(first+leng, ch.first, sizeof(RefData*)*(ch.leng));
	leng += ch.leng;
	return this;
};



RefData** RefChain::operator[](signed long idx) {
/*#ifdef TESTCODE
	if ((idx<0 && (long)leng+idx<0) || (idx>0 && idx>=leng))
		AchtungERRORn;
#endif*/
	//ref_assert(this!=0);
	return	leng? ((idx<0) ? first+leng+idx : first+idx) : 0;
};





unistring RefChain::debug(){
		    unistring result = "";/*
			result += "[";
			result += "l";
			char tmp[256];
			result += ltoa( leng, tmp, 10);
			result += "s";
			result += ltoa( sysize, tmp, 10);
			//result += " ";
			//result += ltoa( RefChain::alloc_portion, tmp, 10);
			result += "] ";*/

			for (size_t i=0; i<leng; i++) {
				result += (first[i] ? first[i]->debug() : " \x0000 ");
			}
			return result;
};

unistring RefChain::explode(){
		    unistring result = "";

			if (!this){
				result = " $null ";
			}else{
				for (size_t i=0; i<leng; i++) {
					#ifdef TESTCODE
						if (! first[i]) AchtungERRORn;
					#endif
					result += first[i]->explode();
				}
			}
			return result;
};

unistring RefStructBrackets::explode(){		return "(" + chain->explode() + ") ";	};
unistring RefExecBrackets::explode(){	return "<" + chain->explode() + "> ";	};
unistring RefStructBrackets::debug(){		return "(" + (chain?chain->debug():"$null") + ") ";	};
unistring RefExecBrackets::debug(){	return "<" + (chain?chain->debug():"$null") + "> ";	};


TResult RefStructBrackets::init(RefData **&tpl, Session* s, RefData **&l, RefData **&r){
	ref_assert(chain!=0);

	s->MOVE_TO_next_term(r);
	RefStructBrackets *br;

	if (r
		&& (br=ref_dynamic_cast<RefStructBrackets>(*r))
		&& (s->matching(
						0,
						this->chain,
						(*(br->chain))[0],
						(*(br->chain))[-1],
						false
						)
			)
	){
		s->saveBracketsFromView(this, (RefStructBrackets**)r);
		s->MOVE_TO_next_template(tpl);
		return GO;
	}
	s->MOVE_TO_pred_template(tpl);
	return BACK;


};
TResult RefStructBrackets::back(RefData **&tpl, Session* s, RefData **&l, RefData **&r){
	// if (br->chain == this->chain) BACK;  - ��������� ������ ������������ ��. ������ � ���������� � ������ � init!
	RefStructBrackets** br = s->restoreBracketsFromView(this);

	if (s->matching(0, this->chain, (*((*br)->chain))[0],  (*((*br)->chain))[0]?(*((*br)->chain))[-1]:0, true)){
		s->saveBracketsFromView(this, br);
		s->MOVE_TO_next_template(tpl);
		return GO;
	}
	s->MOVE_TO_pred_template(tpl);
	return BACK;
};


TResult RefExecBrackets::init(RefData **&tpl, Session* s, RefData **&l, RefData **&r){
	AchtungERRORs(s);
};
TResult RefExecBrackets::back(RefData **&tpl, Session* s, RefData **&l, RefData **&r){
	AchtungERRORs(s);
};

/*
RefVariable** RefChain::findVariable(unistring vname){
	RefVariable *var = 0;
	RefVariable **tvar = 0;
	RefDataBracket *br = 0;
	for (size_t i=0; i<leng; i++){
		var = ref_dynamic_cast<RefVariable>( *((*this)[i]) );
		if (var && var->getName()==vname) return (RefVariable**)(*this)[i];
		br = ( *((*this)[i]) )->isDataBracket();
		if (br && (tvar = br->chain->findVariable(vname)) && tvar) {
			return tvar;
		}
	}
	return 0;
};
*/


inline bool eq_not_empty(RefData **Al, RefData **Ar, RefData **Bl, RefData **Br){
	RefDataBracket *brA, *brB;
	while(Al<=Ar){
		brA = (*Al)->isDataBracket();
		if (brA){
			brB = (*Bl)->isDataBracket();
			if (!brB || !eq(brA->chain, brB->chain)) return false;
		} else {
			if ((*Al != *Bl) && !(**Al == **Bl)) return false;
		}
		++Al;
		++Bl;
	}
	return true;
};

inline bool eq(RefChain *ch1, RefChain *ch2){
	if (ch1->leng != ch2->leng) return false; // �� ���������� �� �����
	if (! ch1->leng) return true; // ������
	return eq_not_empty((*ch1)[0], (*ch1)[-1], (*ch2)[0], (*ch2)[-1]);
};

inline bool eq(RefData **Al, RefData **Ar, RefData **Bl, RefData **Br){
	if (!Al) return !Bl;
	if (!Bl) return !Al;
	return eq_not_empty(Al, Ar, Bl, Br);
};




TResult RefLinkToVariable::init(RefData **&tpl, Session* s, RefData **&l, RefData **&r){
	RefData **ldata, **rdata;
	VarMap* vm = 0;
	if ( ! s->findVar(this->lnk, ldata, rdata, vm) ) {
        SYSTEMERRORs(s, "INTERNAL ERROR: link to not exists variable! link = " << this->debug());
        return ERROR;
    };

	if (path != EmptyUniString && !vm->folowByWay(path, ldata, rdata)){
		RUNTIMEERRORs(s, "Wrong way for variable " << lnk->toString() << " : " << path);
	}


	if (!ldata){ // ������
        s->MOVE_TO_next_template(tpl);
        return GO; // ������ �� ������ ������� ������ �������������� � ������ ���������
	}

	RefDataBracket *brA=0, *brB=0;
	while(ldata<=rdata){
		s->MOVE_TO_next_term(r);
		if (!r){  // ��������� ���������
				s->MOVE_TO_pred_template(tpl);
				return BACK;
		}

		brA = (*ldata)->isDataBracket();
		if (brA){
			brB = (*r)->isDataBracket();
			if (!brB || !eq(brA->chain, brB->chain)) {
				s->MOVE_TO_pred_template(tpl);
				return BACK;
			}
		} else {
			if ((*ldata != *r) && !(**ldata == **r)) {
				s->MOVE_TO_pred_template(tpl);
				return BACK;
			}
		}
		s->MOVE_TO_next_term(ldata);
	}


    s->MOVE_TO_next_template(tpl);
    return GO; // ������ �� ������ ������� - �����
};


TResult RefLinkToVariable::back(RefData **&tpl, Session* s, RefData **&l, RefData **&r){
	s->MOVE_TO_pred_template(tpl);
	return BACK;
};


void RefVarChains::setTemplInstant(RefUserTemplate *ntempli){
	templInstant = ntempli;
	templ = ntempli->getLeftPart();
};



// ���������� ������� ����� ����������. ����������� ������
// ownchain - ����� ����� ��� ����������� this. ���� �������������
void RefChain::compile(RefChain *ownchain, RefProgram *program){
#ifdef DEBUG
	std::cout << "compile: " << this->explode() << "\n" << std::flush ;
#endif
	if (isEmpty()) return;

	std::map<unistring, RefVariable*> vars;
	std::stack<RefData**> lnks;

	RefVariable *var;
	RefLinkToVariable *link;
	RefDataBracket *bracks;
	RefVarChains *uservar;
	RefVariantsChains *uservarich;
	RefUserCondition *cond;
	RefRepeaterChain *rept;


	PooledTuple2<RefData**, RefData**> subchains;
	subchains.put(this->at_first(), this->at_afterlast());
	if (ownchain && ownchain!=this && !ownchain->isEmpty()){
		subchains.put(ownchain->at_first(), ownchain->at_afterlast());
	}

	while(subchains.getLength()){
		RefData
			**end = subchains.top2(),
			**point = subchains.top1();
		subchains.pop();

		#ifdef DEBUG
		//std::cout << "compile: " << chain_to_text(point, end-1) << "\n";
		#endif

		for(;
			point < end;
			++point){

			uservar = ref_dynamic_cast<RefVarChains>(*point); // ����� ���������� ��� ������
			if (uservar){ // ���������� ��������� ��� ����������
				if (! program) SYSTEMERRORn("program not null expected");
				#ifdef TESTCODE
				if ((uservar->getType() != EmptyUniString) && !(ref_dynamic_cast<RefUserTemplate>(program->findTemplate(uservar->getType()) ))) {
				    notrealisedERRORn;
				}
				#endif
				if (uservar->getType() != EmptyUniString) {
					uservar->setTemplInstant((RefUserTemplate*) program->findTemplate(uservar->getType()) );
				}
				vars[uservar->getName()] = uservar; // todo: ���������� �� ������ - ��� ��� ���� ���������� ����������

				if (uservar->templInstant == 0){
					// ������
					subchains.put(point+1, end);
					if(! uservar->templ->isEmpty()) { subchains.put(uservar->templ->at_first(), uservar->templ->at_afterlast()); };
					break;
				}
				continue;
			}

			uservarich = ref_dynamic_cast<RefVariantsChains>(*point); // ��������
			if (uservarich){ // ���������� ��������� ��� ����������
				vars[uservarich->getName()] = uservarich;
				subchains.put(point+1, end);
				for(int i=uservarich->templs.getCount(); i; --i){
					if (! uservarich->templs.getByIndex(i-1)->isEmpty() ){
						subchains.put(uservarich->templs.getByIndex(i-1)->at_first(), uservarich->templs.getByIndex(i-1)->at_afterlast());
					}
				}
				continue;
				//break;
			}


			rept = ref_dynamic_cast<RefRepeaterChain>(*point); // ��������
			if (rept){ // ���������� ��������� ��� ����������
				subchains.put(point+1, end);
				subchains.put(rept->templ->at_first(), rept->templ->at_afterlast());
				continue;
				//break;
			}



			var = ref_dynamic_cast<RefVariable>(*point);
			if (var){ // ���������� ����������
				vars[var->getName()] = var;
				continue;
			}


			link = ref_dynamic_cast<RefLinkToVariable>(*point);
			if (link && !link->lnk){ // ���������� ������
				lnks.push(point);
				continue;
			}

			bracks = (*point)->isDataBracket();
			if (bracks && !bracks->chain->isEmpty()) { // ������� � ������
				subchains.put(point+1, end);
				subchains.put(bracks->chain->at_first(), bracks->chain->at_afterlast());
				break;
			}

			cond = ref_dynamic_cast<RefUserCondition>(*point);
			if (cond){
				subchains.put(point+1, end);
				if (! cond->getRightPart()->isEmpty())
					subchains.put(cond->getRightPart()->operator [](0), cond->getRightPart()->operator [](-1)+1);
				if (! cond->getLeftPart()->isEmpty())
					subchains.put(cond->getLeftPart()->operator [](0), cond->getLeftPart()->operator [](-1)+1);
				break;
			}
		}
	}

	// ���������� ������ �� ����������
	RefLinkToVariable** tmp = 0;
	while (! lnks.empty()){
			#ifdef TESTCODE
			if (!dynamic_cast<RefLinkToVariable*>(*(lnks.top()))) AchtungERRORn;
			#endif
			tmp = (RefLinkToVariable**) lnks.top();

			size_t i = (*tmp)->path.find( varPathSeparator );
			// ������ �� ����� ������� ����������
			unistring name = (*tmp)->path.substr(0, i);
			(*tmp)->path = (i!=unistring::npos) ? (*tmp)->path.substr(i+1) : EmptyUniString;

			(*tmp)->lnk = vars[name];
			lnks.pop();
	}
};

// ���������� ����� ����� �������� ������������� (������ init ������ �������)
TResult RefVarChains::success(RefData **&tpl, Session* sess, RefData **&l, RefData **&r){
#ifdef TESTCODE
	if (tpl) SYSTEMERRORs(sess, "succes and fail must get activeTemplate==0, but nownot");
#endif

	//std::cout << "RefVarChains::success\n";
	RefData **lold, **rold;
	VarMap *vm=0, *vm2=0;
	vm = sess->poptopVarMap(); // ��������� ����� ����������
	sess->restoreVar(this, lold, rold, vm2); // ������ ��������� ����������
	#ifdef TESTCODE
		if (vm2) unexpectedERRORs(sess);
	#endif
	if (rold != r){
		sess->MOVE_TO_next_term(rold);
		l = rold;
	} else {
		l = 0;	// �������� ���������� ������
	}
	sess->saveVar(this, l, r, vm); // ��������� ������ ��������

	tpl = sess->termChainsJumpPoints.top_pop(); // ����������� �� user-�������
	sess->popTmplate();


	#ifdef TESTCODE
	if (*tpl != this) AchtungERRORs(sess);
	#endif

	sess->MOVE_TO_next_template(tpl); // ��������� ������
	return GO;
};

// ���������� ����� ����� ���������� ������������� (������ back ����� �������)
TResult RefVarChains::failed (RefData **&tpl, Session* sess, RefData **&l, RefData **&r){
#ifdef TESTCODE
	if (tpl) SYSTEMERRORs(sess, "succes and fail must get activeTemplate==0, but nownot");
#endif

	//std::cout << "RefVarChains::faild\n";
	delete sess->poptopVarMap();
	VarMap* tmp = 0;
	sess->restoreVar(this, l, r, tmp);		 // �������� ����������
	#ifdef TESTCODE
		if (tmp) unexpectedERRORs(sess);
	#endif
	tpl = sess->termChainsJumpPoints.top_pop(); // ����������� �� user-�������
	sess->popTmplate();


	#ifdef TESTCODE
	if (*tpl != this) AchtungERRORs(sess);
	#endif

	sess->MOVE_TO_pred_template(tpl);
	return BACK;
};

TResult RefVarChains::init(RefData **&tpl, Session* sess, RefData **&l, RefData **&r){
	//std::cout << "RefVarChains::init\n";
	#ifdef TESTCODE
	if (*tpl != this) AchtungERRORs(sess);
	if (templInstant && ! dynamic_cast<RefUserTemplate*>(templInstant)) notrealisedERRORs(sess);
	#endif

	if (!templ || templ->isEmpty()){
		notrealisedERRORs(sess);
		//sess->MOVE_TO_next_template(tpl);
		//return GO;
	}
	sess->saveVar(this, l=0, r, 0);
	sess->createVarMap(this);
	sess->termChainsJumpPoints.put(tpl);
	sess->setTmplate(templ);
	tpl = templ->at_first();
	return GO;
};

// ���������� ������ ����� ����� �������� �������������
TResult RefVarChains::back(RefData **&tpl, Session* sess, RefData **&l, RefData **&r){
	//std::cout << "RefVarChains::back\n";
	#ifdef TESTCODE
	if (*tpl != this) AchtungERRORs(sess);
	#endif
	sess->termChainsJumpPoints.put(tpl);
	sess->setTmplate(templ);
	VarMap *vm = 0; // ��������������� ����� ����������
	sess->restoreVar(this, l, r, vm);
	#ifdef TESTCODE
		if (!vm) unexpectedERRORs(sess);
	#endif
	sess->saveVar(this, l?0:l, l?l-1:r, 0);
	sess->putVarMap( vm );

	tpl = templ->at_last();
	return BACK;
};


unistring RefVarChains::explode() {
#ifdef DEBUG
	if (templInstant == 0 && templ == 0) return " [null] ";
#endif
	return " " + (templInstant?templInstant->getName():("{ "+templ->explode()+" }")) + "." + getName();
};









TResult RefVariantsChains::init(RefData **&tpl, Session* sess, RefData **&l, RefData **&r){
	#ifdef TESTCODE
	if (*tpl != this) AchtungERRORs(sess);
	#endif

	if (templs.empty()){ notrealisedERRORs(sess);	}
	sess->saveVar(this, l=0, r, 0);
	sess->createVarMap(this);
	RefChain *templ;
	sess->termChainsJumpPoints.put(tpl);
	sess->setTmplate(templ = templs.getByIndex(0));
	tpl = templ->at_first();

	sess->variants_idxs.push(0); // ��������� ������ ��� ��������
	return GO;
};


// ���������� ����� ����� �������� ������������� (������ init ������ �������)
TResult RefVariantsChains::success(RefData **&tpl, Session* sess, RefData **&l, RefData **&r){
#ifdef TESTCODE
	if (tpl) SYSTEMERRORs(sess, "succes and fail must get activeTemplate==0, but nownot");
#endif

	RefData **lold, **rold;
	VarMap *vm=0, *vm2=0;
	vm = sess->poptopVarMap(); // ��������� ����� ����������
	sess->restoreVar(this, lold, rold, vm2); // ������ ��������� ����������
	#ifdef TESTCODE
	if (vm2) unexpectedERRORs(sess);
	#endif
	if (rold != r){
		sess->MOVE_TO_next_term(rold);
		l = rold;
	} else {
		l = 0;	// �������� ���������� ������
	}
	sess->saveVar(this, l, r, vm); // ��������� ������ ��������

	tpl = sess->termChainsJumpPoints.top_pop();
	sess->popTmplate();

	#ifdef TESTCODE
	if (*tpl != this) AchtungERRORs(sess);
	#endif

	sess->MOVE_TO_next_template(tpl); // ��������� ������
	sess->variants_idxs_done.push(sess->variants_idxs.top_pop());
	return GO;
};


// ���������� ����� ����� ���������� ������������� (������ back ����� �������)
TResult RefVariantsChains::failed (RefData **&tpl, Session* sess, RefData **&l, RefData **&r){
#ifdef TESTCODE
	if (tpl) SYSTEMERRORs(sess, "succes and fail must get activeTemplate==0, but nownot");
#endif

	size_t idx = sess->variants_idxs.top();
	if (++idx == templs.getCount()){
		// �������� �����������
		delete sess->poptopVarMap();
		sess->variants_idxs.pop();		//todo: ���������� varmap?
		VarMap* tmp = 0;
		sess->restoreVar(this, l, r, tmp);		 // �������� ����������
		#ifdef TESTCODE
		if (tmp) unexpectedERRORs(sess);
		#endif
		tpl = sess->termChainsJumpPoints.top_pop(); // �����������
		sess->popTmplate();

		#ifdef TESTCODE
		if (*tpl != this) AchtungERRORs(sess);
		#endif

		sess->MOVE_TO_pred_template(tpl);
		return BACK;
	}

	sess->variants_idxs.settop(idx);
	RefChain *templ;
	sess->popTmplate();
	sess->setTmplate(templ = templs.getByIndex(idx));
	tpl = templ->at_first();

	r = sess->preCurrentMapStack()->top3();
	return GO;
};


// ���������� ������ ����� ����� �������� �������������
TResult RefVariantsChains::back(RefData **&tpl, Session* sess, RefData **&l, RefData **&r){
	//std::cout << "RefVarChains::back\n";
	#ifdef TESTCODE
	if (*tpl != this) AchtungERRORs(sess);
	#endif
	sess->variants_idxs.push(sess->variants_idxs_done.top_pop());

	RefChain *templ;
	sess->termChainsJumpPoints.put(tpl);
	sess->setTmplate(templ = templs.getByIndex(sess->variants_idxs.top()));
#ifdef TESTCODE
	if (!templ) AchtungERRORs(sess);
#endif

	VarMap *vm = 0; // ��������������� ����� ����������
	sess->restoreVar(this, l, r, vm);
	#ifdef TESTCODE
		if (!vm) unexpectedERRORs(sess);
	#endif
	sess->saveVar(this, l?0:l, l?l-1:r, 0);
	sess->putVarMap( vm );

	tpl = templ->at_last();
	return BACK;
};

unistring RefVariantsChains::explode(){
	size_t idx = templs.getCount();
	unistring res = templs.getByIndex(idx-1)->explode() + " }." + name + " ";
	for (--idx; idx; --idx){
		res = templs.getByIndex(idx-1)->explode() + " | " + res;
	}
	res = "{ " + res;
	return res;
};


unistring RefRepeaterChain::explode(){
	std::ostringstream ss;
	ss << "[ " << templ->explode() << "][" << min << ".." << max << "]";
	return ss.str();
};


TResult RefRepeaterChain::init   (RefData **&tpl, Session* sess, RefData **&l, RefData **&r){
	if (templ->isEmpty()) SYSTEMERRORs(sess, "unexpected empty chain for repeater");
	// [
	if (! getMin()) { // [0..x]
		sess->MOVE_TO_next_template(tpl);
        sess->repeats_idxs_done.push(0);
		return GO;
    }
	// [n..x]
    sess->repeats_idxs.push(0);
	sess->termChainsJumpPoints.put(tpl);
	sess->setTmplate(templ);
	tpl = templ->at_first();
    return GO;
};

TResult RefRepeaterChain::back   (RefData **&tpl, Session* sess, RefData **&l, RefData **&r){
	///   ]
	infint currentStep = sess->repeats_idxs_done.top_pop();

    if (currentStep < getMax()) {
        sess->repeats_idxs.push( currentStep );
		sess->termChainsJumpPoints.put(tpl);
		sess->setTmplate(templ);
		tpl = templ->at_first(); // ������
        return GO;
    }
    --currentStep;
    sess->repeats_idxs.push( currentStep );
		sess->termChainsJumpPoints.put(tpl);
	sess->setTmplate(templ);
	tpl = templ->at_last();
    return BACK;
};

TResult RefRepeaterChain::success(RefData **&tpl, Session* sess, RefData **&l, RefData **&r){
#ifdef TESTCODE
	if (tpl) SYSTEMERRORs(sess, "succes and fail must get activeTemplate==0, but nownot");
#endif
    ///  ]
	infint currentStep = sess->repeats_idxs.top_pop();
    ++currentStep;

    if (currentStep < getMin()) {
        sess->repeats_idxs.push(currentStep);  ///todo: �������������� ++(...top()) ?
		tpl=templ->at_first(); // �������� ������ ��������
        return GO;
    }
	tpl = sess->termChainsJumpPoints.top_pop(); // �����������
	sess->popTmplate();

	sess->MOVE_TO_next_template(tpl); // ������ �� ��������
	sess->repeats_idxs_done.push(currentStep);
    return GO;
};

TResult RefRepeaterChain::failed (RefData **&tpl, Session* sess, RefData **&l, RefData **&r){
#ifdef TESTCODE
	if (tpl) SYSTEMERRORs(sess, "succes and fail must get activeTemplate==0, but nownot");
#endif
	///   [
    infint currentStep = sess->repeats_idxs.top();
    if (currentStep) {
        sess->repeats_idxs.settop(--currentStep);
		tpl=templ->at_last(); // ������
        return BACK;
    }
	tpl = sess->termChainsJumpPoints.top_pop(); // �����������
	sess->popTmplate();

	sess->repeats_idxs.pop();
    sess->MOVE_TO_pred_template(tpl); // ������� �� ��������
    return BACK;

};



TResult RefMatchingCutter::init(RefData **&tpl, Session* s, RefData **&l, RefData **&r){
	s->MOVE_TO_next_template(tpl);
	return GO;
};
TResult RefMatchingCutter::back(RefData **&tpl, Session* s, RefData **&l, RefData **&r){
	// ���� ���������� ���������������� ����������
	// ���� ���������� ������� �������
	tpl=0;
	return BACK;
	//return FAIL;
};

/*
void RefChain::killall(){

	//std::cout << "\nkillall: " << debug() << "\n";

	RefDataBracket *br = 0;
	for(RefData
		**iter = this->first,
		**iend=this->first+this->leng;
		iter<iend;
		++iter){
			br = (*iter)->isDataBracket();
			if (br && br->chain){
				br->chain->killall();
				delete br->chain;
				br->chain = 0;
				//br->gc_delete();
				*iter = 0;
			}
		}
};
*/
void RefChain::killalldata(){

	RefDataBracket *br = 0;
	for(RefData
		**iter = this->first,
		**iend=this->first+this->leng;
		iter<iend;
		++iter){
			br = (*iter)->isDataBracket();
			if (br){
				br->chain->killalldata();
				//delete br->chain;
				br->chain->gc_delete();
				br->chain = 0;
				//br->gc_delete();
				//*iter = 0;
			}
			(*iter)->gc_delete();
			*iter = 0;
		}
};

RefDataBracket::~RefDataBracket(){
		--co::stbracks;
		//if (chain) delete chain; - ������ �������, ��� ��� ��� ������ ����� �������� �� ���� �������
};


RefVarChains::~RefVarChains(){
	//templ - ������� ������, ���� ����������� RefUserTemplate!
	if (!templInstant){
		templ->killalldata();
		templ->gc_delete();
	}
};

RefVariantsChains::~RefVariantsChains(){
		RefChain *tmp = 0;
		while(! templs.empty()){
			tmp = templs.top_pop();
			tmp->killalldata();
			tmp->gc_delete();
		}

	};

RefRepeaterChain::~RefRepeaterChain(){
	templ->killalldata();
	templ->gc_delete();
};
