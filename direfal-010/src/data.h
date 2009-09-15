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

#ifndef REF_DATA_H_INCLUDED
#define REF_DATA_H_INCLUDED

#include <string>

#include "config.h"

class RefChain;
class RefProgram;
class VarMap;


class RefObject {
public:
	virtual unistring debug(){ return " $RefObject "; };
	virtual ~RefObject(){};
};

class RefData : public RefObject {
public:
	virtual unistring explode() = 0;
    virtual TResult init(RefData **&activeTemplate, Session* s, RefData **&currentRight, RefData **&currentLeft)=0; //  --> operator==() => [return GO] else [return BACK]
    virtual TResult back(RefData **&activeTemplate, Session* s, RefData **&currentRight, RefData **&currentLeft)=0;

	virtual bool operator >(RefData &rd)  { RUNTIMEERRORn("Not comparable for" << explode() << " and " << rd.explode()); };
	virtual bool operator ==(RefData &rd) { notrealisedERRORn; };

	virtual unistring debug(){ return explode()+" "; };
	virtual unistring toString(){ return explode()+" "; };
};





// ������ ���� �������� ���������� ����� (������� � ���������)
class RefVariable : public RefData {
protected:
    unistring name;
public:
	inline RefVariable(unistring tname = EmptyUniString){ name=tname; };
    inline unistring getName() {        return name;    };
    inline void setName(unistring s) {        name = s;    };
};

class RefTemplateBase;

// usertype-����������
class RefUserVar : public RefVariable {
    unistring type;
	RefTemplateBase *templ;
public:
	RefUserVar(){ templ=0; };
	RefUserVar(unistring ntype, unistring nname){ type=ntype; name=nname; templ=0; };
    CLASS_OBJECT_CAST(RefUserVarNotInit);

	void setTempl(RefTemplateBase *ntempl){ templ = ntempl; };
    unistring getType() {        return type;    };
	void setType(unistring ntype) {      type = ntype;    };
	unistring explode();

	TResult init(RefData **&tpl, Session* s, RefData **&l, RefData **&r);
    TResult back(RefData **&tpl, Session* s, RefData **&l, RefData **&r);
	TResult success(RefData **&tpl, Session* sess, RefData **&l, RefData **&r);
	TResult failed (RefData **&tpl, Session* sess, RefData **&l, RefData **&r);

};


class RefDataBracket : public RefData {
public:
	RefChain *chain;

	RefDataBracket(RefChain *thechain) : RefData(){		chain = thechain;	};
	virtual unistring debug() = 0;

};


class RefTemplBracket : public RefData {
};


class RefStructBrackets : public RefDataBracket {
public:
	inline RefStructBrackets(RefChain* thechain) : RefDataBracket(thechain){};
	unistring explode();
	unistring debug();

    TResult init(RefData **&, Session*, RefData **&, RefData **&);
    TResult back(RefData **&, Session*, RefData **&, RefData **&);
};

class RefExecBrackets : public RefDataBracket {
public:
	inline RefExecBrackets(RefChain* thechain) : RefDataBracket(thechain){};
	unistring explode();
	unistring debug();

    TResult init(RefData **&, Session*, RefData **&, RefData **&);
    TResult back(RefData **&, Session*, RefData **&, RefData **&);
};


class RefChain : public RefObject {
	friend bool eq(RefChain *, RefChain *);
	friend class Session;


	RefData** first;
	size_t leng;
	size_t sysize;

	static size_t alloc_portion;
public:

	RefChain(){sysize=leng=0; first=0;};
	RefChain(RefData *);			// ������ �� ������ �����
	RefChain(size_t systemsize);	// ������ ������� ��� systemsize ���������

	RefChain&  operator+=(RefData  *ch);
	RefChain&  operator+=(RefChain *ch); // ������� *ch 
	RefChain&  operator+=(RefChain  ch); // ������ �������� *ch
	RefData**  operator[](signed long idx);
	inline RefData**  at(signed long idx){ return (*this)[idx]; };

	//RefVariable** findVariable(unistring vname);

	static RefStructBrackets* makeStructTerm(RefChain *ch){ return new RefStructBrackets(ch); }

	inline bool isEmpty(){ return (leng==0); }
	inline size_t getLength(){ return leng; }

	unistring debug();
	unistring explode();

	void compile(RefChain *, RefProgram *);
};



inline RefChain*  operator+ (RefChain* x, RefChain y){
	RefChain *res = new RefChain();
	*res += x;
	*res += y;
	return res;
};


inline RefChain*  operator+ (RefData* x, RefData &y){
	RefChain *res = new RefChain();
	*res += x;
	*res += &y;
	return res;
};

inline RefChain*  operator+ (RefData &x, RefData &y){
	RefChain *res = new RefChain();
	*res += &x;
	*res += &y;
	return res;
};


inline RefChain*  operator+ (RefChain* x, RefData &y){
	RefChain *res = new RefChain();
	*res += x;
	*res += &y;
	return res;
};





// ����������� - ������� ��� �������� ���������� ��� ���������� ������������� ���������� ���������
class RefChainConstructor : public RefChain {
};



inline RefChainConstructor*  operator+ (RefChainConstructor* x, RefChain y){
	RefChainConstructor *res = new RefChainConstructor();
	*res += x;
	*res += y;
	return res;
};

inline RefChainConstructor*  operator+ (RefChain* x, RefChainConstructor y){
	RefChainConstructor *res = new RefChainConstructor();
	*res += x;
	*res += y;
	return res;
};

inline RefChainConstructor*  operator+ (RefChainConstructor* x, RefChainConstructor y){
	RefChainConstructor *res = new RefChainConstructor();
	*res += x;
	*res += y;
	return res;
};

inline RefChainConstructor*  operator+ (RefChainConstructor* x, RefData &y){
	RefChainConstructor *res = new RefChainConstructor();
	*res += x;
	*res += &y;
	return res;
};





class RefLinkToVariable : public RefData {
	friend class RefChain;

	friend class Session;
	RefVariable *lnk;
	unistring path;
public:

	TResult init(RefData **&tpl, Session* s, RefData **&l, RefData **&r);
    TResult back(RefData **&tpl, Session* s, RefData **&l, RefData **&r);
	inline unistring explode(){ return " @."+(lnk?lnk->getName():"$notinit$"+path)+" "; };

	inline RefLinkToVariable(RefVariable *ln){lnk=ln; path=EmptyUniString; };
	inline RefLinkToVariable(unistring varName){
		path = varName;
		lnk=0;
	};

/*	inline RefLinkToVariable(unistring varName, unistring thepath){
		RefLinkToVariable::RefLinkToVariable(varName);
		path += "/" + thepath;
	};

	inline bool initize(Session *sess, RefChain *chain){
		size_t i = path.find("/");
		unistring name = path.substr(0, i);
		path = ((i==std::string::npos) ? EmptyUniString : path.substr(i, std::string::npos));
		
		RefVariable **var = chain->findVariable(name);
		if (!var) SYSTEMERROR("Variable [" << name << "] not found in " << chain->debug());
		lnk = *var;
		return true;		
	};*/
};


inline unistring chain_to_text(RefData** from, RefData** to, int showleng = 256){
	if (!from || !*from) return "[null]";
	if (!to || (to-from)<0) return "[error string]";
	unistring res = "";
	int i = 0;
	while(from+i <= to && (showleng<=0 || i<showleng)){
		if(from[i]) res += from[i]->debug();
		++i;
	}
	if (i==showleng) res += "... ";
	return res;
};


//#define MOVE_TO_next_term(p) (++p); - � Session
//#define MOVE_TO_pred_term(p) (--p); - � Session
//#define s->MOVE_TO_next_template(p) (++p); - � Session
//#define MOVE_TO_pred_template(p) (--p); - � Session

#endif