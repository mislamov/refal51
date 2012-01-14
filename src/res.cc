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
DataContainer* DXFIRCVSCXGGBW_execbr = newRefExecBrackets(Prout, DXFIRCVSCXGGBW, "Prout");
chain_PHQGHUMEAYLNLF->append(DXFIRCVSCXGGBW_execbr);
DataChain* KFNQDUXWFNFOZV = new DataChain(); 
DataContainer* KFNQDUXWFNFOZV_execbr = newRefExecBrackets(Run, KFNQDUXWFNFOZV, "Run");
DXFIRCVSCXGGBW->append(KFNQDUXWFNFOZV_execbr);
DataChain* SRTKJPREPGGXRP = new DataChain(); 
DataContainer* SRTKJPREPGGXRP_execbr = newRefExecBrackets(Card1, SRTKJPREPGGXRP, "Card1");
KFNQDUXWFNFOZV->append(SRTKJPREPGGXRP_execbr);
context->pushExecuteCall(SRTKJPREPGGXRP_execbr); // Card1
context->pushExecuteCall(KFNQDUXWFNFOZV_execbr); // Run
context->pushExecuteCall(DXFIRCVSCXGGBW_execbr); // Prout
return chain_PHQGHUMEAYLNLF;
}
sentence_after_1: 

// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Card1(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ empty ] 
/*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_NRVYSTMWCYSYYC = context->putChain(); 
chain_NRVYSTMWCYSYYC->append(newRefText("sanya", __LINE__)); 
return chain_NRVYSTMWCYSYYC;
}
sentence_after_1: 

// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Run(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor QPEVIKEFFMZNIM;
/*SET*/	QPEVIKEFFMZNIM = arg_from;
/*INC*/	if (!INC(QPEVIKEFFMZNIM, arg_to)) goto sentence_after_1;
	static DataChain *XFXTLSGYPSFADP = text_to_chain("hello, ");
	static DataCursor XFXTLSGYPSFADP_l = XFXTLSGYPSFADP->at_before_first();
	static DataCursor XFXTLSGYPSFADP_r = XFXTLSGYPSFADP->at_last();
 if (!SLIDE(QPEVIKEFFMZNIM, arg_to, XFXTLSGYPSFADP_l, XFXTLSGYPSFADP_r)) goto sentence_after_1;
//// [ e.1 ] 
/*DEF*/	DataCursor l_name;
/*DEF*/	DataCursor r_name;
/*SET*/	l_name = QPEVIKEFFMZNIM;
/*SET*/	r_name = arg_to;

// передача управления блоку 
ExecContext context_OOVAOWUXWHMSNC_static; 
ExecContext *context_OOVAOWUXWHMSNC = &context_OOVAOWUXWHMSNC_static; 
// new chain 
DataChain *chain_BXCOKSFZKVATXD = context->putChain(); 
chain_BXCOKSFZKVATXD->append_copy(l_name, r_name, context); 
// exeute
execute(context_OOVAOWUXWHMSNC, chain_BXCOKSFZKVATXD);
/*DEF*/	DataCursor OOEFXZBCOEJUVP;
/*DEF*/	DataCursor VABOYGPOEYLFPB;
// SET_CHAIN_CURSORS 
OOEFXZBCOEJUVP = chain_BXCOKSFZKVATXD->at_before_first(); 
VABOYGPOEYLFPB = chain_BXCOKSFZKVATXD->at_last(); 
/*JMP*/	goto label_nodel_HWQNQRQPMXUJJL;
label_del_NPLJVRVIPYAMYE: 
// FREE_CHAIN chain_BXCOKSFZKVATXD
context->popChain(); 
/*JMP*/	goto sentence_after_1;
label_nodel_HWQNQRQPMXUJJL: 


{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor KNLYJYHFIXJSWN;
/*SET*/	KNLYJYHFIXJSWN = OOEFXZBCOEJUVP;
/*INC*/	if (!INC(KNLYJYHFIXJSWN, VABOYGPOEYLFPB)) goto sentence_after_1000;
	static DataChain *MGQOOKETLYHNKO = text_to_chain("max");
	static DataCursor MGQOOKETLYHNKO_l = MGQOOKETLYHNKO->at_before_first();
	static DataCursor MGQOOKETLYHNKO_r = MGQOOKETLYHNKO->at_last();
 if (!SLIDE(KNLYJYHFIXJSWN, VABOYGPOEYLFPB, MGQOOKETLYHNKO_l, MGQOOKETLYHNKO_r)) goto sentence_after_1000;
//// [ empty ] 
/*ISEMPTY*/	if (KNLYJYHFIXJSWN!=0 && VABOYGPOEYLFPB != KNLYJYHFIXJSWN) goto sentence_after_1000;

// подстановка 
// new chain 
DataChain *chain_AUGZQRCDDIUTEI = context->putChain(); 
chain_AUGZQRCDDIUTEI->append(newRefText("hi, Max", __LINE__)); 
return chain_AUGZQRCDDIUTEI;
}
sentence_after_1000: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor OJWAYYZPVSCMPS;
/*SET*/	OJWAYYZPVSCMPS = OOEFXZBCOEJUVP;
/*INC*/	if (!INC(OJWAYYZPVSCMPS, VABOYGPOEYLFPB)) goto sentence_after_1001;
	if (OJWAYYZPVSCMPS.container->type != text || *(OJWAYYZPVSCMPS.container->value.text + OJWAYYZPVSCMPS.index) != 'm') goto sentence_after_1001;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = OJWAYYZPVSCMPS;
/*SET*/	r_2 = VABOYGPOEYLFPB;

// подстановка 
// new chain 
DataChain *chain_ZYLNTRKDCPWSRT = context->putChain(); 
chain_ZYLNTRKDCPWSRT->append(newRefText("Man from M", __LINE__)); 
return chain_ZYLNTRKDCPWSRT;
}
sentence_after_1001: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor ESJWHDIZCOBZCN;
/*SET*/	ESJWHDIZCOBZCN = OOEFXZBCOEJUVP;
/*INC*/	if (!INC(ESJWHDIZCOBZCN, VABOYGPOEYLFPB)) goto sentence_after_1002;
	if (ESJWHDIZCOBZCN.container->type != text || *(ESJWHDIZCOBZCN.container->value.text + ESJWHDIZCOBZCN.index) != 'o') goto sentence_after_1002;
//// [ e.1 ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = ESJWHDIZCOBZCN;
/*SET*/	r_3 = VABOYGPOEYLFPB;

// подстановка 
// new chain 
DataChain *chain_CBLDVGYLWGBUSB = context->putChain(); 
chain_CBLDVGYLWGBUSB->append(newRefText("Man from O", __LINE__)); 
return chain_CBLDVGYLWGBUSB;
}
sentence_after_1002: 

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = OOEFXZBCOEJUVP;
/*SET*/	r_2 = VABOYGPOEYLFPB;

// подстановка 
// new chain 
DataChain *chain_MBORXTLHCSMPXO = context->putChain(); 
DataChain* HGMGNKEUFDXOTO = new DataChain(); 
DataContainer* HGMGNKEUFDXOTO_execbr = newRefExecBrackets(Prout, HGMGNKEUFDXOTO, "Prout");
chain_MBORXTLHCSMPXO->append(HGMGNKEUFDXOTO_execbr);
HGMGNKEUFDXOTO->append(newRefText("i don\"t know you! Say \"hello, <yourname>\"", __LINE__)); 
context->pushExecuteCall(HGMGNKEUFDXOTO_execbr); // Prout
DataChain* GBGXPEYANFETCU = new DataChain(); 
DataContainer* GBGXPEYANFETCU_execbr = newRefExecBrackets(Run, GBGXPEYANFETCU, "Run");
chain_MBORXTLHCSMPXO->append(GBGXPEYANFETCU_execbr);
DataChain* KEPZSHKLJUGGGE = new DataChain(); 
DataContainer* KEPZSHKLJUGGGE_execbr = newRefExecBrackets(Card1, KEPZSHKLJUGGGE, "Card1");
GBGXPEYANFETCU->append(KEPZSHKLJUGGGE_execbr);
context->pushExecuteCall(KEPZSHKLJUGGGE_execbr); // Card1
context->pushExecuteCall(GBGXPEYANFETCU_execbr); // Run
return chain_MBORXTLHCSMPXO;
}
sentence_after_1003: 

// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}
sentence_after_1: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor KJDQZJENPEVQGX;
/*SET*/	KJDQZJENPEVQGX = arg_from;
/*INC*/	if (!INC(KJDQZJENPEVQGX, arg_to)) goto sentence_after_2;
	static DataChain *LCHHBFQMKIMWZO = text_to_chain("exit");
	static DataCursor LCHHBFQMKIMWZO_l = LCHHBFQMKIMWZO->at_before_first();
	static DataCursor LCHHBFQMKIMWZO_r = LCHHBFQMKIMWZO->at_last();
 if (!SLIDE(KJDQZJENPEVQGX, arg_to, LCHHBFQMKIMWZO_l, LCHHBFQMKIMWZO_r)) goto sentence_after_2;
//// [ empty ] 
/*ISEMPTY*/	if (KJDQZJENPEVQGX!=0 && arg_to != KJDQZJENPEVQGX) goto sentence_after_2;

// подстановка 
// new chain 
DataChain *chain_BIWYBXDUUNFSKS = context->putChain(); 
return chain_BIWYBXDUUNFSKS;
}
sentence_after_2: 

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_else;
/*DEF*/	DataCursor r_else;
/*SET*/	l_else = arg_from;
/*SET*/	r_else = arg_to;

// подстановка 
// new chain 
DataChain *chain_RSRTEKMQDCYZJE = context->putChain(); 
DataChain* EUHMSRQCOZIJIP = new DataChain(); 
DataContainer* EUHMSRQCOZIJIP_execbr = newRefExecBrackets(Prout, EUHMSRQCOZIJIP, "Prout");
chain_RSRTEKMQDCYZJE->append(EUHMSRQCOZIJIP_execbr);
EUHMSRQCOZIJIP->append(newRefText("start your line from \"hello, \"", __LINE__)); 
context->pushExecuteCall(EUHMSRQCOZIJIP_execbr); // Prout
DataChain* FIONEEDDPSZRNA = new DataChain(); 
DataContainer* FIONEEDDPSZRNA_execbr = newRefExecBrackets(Go, FIONEEDDPSZRNA, "Go");
chain_RSRTEKMQDCYZJE->append(FIONEEDDPSZRNA_execbr);
context->pushExecuteCall(FIONEEDDPSZRNA_execbr); // Go
return chain_RSRTEKMQDCYZJE;
}
sentence_after_3: 

// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}
