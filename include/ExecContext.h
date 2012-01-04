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

#ifndef EXECCONTEXT_H_INCLUDED
#define EXECCONTEXT_H_INCLUDED

#include "direfal.h"

#include "ExecStack.h"
#include <list>
#include <stack>

/*struct ExecQueue {
	DataContainer* fn_call;
	ExecQueue* next;
	//inline void push(DataContainer* dc){ next=new ExecQueue(dc); }
	inline ExecQueue(DataContainer* dc, ExecQueue* willnext=0){ fn_call=dc; next=willnext; }
};*/

typedef std::stack<DataContainer*> ExecQueue;

/*struct ChainQueue {
	DataChain* ch;
	ChainQueue* next;
	inline ChainQueue (DataChain *chain=0) {ch=chain; next=0;}
};*/

typedef std::stack<DataChain*> ChainQueue;

class ExecContext  {
	ExecQueue topOfExecQueue;
	ChainQueue chains;

public:
	static long sys;

	ExecContext();
	ExecContext(const ExecContext&);
	~ExecContext();

	//void prepareExecute(); // подготовка перед очередным функциональным вызовом
	void prepareSubstitute(); // подготовка перед постановкой
	void pushExecuteCall(DataContainer*); // добавление вызова в очередь выполнения

	DataCursor getCurrentExec(); // возвращает указатель на ближайший функциональный вызов
	void cleanChains(); // очищает данные, накопившиеся вов ремя вычисления функц.вызова

	void print_debug();

	// создает новую цепочку для построения подстановки (как для условий, так и для правой части предложения)
	inline DataChain* putChain(){
		DataChain *ch = new DataChain();
		/*ChainQueue *chainQueue = new ChainQueue(ch);
		chainQueue->next = chains;
		chains = chainQueue;*/

		chains.push(ch);
		return ch;
	}

	// удаляет цепочку последней подстановки (если произошел откат)
	inline void popChain(){
		/*ChainQueue *chainQueue = chains;
		chains = chains->next;
		chainQueue->ch->free();
		delete chainQueue;*/
		ref_assert(! chains.empty());
		chains.top()->free();
		chains.pop();
	}
};

#endif
