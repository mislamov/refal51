// DiRefal - sentential program language
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

#ifndef SESSION_H_INCLUDED
#define SESSION_H_INCLUDED

#include <sstream>
#include <stack>

#include "data.h"
#include "poolTuples.h"

class VarMap : public PooledTuple3<RefVariable*, RefData** , RefData**>{
	VarMap(const VarMap&){ AchtungERROR; };  // ����������������� ����������� ��� �� �����
public:
	VarMap(void *own = 0) {        pool[0].i1 = (RefVariable*)own;    };

    // ���� �� ����� ���������� �� ������ ���������
    bool findByName(unistring name, RefData** &l, RefData** &r);

	// ���� �� ������ �� ���������� �� ������ ���������
	bool findByLink(RefVariable* var, RefData** &l, RefData** &r);

	unistring debug();
};


// ����� ��� ���������� ���������������� �������
class Session {
    TResult  result_sost;

	PooledTuple2 <RefData**, RefData**>  current_view_borders; // �������� view ������� [��� ������]
	//PooledTuple2 <RefData**, RefData**> deferred_view_borders; // ���������� (��������) view ������� - ��� ������� [��� ������, usertype-����������]
	//PooledTuple4 <RefData**, RefData**, RefData**, RefData**>  current_templ_borders; // �������� view ������� [��� ������] + ����� ������
	//PooledTuple2 <RefData**, RefData**> deferred_templ_borders; // ���������� (��������) view ������� - ��� ������� [��� ������, usertype-����������]

	PooledStack<VarMap*>  varMapStack; // ����� ����������
	PooledTuple2<RefStructBrackets*, RefStructBrackets**> bracks; // �������������� �� ��������
public:
	inline void createVarMap(){ varMapStack.put(new VarMap()); };

	inline RefData** current_view_l(){ return current_view_borders.top1(); };
	inline RefData** current_view_r(){ return current_view_borders.top2(); };
	//inline RefData** current_templ_l(){ return current_templ_borders.top1(); };
	//inline RefData** current_templ_r(){ return current_templ_borders.top2(); };

	// ������������� ������� tmplate � ���������� l..r
    bool  matching(RefObject *initer, RefChain *tmplate, RefChain *arg, bool isdemaching);

	// ������� �����������: �������� ���������� ����������. �������� �� � �������� ��������
    RefChain*  substituteExpression(RefChainConstructor *);

	void SAVE_VAR_STATE   (RefData** activeTemplate, RefData** &l, RefData** &r); // ��������� ��������� ����������
	void RESTORE_VAR_STATE(RefData** activeTemplate, RefData** &l, RefData** &r); // ��������������� ��������� ����������

	inline void saveVar    (Session *s, RefVariable *varOrData, RefData **&l, RefData **&r);
    inline void restoreVar (Session *s, RefVariable *varOrData, RefData **&l, RefData **&r);
	inline bool findVar    (RefVariable *var, RefData **&l, RefData **&r);

	inline void saveBracketsFromView(RefStructBrackets* tpl, RefStructBrackets** br){
		bracks.put(tpl, br);
	};
	inline RefStructBrackets** restoreBracketsFromView(RefStructBrackets* tpl){
		RefStructBrackets **br  = 0;
		RefStructBrackets* tpl2 = 0;
		bracks.top_pop(tpl2, br);
		#ifdef TESTCODE
		if (tpl2 != tpl) AchtungERROR;
		#endif
		return br;
	};

	unistring debug();

	inline void MOVE_TO_next_term (RefData** &p);
	inline void MOVE_TO_pred_term (RefData** &p);
	inline void MOVE_TO_next_template (RefData** &p);
	inline void MOVE_TO_pred_template (RefData** &p);

	//inline void setNewView(); - ������ ������������ � ��������� matching'�
	//inline void setNewTempl(RefChain* ch);
};


inline void Session::saveVar(Session *s, RefVariable *varOrData, RefData **&l, RefData **&r) {
	varMapStack.top()->put(varOrData, l, r);
};

inline void Session::restoreVar(Session *s, RefVariable *varOrData, RefData **&l, RefData **&r) {
    varMapStack.top()->top_pop(varOrData, l, r);
};

inline bool Session::findVar(RefVariable *var, RefData **&l, RefData **&r) {
	return varMapStack.top()->findByLink(var, l, r);
};

/*
inline void Session::JUMP_View (RefChain* ch, RefData** outL, RefData** outR){		// ������� � ���������� ������ (������)
	if (ch->isEmpty()){
		current_view_borders.put(0, 0, outL, outR);
		return;
	}
	current_view_borders.put((*ch)[0], (*ch)[-1], outL, outR);
};


inline void Session::JUMP_Template (RefChain* tp, RefData** outL, RefData** outR){	// ������� � ��������� (������/usertype-����������)
	if (tp->isEmpty()){
		current_templ_borders.put(0, 0, outL, outR);
		return;
	}
	current_templ_borders.put((*tp)[0], (*tp)[-1], outL, outR);
};
*/

void Session::MOVE_TO_next_term(RefData** &p){
	if (p == current_view_r() || !p) {
		p = 0;
		return;
	}
	++p;
};

void Session::MOVE_TO_pred_term(RefData** &p){
	if (p == current_view_l() || !p) {
		p = 0;
		return;
	}
	--p;
};

void Session::MOVE_TO_next_template(RefData** &p){
/*	if (p == current_view_r() || !p) {
		if (current_view_borders.getLength()==1){
			p = 0;
		} else {
			RefData **a, **b, **c, **d;
			current_view_borders.top_pop(a, b, c, d);
			deferred_view_borders.put(a, b);
			p = d;
		}
		return;
	}*/
	++p;
};
void Session::MOVE_TO_pred_template(RefData** &p){
	--p;
};



#endif
