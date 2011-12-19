#include "direfal.h" 
#include "commands.h" 
#include "system.h" 
#include "res.h" 

DataChain* FN(DataCursor arg_from, DataCursor arg_to, ExecContext *context){
DataChain *result = new DataChain(); 
DataChain *tmp_chain = new DataChain(); 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor PHQGHUMEAYLNLF;
/*SET*/	PHQGHUMEAYLNLF = arg_from;
/*INC*/	if (!INC(PHQGHUMEAYLNLF, arg_to)) goto sentence_after_1;
	if (PHQGHUMEAYLNLF.container->type != integer || PHQGHUMEAYLNLF.container->value.num != 0) goto sentence_after_1;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor DXFIRCVSCXGGBW;
/*DEF*/	DataCursor KFNQDUXWFNFOZV;
/*DEF*/	DataCursor SRTKJPREPGGXRP;
/*SET*/	DXFIRCVSCXGGBW = PHQGHUMEAYLNLF;
/*INC*/	if (!INC(DXFIRCVSCXGGBW, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (DXFIRCVSCXGGBW.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	KFNQDUXWFNFOZV = DXFIRCVSCXGGBW.container->value.bracket_data.chain->at_before_first();
	SRTKJPREPGGXRP   = DXFIRCVSCXGGBW.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor NRVYSTMWCYSYYC;
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = KFNQDUXWFNFOZV;
/*SET*/	NRVYSTMWCYSYYC = KFNQDUXWFNFOZV;
/*INC*/	if (!INC(NRVYSTMWCYSYYC, SRTKJPREPGGXRP)) goto sentence_after_1;
	if (! isSymbolType(NRVYSTMWCYSYYC.container->type)) goto sentence_after_1;
/*SET*/	r_1 = NRVYSTMWCYSYYC;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor QPEVIKEFFMZNIM;
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = r_1;
/*SET*/	QPEVIKEFFMZNIM = r_1;
/*INC*/	if (!INC(QPEVIKEFFMZNIM, SRTKJPREPGGXRP)) goto sentence_after_1;
	if (! isSymbolType(QPEVIKEFFMZNIM.container->type)) goto sentence_after_1;
/*SET*/	r_2 = QPEVIKEFFMZNIM;
//// [ empty ] 
/*ISEMPTY*/	if (r_2!=0 && SRTKJPREPGGXRP != r_2) goto sentence_after_1;
//// [ empty ] 
/*ISEMPTY*/	if (DXFIRCVSCXGGBW!=0 && arg_to != DXFIRCVSCXGGBW) goto sentence_after_1;

// подстановка 
context->prepareSubstitute(); 
result->append_copy(l_1, r_1, context); 
return result;
}
sentence_after_1: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor KKASVWSRENZKYC;
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	KKASVWSRENZKYC = arg_from;
/*INC*/	if (!INC(KKASVWSRENZKYC, arg_to)) goto sentence_after_2;
	if (! isSymbolType(KKASVWSRENZKYC.container->type)) goto sentence_after_2;
/*SET*/	r_1 = KKASVWSRENZKYC;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor XFXTLSGYPSFADP;
/*DEF*/	DataCursor OOEFXZBCOEJUVP;
/*DEF*/	DataCursor VABOYGPOEYLFPB;
/*SET*/	XFXTLSGYPSFADP = r_1;
/*INC*/	if (!INC(XFXTLSGYPSFADP, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (XFXTLSGYPSFADP.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	OOEFXZBCOEJUVP = XFXTLSGYPSFADP.container->value.bracket_data.chain->at_before_first();
	VABOYGPOEYLFPB   = XFXTLSGYPSFADP.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor NPLJVRVIPYAMYE;
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = OOEFXZBCOEJUVP;
/*SET*/	NPLJVRVIPYAMYE = OOEFXZBCOEJUVP;
/*INC*/	if (!INC(NPLJVRVIPYAMYE, VABOYGPOEYLFPB)) goto sentence_after_2;
	if (! isSymbolType(NPLJVRVIPYAMYE.container->type)) goto sentence_after_2;
/*SET*/	r_2 = NPLJVRVIPYAMYE;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor HWQNQRQPMXUJJL;
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = r_2;
/*SET*/	HWQNQRQPMXUJJL = r_2;
/*INC*/	if (!INC(HWQNQRQPMXUJJL, VABOYGPOEYLFPB)) goto sentence_after_2;
	if (! isSymbolType(HWQNQRQPMXUJJL.container->type)) goto sentence_after_2;
/*SET*/	r_3 = HWQNQRQPMXUJJL;
//// [ empty ] 
/*ISEMPTY*/	if (r_3!=0 && VABOYGPOEYLFPB != r_3) goto sentence_after_2;
//// [ empty ] 
/*ISEMPTY*/	if (XFXTLSGYPSFADP!=0 && arg_to != XFXTLSGYPSFADP) goto sentence_after_2;

// подстановка 
context->prepareSubstitute(); 
result->append_copy(l_2, r_2, context); 
DataChain* OOVAOWUXWHMSNC = new DataChain(); 
DataContainer* OOVAOWUXWHMSNC_execbr = newRefExecBrackets(FN, OOVAOWUXWHMSNC, "FN");
result->append(OOVAOWUXWHMSNC_execbr);
DataChain* BXCOKSFZKVATXD = new DataChain(); 
DataContainer* BXCOKSFZKVATXD_execbr = newRefExecBrackets(Sub, BXCOKSFZKVATXD, "Sub");
OOVAOWUXWHMSNC->append(BXCOKSFZKVATXD_execbr);
BXCOKSFZKVATXD->append_copy(l_1, r_1, context); 
BXCOKSFZKVATXD->append(newRefInteger(1)); 
context->pushExecuteCall(BXCOKSFZKVATXD_execbr);
DataChain* KNLYJYHFIXJSWN = new DataChain(); 
OOVAOWUXWHMSNC->append(newRefStructBrackets(KNLYJYHFIXJSWN)); 
KNLYJYHFIXJSWN->append_copy(l_3, r_3, context); 
DataChain* KKUFNUXXZRZBMN = new DataChain(); 
DataContainer* KKUFNUXXZRZBMN_execbr = newRefExecBrackets(Add, KKUFNUXXZRZBMN, "Add");
KNLYJYHFIXJSWN->append(KKUFNUXXZRZBMN_execbr);
KKUFNUXXZRZBMN->append_copy(l_2, r_2, context); 
KKUFNUXXZRZBMN->append_copy(l_3, r_3, context); 
context->pushExecuteCall(KKUFNUXXZRZBMN_execbr);
context->pushExecuteCall(OOVAOWUXWHMSNC_execbr);
return result;
}
sentence_after_2: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor MGQOOKETLYHNKO;
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	MGQOOKETLYHNKO = arg_from;
/*INC*/	if (!INC(MGQOOKETLYHNKO, arg_to)) goto sentence_after_3;
	if (! isSymbolType(MGQOOKETLYHNKO.container->type)) goto sentence_after_3;
/*SET*/	r_1 = MGQOOKETLYHNKO;
//// [ empty ] 
/*ISEMPTY*/	if (r_1!=0 && arg_to != r_1) goto sentence_after_3;

// подстановка 
context->prepareSubstitute(); 
DataChain* AUGZQRCDDIUTEI = new DataChain(); 
DataContainer* AUGZQRCDDIUTEI_execbr = newRefExecBrackets(FN, AUGZQRCDDIUTEI, "FN");
result->append(AUGZQRCDDIUTEI_execbr);
AUGZQRCDDIUTEI->append_copy(l_1, r_1, context); 
DataChain* OJWAYYZPVSCMPS = new DataChain(); 
AUGZQRCDDIUTEI->append(newRefStructBrackets(OJWAYYZPVSCMPS)); 
OJWAYYZPVSCMPS->append(newRefInteger(0)); 
OJWAYYZPVSCMPS->append(newRefInteger(1)); 
context->pushExecuteCall(AUGZQRCDDIUTEI_execbr);
return result;
}
sentence_after_3: 

// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Go(DataCursor arg_from, DataCursor arg_to, ExecContext *context){
DataChain *result = new DataChain(); 
DataChain *tmp_chain = new DataChain(); 

{
// сопоставление 
//// [ empty ] 
/*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_1;

// подстановка 
context->prepareSubstitute(); 
DataChain* AJLFVGUBFAAOVL = new DataChain(); 
DataContainer* AJLFVGUBFAAOVL_execbr = newRefExecBrackets(Prout, AJLFVGUBFAAOVL, "Prout");
result->append(AJLFVGUBFAAOVL_execbr);
DataChain* ZYLNTRKDCPWSRT = new DataChain(); 
DataContainer* ZYLNTRKDCPWSRT_execbr = newRefExecBrackets(FN, ZYLNTRKDCPWSRT, "FN");
AJLFVGUBFAAOVL->append(ZYLNTRKDCPWSRT_execbr);
ZYLNTRKDCPWSRT->append(newRefInteger(10)); 
context->pushExecuteCall(ZYLNTRKDCPWSRT_execbr);
context->pushExecuteCall(AJLFVGUBFAAOVL_execbr);
return result;
}
sentence_after_1: 

// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}
