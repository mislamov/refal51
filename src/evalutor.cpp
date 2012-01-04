#include "evalutor.h"

int debug = 0;

/*
	execContext должен содержать структуру угловых скобок в expression
	Функция заменяет у expression все вызовы на реультат вычисления
*/
void execute(ExecContext &execContext, DataChain* expression){
    DataCursor br_exec = 0;

	while (true)
	{
		if (debug)
			std::cout << "active-memory ::: " << (expression ? expression->debug() : "null") << "\n";

		std::cout << DataChain::sys << " :: " << DataCursor::sys << " :: " << DataContainer::sys << " :: " << ExecContext::sys << "\n";

		br_exec = execContext.getCurrentExec();

		if (!br_exec) break;
		ref_assert( br_exec.container->type == exec_bracket );

		BracketData  exb = br_exec.container->value.bracket_data;
		//std::cout << "::: selected function : " << exb.fname << "\n";
		//execContext.prepareExecute();
		DataChain* ch = exb.fn(exb.chain->at_before_first(), exb.chain->at_last(), &execContext);
		//std::cout << "::: replacing : <" << br_exec.container->value.bracket_data.fname << " ...>  -> " << "[" << (ch?ch->debug():"") << "]\n"; 
		br_exec.replaceBy(ch );
		execContext.cleanChains();
	}
}
