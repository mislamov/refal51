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

#include "ExecContext.h"

ExecContext::ExecContext(){
	sys++;
}

ExecContext::ExecContext(const ExecContext& ctx){
	sys++;
	//active = ctx.active;
	chains = ctx.chains;
	//pre_active = ctx.pre_active;
	topOfExecQueue = ctx.topOfExecQueue;
}

ExecContext::~ExecContext(){
	sys--;
	while (! topOfExecQueue.empty()){
		topOfExecQueue.pop();
	}
}

long ExecContext::sys = 0;



void ExecContext::prepareSubstitute(){
}

void ExecContext::cleanChains(){
	while (! chains.empty()){
		DataChain* ch = chains.top();
		ch->free();
		chains.pop();
	}
}

DataCursor ExecContext::getCurrentExec(){
	if (topOfExecQueue.empty()) return 0;

	DataContainer *result = topOfExecQueue.top();
	ref_assert(result);
	//std::cout << "::current exec-function:: " << result->value.bracket_data.fname << "\n" << std::flush;
	//std::cout << "::current exec-container->chain:: " << result->value.bracket_data.chain->debug() << "\n" << std::flush;
	return DataCursor(result);
}

void ExecContext::print_debug(){
	/*ExecQueue
		*iter = topOfExecQueue->next;*/

	std::cout << "\n[[[[ NYR\n";
	/*while(iter->fn_call){
		std::cout << " ###  " << iter->fn_call->value.bracket_data.fname << "\n";
		iter = iter->next;
	}
	std::cout << "\n]]]]\n"; */
}

void ExecContext::pushExecuteCall(DataContainer* exec){
	//std::cout << "push to function stack: " << exec->value.bracket_data.fname << " {" << exec->value.bracket_data.chain << "}\n";
	//topOfExecQueue->next = new ExecQueue(exec, topOfExecQueue->next);
	topOfExecQueue.push(exec);
}
