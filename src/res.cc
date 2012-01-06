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
DataChain *chain_NWLRBBMQBHCDAR = context->putChain(); 
DataChain* ZOWKKYHIDDQSCD = new DataChain(); 
DataContainer* ZOWKKYHIDDQSCD_execbr = newRefExecBrackets(Go2, ZOWKKYHIDDQSCD, "Go2");
chain_NWLRBBMQBHCDAR->append(ZOWKKYHIDDQSCD_execbr);
context->pushExecuteCall(ZOWKKYHIDDQSCD_execbr); // Go2
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
// pattern 
//// [ empty ] 
/*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_1;
// substitute rigth part 
ExecContext context_OQHNWNKUEWHSQM_static; 
ExecContext *context_OQHNWNKUEWHSQM = &context_OQHNWNKUEWHSQM_static; 
// new chain 
DataChain *chain_GBBUQCLJJIVSWM = context->putChain(); 
DataChain* DKQTBXIXMVTRRB = new DataChain(); 
DataContainer* DKQTBXIXMVTRRB_execbr = newRefExecBrackets(Go3, DKQTBXIXMVTRRB, "Go3");
chain_GBBUQCLJJIVSWM->append(DKQTBXIXMVTRRB_execbr);
context_OQHNWNKUEWHSQM->pushExecuteCall(DKQTBXIXMVTRRB_execbr); // Go3
// exeute
execute(context_OQHNWNKUEWHSQM, chain_GBBUQCLJJIVSWM);
/*DEF*/	DataCursor XRJMOWFRXSJYBL;
/*DEF*/	DataCursor DBEFSARCBYNECD;
// SET_CHAIN_CURSORS 
XRJMOWFRXSJYBL = chain_GBBUQCLJJIVSWM->at_before_first(); 
DBEFSARCBYNECD = chain_GBBUQCLJJIVSWM->at_last(); 
/*JMP*/	goto label_nodel_MPAPQFWKHOPKMC;
label_del_YGGXXPKLORELLN: 
// FREE_CHAIN chain_GBBUQCLJJIVSWM
context->popChain(); 
/*JMP*/	goto sentence_after_1;
label_nodel_MPAPQFWKHOPKMC: 
// left part 
//// [ e.1 ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = XRJMOWFRXSJYBL;
/*SET*/	r_3 = DBEFSARCBYNECD;
// END TreeToCode_AfterPattern 

// подстановка 
// new chain 
DataChain *chain_LJPTNSNFWZQFJM = context->putChain(); 
DataChain* AFADRRWSOFSBCN = new DataChain(); 
DataContainer* AFADRRWSOFSBCN_execbr = newRefExecBrackets(Go2, AFADRRWSOFSBCN, "Go2");
chain_LJPTNSNFWZQFJM->append(AFADRRWSOFSBCN_execbr);
context->pushExecuteCall(AFADRRWSOFSBCN_execbr); // Go2
return chain_LJPTNSNFWZQFJM;
}
sentence_after_1: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Go3(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ empty ] 
/*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_UVQHFFBSAQXWPQ = context->putChain(); 
return chain_UVQHFFBSAQXWPQ;
}
sentence_after_1: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}
