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
DataContainer* KFNQDUXWFNFOZV_execbr = newRefExecBrackets(GetPairs, KFNQDUXWFNFOZV, "GetPairs");
DXFIRCVSCXGGBW->append(KFNQDUXWFNFOZV_execbr);
DataChain* SRTKJPREPGGXRP = new DataChain(); 
DataContainer* SRTKJPREPGGXRP_execbr = newRefExecBrackets(ParseFileNames, SRTKJPREPGGXRP, "ParseFileNames");
KFNQDUXWFNFOZV->append(SRTKJPREPGGXRP_execbr);
DataChain* NRVYSTMWCYSYYC = new DataChain(); 
DataContainer* NRVYSTMWCYSYYC_execbr = newRefExecBrackets(Mount, NRVYSTMWCYSYYC, "Mount");
SRTKJPREPGGXRP->append(NRVYSTMWCYSYYC_execbr);
NRVYSTMWCYSYYC->append(newRefText("store.txt")); 
context->pushExecuteCall(NRVYSTMWCYSYYC_execbr);
context->pushExecuteCall(SRTKJPREPGGXRP_execbr);
context->pushExecuteCall(KFNQDUXWFNFOZV_execbr);
context->pushExecuteCall(DXFIRCVSCXGGBW_execbr);

return result; 
}
sentence_after_1: 

// подготовка к возвращению неуспеха
std::cout << "fail!";
return 0;

}

DataChain* ParseFileNames(DataCursor arg_from, DataCursor arg_to, ExecContext *context){
DataChain *result = new DataChain(); 
DataChain *tmp_chain = new DataChain(); 

{
// подготовка предложения 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_QPEVIKEFFMZNIM_firststep;
label_QPEVIKEFFMZNIM: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_1;
label_QPEVIKEFFMZNIM_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor KKASVWSRENZKYC;
/*SET*/	KKASVWSRENZKYC = r_1;
/*INC*/	if (!INC(KKASVWSRENZKYC, arg_to)) goto label_QPEVIKEFFMZNIM;
	static DataChain *OOEFXZBCOEJUVP = text_to_chain("\n");
	static DataCursor OOEFXZBCOEJUVP_l = OOEFXZBCOEJUVP->at_before_first();
	static DataCursor OOEFXZBCOEJUVP_r = OOEFXZBCOEJUVP->at_last();
 if (!SLIDE(KKASVWSRENZKYC, arg_to, OOEFXZBCOEJUVP_l, OOEFXZBCOEJUVP_r)) goto label_QPEVIKEFFMZNIM;
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = KKASVWSRENZKYC;
/*SET*/	r_n = arg_to;

// подготовка подстановки 
DataChain* VABOYGPOEYLFPB = new DataChain(); 
DataContainer* VABOYGPOEYLFPB_execbr = newRefExecBrackets(Implode, VABOYGPOEYLFPB, "Implode");
result->append(VABOYGPOEYLFPB_execbr);
DataChain* NPLJVRVIPYAMYE = new DataChain(); 
DataContainer* NPLJVRVIPYAMYE_execbr = newRefExecBrackets(Print, NPLJVRVIPYAMYE, "Print");
VABOYGPOEYLFPB->append(NPLJVRVIPYAMYE_execbr);
NPLJVRVIPYAMYE->append_copy(l_1, r_1); 
context->pushExecuteCall(NPLJVRVIPYAMYE_execbr);
context->pushExecuteCall(VABOYGPOEYLFPB_execbr);
result->append(newRefText("+")); 
DataChain* HWQNQRQPMXUJJL = new DataChain(); 
DataContainer* HWQNQRQPMXUJJL_execbr = newRefExecBrackets(ParseFileNames, HWQNQRQPMXUJJL, "ParseFileNames");
result->append(HWQNQRQPMXUJJL_execbr);
DataChain* OOVAOWUXWHMSNC = new DataChain(); 
DataContainer* OOVAOWUXWHMSNC_execbr = newRefExecBrackets(Print, OOVAOWUXWHMSNC, "Print");
HWQNQRQPMXUJJL->append(OOVAOWUXWHMSNC_execbr);
OOVAOWUXWHMSNC->append_copy(l_n, r_n); 
context->pushExecuteCall(OOVAOWUXWHMSNC_execbr);
context->pushExecuteCall(HWQNQRQPMXUJJL_execbr);

return result; 
}
sentence_after_1: 

// подготовка к возвращению неуспеха
std::cout << "fail!";
return 0;

}

DataChain* GetPairs(DataCursor arg_from, DataCursor arg_to, ExecContext *context){
DataChain *result = new DataChain(); 
DataChain *tmp_chain = new DataChain(); 

{
// подготовка предложения 
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = arg_from;
/*SET*/	r_e = arg_to;

// подготовка подстановки 
result->append_copy(l_e, r_e); 

return result; 
}
sentence_after_1: 

// подготовка к возвращению неуспеха
std::cout << "fail!";
return 0;

}
