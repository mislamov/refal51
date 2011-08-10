#include "direfal.h" 
#include "commands.h" 
#include "system.h" 
#include "res.h" 

DataChain* Go(DataCursor arg_from, DataCursor arg_to, ExecContext *context){
DataChain *result = new DataChain(); 
DataChain *tmp_chain = new DataChain(); 

{
// подготовка предложения 
//// [ empty ] 
/*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_1;

// подготовка подстановки 
DataChain* PHQGHUMEAYLNLF = new DataChain(); 
DataContainer* PHQGHUMEAYLNLF_execbr = newRefExecBrackets(Begin, PHQGHUMEAYLNLF, "Begin");
result->append(PHQGHUMEAYLNLF_execbr);
context->pushExecuteCall(PHQGHUMEAYLNLF_execbr);

return result; 
}
sentence_after_1: 

// подготовка к возвращению неуспеха
std::cout << "fail!";
return 0;

}

DataChain* Begin(DataCursor arg_from, DataCursor arg_to, ExecContext *context){
DataChain *result = new DataChain(); 
DataChain *tmp_chain = new DataChain(); 

{
// подготовка предложения 
//// [ empty ] 
/*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_1;

// подготовка подстановки 
DataChain* DXFIRCVSCXGGBW = new DataChain(); 
DataContainer* DXFIRCVSCXGGBW_execbr = newRefExecBrackets(Prout, DXFIRCVSCXGGBW, "Prout");
result->append(DXFIRCVSCXGGBW_execbr);
DataChain* KFNQDUXWFNFOZV = new DataChain(); 
DataContainer* KFNQDUXWFNFOZV_execbr = newRefExecBrackets(LCS, KFNQDUXWFNFOZV, "LCS");
DXFIRCVSCXGGBW->append(KFNQDUXWFNFOZV_execbr);
DataChain* SRTKJPREPGGXRP = new DataChain(); 
KFNQDUXWFNFOZV->append(newRefStructBrackets(SRTKJPREPGGXRP)); 
SRTKJPREPGGXRP->append(newRefText("nasha sasha luche vashej")); 
DataChain* NRVYSTMWCYSYYC = new DataChain(); 
KFNQDUXWFNFOZV->append(newRefStructBrackets(NRVYSTMWCYSYYC)); 
NRVYSTMWCYSYYC->append(newRefText("prosto sasha luchaja")); 
context->pushExecuteCall(KFNQDUXWFNFOZV_execbr);
context->pushExecuteCall(DXFIRCVSCXGGBW_execbr);

return result; 
}
sentence_after_1: 

// подготовка к возвращению неуспеха
std::cout << "fail!";
return 0;

}
