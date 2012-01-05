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
DXFIRCVSCXGGBW->append(newRefInteger(1000000)); 
context->pushExecuteCall(DXFIRCVSCXGGBW_execbr); // Go2
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
//// [ `a` <any> ] 
/*DEF*/	DataCursor KFNQDUXWFNFOZV;
/*SET*/	KFNQDUXWFNFOZV = arg_from;
/*INC*/	if (!INC(KFNQDUXWFNFOZV, arg_to)) goto sentence_after_1;
	if (KFNQDUXWFNFOZV.container->type != integer || KFNQDUXWFNFOZV.container->value.num != 0) goto sentence_after_1;
//// [ empty ] 
/*ISEMPTY*/	if (KFNQDUXWFNFOZV!=0 && arg_to != KFNQDUXWFNFOZV) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_SRTKJPREPGGXRP = context->putChain(); 
return chain_SRTKJPREPGGXRP;
}
sentence_after_1: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor NRVYSTMWCYSYYC;
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = arg_from;
/*SET*/	NRVYSTMWCYSYYC = arg_from;
/*INC*/	if (!INC(NRVYSTMWCYSYYC, arg_to)) goto sentence_after_2;
	if (! isSymbolType(NRVYSTMWCYSYYC.container->type)) goto sentence_after_2;
/*SET*/	r_n = NRVYSTMWCYSYYC;
//// [ empty ] 
/*ISEMPTY*/	if (r_n!=0 && arg_to != r_n) goto sentence_after_2;

// подстановка 
// new chain 
DataChain *chain_QPEVIKEFFMZNIM = context->putChain(); 
DataChain* KKASVWSRENZKYC = new DataChain(); 
DataContainer* KKASVWSRENZKYC_execbr = newRefExecBrackets(Question, KKASVWSRENZKYC, "Question");
chain_QPEVIKEFFMZNIM->append(KKASVWSRENZKYC_execbr);
DataChain* XFXTLSGYPSFADP = new DataChain(); 
KKASVWSRENZKYC->append(newRefStructBrackets(XFXTLSGYPSFADP)); 
XFXTLSGYPSFADP->append(newRefText("plohie")); 
context->pushExecuteCall(KKASVWSRENZKYC_execbr); // Question
DataChain* OOEFXZBCOEJUVP = new DataChain(); 
DataContainer* OOEFXZBCOEJUVP_execbr = newRefExecBrackets(Go2, OOEFXZBCOEJUVP, "Go2");
chain_QPEVIKEFFMZNIM->append(OOEFXZBCOEJUVP_execbr);
DataChain* VABOYGPOEYLFPB = new DataChain(); 
DataContainer* VABOYGPOEYLFPB_execbr = newRefExecBrackets(Print, VABOYGPOEYLFPB, "Print");
OOEFXZBCOEJUVP->append(VABOYGPOEYLFPB_execbr);
DataChain* NPLJVRVIPYAMYE = new DataChain(); 
DataContainer* NPLJVRVIPYAMYE_execbr = newRefExecBrackets(Dec, NPLJVRVIPYAMYE, "-");
VABOYGPOEYLFPB->append(NPLJVRVIPYAMYE_execbr);
NPLJVRVIPYAMYE->append_copy(l_n, r_n, context); 
NPLJVRVIPYAMYE->append(newRefInteger(1)); 
context->pushExecuteCall(NPLJVRVIPYAMYE_execbr); // -
context->pushExecuteCall(VABOYGPOEYLFPB_execbr); // Print
context->pushExecuteCall(OOEFXZBCOEJUVP_execbr); // Go2
return chain_QPEVIKEFFMZNIM;
}
sentence_after_2: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* WordsMissTable(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ empty ] 
/*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_HWQNQRQPMXUJJL = context->putChain(); 
DataChain* OOVAOWUXWHMSNC = new DataChain(); 
chain_HWQNQRQPMXUJJL->append(newRefStructBrackets(OOVAOWUXWHMSNC)); 
DataChain* BXCOKSFZKVATXD = new DataChain(); 
OOVAOWUXWHMSNC->append(newRefStructBrackets(BXCOKSFZKVATXD)); 
BXCOKSFZKVATXD->append(newRefText("sel")); 
OOVAOWUXWHMSNC->append(newRefText("sest")); 
DataChain* KNLYJYHFIXJSWN = new DataChain(); 
chain_HWQNQRQPMXUJJL->append(newRefStructBrackets(KNLYJYHFIXJSWN)); 
DataChain* KKUFNUXXZRZBMN = new DataChain(); 
KNLYJYHFIXJSWN->append(newRefStructBrackets(KKUFNUXXZRZBMN)); 
KKUFNUXXZRZBMN->append(newRefText("rek")); 
KNLYJYHFIXJSWN->append(newRefText("reka")); 
return chain_HWQNQRQPMXUJJL;
}
sentence_after_1: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* CompletionTable(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ empty ] 
/*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_MGQOOKETLYHNKO = context->putChain(); 
DataChain* AUGZQRCDDIUTEI = new DataChain(); 
chain_MGQOOKETLYHNKO->append(newRefStructBrackets(AUGZQRCDDIUTEI)); 
DataChain* OJWAYYZPVSCMPS = new DataChain(); 
AUGZQRCDDIUTEI->append(newRefStructBrackets(OJWAYYZPVSCMPS)); 
OJWAYYZPVSCMPS->append(newRefText("nuli")); 
AUGZQRCDDIUTEI->append(newRefText("at")); 
DataChain* AJLFVGUBFAAOVL = new DataChain(); 
chain_MGQOOKETLYHNKO->append(newRefStructBrackets(AJLFVGUBFAAOVL)); 
DataChain* ZYLNTRKDCPWSRT = new DataChain(); 
AJLFVGUBFAAOVL->append(newRefStructBrackets(ZYLNTRKDCPWSRT)); 
ZYLNTRKDCPWSRT->append(newRefText("nul")); 
AJLFVGUBFAAOVL->append(newRefText("at")); 
DataChain* ESJWHDIZCOBZCN = new DataChain(); 
chain_MGQOOKETLYHNKO->append(newRefStructBrackets(ESJWHDIZCOBZCN)); 
DataChain* FWLQIJTVDWVXHR = new DataChain(); 
ESJWHDIZCOBZCN->append(newRefStructBrackets(FWLQIJTVDWVXHR)); 
FWLQIJTVDWVXHR->append(newRefText("aet")); 
ESJWHDIZCOBZCN->append(newRefText("at")); 
DataChain* CBLDVGYLWGBUSB = new DataChain(); 
chain_MGQOOKETLYHNKO->append(newRefStructBrackets(CBLDVGYLWGBUSB)); 
DataChain* MBORXTLHCSMPXO = new DataChain(); 
CBLDVGYLWGBUSB->append(newRefStructBrackets(MBORXTLHCSMPXO)); 
MBORXTLHCSMPXO->append(newRefText("et")); 
CBLDVGYLWGBUSB->append(newRefText("at")); 
DataChain* HGMGNKEUFDXOTO = new DataChain(); 
chain_MGQOOKETLYHNKO->append(newRefStructBrackets(HGMGNKEUFDXOTO)); 
DataChain* GBGXPEYANFETCU = new DataChain(); 
HGMGNKEUFDXOTO->append(newRefStructBrackets(GBGXPEYANFETCU)); 
GBGXPEYANFETCU->append(newRefText("ech")); 
HGMGNKEUFDXOTO->append(newRefText("at")); 
DataChain* KEPZSHKLJUGGGE = new DataChain(); 
chain_MGQOOKETLYHNKO->append(newRefStructBrackets(KEPZSHKLJUGGGE)); 
DataChain* KJDQZJENPEVQGX = new DataChain(); 
KEPZSHKLJUGGGE->append(newRefStructBrackets(KJDQZJENPEVQGX)); 
KJDQZJENPEVQGX->append(newRefText("al")); 
KEPZSHKLJUGGGE->append(newRefText("at")); 
DataChain* IEPJSRDZJAZUJL = new DataChain(); 
chain_MGQOOKETLYHNKO->append(newRefStructBrackets(IEPJSRDZJAZUJL)); 
DataChain* LCHHBFQMKIMWZO = new DataChain(); 
IEPJSRDZJAZUJL->append(newRefStructBrackets(LCHHBFQMKIMWZO)); 
LCHHBFQMKIMWZO->append(newRefText("el")); 
IEPJSRDZJAZUJL->append(newRefText("at")); 
DataChain* BIWYBXDUUNFSKS = new DataChain(); 
chain_MGQOOKETLYHNKO->append(newRefStructBrackets(BIWYBXDUUNFSKS)); 
DataChain* RSRTEKMQDCYZJE = new DataChain(); 
BIWYBXDUUNFSKS->append(newRefStructBrackets(RSRTEKMQDCYZJE)); 
RSRTEKMQDCYZJE->append(newRefText("vie")); 
BIWYBXDUUNFSKS->append(newRefText("vij")); 
DataChain* EUHMSRQCOZIJIP = new DataChain(); 
chain_MGQOOKETLYHNKO->append(newRefStructBrackets(EUHMSRQCOZIJIP)); 
DataChain* FIONEEDDPSZRNA = new DataChain(); 
EUHMSRQCOZIJIP->append(newRefStructBrackets(FIONEEDDPSZRNA)); 
FIONEEDDPSZRNA->append(newRefText("vaya")); 
EUHMSRQCOZIJIP->append(newRefText("vij")); 
DataChain* VYMMTATBDZQSOE = new DataChain(); 
chain_MGQOOKETLYHNKO->append(newRefStructBrackets(VYMMTATBDZQSOE)); 
DataChain* MUVNPPPSUACBAZ = new DataChain(); 
VYMMTATBDZQSOE->append(newRefStructBrackets(MUVNPPPSUACBAZ)); 
MUVNPPPSUACBAZ->append(newRefText("aja")); 
VYMMTATBDZQSOE->append(newRefText("oj")); 
DataChain* UXMHECTHLEGRPU = new DataChain(); 
chain_MGQOOKETLYHNKO->append(newRefStructBrackets(UXMHECTHLEGRPU)); 
DataChain* NKDMBPPWEQTGJO = new DataChain(); 
UXMHECTHLEGRPU->append(newRefStructBrackets(NKDMBPPWEQTGJO)); 
NKDMBPPWEQTGJO->append(newRefText("ie")); 
UXMHECTHLEGRPU->append(newRefText("oj")); 
DataChain* PARMOWZDQYOXYT = new DataChain(); 
chain_MGQOOKETLYHNKO->append(newRefStructBrackets(PARMOWZDQYOXYT)); 
DataChain* JBBHAWDYDCPRJB = new DataChain(); 
PARMOWZDQYOXYT->append(newRefStructBrackets(JBBHAWDYDCPRJB)); 
JBBHAWDYDCPRJB->append(newRefText("uyu")); 
PARMOWZDQYOXYT->append(newRefText("oj")); 
return chain_MGQOOKETLYHNKO;
}
sentence_after_1: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Question(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
// pattern 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor XPHOOHPKWQYUHR;
/*DEF*/	DataCursor QZHNBNFUVQNQQL;
/*DEF*/	DataCursor RZJPXIOGVLIEXD;
/*SET*/	XPHOOHPKWQYUHR = arg_from;
/*INC*/	if (!INC(XPHOOHPKWQYUHR, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (XPHOOHPKWQYUHR.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	QZHNBNFUVQNQQL = XPHOOHPKWQYUHR.container->value.bracket_data.chain->at_before_first();
	RZJPXIOGVLIEXD   = XPHOOHPKWQYUHR.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_Word;
/*DEF*/	DataCursor r_Word;
/*SET*/	l_Word = QZHNBNFUVQNQQL;
/*SET*/	r_Word = RZJPXIOGVLIEXD;
//// [ empty ] 
/*ISEMPTY*/	if (XPHOOHPKWQYUHR!=0 && arg_to != XPHOOHPKWQYUHR) goto sentence_after_1;
// substitute rigth part 
ExecContext context_SNHHLQQRZUDLTF_static; 
ExecContext *context_SNHHLQQRZUDLTF = &context_SNHHLQQRZUDLTF_static; 
// new chain 
DataChain *chain_ZOTCJTNZXUGLSD = context->putChain(); 
DataChain* SMZCNOCKVFAJFR = new DataChain(); 
DataContainer* SMZCNOCKVFAJFR_execbr = newRefExecBrackets(WordsMissTable, SMZCNOCKVFAJFR, "WordsMissTable");
chain_ZOTCJTNZXUGLSD->append(SMZCNOCKVFAJFR_execbr);
context_SNHHLQQRZUDLTF->pushExecuteCall(SMZCNOCKVFAJFR_execbr); // WordsMissTable
// exeute
execute(context_SNHHLQQRZUDLTF, chain_ZOTCJTNZXUGLSD);
/*DEF*/	DataCursor ZUZOSRKRUSVOJB;
/*DEF*/	DataCursor RZMWZPOWKJILEF;
// SET_CHAIN_CURSORS 
ZUZOSRKRUSVOJB = chain_ZOTCJTNZXUGLSD->at_before_first(); 
RZMWZPOWKJILEF = chain_ZOTCJTNZXUGLSD->at_last(); 
/*JMP*/	goto label_nodel_XPQNJWJMWAXXMN;
label_del_RAAMDIGPNPUUHG: 
// FREE_CHAIN chain_ZOTCJTNZXUGLSD
context->popChain(); 
/*JMP*/	goto sentence_after_1;
label_nodel_XPQNJWJMWAXXMN: 
// left part 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_L;
/*DEF*/	DataCursor r_L;
/*SET*/	l_L = ZUZOSRKRUSVOJB;
/*SET*/	r_L = ZUZOSRKRUSVOJB;
/*JMP*/	goto label_MXOTHOWKBJZWUC_firststep;
label_MXOTHOWKBJZWUC: 
/*INC*/	if (!INC(r_L, RZMWZPOWKJILEF)) goto label_del_RAAMDIGPNPUUHG;
label_MXOTHOWKBJZWUC_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor WLJFRIMPMYHCHZ;
/*DEF*/	DataCursor RIWKBARXBGFCBC;
/*DEF*/	DataCursor EYHJUGIXWTBVTR;
/*SET*/	WLJFRIMPMYHCHZ = r_L;
/*INC*/	if (!INC(WLJFRIMPMYHCHZ, RZMWZPOWKJILEF)) goto label_MXOTHOWKBJZWUC;
//// ISBRACKET 
	if (WLJFRIMPMYHCHZ.container->type != struct_bracket) goto label_MXOTHOWKBJZWUC;
//// JMP_BRACKET 
	RIWKBARXBGFCBC = WLJFRIMPMYHCHZ.container->value.bracket_data.chain->at_before_first();
	EYHJUGIXWTBVTR   = WLJFRIMPMYHCHZ.container->value.bracket_data.chain->at_last();
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor EHBBCPXIFBXVFB;
/*DEF*/	DataCursor CGKCFQCKCOTZGK;
/*DEF*/	DataCursor UBMJRMBSZTSSHF;
/*SET*/	EHBBCPXIFBXVFB = RIWKBARXBGFCBC;
/*INC*/	if (!INC(EHBBCPXIFBXVFB, EYHJUGIXWTBVTR)) goto label_MXOTHOWKBJZWUC;
//// ISBRACKET 
	if (EHBBCPXIFBXVFB.container->type != struct_bracket) goto label_MXOTHOWKBJZWUC;
//// JMP_BRACKET 
	CGKCFQCKCOTZGK = EHBBCPXIFBXVFB.container->value.bracket_data.chain->at_before_first();
	UBMJRMBSZTSSHF   = EHBBCPXIFBXVFB.container->value.bracket_data.chain->at_last();
//// [ &.name <any> ] 
/*DEF*/	DataCursor ROEFWSJRXJHGUZ;
/*SET*/	ROEFWSJRXJHGUZ = CGKCFQCKCOTZGK;
 if (!SLIDE(ROEFWSJRXJHGUZ, UBMJRMBSZTSSHF, l_Word, r_Word)) goto label_MXOTHOWKBJZWUC;
//// [ empty ] 
/*ISEMPTY*/	if (ROEFWSJRXJHGUZ!=0 && UBMJRMBSZTSSHF != ROEFWSJRXJHGUZ) goto label_MXOTHOWKBJZWUC;
//// [ e.1 ] 
/*DEF*/	DataCursor l_Qst;
/*DEF*/	DataCursor r_Qst;
/*SET*/	l_Qst = EHBBCPXIFBXVFB;
/*SET*/	r_Qst = EYHJUGIXWTBVTR;
//// [ e.1 ] 
/*DEF*/	DataCursor l_R;
/*DEF*/	DataCursor r_R;
/*SET*/	l_R = WLJFRIMPMYHCHZ;
/*SET*/	r_R = RZMWZPOWKJILEF;
// END TreeToCode_AfterPattern 

// подстановка 
// new chain 
DataChain *chain_YUPZWWEIQURPIX = context->putChain(); 
chain_YUPZWWEIQURPIX->append_copy(l_Qst, r_Qst, context); 
return chain_YUPZWWEIQURPIX;
}
sentence_after_1: 

{
// сопоставление 
// pattern 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor IQFLDUUVEOOWQC;
/*DEF*/	DataCursor UDHNEFNJHAIMUC;
/*DEF*/	DataCursor ZFSKUIDUBURISW;
/*SET*/	IQFLDUUVEOOWQC = arg_from;
/*INC*/	if (!INC(IQFLDUUVEOOWQC, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (IQFLDUUVEOOWQC.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	UDHNEFNJHAIMUC = IQFLDUUVEOOWQC.container->value.bracket_data.chain->at_before_first();
	ZFSKUIDUBURISW   = IQFLDUUVEOOWQC.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_x1;
/*DEF*/	DataCursor r_x1;
/*SET*/	l_x1 = UDHNEFNJHAIMUC;
/*SET*/	r_x1 = UDHNEFNJHAIMUC;
/*JMP*/	goto label_TBRECUYKABFCVK_firststep;
label_TBRECUYKABFCVK: 
/*INC*/	if (!INC(r_x1, ZFSKUIDUBURISW)) goto sentence_after_2;
label_TBRECUYKABFCVK_firststep: 
//// [ e.1 ] 
/*DEF*/	DataCursor l_End;
/*DEF*/	DataCursor r_End;
/*SET*/	l_End = r_x1;
/*SET*/	r_End = ZFSKUIDUBURISW;
//// [ empty ] 
/*ISEMPTY*/	if (IQFLDUUVEOOWQC!=0 && arg_to != IQFLDUUVEOOWQC) goto label_TBRECUYKABFCVK;
// substitute rigth part 
ExecContext context_ROSWITDPTPCCLI_static; 
ExecContext *context_ROSWITDPTPCCLI = &context_ROSWITDPTPCCLI_static; 
// new chain 
DataChain *chain_FKELJYTIHRCQAY = context->putChain(); 
DataChain* BNEFXNXVGZEDYY = new DataChain(); 
DataContainer* BNEFXNXVGZEDYY_execbr = newRefExecBrackets(CompletionTable, BNEFXNXVGZEDYY, "CompletionTable");
chain_FKELJYTIHRCQAY->append(BNEFXNXVGZEDYY_execbr);
context_ROSWITDPTPCCLI->pushExecuteCall(BNEFXNXVGZEDYY_execbr); // CompletionTable
// exeute
execute(context_ROSWITDPTPCCLI, chain_FKELJYTIHRCQAY);
/*DEF*/	DataCursor DZEZTOIDUKUHJZ;
/*DEF*/	DataCursor EFCZZZBFKQDPQZ;
// SET_CHAIN_CURSORS 
DZEZTOIDUKUHJZ = chain_FKELJYTIHRCQAY->at_before_first(); 
EFCZZZBFKQDPQZ = chain_FKELJYTIHRCQAY->at_last(); 
/*JMP*/	goto label_nodel_GKJELRLPAXAMCE;
label_del_IKFOBUCDHTHXDJ: 
// FREE_CHAIN chain_FKELJYTIHRCQAY
context->popChain(); 
/*JMP*/	goto label_TBRECUYKABFCVK;
label_nodel_GKJELRLPAXAMCE: 
// left part 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_L;
/*DEF*/	DataCursor r_L;
/*SET*/	l_L = DZEZTOIDUKUHJZ;
/*SET*/	r_L = DZEZTOIDUKUHJZ;
/*JMP*/	goto label_HNGYCDRUDMPHME_firststep;
label_HNGYCDRUDMPHME: 
/*INC*/	if (!INC(r_L, EFCZZZBFKQDPQZ)) goto label_del_IKFOBUCDHTHXDJ;
label_HNGYCDRUDMPHME_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor CKOTRWOSPOFGHF;
/*DEF*/	DataCursor OZQVLQFXWWKMFX;
/*DEF*/	DataCursor DYYGMDCASZSGOV;
/*SET*/	CKOTRWOSPOFGHF = r_L;
/*INC*/	if (!INC(CKOTRWOSPOFGHF, EFCZZZBFKQDPQZ)) goto label_HNGYCDRUDMPHME;
//// ISBRACKET 
	if (CKOTRWOSPOFGHF.container->type != struct_bracket) goto label_HNGYCDRUDMPHME;
//// JMP_BRACKET 
	OZQVLQFXWWKMFX = CKOTRWOSPOFGHF.container->value.bracket_data.chain->at_before_first();
	DYYGMDCASZSGOV   = CKOTRWOSPOFGHF.container->value.bracket_data.chain->at_last();
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor SODKJGHCWMBMXR;
/*DEF*/	DataCursor MHUYFYQGAJQKCK;
/*DEF*/	DataCursor LZNAYXQKQOYZWM;
/*SET*/	SODKJGHCWMBMXR = OZQVLQFXWWKMFX;
/*INC*/	if (!INC(SODKJGHCWMBMXR, DYYGMDCASZSGOV)) goto label_HNGYCDRUDMPHME;
//// ISBRACKET 
	if (SODKJGHCWMBMXR.container->type != struct_bracket) goto label_HNGYCDRUDMPHME;
//// JMP_BRACKET 
	MHUYFYQGAJQKCK = SODKJGHCWMBMXR.container->value.bracket_data.chain->at_before_first();
	LZNAYXQKQOYZWM   = SODKJGHCWMBMXR.container->value.bracket_data.chain->at_last();
//// [ &.name <any> ] 
/*DEF*/	DataCursor YUBZAZCPKHKTKY;
/*SET*/	YUBZAZCPKHKTKY = MHUYFYQGAJQKCK;
 if (!SLIDE(YUBZAZCPKHKTKY, LZNAYXQKQOYZWM, l_End, r_End)) goto label_HNGYCDRUDMPHME;
//// [ empty ] 
/*ISEMPTY*/	if (YUBZAZCPKHKTKY!=0 && LZNAYXQKQOYZWM != YUBZAZCPKHKTKY) goto label_HNGYCDRUDMPHME;
//// [ e.1 ] 
/*DEF*/	DataCursor l_Qst;
/*DEF*/	DataCursor r_Qst;
/*SET*/	l_Qst = SODKJGHCWMBMXR;
/*SET*/	r_Qst = DYYGMDCASZSGOV;
//// [ e.1 ] 
/*DEF*/	DataCursor l_R;
/*DEF*/	DataCursor r_R;
/*SET*/	l_R = CKOTRWOSPOFGHF;
/*SET*/	r_R = EFCZZZBFKQDPQZ;
// END TreeToCode_AfterPattern 

// подстановка 
// new chain 
DataChain *chain_DZIVCUYPURFMBI = context->putChain(); 
chain_DZIVCUYPURFMBI->append_copy(l_x1, r_x1, context); 
chain_DZIVCUYPURFMBI->append_copy(l_Qst, r_Qst, context); 
return chain_DZIVCUYPURFMBI;
}
sentence_after_2: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor SGEKYRGZVXDHPO;
/*DEF*/	DataCursor AMVAFYRARXSVKH;
/*DEF*/	DataCursor TQDIHERSIGBHZJ;
/*SET*/	SGEKYRGZVXDHPO = arg_from;
/*INC*/	if (!INC(SGEKYRGZVXDHPO, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (SGEKYRGZVXDHPO.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	AMVAFYRARXSVKH = SGEKYRGZVXDHPO.container->value.bracket_data.chain->at_before_first();
	TQDIHERSIGBHZJ   = SGEKYRGZVXDHPO.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = AMVAFYRARXSVKH;
/*SET*/	r_1 = TQDIHERSIGBHZJ;
//// [ empty ] 
/*ISEMPTY*/	if (SGEKYRGZVXDHPO!=0 && arg_to != SGEKYRGZVXDHPO) goto sentence_after_3;

// подстановка 
// new chain 
DataChain *chain_ZUJXMMYSPNARAE = context->putChain(); 
chain_ZUJXMMYSPNARAE->append_copy(l_1, r_1, context); 
return chain_ZUJXMMYSPNARAE;
}
sentence_after_3: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}
