#include "direfal.h" 
#include "commands.h" 
#include "system.h" 
#include "res.h" 

DataChain* Go(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

	{
		// сопоставление 
		//// [ empty ] 
		/*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_1;

		// подстановка 
		// new chain 
		DataChain *chain_PHQGHUMEAYLNLF = context->putChain(); 
		DataChain* DXFIRCVSCXGGBW = new DataChain(); 
		DataContainer* DXFIRCVSCXGGBW_execbr = newRefExecBrackets(Go2, DXFIRCVSCXGGBW, "Go2");
		chain_PHQGHUMEAYLNLF->append(DXFIRCVSCXGGBW_execbr);
		(*context).pushExecuteCall(DXFIRCVSCXGGBW_execbr);
		return chain_PHQGHUMEAYLNLF;
	}
sentence_after_1: 

fail: 
	// подготовка к возвращению неуспеха
	std::cout << "fail!" << __LINE__ << "\n";
	return 0;

}

DataChain* Go2(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

	{
		// сопоставление 
		//// [ empty ] 
		/*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_1;

		// подстановка 
		// new chain 
		DataChain *chain_KFNQDUXWFNFOZV = context->putChain(); 
		DataChain* SRTKJPREPGGXRP = new DataChain(); 
		DataContainer* SRTKJPREPGGXRP_execbr = newRefExecBrackets(Go2, SRTKJPREPGGXRP, "Go2");
		chain_KFNQDUXWFNFOZV->append(SRTKJPREPGGXRP_execbr);
		(*context).pushExecuteCall(SRTKJPREPGGXRP_execbr);
		return chain_KFNQDUXWFNFOZV;
	}
sentence_after_1: 

fail: 
	// подготовка к возвращению неуспеха
	std::cout << "fail!" << __LINE__ << "\n";
	return 0;

}
