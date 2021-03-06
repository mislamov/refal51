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

#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

#include <list>

#include "data.h"


class RefSentence;

// �����-�������
class RefFunctionBase : public RefObject {
protected:
	virtual RefChain* eval(RefData**, RefData**, RefChain*, Session*) = 0;
public:
	virtual ~RefFunctionBase(){
	};
	virtual unistring getName() = 0;
	virtual void initilizeAll(RefProgram* program){};
	virtual unistring debug() = 0;
	RefChain* exec(RefData** l, RefData** r, RefChain* lr_own, Session* sess);

};

class RefBuildInFunction : public RefFunctionBase {
public:
	RefBuildInFunction():RefFunctionBase(){
		return;
	};
	unistring debug(){ return "Function " + getName(); };
};

class RefUserFunction : public RefFunctionBase {
	unistring name;
public:
	virtual ~RefUserFunction();
    std::list<RefSentence *> body; // �����������

	inline RefUserFunction(unistring tname){		name = tname;	}
	unistring getName() { return name; };
	unistring debug();

	void initilizeAll(RefProgram *);
	RefChain* eval(RefData**, RefData**, RefChain*, Session*);
};



// ��������� ������� (����������� �� ����������)
class RefTemplateBase : public RefObject {
public:
	virtual ~RefTemplateBase(){};
	virtual void initilizeAll(RefProgram *) = 0;
	virtual unistring debug() =0;
	virtual unistring getName() =0;
	
};

// ���������������� ������
class RefUserTemplate : public RefTemplateBase {
	unistring name;
	RefChain *leftPart;
public:
	inline RefUserTemplate(unistring tname){ name = tname; }
	virtual ~RefUserTemplate(){ 
		//std::cout << "~template " << name << "  lp: " << leftPart << "\n";
		leftPart->killalldata();
		leftPart->gc_delete(); 
	}
	unistring getName() { return name; };
	inline void setLeftPart (RefChain *lp){ leftPart  = lp; };
	inline RefChain* getLeftPart(){ return leftPart; };
	
	void initilizeAll(RefProgram *);
	unistring debug(){
		return "Template " + getName() + "  ::=  " + leftPart->debug();
	}
};

// �����������
class RefSentence : public RefObject {
public:
	RefChain *leftPart;
	RefChain *rightPart;

	virtual ~RefSentence(){
		leftPart->killalldata();
		rightPart->killalldata();
		//delete leftPart;
		//delete rightPart;
		leftPart->gc_delete();
		rightPart->gc_delete();

	}
};

// ���������� ������� ��� �������������
class RefConditionBase : public RefData {
};

class RefUserCondition : public RefConditionBase {
	bool withnot;
	RefChain *leftPart;
	RefChain *rightPart;
public:
	RefObject *own;
	virtual ~RefUserCondition(){ 
		leftPart->killalldata(); 
		rightPart->killalldata(); 
		leftPart->gc_delete(); 
		rightPart->gc_delete(); 
	}

	inline RefUserCondition(bool withNOT){ withnot = withNOT; };
	inline void setLeftPart(RefChain *ch){ leftPart = ch; };
	inline void setRightPart(RefChain *ch){ 
		#ifdef TESTCODE
		if (! dynamic_cast<RefChain*>(ch)) SYSTEMERRORn("RefChain expected!");
		#endif
		rightPart = (RefChain*)ch; 
	};
	inline RefChain *getLeftPart(){ return leftPart; };
	inline RefChain *getRightPart(){ return rightPart; };

	unistring explode(){ return " , $UserCondition[ " + rightPart->explode() + " ::: " + leftPart->explode() + " ]"; };
	TResult init(RefData **&, Session*, RefData **&, RefData **&, RefChain *&);
	TResult back(RefData **&, Session*, RefData **&, RefData **&, RefChain *&);

};



















#endif
