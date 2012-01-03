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
ExecContext context_ZOWKKYHIDDQSCD; 
// new chain 
DataChain *chain_NWLRBBMQBHCDAR = context->putChain(); 
DataChain* XRJMOWFRXSJYBL = new DataChain(); 
DataContainer* XRJMOWFRXSJYBL_execbr = newRefExecBrackets(Go2, XRJMOWFRXSJYBL, "Go2");
chain_NWLRBBMQBHCDAR->append(XRJMOWFRXSJYBL_execbr);
context_ZOWKKYHIDDQSCD.pushExecuteCall(XRJMOWFRXSJYBL_execbr);
return chain_NWLRBBMQBHCDAR;
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
ExecContext context_YGGXXPKLORELLN; 
// new chain 
DataChain *chain_DBEFSARCBYNECD = context->putChain(); 
DataChain* MPAPQFWKHOPKMC = new DataChain(); 
DataContainer* MPAPQFWKHOPKMC_execbr = newRefExecBrackets(Go2, MPAPQFWKHOPKMC, "Go2");
chain_DBEFSARCBYNECD->append(MPAPQFWKHOPKMC_execbr);
context_YGGXXPKLORELLN.pushExecuteCall(MPAPQFWKHOPKMC_execbr);
return chain_DBEFSARCBYNECD;
}
sentence_after_1: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}
