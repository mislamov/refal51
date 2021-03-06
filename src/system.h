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

#ifndef SYSTEM_H_INCLUDED
#define SYSTEM_H_INCLUDED

#include <sstream>

#include "program.h"
#include "function.h"
#include "symbols.h"
#include "variables.h"

#include "module_sdk.h"


RefChain* Dec  (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Div  (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Mul  (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Sum  (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);

RefChain* Mod  (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Trunc(RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Round(RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Symb (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Chr (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Ord (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* First (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Last (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Lower (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Upper (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* StdLog (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Time (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Mu (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);


RefChain* Numb (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess); // ������ � �����
RefChain* Lenw (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Compare (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess); // ���������� ��� ����� (�� �������������� ��������� > ��� ==)
RefChain* Implode (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Explode (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* ExplodeAll (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Add   (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Sub   (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Mount (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* File  (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Args  (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Card  (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Prout (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* ProutDebug (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* StdErr(RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* StdLog(RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Print (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Exit  (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);

RefChain* RandomIdName(RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);

RefChain* RefalTokens  (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* PrintStackTrace   (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);
RefChain* Eval  (RefData** beg, RefData** end, RefChain* begend_chain, Session* sess);



RefData*   word_creator(unistring value);
RefData*  alpha_creator(unistring value);
RefData*    int_creator(unistring value);
RefData*   real_creator(unistring value);
RefData*   byte_creator(unistring value);

inline RefData*   var_s_creator(unistring value){ return new RefVariable_s(value); };
inline RefData*   var_t_creator(unistring value){ return new RefVariable_t(value); };
inline RefData*   var_e_creator(unistring value){ return new RefVariable_e(value); };
inline RefData*   var_E_creator(unistring value){ return new RefVariable_E(value); };
inline RefData*   var_END_creator(unistring value){ return new RefVariable_END(value); };
inline RefData*   var_int_creator  (unistring value){ return new RefVarInteger(value); };
inline RefData*   var_real_creator (unistring value){ return new RefVarReal (value); };
inline RefData*   var_word_creator (unistring value){ return new RefVarWord (value); };
inline RefData*   var_alpha_creator(unistring value){ return new RefVarAlpha(value); };
inline RefData*   var_byte_creator (unistring value){ return new RefVarByte (value); };




BEGIN_DLL_MODULE("System", ModSystem)

SYMBOL_DEFINITIONS
		DEFINE_MODULE_SYMBOL_CLASS(WORD,  word_creator);
		DEFINE_MODULE_SYMBOL_CLASS(ALPHA, alpha_creator);
		DEFINE_MODULE_SYMBOL_CLASS(INT,   int_creator);
		DEFINE_MODULE_SYMBOL_CLASS(REAL,  real_creator);
		DEFINE_MODULE_SYMBOL_CLASS(BYTE,  byte_creator);

VAR_DEFINITIONS
		DEFINE_MODULE_VARIABLE_CLASS(s,  var_s_creator);
		DEFINE_MODULE_VARIABLE_CLASS(t,  var_t_creator);
		DEFINE_MODULE_VARIABLE_CLASS(e,  var_e_creator);
		DEFINE_MODULE_VARIABLE_CLASS(E,  var_E_creator);
		DEFINE_MODULE_VARIABLE_CLASS(END,  var_END_creator);
		DEFINE_MODULE_VARIABLE_CLASS(int,    var_int_creator);
		DEFINE_MODULE_VARIABLE_CLASS(real,   var_real_creator);
		DEFINE_MODULE_VARIABLE_CLASS(word,   var_word_creator);
		DEFINE_MODULE_VARIABLE_CLASS(alpha,  var_alpha_creator);
		DEFINE_MODULE_VARIABLE_CLASS(byte,   var_byte_creator);


FUNCTION_DEFINITIONS
// ����������
		DEFINE_MODULE_FUNCTION(Sum);
		DEFINE_MODULE_FUNCTION(Dec);
		DEFINE_MODULE_FUNCTION(Div);
		DEFINE_MODULE_FUNCTION(Mod);
		DEFINE_MODULE_FUNCTION(Mul);
		DEFINE_MODULE_FUNCTION_ALIAS(Add, Sum);
		DEFINE_MODULE_FUNCTION_ALIAS(Sub, Dec);
		DEFINE_MODULE_FUNCTION_ALIAS(+, Sum);
		DEFINE_MODULE_FUNCTION_ALIAS(-, Dec);
		DEFINE_MODULE_FUNCTION_ALIAS(*, Mul);
		DEFINE_MODULE_FUNCTION(Trunc); // ������� real �� int
		DEFINE_MODULE_FUNCTION(Round);

// ������� � ������
		DEFINE_MODULE_FUNCTION(Numb);
		DEFINE_MODULE_FUNCTION(Symb);
		DEFINE_MODULE_FUNCTION(Implode);
		DEFINE_MODULE_FUNCTION(Explode);
		DEFINE_MODULE_FUNCTION(ExplodeAll);
		DEFINE_MODULE_FUNCTION(Chr);
		DEFINE_MODULE_FUNCTION(Ord);
		DEFINE_MODULE_FUNCTION(First);  // �����  �����
		DEFINE_MODULE_FUNCTION(Last);   // �����  �����
		DEFINE_MODULE_FUNCTION(Lenw);
		DEFINE_MODULE_FUNCTION(Lower);
		DEFINE_MODULE_FUNCTION(Upper);

// ����� �����
		DEFINE_MODULE_FUNCTION(Compare);

// ����-�����
		DEFINE_MODULE_FUNCTION(Mount);
		DEFINE_MODULE_FUNCTION(File);
		DEFINE_MODULE_FUNCTION(Card);
		DEFINE_MODULE_FUNCTION(Prout);
		DEFINE_MODULE_FUNCTION(ProutDebug);
		DEFINE_MODULE_FUNCTION(StdErr);
		DEFINE_MODULE_FUNCTION(StdLog);
		DEFINE_MODULE_FUNCTION(Print);

// ���������
		DEFINE_MODULE_FUNCTION(Args);
		DEFINE_MODULE_FUNCTION(Exit);
		DEFINE_MODULE_FUNCTION(Time);
		DEFINE_MODULE_FUNCTION(Mu);

//  ������
		DEFINE_MODULE_FUNCTION(RandomIdName);
		DEFINE_MODULE_FUNCTION(RefalTokens);
		DEFINE_MODULE_FUNCTION(Eval);

//  �������
		DEFINE_MODULE_FUNCTION(PrintStackTrace);


END_DLL_MODULE

inline infint str2infint(unistring si) { // ������ � �����
    return atol(si.c_str());
};

inline infreal str2infreal(unistring si) { // ������ � ������������ �����
	return atof(si.c_str());
};


#endif
