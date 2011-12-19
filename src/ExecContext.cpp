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
	topOfExecQueue = pre_active = new ExecQueue( 0 );
	topOfExecQueue->next = active = new ExecQueue( 0 );
}

void ExecContext::prepareExecute(){
	pre_active = topOfExecQueue;
	active = pre_active->next;
}

void ExecContext::prepareSubstitute(){
}

DataCursor ExecContext::getCurrentExec(){
	ExecQueue *act = topOfExecQueue->next;
	DataContainer *result = act->fn_call;
	if (!result) return 0;
	//std::cout << "::current exec-function:: " << result->value.bracket_data.fname << "\n" << std::flush;
	//std::cout << "::current exec-container->chain:: " << result->value.bracket_data.chain->debug() << "\n" << std::flush;
	topOfExecQueue->next = act->next;
	delete act;
	return DataCursor(result);
}

void ExecContext::print_debug(){
	ExecQueue
		*iter = topOfExecQueue->next;

	std::cout << "\n[[[[\n";
	while(iter->fn_call){
		std::cout << " ###  " << iter->fn_call->value.bracket_data.fname << "\n";
		iter = iter->next;
	}
	std::cout << "\n]]]]\n";
}

void ExecContext::pushExecuteCall(DataContainer* exec){
	//std::cout << "push to function stack: " << exec->value.bracket_data.fname << " {" << exec->value.bracket_data.chain << "}\n";
	pre_active = pre_active->next = new ExecQueue(exec, active);
}
