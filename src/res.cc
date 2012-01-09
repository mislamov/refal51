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
DataContainer* DXFIRCVSCXGGBW_execbr = newRefExecBrackets(Begin, DXFIRCVSCXGGBW, "Begin");
chain_PHQGHUMEAYLNLF->append(DXFIRCVSCXGGBW_execbr);
context->pushExecuteCall(DXFIRCVSCXGGBW_execbr); // Begin
return chain_PHQGHUMEAYLNLF;
}
sentence_after_1: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Begin(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ empty ] 
/*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_KFNQDUXWFNFOZV = context->putChain(); 
DataChain* SRTKJPREPGGXRP = new DataChain(); 
DataContainer* SRTKJPREPGGXRP_execbr = newRefExecBrackets(Prout, SRTKJPREPGGXRP, "Prout");
chain_KFNQDUXWFNFOZV->append(SRTKJPREPGGXRP_execbr);
SRTKJPREPGGXRP->append(newRefText("Who is first? (1 - pc  2 - you)")); 
context->pushExecuteCall(SRTKJPREPGGXRP_execbr); // Prout
DataChain* NRVYSTMWCYSYYC = new DataChain(); 
DataContainer* NRVYSTMWCYSYYC_execbr = newRefExecBrackets(FirG, NRVYSTMWCYSYYC, "FirG");
chain_KFNQDUXWFNFOZV->append(NRVYSTMWCYSYYC_execbr);
DataChain* QPEVIKEFFMZNIM = new DataChain(); 
DataContainer* QPEVIKEFFMZNIM_execbr = newRefExecBrackets(Card, QPEVIKEFFMZNIM, "Card");
NRVYSTMWCYSYYC->append(QPEVIKEFFMZNIM_execbr);
context->pushExecuteCall(QPEVIKEFFMZNIM_execbr); // Card
context->pushExecuteCall(NRVYSTMWCYSYYC_execbr); // FirG
return chain_KFNQDUXWFNFOZV;
}
sentence_after_1: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* FirG(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor KKASVWSRENZKYC;
/*SET*/	KKASVWSRENZKYC = arg_from;
/*INC*/	if (!INC(KKASVWSRENZKYC, arg_to)) goto sentence_after_1;
	if (KKASVWSRENZKYC.container->type != text || *(KKASVWSRENZKYC.container->value.text + KKASVWSRENZKYC.index) != '1') goto sentence_after_1;
//// [ empty ] 
/*ISEMPTY*/	if (KKASVWSRENZKYC!=0 && arg_to != KKASVWSRENZKYC) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_OOEFXZBCOEJUVP = context->putChain(); 
DataChain* VABOYGPOEYLFPB = new DataChain(); 
DataContainer* VABOYGPOEYLFPB_execbr = newRefExecBrackets(Game, VABOYGPOEYLFPB, "Game");
chain_OOEFXZBCOEJUVP->append(VABOYGPOEYLFPB_execbr);
DataChain* NPLJVRVIPYAMYE = new DataChain(); 
VABOYGPOEYLFPB->append(newRefStructBrackets(NPLJVRVIPYAMYE)); 
NPLJVRVIPYAMYE->append(newRefText("2")); 
DataChain* HWQNQRQPMXUJJL = new DataChain(); 
VABOYGPOEYLFPB->append(newRefStructBrackets(HWQNQRQPMXUJJL)); 
HWQNQRQPMXUJJL->append(newRefText("1")); 
DataChain* OOVAOWUXWHMSNC = new DataChain(); 
VABOYGPOEYLFPB->append(newRefStructBrackets(OOVAOWUXWHMSNC)); 
DataChain* BXCOKSFZKVATXD = new DataChain(); 
VABOYGPOEYLFPB->append(newRefStructBrackets(BXCOKSFZKVATXD)); 
BXCOKSFZKVATXD->append(newRefText("23456789")); 
context->pushExecuteCall(VABOYGPOEYLFPB_execbr); // Game
return chain_OOEFXZBCOEJUVP;
}
sentence_after_1: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor KNLYJYHFIXJSWN;
/*SET*/	KNLYJYHFIXJSWN = arg_from;
/*INC*/	if (!INC(KNLYJYHFIXJSWN, arg_to)) goto sentence_after_2;
	if (KNLYJYHFIXJSWN.container->type != text || *(KNLYJYHFIXJSWN.container->value.text + KNLYJYHFIXJSWN.index) != '2') goto sentence_after_2;
//// [ empty ] 
/*ISEMPTY*/	if (KNLYJYHFIXJSWN!=0 && arg_to != KNLYJYHFIXJSWN) goto sentence_after_2;

// подстановка 
// new chain 
DataChain *chain_MGQOOKETLYHNKO = context->putChain(); 
DataChain* AUGZQRCDDIUTEI = new DataChain(); 
DataContainer* AUGZQRCDDIUTEI_execbr = newRefExecBrackets(Game, AUGZQRCDDIUTEI, "Game");
chain_MGQOOKETLYHNKO->append(AUGZQRCDDIUTEI_execbr);
DataChain* OJWAYYZPVSCMPS = new DataChain(); 
AUGZQRCDDIUTEI->append(newRefStructBrackets(OJWAYYZPVSCMPS)); 
OJWAYYZPVSCMPS->append(newRefText("2")); 
DataChain* AJLFVGUBFAAOVL = new DataChain(); 
AUGZQRCDDIUTEI->append(newRefStructBrackets(AJLFVGUBFAAOVL)); 
DataChain* ZYLNTRKDCPWSRT = new DataChain(); 
AUGZQRCDDIUTEI->append(newRefStructBrackets(ZYLNTRKDCPWSRT)); 
DataChain* ESJWHDIZCOBZCN = new DataChain(); 
AUGZQRCDDIUTEI->append(newRefStructBrackets(ESJWHDIZCOBZCN)); 
ESJWHDIZCOBZCN->append(newRefText("123456789")); 
context->pushExecuteCall(AUGZQRCDDIUTEI_execbr); // Game
return chain_MGQOOKETLYHNKO;
}
sentence_after_2: 

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = arg_from;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_FWLQIJTVDWVXHR = context->putChain(); 
return chain_FWLQIJTVDWVXHR;
}
sentence_after_3: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Game(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor CBLDVGYLWGBUSB;
/*DEF*/	DataCursor MBORXTLHCSMPXO;
/*DEF*/	DataCursor HGMGNKEUFDXOTO;
/*SET*/	CBLDVGYLWGBUSB = arg_from;
/*INC*/	if (!INC(CBLDVGYLWGBUSB, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (CBLDVGYLWGBUSB.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	MBORXTLHCSMPXO = CBLDVGYLWGBUSB.container->value.bracket_data.chain->at_before_first();
	HGMGNKEUFDXOTO   = CBLDVGYLWGBUSB.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor GBGXPEYANFETCU;
/*DEF*/	DataCursor l_g;
/*DEF*/	DataCursor r_g;
/*SET*/	l_g = MBORXTLHCSMPXO;
/*SET*/	GBGXPEYANFETCU = MBORXTLHCSMPXO;
/*INC*/	if (!INC(GBGXPEYANFETCU, HGMGNKEUFDXOTO)) goto sentence_after_1;
	if (! isSymbolType(GBGXPEYANFETCU.container->type)) goto sentence_after_1;
/*SET*/	r_g = GBGXPEYANFETCU;
//// [ empty ] 
/*ISEMPTY*/	if (r_g!=0 && HGMGNKEUFDXOTO != r_g) goto sentence_after_1;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor KEPZSHKLJUGGGE;
/*DEF*/	DataCursor KJDQZJENPEVQGX;
/*DEF*/	DataCursor IEPJSRDZJAZUJL;
/*SET*/	KEPZSHKLJUGGGE = CBLDVGYLWGBUSB;
/*INC*/	if (!INC(KEPZSHKLJUGGGE, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (KEPZSHKLJUGGGE.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	KJDQZJENPEVQGX = KEPZSHKLJUGGGE.container->value.bracket_data.chain->at_before_first();
	IEPJSRDZJAZUJL   = KEPZSHKLJUGGGE.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = KJDQZJENPEVQGX;
/*SET*/	r_1 = IEPJSRDZJAZUJL;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor LCHHBFQMKIMWZO;
/*DEF*/	DataCursor BIWYBXDUUNFSKS;
/*DEF*/	DataCursor RSRTEKMQDCYZJE;
/*SET*/	LCHHBFQMKIMWZO = KEPZSHKLJUGGGE;
/*INC*/	if (!INC(LCHHBFQMKIMWZO, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (LCHHBFQMKIMWZO.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	BIWYBXDUUNFSKS = LCHHBFQMKIMWZO.container->value.bracket_data.chain->at_before_first();
	RSRTEKMQDCYZJE   = LCHHBFQMKIMWZO.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = BIWYBXDUUNFSKS;
/*SET*/	r_2 = RSRTEKMQDCYZJE;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor EUHMSRQCOZIJIP;
/*DEF*/	DataCursor FIONEEDDPSZRNA;
/*DEF*/	DataCursor VYMMTATBDZQSOE;
/*SET*/	EUHMSRQCOZIJIP = LCHHBFQMKIMWZO;
/*INC*/	if (!INC(EUHMSRQCOZIJIP, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (EUHMSRQCOZIJIP.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	FIONEEDDPSZRNA = EUHMSRQCOZIJIP.container->value.bracket_data.chain->at_before_first();
	VYMMTATBDZQSOE   = EUHMSRQCOZIJIP.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = FIONEEDDPSZRNA;
/*SET*/	r_n = VYMMTATBDZQSOE;
//// [ empty ] 
/*ISEMPTY*/	if (EUHMSRQCOZIJIP!=0 && arg_to != EUHMSRQCOZIJIP) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_MUVNPPPSUACBAZ = context->putChain(); 
DataChain* UXMHECTHLEGRPU = new DataChain(); 
DataContainer* UXMHECTHLEGRPU_execbr = newRefExecBrackets(Ekran, UXMHECTHLEGRPU, "Ekran");
chain_MUVNPPPSUACBAZ->append(UXMHECTHLEGRPU_execbr);
DataChain* NKDMBPPWEQTGJO = new DataChain(); 
UXMHECTHLEGRPU->append(newRefStructBrackets(NKDMBPPWEQTGJO)); 
NKDMBPPWEQTGJO->append_copy(l_1, r_1, context); 
DataChain* PARMOWZDQYOXYT = new DataChain(); 
UXMHECTHLEGRPU->append(newRefStructBrackets(PARMOWZDQYOXYT)); 
PARMOWZDQYOXYT->append_copy(l_2, r_2, context); 
context->pushExecuteCall(UXMHECTHLEGRPU_execbr); // Ekran
DataChain* JBBHAWDYDCPRJB = new DataChain(); 
DataContainer* JBBHAWDYDCPRJB_execbr = newRefExecBrackets(GameIfWin, JBBHAWDYDCPRJB, "GameIfWin");
chain_MUVNPPPSUACBAZ->append(JBBHAWDYDCPRJB_execbr);
DataChain* XPHOOHPKWQYUHR = new DataChain(); 
DataContainer* XPHOOHPKWQYUHR_execbr = newRefExecBrackets(Ifwin, XPHOOHPKWQYUHR, "Ifwin");
JBBHAWDYDCPRJB->append(XPHOOHPKWQYUHR_execbr);
DataChain* QZHNBNFUVQNQQL = new DataChain(); 
XPHOOHPKWQYUHR->append(newRefStructBrackets(QZHNBNFUVQNQQL)); 
QZHNBNFUVQNQQL->append_copy(l_1, r_1, context); 
DataChain* RZJPXIOGVLIEXD = new DataChain(); 
XPHOOHPKWQYUHR->append(newRefStructBrackets(RZJPXIOGVLIEXD)); 
RZJPXIOGVLIEXD->append_copy(l_2, r_2, context); 
context->pushExecuteCall(XPHOOHPKWQYUHR_execbr); // Ifwin
DataChain* ZUZOSRKRUSVOJB = new DataChain(); 
JBBHAWDYDCPRJB->append(newRefStructBrackets(ZUZOSRKRUSVOJB)); 
ZUZOSRKRUSVOJB->append_copy(l_g, r_g, context); 
DataChain* RZMWZPOWKJILEF = new DataChain(); 
JBBHAWDYDCPRJB->append(newRefStructBrackets(RZMWZPOWKJILEF)); 
RZMWZPOWKJILEF->append_copy(l_1, r_1, context); 
DataChain* RAAMDIGPNPUUHG = new DataChain(); 
JBBHAWDYDCPRJB->append(newRefStructBrackets(RAAMDIGPNPUUHG)); 
RAAMDIGPNPUUHG->append_copy(l_2, r_2, context); 
DataChain* XPQNJWJMWAXXMN = new DataChain(); 
JBBHAWDYDCPRJB->append(newRefStructBrackets(XPQNJWJMWAXXMN)); 
XPQNJWJMWAXXMN->append_copy(l_n, r_n, context); 
context->pushExecuteCall(JBBHAWDYDCPRJB_execbr); // GameIfWin
return chain_MUVNPPPSUACBAZ;
}
sentence_after_1: 

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = arg_from;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_SNHHLQQRZUDLTF = context->putChain(); 
return chain_SNHHLQQRZUDLTF;
}
sentence_after_2: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* GameIfWin(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor ZOTCJTNZXUGLSD;
/*SET*/	ZOTCJTNZXUGLSD = arg_from;
/*INC*/	if (!INC(ZOTCJTNZXUGLSD, arg_to)) goto sentence_after_1;
	if (ZOTCJTNZXUGLSD.container->type != text || *(ZOTCJTNZXUGLSD.container->value.text + ZOTCJTNZXUGLSD.index) != '0') goto sentence_after_1;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = ZOTCJTNZXUGLSD;
/*SET*/	r_e = ZOTCJTNZXUGLSD;
/*JMP*/	goto label_SMZCNOCKVFAJFR_firststep;
label_SMZCNOCKVFAJFR: 
/*INC*/	if (!INC(r_e, arg_to)) goto sentence_after_1;
label_SMZCNOCKVFAJFR_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor MXOTHOWKBJZWUC;
/*DEF*/	DataCursor WLJFRIMPMYHCHZ;
/*DEF*/	DataCursor RIWKBARXBGFCBC;
/*SET*/	MXOTHOWKBJZWUC = r_e;
/*INC*/	if (!INC(MXOTHOWKBJZWUC, arg_to)) goto label_SMZCNOCKVFAJFR;
//// ISBRACKET 
	if (MXOTHOWKBJZWUC.container->type != struct_bracket) goto label_SMZCNOCKVFAJFR;
//// JMP_BRACKET 
	WLJFRIMPMYHCHZ = MXOTHOWKBJZWUC.container->value.bracket_data.chain->at_before_first();
	RIWKBARXBGFCBC   = MXOTHOWKBJZWUC.container->value.bracket_data.chain->at_last();
//// [ empty ] 
/*ISEMPTY*/	if (WLJFRIMPMYHCHZ!=0 && RIWKBARXBGFCBC != WLJFRIMPMYHCHZ) goto label_SMZCNOCKVFAJFR;
//// [ empty ] 
/*ISEMPTY*/	if (MXOTHOWKBJZWUC!=0 && arg_to != MXOTHOWKBJZWUC) goto label_SMZCNOCKVFAJFR;

// подстановка 
// new chain 
DataChain *chain_EHBBCPXIFBXVFB = context->putChain(); 
DataChain* CGKCFQCKCOTZGK = new DataChain(); 
DataContainer* CGKCFQCKCOTZGK_execbr = newRefExecBrackets(Prout, CGKCFQCKCOTZGK, "Prout");
chain_EHBBCPXIFBXVFB->append(CGKCFQCKCOTZGK_execbr);
CGKCFQCKCOTZGK->append(newRefText("Nobody !!!.")); 
context->pushExecuteCall(CGKCFQCKCOTZGK_execbr); // Prout
return chain_EHBBCPXIFBXVFB;
}
sentence_after_1: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor UBMJRMBSZTSSHF;
/*SET*/	UBMJRMBSZTSSHF = arg_from;
/*INC*/	if (!INC(UBMJRMBSZTSSHF, arg_to)) goto sentence_after_2;
	if (UBMJRMBSZTSSHF.container->type != text || *(UBMJRMBSZTSSHF.container->value.text + UBMJRMBSZTSSHF.index) != '1') goto sentence_after_2;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = UBMJRMBSZTSSHF;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_YUPZWWEIQURPIX = context->putChain(); 
DataChain* IQFLDUUVEOOWQC = new DataChain(); 
DataContainer* IQFLDUUVEOOWQC_execbr = newRefExecBrackets(Prout, IQFLDUUVEOOWQC, "Prout");
chain_YUPZWWEIQURPIX->append(IQFLDUUVEOOWQC_execbr);
IQFLDUUVEOOWQC->append(newRefText("Winner X")); 
context->pushExecuteCall(IQFLDUUVEOOWQC_execbr); // Prout
return chain_YUPZWWEIQURPIX;
}
sentence_after_2: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor UDHNEFNJHAIMUC;
/*SET*/	UDHNEFNJHAIMUC = arg_from;
/*INC*/	if (!INC(UDHNEFNJHAIMUC, arg_to)) goto sentence_after_3;
	if (UDHNEFNJHAIMUC.container->type != text || *(UDHNEFNJHAIMUC.container->value.text + UDHNEFNJHAIMUC.index) != '2') goto sentence_after_3;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = UDHNEFNJHAIMUC;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_TBRECUYKABFCVK = context->putChain(); 
DataChain* DZEZTOIDUKUHJZ = new DataChain(); 
DataContainer* DZEZTOIDUKUHJZ_execbr = newRefExecBrackets(Prout, DZEZTOIDUKUHJZ, "Prout");
chain_TBRECUYKABFCVK->append(DZEZTOIDUKUHJZ_execbr);
DZEZTOIDUKUHJZ->append(newRefText("Winner O")); 
context->pushExecuteCall(DZEZTOIDUKUHJZ_execbr); // Prout
return chain_TBRECUYKABFCVK;
}
sentence_after_3: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor EFCZZZBFKQDPQZ;
/*SET*/	EFCZZZBFKQDPQZ = arg_from;
/*INC*/	if (!INC(EFCZZZBFKQDPQZ, arg_to)) goto sentence_after_4;
	if (EFCZZZBFKQDPQZ.container->type != text || *(EFCZZZBFKQDPQZ.container->value.text + EFCZZZBFKQDPQZ.index) != '0') goto sentence_after_4;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = EFCZZZBFKQDPQZ;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_GKJELRLPAXAMCE = context->putChain(); 
DataChain* ROSWITDPTPCCLI = new DataChain(); 
DataContainer* ROSWITDPTPCCLI_execbr = newRefExecBrackets(Game1, ROSWITDPTPCCLI, "Game1");
chain_GKJELRLPAXAMCE->append(ROSWITDPTPCCLI_execbr);
ROSWITDPTPCCLI->append_copy(l_e, r_e, context); 
context->pushExecuteCall(ROSWITDPTPCCLI_execbr); // Game1
return chain_GKJELRLPAXAMCE;
}
sentence_after_4: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Game1(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor FKELJYTIHRCQAY;
/*DEF*/	DataCursor BNEFXNXVGZEDYY;
/*DEF*/	DataCursor HNGYCDRUDMPHME;
/*SET*/	FKELJYTIHRCQAY = arg_from;
/*INC*/	if (!INC(FKELJYTIHRCQAY, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (FKELJYTIHRCQAY.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	BNEFXNXVGZEDYY = FKELJYTIHRCQAY.container->value.bracket_data.chain->at_before_first();
	HNGYCDRUDMPHME   = FKELJYTIHRCQAY.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor CKOTRWOSPOFGHF;
/*SET*/	CKOTRWOSPOFGHF = BNEFXNXVGZEDYY;
/*INC*/	if (!INC(CKOTRWOSPOFGHF, HNGYCDRUDMPHME)) goto sentence_after_1;
	if (CKOTRWOSPOFGHF.container->type != text || *(CKOTRWOSPOFGHF.container->value.text + CKOTRWOSPOFGHF.index) != '1') goto sentence_after_1;
//// [ empty ] 
/*ISEMPTY*/	if (CKOTRWOSPOFGHF!=0 && HNGYCDRUDMPHME != CKOTRWOSPOFGHF) goto sentence_after_1;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_12;
/*DEF*/	DataCursor r_12;
/*SET*/	l_12 = FKELJYTIHRCQAY;
/*SET*/	r_12 = FKELJYTIHRCQAY;
/*JMP*/	goto label_DYYGMDCASZSGOV_firststep;
label_DYYGMDCASZSGOV: 
/*INC*/	if (!INC(r_12, arg_to)) goto sentence_after_1;
label_DYYGMDCASZSGOV_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor SODKJGHCWMBMXR;
/*DEF*/	DataCursor MHUYFYQGAJQKCK;
/*DEF*/	DataCursor LZNAYXQKQOYZWM;
/*SET*/	SODKJGHCWMBMXR = r_12;
/*INC*/	if (!INC(SODKJGHCWMBMXR, arg_to)) goto label_DYYGMDCASZSGOV;
//// ISBRACKET 
	if (SODKJGHCWMBMXR.container->type != struct_bracket) goto label_DYYGMDCASZSGOV;
//// JMP_BRACKET 
	MHUYFYQGAJQKCK = SODKJGHCWMBMXR.container->value.bracket_data.chain->at_before_first();
	LZNAYXQKQOYZWM   = SODKJGHCWMBMXR.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = MHUYFYQGAJQKCK;
/*SET*/	r_n = LZNAYXQKQOYZWM;
//// [ empty ] 
/*ISEMPTY*/	if (SODKJGHCWMBMXR!=0 && arg_to != SODKJGHCWMBMXR) goto label_DYYGMDCASZSGOV;

// подстановка 
// new chain 
DataChain *chain_YUBZAZCPKHKTKY = context->putChain(); 
DataChain* DZIVCUYPURFMBI = new DataChain(); 
DataContainer* DZIVCUYPURFMBI_execbr = newRefExecBrackets(Prout, DZIVCUYPURFMBI, "Prout");
chain_YUBZAZCPKHKTKY->append(DZIVCUYPURFMBI_execbr);
DZIVCUYPURFMBI->append(newRefText("hmm ...")); 
context->pushExecuteCall(DZIVCUYPURFMBI_execbr); // Prout
DataChain* SGEKYRGZVXDHPO = new DataChain(); 
DataContainer* SGEKYRGZVXDHPO_execbr = newRefExecBrackets(Game, SGEKYRGZVXDHPO, "Game");
chain_YUBZAZCPKHKTKY->append(SGEKYRGZVXDHPO_execbr);
DataChain* AMVAFYRARXSVKH = new DataChain(); 
SGEKYRGZVXDHPO->append(newRefStructBrackets(AMVAFYRARXSVKH)); 
AMVAFYRARXSVKH->append(newRefText("2")); 
DataChain* TQDIHERSIGBHZJ = new DataChain(); 
DataContainer* TQDIHERSIGBHZJ_execbr = newRefExecBrackets(PlayerHod, TQDIHERSIGBHZJ, "PlayerHod");
SGEKYRGZVXDHPO->append(TQDIHERSIGBHZJ_execbr);
TQDIHERSIGBHZJ->append(newRefText("1")); 
DataChain* ZUJXMMYSPNARAE = new DataChain(); 
DataContainer* ZUJXMMYSPNARAE_execbr = newRefExecBrackets(GetHod, ZUJXMMYSPNARAE, "GetHod");
TQDIHERSIGBHZJ->append(ZUJXMMYSPNARAE_execbr);
ZUJXMMYSPNARAE->append(newRefText("1")); 
DataChain* WKEGJCCVHHRJVB = new DataChain(); 
ZUJXMMYSPNARAE->append(newRefStructBrackets(WKEGJCCVHHRJVB)); 
WKEGJCCVHHRJVB->append(newRefText("1")); 
ZUJXMMYSPNARAE->append_copy(l_12, r_12, context); 
DataChain* JTSQDJOOTGPKNF = new DataChain(); 
ZUJXMMYSPNARAE->append(newRefStructBrackets(JTSQDJOOTGPKNF)); 
JTSQDJOOTGPKNF->append_copy(l_n, r_n, context); 
context->pushExecuteCall(ZUJXMMYSPNARAE_execbr); // GetHod
TQDIHERSIGBHZJ->append_copy(l_12, r_12, context); 
DataChain* PFYCGFIEOWQRWW = new DataChain(); 
TQDIHERSIGBHZJ->append(newRefStructBrackets(PFYCGFIEOWQRWW)); 
PFYCGFIEOWQRWW->append_copy(l_n, r_n, context); 
context->pushExecuteCall(TQDIHERSIGBHZJ_execbr); // PlayerHod
context->pushExecuteCall(SGEKYRGZVXDHPO_execbr); // Game
return chain_YUBZAZCPKHKTKY;
}
sentence_after_1: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor WPZSQMETOGEPSP;
/*DEF*/	DataCursor XNVJIUPALYYNMK;
/*DEF*/	DataCursor MNUVKLHSECDWRA;
/*SET*/	WPZSQMETOGEPSP = arg_from;
/*INC*/	if (!INC(WPZSQMETOGEPSP, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (WPZSQMETOGEPSP.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	XNVJIUPALYYNMK = WPZSQMETOGEPSP.container->value.bracket_data.chain->at_before_first();
	MNUVKLHSECDWRA   = WPZSQMETOGEPSP.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor CGFMZKGIPDFODK;
/*SET*/	CGFMZKGIPDFODK = XNVJIUPALYYNMK;
/*INC*/	if (!INC(CGFMZKGIPDFODK, MNUVKLHSECDWRA)) goto sentence_after_2;
	if (CGFMZKGIPDFODK.container->type != text || *(CGFMZKGIPDFODK.container->value.text + CGFMZKGIPDFODK.index) != '2') goto sentence_after_2;
//// [ empty ] 
/*ISEMPTY*/	if (CGFMZKGIPDFODK!=0 && MNUVKLHSECDWRA != CGFMZKGIPDFODK) goto sentence_after_2;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_12;
/*DEF*/	DataCursor r_12;
/*SET*/	l_12 = WPZSQMETOGEPSP;
/*SET*/	r_12 = WPZSQMETOGEPSP;
/*JMP*/	goto label_VFVUZWYVIJGFUL_firststep;
label_VFVUZWYVIJGFUL: 
/*INC*/	if (!INC(r_12, arg_to)) goto sentence_after_2;
label_VFVUZWYVIJGFUL_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor LKJDUHSJAFBTLK;
/*DEF*/	DataCursor MFQRMYJFJNHHSS;
/*DEF*/	DataCursor QCTYDTEAMDCJBP;
/*SET*/	LKJDUHSJAFBTLK = r_12;
/*INC*/	if (!INC(LKJDUHSJAFBTLK, arg_to)) goto label_VFVUZWYVIJGFUL;
//// ISBRACKET 
	if (LKJDUHSJAFBTLK.container->type != struct_bracket) goto label_VFVUZWYVIJGFUL;
//// JMP_BRACKET 
	MFQRMYJFJNHHSS = LKJDUHSJAFBTLK.container->value.bracket_data.chain->at_before_first();
	QCTYDTEAMDCJBP   = LKJDUHSJAFBTLK.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = MFQRMYJFJNHHSS;
/*SET*/	r_n = QCTYDTEAMDCJBP;
//// [ empty ] 
/*ISEMPTY*/	if (LKJDUHSJAFBTLK!=0 && arg_to != LKJDUHSJAFBTLK) goto label_VFVUZWYVIJGFUL;

// подстановка 
// new chain 
DataChain *chain_RHTNEGYIWXGCJW = context->putChain(); 
DataChain* LGRSMEAEARWTVJ = new DataChain(); 
DataContainer* LGRSMEAEARWTVJ_execbr = newRefExecBrackets(Game, LGRSMEAEARWTVJ, "Game");
chain_RHTNEGYIWXGCJW->append(LGRSMEAEARWTVJ_execbr);
DataChain* SJBAOIOJLWHYPN = new DataChain(); 
LGRSMEAEARWTVJ->append(newRefStructBrackets(SJBAOIOJLWHYPN)); 
SJBAOIOJLWHYPN->append(newRefText("1")); 
DataChain* VRUIHOSWKIFYGT = new DataChain(); 
DataContainer* VRUIHOSWKIFYGT_execbr = newRefExecBrackets(PlayerHod, VRUIHOSWKIFYGT, "PlayerHod");
LGRSMEAEARWTVJ->append(VRUIHOSWKIFYGT_execbr);
VRUIHOSWKIFYGT->append(newRefText("2")); 
DataChain* YDHACWYHSGEWZM = new DataChain(); 
DataContainer* YDHACWYHSGEWZM_execbr = newRefExecBrackets(Prout, YDHACWYHSGEWZM, "Prout");
VRUIHOSWKIFYGT->append(YDHACWYHSGEWZM_execbr);
YDHACWYHSGEWZM->append(newRefText("Select number for 0:")); 
context->pushExecuteCall(YDHACWYHSGEWZM_execbr); // Prout
DataChain* TGONZLTJHGAUHN = new DataChain(); 
DataContainer* TGONZLTJHGAUHN_execbr = newRefExecBrackets(Card, TGONZLTJHGAUHN, "Card");
VRUIHOSWKIFYGT->append(TGONZLTJHGAUHN_execbr);
context->pushExecuteCall(TGONZLTJHGAUHN_execbr); // Card
VRUIHOSWKIFYGT->append_copy(l_12, r_12, context); 
DataChain* IHREQGJFWKJSMT = new DataChain(); 
VRUIHOSWKIFYGT->append(newRefStructBrackets(IHREQGJFWKJSMT)); 
IHREQGJFWKJSMT->append_copy(l_n, r_n, context); 
context->pushExecuteCall(VRUIHOSWKIFYGT_execbr); // PlayerHod
context->pushExecuteCall(LGRSMEAEARWTVJ_execbr); // Game
return chain_RHTNEGYIWXGCJW;
}
sentence_after_2: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* PlayerHod(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor PJHAEFQZAAULDR;
/*SET*/	PJHAEFQZAAULDR = arg_from;
/*INC*/	if (!INC(PJHAEFQZAAULDR, arg_to)) goto sentence_after_1;
	if (PJHAEFQZAAULDR.container->type != text || *(PJHAEFQZAAULDR.container->value.text + PJHAEFQZAAULDR.index) != '1') goto sentence_after_1;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor CHJCCDYRFVVRIV;
/*DEF*/	DataCursor l_h;
/*DEF*/	DataCursor r_h;
/*SET*/	l_h = PJHAEFQZAAULDR;
/*SET*/	CHJCCDYRFVVRIV = PJHAEFQZAAULDR;
/*INC*/	if (!INC(CHJCCDYRFVVRIV, arg_to)) goto sentence_after_1;
	if (! isSymbolType(CHJCCDYRFVVRIV.container->type)) goto sentence_after_1;
/*SET*/	r_h = CHJCCDYRFVVRIV;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor UYEEGFIVDRCYGU;
/*DEF*/	DataCursor RQDREDAKUBNFGU;
/*DEF*/	DataCursor PROQYLOBCWQXKZ;
/*SET*/	UYEEGFIVDRCYGU = r_h;
/*INC*/	if (!INC(UYEEGFIVDRCYGU, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (UYEEGFIVDRCYGU.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	RQDREDAKUBNFGU = UYEEGFIVDRCYGU.container->value.bracket_data.chain->at_before_first();
	PROQYLOBCWQXKZ   = UYEEGFIVDRCYGU.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = RQDREDAKUBNFGU;
/*SET*/	r_1 = PROQYLOBCWQXKZ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor MAUSJGMHCMHGDN;
/*DEF*/	DataCursor MPHNQKAMHURKTR;
/*DEF*/	DataCursor FFACLVGRZKKLDA;
/*SET*/	MAUSJGMHCMHGDN = UYEEGFIVDRCYGU;
/*INC*/	if (!INC(MAUSJGMHCMHGDN, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (MAUSJGMHCMHGDN.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	MPHNQKAMHURKTR = MAUSJGMHCMHGDN.container->value.bracket_data.chain->at_before_first();
	FFACLVGRZKKLDA   = MAUSJGMHCMHGDN.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = MPHNQKAMHURKTR;
/*SET*/	r_2 = FFACLVGRZKKLDA;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor CLLTEOJOMONXRQ;
/*DEF*/	DataCursor YJZGINRNNZWACX;
/*DEF*/	DataCursor XAEDRWUDXZRFUS;
/*SET*/	CLLTEOJOMONXRQ = MAUSJGMHCMHGDN;
/*INC*/	if (!INC(CLLTEOJOMONXRQ, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (CLLTEOJOMONXRQ.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	YJZGINRNNZWACX = CLLTEOJOMONXRQ.container->value.bracket_data.chain->at_before_first();
	XAEDRWUDXZRFUS   = CLLTEOJOMONXRQ.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_n1;
/*DEF*/	DataCursor r_n1;
/*SET*/	l_n1 = YJZGINRNNZWACX;
/*SET*/	r_n1 = YJZGINRNNZWACX;
/*JMP*/	goto label_EWJTBOXVYNFHKS_firststep;
label_EWJTBOXVYNFHKS: 
/*INC*/	if (!INC(r_n1, XAEDRWUDXZRFUS)) goto sentence_after_1;
label_EWJTBOXVYNFHKS_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor TCENAUMNDDXFDM;
/*SET*/	TCENAUMNDDXFDM = r_n1;
 if (!SLIDE(TCENAUMNDDXFDM, XAEDRWUDXZRFUS, l_h, r_h)) goto label_EWJTBOXVYNFHKS;
//// [ e.1 ] 
/*DEF*/	DataCursor l_n2;
/*DEF*/	DataCursor r_n2;
/*SET*/	l_n2 = TCENAUMNDDXFDM;
/*SET*/	r_n2 = XAEDRWUDXZRFUS;
//// [ empty ] 
/*ISEMPTY*/	if (CLLTEOJOMONXRQ!=0 && arg_to != CLLTEOJOMONXRQ) goto label_EWJTBOXVYNFHKS;

// подстановка 
// new chain 
DataChain *chain_DZSXTTOBBGQNGV = context->putChain(); 
DataChain* VPJGOJOGLMKXGB = new DataChain(); 
DataContainer* VPJGOJOGLMKXGB_execbr = newRefExecBrackets(Prout, VPJGOJOGLMKXGB, "Prout");
chain_DZSXTTOBBGQNGV->append(VPJGOJOGLMKXGB_execbr);
VPJGOJOGLMKXGB->append(newRefText("step:")); 
VPJGOJOGLMKXGB->append_copy(l_h, r_h, context); 
context->pushExecuteCall(VPJGOJOGLMKXGB_execbr); // Prout
DataChain* FCPYPCKQCHBDDZ = new DataChain(); 
chain_DZSXTTOBBGQNGV->append(newRefStructBrackets(FCPYPCKQCHBDDZ)); 
FCPYPCKQCHBDDZ->append_copy(l_1, r_1, context); 
FCPYPCKQCHBDDZ->append_copy(l_h, r_h, context); 
DataChain* WRXBZMQRLXVOBT = new DataChain(); 
chain_DZSXTTOBBGQNGV->append(newRefStructBrackets(WRXBZMQRLXVOBT)); 
WRXBZMQRLXVOBT->append_copy(l_2, r_2, context); 
DataChain* WHXGINFGFRCCLM = new DataChain(); 
chain_DZSXTTOBBGQNGV->append(newRefStructBrackets(WHXGINFGFRCCLM)); 
WHXGINFGFRCCLM->append_copy(l_n1, r_n1, context); 
WHXGINFGFRCCLM->append_copy(l_n2, r_n2, context); 
return chain_DZSXTTOBBGQNGV;
}
sentence_after_1: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor ZNMJUGWWBSQFCI;
/*SET*/	ZNMJUGWWBSQFCI = arg_from;
/*INC*/	if (!INC(ZNMJUGWWBSQFCI, arg_to)) goto sentence_after_2;
	if (ZNMJUGWWBSQFCI.container->type != text || *(ZNMJUGWWBSQFCI.container->value.text + ZNMJUGWWBSQFCI.index) != '2') goto sentence_after_2;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor HUBSJOLLMSQSGH;
/*DEF*/	DataCursor l_h;
/*DEF*/	DataCursor r_h;
/*SET*/	l_h = ZNMJUGWWBSQFCI;
/*SET*/	HUBSJOLLMSQSGH = ZNMJUGWWBSQFCI;
/*INC*/	if (!INC(HUBSJOLLMSQSGH, arg_to)) goto sentence_after_2;
	if (! isSymbolType(HUBSJOLLMSQSGH.container->type)) goto sentence_after_2;
/*SET*/	r_h = HUBSJOLLMSQSGH;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor MCPHELSOTFLBGS;
/*DEF*/	DataCursor FNPCUZSRUPCHYN;
/*DEF*/	DataCursor VZHCPQUGRIWNIQ;
/*SET*/	MCPHELSOTFLBGS = r_h;
/*INC*/	if (!INC(MCPHELSOTFLBGS, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (MCPHELSOTFLBGS.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	FNPCUZSRUPCHYN = MCPHELSOTFLBGS.container->value.bracket_data.chain->at_before_first();
	VZHCPQUGRIWNIQ   = MCPHELSOTFLBGS.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = FNPCUZSRUPCHYN;
/*SET*/	r_1 = VZHCPQUGRIWNIQ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor XDFJPWPXFBLKPN;
/*DEF*/	DataCursor PEELFJMTKUQPZO;
/*DEF*/	DataCursor MWNLMBUPMKTLPT;
/*SET*/	XDFJPWPXFBLKPN = MCPHELSOTFLBGS;
/*INC*/	if (!INC(XDFJPWPXFBLKPN, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (XDFJPWPXFBLKPN.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	PEELFJMTKUQPZO = XDFJPWPXFBLKPN.container->value.bracket_data.chain->at_before_first();
	MWNLMBUPMKTLPT   = XDFJPWPXFBLKPN.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = PEELFJMTKUQPZO;
/*SET*/	r_2 = MWNLMBUPMKTLPT;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor NDMPDSYDSGVFPE;
/*DEF*/	DataCursor NEMWBORIFSUQHC;
/*DEF*/	DataCursor ESKMKHSSMVNONW;
/*SET*/	NDMPDSYDSGVFPE = XDFJPWPXFBLKPN;
/*INC*/	if (!INC(NDMPDSYDSGVFPE, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (NDMPDSYDSGVFPE.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	NEMWBORIFSUQHC = NDMPDSYDSGVFPE.container->value.bracket_data.chain->at_before_first();
	ESKMKHSSMVNONW   = NDMPDSYDSGVFPE.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_n1;
/*DEF*/	DataCursor r_n1;
/*SET*/	l_n1 = NEMWBORIFSUQHC;
/*SET*/	r_n1 = NEMWBORIFSUQHC;
/*JMP*/	goto label_AFXWHGBIBABVQO_firststep;
label_AFXWHGBIBABVQO: 
/*INC*/	if (!INC(r_n1, ESKMKHSSMVNONW)) goto sentence_after_2;
label_AFXWHGBIBABVQO_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor PQFOVIUSSQFQWE;
/*SET*/	PQFOVIUSSQFQWE = r_n1;
 if (!SLIDE(PQFOVIUSSQFQWE, ESKMKHSSMVNONW, l_h, r_h)) goto label_AFXWHGBIBABVQO;
//// [ e.1 ] 
/*DEF*/	DataCursor l_n2;
/*DEF*/	DataCursor r_n2;
/*SET*/	l_n2 = PQFOVIUSSQFQWE;
/*SET*/	r_n2 = ESKMKHSSMVNONW;
//// [ empty ] 
/*ISEMPTY*/	if (NDMPDSYDSGVFPE!=0 && arg_to != NDMPDSYDSGVFPE) goto label_AFXWHGBIBABVQO;

// подстановка 
// new chain 
DataChain *chain_JXXWTLGGKYTBIO = context->putChain(); 
DataChain* LYDNILQADOJSKK = new DataChain(); 
DataContainer* LYDNILQADOJSKK_execbr = newRefExecBrackets(Prout, LYDNILQADOJSKK, "Prout");
chain_JXXWTLGGKYTBIO->append(LYDNILQADOJSKK_execbr);
LYDNILQADOJSKK->append(newRefText("step:")); 
LYDNILQADOJSKK->append_copy(l_h, r_h, context); 
context->pushExecuteCall(LYDNILQADOJSKK_execbr); // Prout
DataChain* VFXAHHJMBOCLJA = new DataChain(); 
chain_JXXWTLGGKYTBIO->append(newRefStructBrackets(VFXAHHJMBOCLJA)); 
VFXAHHJMBOCLJA->append_copy(l_1, r_1, context); 
DataChain* RINTDWCLDVDXRO = new DataChain(); 
chain_JXXWTLGGKYTBIO->append(newRefStructBrackets(RINTDWCLDVDXRO)); 
RINTDWCLDVDXRO->append_copy(l_2, r_2, context); 
RINTDWCLDVDXRO->append_copy(l_h, r_h, context); 
DataChain* PBYJZWYYOJUOTH = new DataChain(); 
chain_JXXWTLGGKYTBIO->append(newRefStructBrackets(PBYJZWYYOJUOTH)); 
PBYJZWYYOJUOTH->append_copy(l_n1, r_n1, context); 
PBYJZWYYOJUOTH->append_copy(l_n2, r_n2, context); 
return chain_JXXWTLGGKYTBIO;
}
sentence_after_2: 

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = arg_from;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_WMLVRGLFZDZDBT = context->putChain(); 
return chain_WMLVRGLFZDZDBT;
}
sentence_after_3: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* GetHod(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor UBXUOFFVNCRSWS;
/*DEF*/	DataCursor l_v;
/*DEF*/	DataCursor r_v;
/*SET*/	l_v = arg_from;
/*SET*/	UBXUOFFVNCRSWS = arg_from;
/*INC*/	if (!INC(UBXUOFFVNCRSWS, arg_to)) goto sentence_after_1;
	if (! isSymbolType(UBXUOFFVNCRSWS.container->type)) goto sentence_after_1;
/*SET*/	r_v = UBXUOFFVNCRSWS;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = r_v;
/*SET*/	r_e = r_v;
/*JMP*/	goto label_AZNMOIJOIVVGOB_firststep;
label_AZNMOIJOIVVGOB: 
/*INC*/	if (!INC(r_e, arg_to)) goto sentence_after_1;
label_AZNMOIJOIVVGOB_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor QPNCKWVNHKEBMT;
/*DEF*/	DataCursor DHVYGKJISUXHAT;
/*DEF*/	DataCursor MUUDQBHMKNHFXA;
/*SET*/	QPNCKWVNHKEBMT = r_e;
/*INC*/	if (!INC(QPNCKWVNHKEBMT, arg_to)) goto label_AZNMOIJOIVVGOB;
//// ISBRACKET 
	if (QPNCKWVNHKEBMT.container->type != struct_bracket) goto label_AZNMOIJOIVVGOB;
//// JMP_BRACKET 
	DHVYGKJISUXHAT = QPNCKWVNHKEBMT.container->value.bracket_data.chain->at_before_first();
	MUUDQBHMKNHFXA   = QPNCKWVNHKEBMT.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_not;
/*DEF*/	DataCursor r_not;
/*SET*/	l_not = DHVYGKJISUXHAT;
/*SET*/	r_not = MUUDQBHMKNHFXA;
//// [ empty ] 
/*ISEMPTY*/	if (QPNCKWVNHKEBMT!=0 && arg_to != QPNCKWVNHKEBMT) goto label_AZNMOIJOIVVGOB;

// подстановка 
// new chain 
DataChain *chain_XQXKJLZZQTSJFA = context->putChain(); 
DataChain* EEDFUUJKOLXJOQ = new DataChain(); 
DataContainer* EEDFUUJKOLXJOQ_execbr = newRefExecBrackets(UseHod, EEDFUUJKOLXJOQ, "UseHod");
chain_XQXKJLZZQTSJFA->append(EEDFUUJKOLXJOQ_execbr);
EEDFUUJKOLXJOQ->append_copy(l_v, r_v, context); 
EEDFUUJKOLXJOQ->append_copy(l_e, r_e, context); 
DataChain* KDVFEPVLHVHRWT = new DataChain(); 
EEDFUUJKOLXJOQ->append(newRefStructBrackets(KDVFEPVLHVHRWT)); 
KDVFEPVLHVHRWT->append_copy(l_not, r_not, context); 
DataChain* FDUKXFFJPSSWYX = new DataChain(); 
EEDFUUJKOLXJOQ->append(newRefStructBrackets(FDUKXFFJPSSWYX)); 
DataChain* LIJJHEVRYXOZBA = new DataChain(); 
DataContainer* LIJJHEVRYXOZBA_execbr = newRefExecBrackets(WriteXO, LIJJHEVRYXOZBA, "WriteXO");
FDUKXFFJPSSWYX->append(LIJJHEVRYXOZBA_execbr);
LIJJHEVRYXOZBA->append_copy(l_e, r_e, context); 
DataChain* FPFMOWGRGONUAT = new DataChain(); 
LIJJHEVRYXOZBA->append(newRefStructBrackets(FPFMOWGRGONUAT)); 
FPFMOWGRGONUAT->append(newRefText(">")); 
FPFMOWGRGONUAT->append_copy(l_not, r_not, context); 
context->pushExecuteCall(LIJJHEVRYXOZBA_execbr); // WriteXO
context->pushExecuteCall(EEDFUUJKOLXJOQ_execbr); // UseHod
return chain_XQXKJLZZQTSJFA;
}
sentence_after_1: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* UseHod(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = arg_from;
/*SET*/	r_e = arg_from;
/*JMP*/	goto label_DQLAHYGGYLJDDJ_firststep;
label_DQLAHYGGYLJDDJ: 
/*INC*/	if (!INC(r_e, arg_to)) goto sentence_after_1;
label_DQLAHYGGYLJDDJ_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor HMLTEDZLODSRKE;
/*DEF*/	DataCursor UTGTNKNTARJKPX;
/*DEF*/	DataCursor INOVGZDTHUNWOO;
/*SET*/	HMLTEDZLODSRKE = r_e;
/*INC*/	if (!INC(HMLTEDZLODSRKE, arg_to)) goto label_DQLAHYGGYLJDDJ;
//// ISBRACKET 
	if (HMLTEDZLODSRKE.container->type != struct_bracket) goto label_DQLAHYGGYLJDDJ;
//// JMP_BRACKET 
	UTGTNKNTARJKPX = HMLTEDZLODSRKE.container->value.bracket_data.chain->at_before_first();
	INOVGZDTHUNWOO   = HMLTEDZLODSRKE.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor XVJJMPSVKNHKWJ;
/*SET*/	XVJJMPSVKNHKWJ = UTGTNKNTARJKPX;
/*INC*/	if (!INC(XVJJMPSVKNHKWJ, INOVGZDTHUNWOO)) goto label_DQLAHYGGYLJDDJ;
	if (XVJJMPSVKNHKWJ.container->type != text || *(XVJJMPSVKNHKWJ.container->value.text + XVJJMPSVKNHKWJ.index) != '#') goto label_DQLAHYGGYLJDDJ;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor OPMMLEBKSUCVZQ;
/*DEF*/	DataCursor l_s;
/*DEF*/	DataCursor r_s;
/*SET*/	l_s = XVJJMPSVKNHKWJ;
/*SET*/	OPMMLEBKSUCVZQ = XVJJMPSVKNHKWJ;
/*INC*/	if (!INC(OPMMLEBKSUCVZQ, INOVGZDTHUNWOO)) goto label_DQLAHYGGYLJDDJ;
	if (! isSymbolType(OPMMLEBKSUCVZQ.container->type)) goto label_DQLAHYGGYLJDDJ;
/*SET*/	r_s = OPMMLEBKSUCVZQ;
//// [ empty ] 
/*ISEMPTY*/	if (r_s!=0 && INOVGZDTHUNWOO != r_s) goto label_DQLAHYGGYLJDDJ;
//// [ empty ] 
/*ISEMPTY*/	if (HMLTEDZLODSRKE!=0 && arg_to != HMLTEDZLODSRKE) goto label_DQLAHYGGYLJDDJ;

// подстановка 
// new chain 
DataChain *chain_OWPJBWYVWTGTOQ = context->putChain(); 
chain_OWPJBWYVWTGTOQ->append_copy(l_s, r_s, context); 
return chain_OWPJBWYVWTGTOQ;
}
sentence_after_1: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor NMICXAPZARKNNX;
/*DEF*/	DataCursor l_v;
/*DEF*/	DataCursor r_v;
/*SET*/	l_v = arg_from;
/*SET*/	NMICXAPZARKNNX = arg_from;
/*INC*/	if (!INC(NMICXAPZARKNNX, arg_to)) goto sentence_after_2;
	if (! isSymbolType(NMICXAPZARKNNX.container->type)) goto sentence_after_2;
/*SET*/	r_v = NMICXAPZARKNNX;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = r_v;
/*SET*/	r_e = r_v;
/*JMP*/	goto label_TUUFARZROSDQWS_firststep;
label_TUUFARZROSDQWS: 
/*INC*/	if (!INC(r_e, arg_to)) goto sentence_after_2;
label_TUUFARZROSDQWS_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor MTCJGHECQUDOSR;
/*DEF*/	DataCursor TJXYAAYKQRXYCR;
/*DEF*/	DataCursor XUWJXNPQJNBKCP;
/*SET*/	MTCJGHECQUDOSR = r_e;
/*INC*/	if (!INC(MTCJGHECQUDOSR, arg_to)) goto label_TUUFARZROSDQWS;
//// ISBRACKET 
	if (MTCJGHECQUDOSR.container->type != struct_bracket) goto label_TUUFARZROSDQWS;
//// JMP_BRACKET 
	TJXYAAYKQRXYCR = MTCJGHECQUDOSR.container->value.bracket_data.chain->at_before_first();
	XUWJXNPQJNBKCP   = MTCJGHECQUDOSR.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_not;
/*DEF*/	DataCursor r_not;
/*SET*/	l_not = TJXYAAYKQRXYCR;
/*SET*/	r_not = XUWJXNPQJNBKCP;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor DMOKALXAPEMVBQ;
/*DEF*/	DataCursor LZSVXZKUTAPPWG;
/*DEF*/	DataCursor ZPDPYZKZCVBNTC;
/*SET*/	DMOKALXAPEMVBQ = MTCJGHECQUDOSR;
/*INC*/	if (!INC(DMOKALXAPEMVBQ, arg_to)) goto label_TUUFARZROSDQWS;
//// ISBRACKET 
	if (DMOKALXAPEMVBQ.container->type != struct_bracket) goto label_TUUFARZROSDQWS;
//// JMP_BRACKET 
	LZSVXZKUTAPPWG = DMOKALXAPEMVBQ.container->value.bracket_data.chain->at_before_first();
	ZPDPYZKZCVBNTC   = DMOKALXAPEMVBQ.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_Wr;
/*DEF*/	DataCursor r_Wr;
/*SET*/	l_Wr = LZSVXZKUTAPPWG;
/*SET*/	r_Wr = ZPDPYZKZCVBNTC;
//// [ empty ] 
/*ISEMPTY*/	if (DMOKALXAPEMVBQ!=0 && arg_to != DMOKALXAPEMVBQ) goto label_TUUFARZROSDQWS;

// подстановка 
// new chain 
DataChain *chain_VFXSXPJAOXTFHV = context->putChain(); 
DataChain* XXYTGOKRCXAETA = new DataChain(); 
DataContainer* XXYTGOKRCXAETA_execbr = newRefExecBrackets(UHod, XXYTGOKRCXAETA, "UHod");
chain_VFXSXPJAOXTFHV->append(XXYTGOKRCXAETA_execbr);
DataChain* UQGNDMPHWZYIAY = new DataChain(); 
XXYTGOKRCXAETA->append(newRefStructBrackets(UQGNDMPHWZYIAY)); 
DataChain* ABJRQGEPPXYJST = new DataChain(); 
DataContainer* ABJRQGEPPXYJST_execbr = newRefExecBrackets(Switch, ABJRQGEPPXYJST, "Switch");
UQGNDMPHWZYIAY->append(ABJRQGEPPXYJST_execbr);
ABJRQGEPPXYJST->append_copy(l_v, r_v, context); 
ABJRQGEPPXYJST->append_copy(l_Wr, r_Wr, context); 
context->pushExecuteCall(ABJRQGEPPXYJST_execbr); // Switch
DataChain* TYZUVLDVYBSUXK = new DataChain(); 
XXYTGOKRCXAETA->append(newRefStructBrackets(TYZUVLDVYBSUXK)); 
TYZUVLDVYBSUXK->append_copy(l_Wr, r_Wr, context); 
DataChain* BMFZVRTNOVIDZN = new DataChain(); 
XXYTGOKRCXAETA->append(newRefStructBrackets(BMFZVRTNOVIDZN)); 
BMFZVRTNOVIDZN->append_copy(l_not, r_not, context); 
context->pushExecuteCall(XXYTGOKRCXAETA_execbr); // UHod
return chain_VFXSXPJAOXTFHV;
}
sentence_after_2: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* UHod(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor PGHOZVAFMSNSNQ;
/*DEF*/	DataCursor IVMVUBCWTFSRQT;
/*DEF*/	DataCursor MKNEPBHOWEJAZH;
/*SET*/	PGHOZVAFMSNSNQ = arg_from;
/*INC*/	if (!INC(PGHOZVAFMSNSNQ, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (PGHOZVAFMSNSNQ.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	IVMVUBCWTFSRQT = PGHOZVAFMSNSNQ.container->value.bracket_data.chain->at_before_first();
	MKNEPBHOWEJAZH   = PGHOZVAFMSNSNQ.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_Sw;
/*DEF*/	DataCursor r_Sw;
/*SET*/	l_Sw = IVMVUBCWTFSRQT;
/*SET*/	r_Sw = MKNEPBHOWEJAZH;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor KWCMMTPIXXXLZQ;
/*DEF*/	DataCursor YSXTWWTAIDYAXY;
/*DEF*/	DataCursor QLEPRXIBEXXYFV;
/*SET*/	KWCMMTPIXXXLZQ = PGHOZVAFMSNSNQ;
/*INC*/	if (!INC(KWCMMTPIXXXLZQ, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (KWCMMTPIXXXLZQ.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	YSXTWWTAIDYAXY = KWCMMTPIXXXLZQ.container->value.bracket_data.chain->at_before_first();
	QLEPRXIBEXXYFV   = KWCMMTPIXXXLZQ.container->value.bracket_data.chain->at_last();
//// [ &.name <any> ] 
/*DEF*/	DataCursor SDDYGTHCUYYFWP;
/*SET*/	SDDYGTHCUYYFWP = YSXTWWTAIDYAXY;
 if (!SLIDE(SDDYGTHCUYYFWP, QLEPRXIBEXXYFV, l_Sw, r_Sw)) goto sentence_after_1;
//// [ e.1 ] 
/*DEF*/	DataCursor l_Wr;
/*DEF*/	DataCursor r_Wr;
/*SET*/	l_Wr = SDDYGTHCUYYFWP;
/*SET*/	r_Wr = QLEPRXIBEXXYFV;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor JSFYBGLGZMBINT;
/*DEF*/	DataCursor ATTNHODTONPYZW;
/*DEF*/	DataCursor OTKGNGUPHPKXEA;
/*SET*/	JSFYBGLGZMBINT = KWCMMTPIXXXLZQ;
/*INC*/	if (!INC(JSFYBGLGZMBINT, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (JSFYBGLGZMBINT.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	ATTNHODTONPYZW = JSFYBGLGZMBINT.container->value.bracket_data.chain->at_before_first();
	OTKGNGUPHPKXEA   = JSFYBGLGZMBINT.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor TOWZABSDNVQHKF;
/*DEF*/	DataCursor l_s;
/*DEF*/	DataCursor r_s;
/*SET*/	l_s = ATTNHODTONPYZW;
/*SET*/	TOWZABSDNVQHKF = ATTNHODTONPYZW;
/*INC*/	if (!INC(TOWZABSDNVQHKF, OTKGNGUPHPKXEA)) goto sentence_after_1;
	if (! isSymbolType(TOWZABSDNVQHKF.container->type)) goto sentence_after_1;
/*SET*/	r_s = TOWZABSDNVQHKF;
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = r_s;
/*SET*/	r_n = OTKGNGUPHPKXEA;
//// [ empty ] 
/*ISEMPTY*/	if (JSFYBGLGZMBINT!=0 && arg_to != JSFYBGLGZMBINT) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_CMOFISFRFQGVPM = context->putChain(); 
chain_CMOFISFRFQGVPM->append_copy(l_s, r_s, context); 
return chain_CMOFISFRFQGVPM;
}
sentence_after_1: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor VORPJFZSLZMPJJ;
/*DEF*/	DataCursor NEHRYKXJZUBUAC;
/*DEF*/	DataCursor CLFKCYZOBGHTUO;
/*SET*/	VORPJFZSLZMPJJ = arg_from;
/*INC*/	if (!INC(VORPJFZSLZMPJJ, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (VORPJFZSLZMPJJ.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	NEHRYKXJZUBUAC = VORPJFZSLZMPJJ.container->value.bracket_data.chain->at_before_first();
	CLFKCYZOBGHTUO   = VORPJFZSLZMPJJ.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_Sw;
/*DEF*/	DataCursor r_Sw;
/*SET*/	l_Sw = NEHRYKXJZUBUAC;
/*SET*/	r_Sw = CLFKCYZOBGHTUO;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor XRAJVPRECWGXXP;
/*DEF*/	DataCursor SWCGMMVEDEWDMF;
/*DEF*/	DataCursor NQWCUQDSCILIQE;
/*SET*/	XRAJVPRECWGXXP = VORPJFZSLZMPJJ;
/*INC*/	if (!INC(XRAJVPRECWGXXP, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (XRAJVPRECWGXXP.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	SWCGMMVEDEWDMF = XRAJVPRECWGXXP.container->value.bracket_data.chain->at_before_first();
	NQWCUQDSCILIQE   = XRAJVPRECWGXXP.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor CIHLUILGMFCSWT;
/*DEF*/	DataCursor l_s1;
/*DEF*/	DataCursor r_s1;
/*SET*/	l_s1 = SWCGMMVEDEWDMF;
/*SET*/	CIHLUILGMFCSWT = SWCGMMVEDEWDMF;
/*INC*/	if (!INC(CIHLUILGMFCSWT, NQWCUQDSCILIQE)) goto sentence_after_2;
	if (! isSymbolType(CIHLUILGMFCSWT.container->type)) goto sentence_after_2;
/*SET*/	r_s1 = CIHLUILGMFCSWT;
//// [ `a` <any> ] 
/*DEF*/	DataCursor WKKXLCBHQKVCSW;
/*SET*/	WKKXLCBHQKVCSW = r_s1;
/*INC*/	if (!INC(WKKXLCBHQKVCSW, NQWCUQDSCILIQE)) goto sentence_after_2;
	if (WKKXLCBHQKVCSW.container->type != text || *(WKKXLCBHQKVCSW.container->value.text + WKKXLCBHQKVCSW.index) != '=') goto sentence_after_2;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor JEBKRJLPGFGRAT;
/*DEF*/	DataCursor l_s2;
/*DEF*/	DataCursor r_s2;
/*SET*/	l_s2 = WKKXLCBHQKVCSW;
/*SET*/	JEBKRJLPGFGRAT = WKKXLCBHQKVCSW;
/*INC*/	if (!INC(JEBKRJLPGFGRAT, NQWCUQDSCILIQE)) goto sentence_after_2;
	if (! isSymbolType(JEBKRJLPGFGRAT.container->type)) goto sentence_after_2;
/*SET*/	r_s2 = JEBKRJLPGFGRAT;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = r_s2;
/*SET*/	r_e = r_s2;
/*JMP*/	goto label_ZBSGUVZIFNHYXW_firststep;
label_ZBSGUVZIFNHYXW: 
/*INC*/	if (!INC(r_e, NQWCUQDSCILIQE)) goto sentence_after_2;
label_ZBSGUVZIFNHYXW_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor JSJAVWAUXPANNA;
/*SET*/	JSJAVWAUXPANNA = r_e;
 if (!SLIDE(JSJAVWAUXPANNA, NQWCUQDSCILIQE, l_Sw, r_Sw)) goto label_ZBSGUVZIFNHYXW;
//// [ e.1 ] 
/*DEF*/	DataCursor l_Wr;
/*DEF*/	DataCursor r_Wr;
/*SET*/	l_Wr = JSJAVWAUXPANNA;
/*SET*/	r_Wr = NQWCUQDSCILIQE;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor EPWZOLHUSLRKVW;
/*DEF*/	DataCursor PNVGZMIIZWUDWD;
/*DEF*/	DataCursor FZLKTBQDXGYYIU;
/*SET*/	EPWZOLHUSLRKVW = XRAJVPRECWGXXP;
/*INC*/	if (!INC(EPWZOLHUSLRKVW, arg_to)) goto label_ZBSGUVZIFNHYXW;
//// ISBRACKET 
	if (EPWZOLHUSLRKVW.container->type != struct_bracket) goto label_ZBSGUVZIFNHYXW;
//// JMP_BRACKET 
	PNVGZMIIZWUDWD = EPWZOLHUSLRKVW.container->value.bracket_data.chain->at_before_first();
	FZLKTBQDXGYYIU   = EPWZOLHUSLRKVW.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor DSJVEZKMESBJLK;
/*DEF*/	DataCursor l_s;
/*DEF*/	DataCursor r_s;
/*SET*/	l_s = PNVGZMIIZWUDWD;
/*SET*/	DSJVEZKMESBJLK = PNVGZMIIZWUDWD;
/*INC*/	if (!INC(DSJVEZKMESBJLK, FZLKTBQDXGYYIU)) goto label_ZBSGUVZIFNHYXW;
	if (! isSymbolType(DSJVEZKMESBJLK.container->type)) goto label_ZBSGUVZIFNHYXW;
/*SET*/	r_s = DSJVEZKMESBJLK;
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = r_s;
/*SET*/	r_n = FZLKTBQDXGYYIU;
//// [ empty ] 
/*ISEMPTY*/	if (EPWZOLHUSLRKVW!=0 && arg_to != EPWZOLHUSLRKVW) goto label_ZBSGUVZIFNHYXW;

// подстановка 
// new chain 
DataChain *chain_YERTAHNEXHUQMJ = context->putChain(); 
DataChain* ICBMUSQDKLASOL = new DataChain(); 
DataContainer* ICBMUSQDKLASOL_execbr = newRefExecBrackets(UHod, ICBMUSQDKLASOL, "UHod");
chain_YERTAHNEXHUQMJ->append(ICBMUSQDKLASOL_execbr);
DataChain* WJXPTXXEUMZFWY = new DataChain(); 
ICBMUSQDKLASOL->append(newRefStructBrackets(WJXPTXXEUMZFWY)); 
WJXPTXXEUMZFWY->append_copy(l_Sw, r_Sw, context); 
DataChain* UCPABQSEFFUNQP = new DataChain(); 
ICBMUSQDKLASOL->append(newRefStructBrackets(UCPABQSEFFUNQP)); 
UCPABQSEFFUNQP->append_copy(l_e, r_e, context); 
UCPABQSEFFUNQP->append_copy(l_Sw, r_Sw, context); 
UCPABQSEFFUNQP->append_copy(l_Wr, r_Wr, context); 
DataChain* KFNNBECBBCJPDY = new DataChain(); 
ICBMUSQDKLASOL->append(newRefStructBrackets(KFNNBECBBCJPDY)); 
KFNNBECBBCJPDY->append_copy(l_n, r_n, context); 
context->pushExecuteCall(ICBMUSQDKLASOL_execbr); // UHod
return chain_YERTAHNEXHUQMJ;
}
sentence_after_2: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Ekran(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_to;

// подстановка 
// new chain 
DataChain *chain_JLIBITLLPLXELR = context->putChain(); 
DataChain* DKEXDTQUVPTTEY = new DataChain(); 
DataContainer* DKEXDTQUVPTTEY_execbr = newRefExecBrackets(Prout, DKEXDTQUVPTTEY, "Prout");
chain_JLIBITLLPLXELR->append(DKEXDTQUVPTTEY_execbr);
DKEXDTQUVPTTEY->append(newRefText("*===T===T===*")); 
context->pushExecuteCall(DKEXDTQUVPTTEY_execbr); // Prout
DataChain* HTLQLBBBVOQOZK = new DataChain(); 
DataContainer* HTLQLBBBVOQOZK_execbr = newRefExecBrackets(Prout, HTLQLBBBVOQOZK, "Prout");
chain_JLIBITLLPLXELR->append(HTLQLBBBVOQOZK_execbr);
HTLQLBBBVOQOZK->append(newRefText("|")); 
DataChain* YNAYYRBAQMYJHZ = new DataChain(); 
DataContainer* YNAYYRBAQMYJHZ_execbr = newRefExecBrackets(XO, YNAYYRBAQMYJHZ, "XO");
HTLQLBBBVOQOZK->append(YNAYYRBAQMYJHZ_execbr);
YNAYYRBAQMYJHZ->append(newRefText("1")); 
YNAYYRBAQMYJHZ->append_copy(l_1, r_1, context); 
context->pushExecuteCall(YNAYYRBAQMYJHZ_execbr); // XO
HTLQLBBBVOQOZK->append(newRefText("|")); 
DataChain* XNDSIYFSEXWBIO = new DataChain(); 
DataContainer* XNDSIYFSEXWBIO_execbr = newRefExecBrackets(XO, XNDSIYFSEXWBIO, "XO");
HTLQLBBBVOQOZK->append(XNDSIYFSEXWBIO_execbr);
XNDSIYFSEXWBIO->append(newRefText("2")); 
XNDSIYFSEXWBIO->append_copy(l_1, r_1, context); 
context->pushExecuteCall(XNDSIYFSEXWBIO_execbr); // XO
HTLQLBBBVOQOZK->append(newRefText("|")); 
DataChain* EWQVQRTCDLPQMV = new DataChain(); 
DataContainer* EWQVQRTCDLPQMV_execbr = newRefExecBrackets(XO, EWQVQRTCDLPQMV, "XO");
HTLQLBBBVOQOZK->append(EWQVQRTCDLPQMV_execbr);
EWQVQRTCDLPQMV->append(newRefText("3")); 
EWQVQRTCDLPQMV->append_copy(l_1, r_1, context); 
context->pushExecuteCall(EWQVQRTCDLPQMV_execbr); // XO
HTLQLBBBVOQOZK->append(newRefText("|")); 
context->pushExecuteCall(HTLQLBBBVOQOZK_execbr); // Prout
DataChain* JIFVGYMKGOTZJM = new DataChain(); 
DataContainer* JIFVGYMKGOTZJM_execbr = newRefExecBrackets(Prout, JIFVGYMKGOTZJM, "Prout");
chain_JLIBITLLPLXELR->append(JIFVGYMKGOTZJM_execbr);
JIFVGYMKGOTZJM->append(newRefText("*===I===I===*")); 
context->pushExecuteCall(JIFVGYMKGOTZJM_execbr); // Prout
DataChain* NZQTMRPNDEVNMT = new DataChain(); 
DataContainer* NZQTMRPNDEVNMT_execbr = newRefExecBrackets(Prout, NZQTMRPNDEVNMT, "Prout");
chain_JLIBITLLPLXELR->append(NZQTMRPNDEVNMT_execbr);
NZQTMRPNDEVNMT->append(newRefText("|")); 
DataChain* HJITSSPAQNJRDO = new DataChain(); 
DataContainer* HJITSSPAQNJRDO_execbr = newRefExecBrackets(XO, HJITSSPAQNJRDO, "XO");
NZQTMRPNDEVNMT->append(HJITSSPAQNJRDO_execbr);
HJITSSPAQNJRDO->append(newRefText("4")); 
HJITSSPAQNJRDO->append_copy(l_1, r_1, context); 
context->pushExecuteCall(HJITSSPAQNJRDO_execbr); // XO
NZQTMRPNDEVNMT->append(newRefText("|")); 
DataChain* YJWPYATMLEYQSV = new DataChain(); 
DataContainer* YJWPYATMLEYQSV_execbr = newRefExecBrackets(XO, YJWPYATMLEYQSV, "XO");
NZQTMRPNDEVNMT->append(YJWPYATMLEYQSV_execbr);
YJWPYATMLEYQSV->append(newRefText("5")); 
YJWPYATMLEYQSV->append_copy(l_1, r_1, context); 
context->pushExecuteCall(YJWPYATMLEYQSV_execbr); // XO
NZQTMRPNDEVNMT->append(newRefText("|")); 
DataChain* KPAMSVBMVXRLLI = new DataChain(); 
DataContainer* KPAMSVBMVXRLLI_execbr = newRefExecBrackets(XO, KPAMSVBMVXRLLI, "XO");
NZQTMRPNDEVNMT->append(KPAMSVBMVXRLLI_execbr);
KPAMSVBMVXRLLI->append(newRefText("6")); 
KPAMSVBMVXRLLI->append_copy(l_1, r_1, context); 
context->pushExecuteCall(KPAMSVBMVXRLLI_execbr); // XO
NZQTMRPNDEVNMT->append(newRefText("|")); 
context->pushExecuteCall(NZQTMRPNDEVNMT_execbr); // Prout
DataChain* VFEDKJIGAVYXJV = new DataChain(); 
DataContainer* VFEDKJIGAVYXJV_execbr = newRefExecBrackets(Prout, VFEDKJIGAVYXJV, "Prout");
chain_JLIBITLLPLXELR->append(VFEDKJIGAVYXJV_execbr);
VFEDKJIGAVYXJV->append(newRefText("*===I===I===*")); 
context->pushExecuteCall(VFEDKJIGAVYXJV_execbr); // Prout
DataChain* EQVRBACUIGAIPY = new DataChain(); 
DataContainer* EQVRBACUIGAIPY_execbr = newRefExecBrackets(Prout, EQVRBACUIGAIPY, "Prout");
chain_JLIBITLLPLXELR->append(EQVRBACUIGAIPY_execbr);
EQVRBACUIGAIPY->append(newRefText("|")); 
DataChain* HBBXIPBZNCWHRB = new DataChain(); 
DataContainer* HBBXIPBZNCWHRB_execbr = newRefExecBrackets(XO, HBBXIPBZNCWHRB, "XO");
EQVRBACUIGAIPY->append(HBBXIPBZNCWHRB_execbr);
HBBXIPBZNCWHRB->append(newRefText("7")); 
HBBXIPBZNCWHRB->append_copy(l_1, r_1, context); 
context->pushExecuteCall(HBBXIPBZNCWHRB_execbr); // XO
EQVRBACUIGAIPY->append(newRefText("|")); 
DataChain* LIRIZXOQPTQQWE = new DataChain(); 
DataContainer* LIRIZXOQPTQQWE_execbr = newRefExecBrackets(XO, LIRIZXOQPTQQWE, "XO");
EQVRBACUIGAIPY->append(LIRIZXOQPTQQWE_execbr);
LIRIZXOQPTQQWE->append(newRefText("8")); 
LIRIZXOQPTQQWE->append_copy(l_1, r_1, context); 
context->pushExecuteCall(LIRIZXOQPTQQWE_execbr); // XO
EQVRBACUIGAIPY->append(newRefText("|")); 
DataChain* AAFJEQIOZPYFAU = new DataChain(); 
DataContainer* AAFJEQIOZPYFAU_execbr = newRefExecBrackets(XO, AAFJEQIOZPYFAU, "XO");
EQVRBACUIGAIPY->append(AAFJEQIOZPYFAU_execbr);
AAFJEQIOZPYFAU->append(newRefText("9")); 
AAFJEQIOZPYFAU->append_copy(l_1, r_1, context); 
context->pushExecuteCall(AAFJEQIOZPYFAU_execbr); // XO
EQVRBACUIGAIPY->append(newRefText("|")); 
context->pushExecuteCall(EQVRBACUIGAIPY_execbr); // Prout
DataChain* UQMVHXKMNXMSYA = new DataChain(); 
DataContainer* UQMVHXKMNXMSYA_execbr = newRefExecBrackets(Prout, UQMVHXKMNXMSYA, "Prout");
chain_JLIBITLLPLXELR->append(UQMVHXKMNXMSYA_execbr);
UQMVHXKMNXMSYA->append(newRefText("*===I===I===*")); 
context->pushExecuteCall(UQMVHXKMNXMSYA_execbr); // Prout
return chain_JLIBITLLPLXELR;
}
sentence_after_1: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* XO(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor MPTLZANOTLSLWU;
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	MPTLZANOTLSLWU = arg_from;
/*INC*/	if (!INC(MPTLZANOTLSLWU, arg_to)) goto sentence_after_1;
	if (! isSymbolType(MPTLZANOTLSLWU.container->type)) goto sentence_after_1;
/*SET*/	r_1 = MPTLZANOTLSLWU;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor HTFQJRRWBWHMQH;
/*DEF*/	DataCursor ZKHDKCRFVBEIYI;
/*DEF*/	DataCursor PVFVPZHYUJABTQ;
/*SET*/	HTFQJRRWBWHMQH = r_1;
/*INC*/	if (!INC(HTFQJRRWBWHMQH, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (HTFQJRRWBWHMQH.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	ZKHDKCRFVBEIYI = HTFQJRRWBWHMQH.container->value.bracket_data.chain->at_before_first();
	PVFVPZHYUJABTQ   = HTFQJRRWBWHMQH.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_21;
/*DEF*/	DataCursor r_21;
/*SET*/	l_21 = ZKHDKCRFVBEIYI;
/*SET*/	r_21 = ZKHDKCRFVBEIYI;
/*JMP*/	goto label_WWTBKDOGKEMHIB_firststep;
label_WWTBKDOGKEMHIB: 
/*INC*/	if (!INC(r_21, PVFVPZHYUJABTQ)) goto sentence_after_1;
label_WWTBKDOGKEMHIB_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor YXRNXSXRZLETBQ;
/*SET*/	YXRNXSXRZLETBQ = r_21;
 if (!SLIDE(YXRNXSXRZLETBQ, PVFVPZHYUJABTQ, l_1, r_1)) goto label_WWTBKDOGKEMHIB;
//// [ e.1 ] 
/*DEF*/	DataCursor l_22;
/*DEF*/	DataCursor r_22;
/*SET*/	l_22 = YXRNXSXRZLETBQ;
/*SET*/	r_22 = PVFVPZHYUJABTQ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor EXKRQOIERNAPLQ;
/*DEF*/	DataCursor YJPQOUBVJSEBAL;
/*DEF*/	DataCursor WNKSVLOIDZFPIR;
/*SET*/	EXKRQOIERNAPLQ = HTFQJRRWBWHMQH;
/*INC*/	if (!INC(EXKRQOIERNAPLQ, arg_to)) goto label_WWTBKDOGKEMHIB;
//// ISBRACKET 
	if (EXKRQOIERNAPLQ.container->type != struct_bracket) goto label_WWTBKDOGKEMHIB;
//// JMP_BRACKET 
	YJPQOUBVJSEBAL = EXKRQOIERNAPLQ.container->value.bracket_data.chain->at_before_first();
	WNKSVLOIDZFPIR   = EXKRQOIERNAPLQ.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = YJPQOUBVJSEBAL;
/*SET*/	r_3 = WNKSVLOIDZFPIR;
//// [ empty ] 
/*ISEMPTY*/	if (EXKRQOIERNAPLQ!=0 && arg_to != EXKRQOIERNAPLQ) goto label_WWTBKDOGKEMHIB;

// подстановка 
// new chain 
DataChain *chain_WYCZTWZZVEWXOT = context->putChain(); 
chain_WYCZTWZZVEWXOT->append(newRefText("-X-")); 
return chain_WYCZTWZZVEWXOT;
}
sentence_after_1: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor AKUDKPEDUPKCZL;
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	AKUDKPEDUPKCZL = arg_from;
/*INC*/	if (!INC(AKUDKPEDUPKCZL, arg_to)) goto sentence_after_2;
	if (! isSymbolType(AKUDKPEDUPKCZL.container->type)) goto sentence_after_2;
/*SET*/	r_1 = AKUDKPEDUPKCZL;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor HWUSKDNEVDCPLB;
/*DEF*/	DataCursor KLPJMPFDCYQTRC;
/*DEF*/	DataCursor VVVTRFFVPEKKQM;
/*SET*/	HWUSKDNEVDCPLB = r_1;
/*INC*/	if (!INC(HWUSKDNEVDCPLB, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (HWUSKDNEVDCPLB.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	KLPJMPFDCYQTRC = HWUSKDNEVDCPLB.container->value.bracket_data.chain->at_before_first();
	VVVTRFFVPEKKQM   = HWUSKDNEVDCPLB.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = KLPJMPFDCYQTRC;
/*SET*/	r_2 = VVVTRFFVPEKKQM;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor CUPRYJAUTEUVCZ;
/*DEF*/	DataCursor VICTHRXSXCLPRG;
/*DEF*/	DataCursor DLWXFAIGAYRUEI;
/*SET*/	CUPRYJAUTEUVCZ = HWUSKDNEVDCPLB;
/*INC*/	if (!INC(CUPRYJAUTEUVCZ, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (CUPRYJAUTEUVCZ.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	VICTHRXSXCLPRG = CUPRYJAUTEUVCZ.container->value.bracket_data.chain->at_before_first();
	DLWXFAIGAYRUEI   = CUPRYJAUTEUVCZ.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_31;
/*DEF*/	DataCursor r_31;
/*SET*/	l_31 = VICTHRXSXCLPRG;
/*SET*/	r_31 = VICTHRXSXCLPRG;
/*JMP*/	goto label_CUFDIAMHTKBXOT_firststep;
label_CUFDIAMHTKBXOT: 
/*INC*/	if (!INC(r_31, DLWXFAIGAYRUEI)) goto sentence_after_2;
label_CUFDIAMHTKBXOT_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor DIRXXGVZQMEYRO;
/*SET*/	DIRXXGVZQMEYRO = r_31;
 if (!SLIDE(DIRXXGVZQMEYRO, DLWXFAIGAYRUEI, l_1, r_1)) goto label_CUFDIAMHTKBXOT;
//// [ e.1 ] 
/*DEF*/	DataCursor l_32;
/*DEF*/	DataCursor r_32;
/*SET*/	l_32 = DIRXXGVZQMEYRO;
/*SET*/	r_32 = DLWXFAIGAYRUEI;
//// [ empty ] 
/*ISEMPTY*/	if (CUPRYJAUTEUVCZ!=0 && arg_to != CUPRYJAUTEUVCZ) goto label_CUFDIAMHTKBXOT;

// подстановка 
// new chain 
DataChain *chain_VFICHQNIVFJZAU = context->putChain(); 
chain_VFICHQNIVFJZAU->append(newRefText("-O-")); 
return chain_VFICHQNIVFJZAU;
}
sentence_after_2: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor QFDFTGMOPSRGPU;
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	QFDFTGMOPSRGPU = arg_from;
/*INC*/	if (!INC(QFDFTGMOPSRGPU, arg_to)) goto sentence_after_3;
	if (! isSymbolType(QFDFTGMOPSRGPU.container->type)) goto sentence_after_3;
/*SET*/	r_1 = QFDFTGMOPSRGPU;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor GXTUHLCVSPIHAZ;
/*DEF*/	DataCursor RSSFSZWXBQMURW;
/*DEF*/	DataCursor MXCDBHUMRGJQMV;
/*SET*/	GXTUHLCVSPIHAZ = r_1;
/*INC*/	if (!INC(GXTUHLCVSPIHAZ, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (GXTUHLCVSPIHAZ.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	RSSFSZWXBQMURW = GXTUHLCVSPIHAZ.container->value.bracket_data.chain->at_before_first();
	MXCDBHUMRGJQMV   = GXTUHLCVSPIHAZ.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = RSSFSZWXBQMURW;
/*SET*/	r_2 = MXCDBHUMRGJQMV;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor NKYRTNSJVWZXSS;
/*DEF*/	DataCursor QXNJOMUYJNJUWR;
/*DEF*/	DataCursor SYXWQYYXCSZPOK;
/*SET*/	NKYRTNSJVWZXSS = GXTUHLCVSPIHAZ;
/*INC*/	if (!INC(NKYRTNSJVWZXSS, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (NKYRTNSJVWZXSS.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	QXNJOMUYJNJUWR = NKYRTNSJVWZXSS.container->value.bracket_data.chain->at_before_first();
	SYXWQYYXCSZPOK   = NKYRTNSJVWZXSS.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = QXNJOMUYJNJUWR;
/*SET*/	r_3 = SYXWQYYXCSZPOK;
//// [ empty ] 
/*ISEMPTY*/	if (NKYRTNSJVWZXSS!=0 && arg_to != NKYRTNSJVWZXSS) goto sentence_after_3;

// подстановка 
// new chain 
DataChain *chain_LWJDRLTBSCIEDP = context->putChain(); 
chain_LWJDRLTBSCIEDP->append_copy(l_1, r_1, context); 
chain_LWJDRLTBSCIEDP->append(newRefText("  ")); 
return chain_LWJDRLTBSCIEDP;
}
sentence_after_3: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Switch(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor IWLAQIGESJSQHS;
/*SET*/	IWLAQIGESJSQHS = arg_from;
/*INC*/	if (!INC(IWLAQIGESJSQHS, arg_to)) goto sentence_after_1;
	if (IWLAQIGESJSQHS.container->type != integer || IWLAQIGESJSQHS.container->value.num != 0) goto sentence_after_1;
//// [ empty ] 
/*ISEMPTY*/	if (IWLAQIGESJSQHS!=0 && arg_to != IWLAQIGESJSQHS) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_JLRGLMWANRXRFN = context->putChain(); 
return chain_JLRGLMWANRXRFN;
}
sentence_after_1: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor WAKZTGJHXAUNFQ;
/*DEF*/	DataCursor l_G;
/*DEF*/	DataCursor r_G;
/*SET*/	l_G = arg_from;
/*SET*/	WAKZTGJHXAUNFQ = arg_from;
/*INC*/	if (!INC(WAKZTGJHXAUNFQ, arg_to)) goto sentence_after_2;
	if (! isSymbolType(WAKZTGJHXAUNFQ.container->type)) goto sentence_after_2;
/*SET*/	r_G = WAKZTGJHXAUNFQ;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor JVXIOHNJQRJSHY;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_G;
/*SET*/	JVXIOHNJQRJSHY = r_G;
/*INC*/	if (!INC(JVXIOHNJQRJSHY, arg_to)) goto sentence_after_2;
	if (! isSymbolType(JVXIOHNJQRJSHY.container->type)) goto sentence_after_2;
/*SET*/	r_A = JVXIOHNJQRJSHY;
//// [ `a` <any> ] 
/*DEF*/	DataCursor MDOVWGEFHJESVH;
/*SET*/	MDOVWGEFHJESVH = r_A;
/*INC*/	if (!INC(MDOVWGEFHJESVH, arg_to)) goto sentence_after_2;
	if (MDOVWGEFHJESVH.container->type != text || *(MDOVWGEFHJESVH.container->value.text + MDOVWGEFHJESVH.index) != '=') goto sentence_after_2;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor TIZIOJLJDPMOXB;
/*DEF*/	DataCursor l_AA;
/*DEF*/	DataCursor r_AA;
/*SET*/	l_AA = MDOVWGEFHJESVH;
/*SET*/	TIZIOJLJDPMOXB = MDOVWGEFHJESVH;
/*INC*/	if (!INC(TIZIOJLJDPMOXB, arg_to)) goto sentence_after_2;
	if (! isSymbolType(TIZIOJLJDPMOXB.container->type)) goto sentence_after_2;
/*SET*/	r_AA = TIZIOJLJDPMOXB;
//// [ empty ] 
/*ISEMPTY*/	if (r_AA!=0 && arg_to != r_AA) goto sentence_after_2;

// подстановка 
// new chain 
DataChain *chain_WXKEWPZHBJSUTH = context->putChain(); 
chain_WXKEWPZHBJSUTH->append_copy(l_A, r_A, context); 
chain_WXKEWPZHBJSUTH->append(newRefText("=")); 
chain_WXKEWPZHBJSUTH->append_copy(l_AA, r_AA, context); 
return chain_WXKEWPZHBJSUTH;
}
sentence_after_2: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor SYOEFJGWWYEOZL;
/*DEF*/	DataCursor l_G;
/*DEF*/	DataCursor r_G;
/*SET*/	l_G = arg_from;
/*SET*/	SYOEFJGWWYEOZL = arg_from;
/*INC*/	if (!INC(SYOEFJGWWYEOZL, arg_to)) goto sentence_after_3;
	if (! isSymbolType(SYOEFJGWWYEOZL.container->type)) goto sentence_after_3;
/*SET*/	r_G = SYOEFJGWWYEOZL;
//// [ &.name <any> ] 
/*DEF*/	DataCursor UHMGABBSQRHCRT;
/*SET*/	UHMGABBSQRHCRT = r_G;
 if (!SLIDE(UHMGABBSQRHCRT, arg_to, l_G, r_G)) goto sentence_after_3;
//// [ `a` <any> ] 
/*DEF*/	DataCursor XMJVCAXXSUFAHY;
/*SET*/	XMJVCAXXSUFAHY = UHMGABBSQRHCRT;
/*INC*/	if (!INC(XMJVCAXXSUFAHY, arg_to)) goto sentence_after_3;
	if (XMJVCAXXSUFAHY.container->type != text || *(XMJVCAXXSUFAHY.container->value.text + XMJVCAXXSUFAHY.index) != '=') goto sentence_after_3;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor YAYZKHUHJRJSVO;
/*DEF*/	DataCursor l_AA;
/*DEF*/	DataCursor r_AA;
/*SET*/	l_AA = XMJVCAXXSUFAHY;
/*SET*/	YAYZKHUHJRJSVO = XMJVCAXXSUFAHY;
/*INC*/	if (!INC(YAYZKHUHJRJSVO, arg_to)) goto sentence_after_3;
	if (! isSymbolType(YAYZKHUHJRJSVO.container->type)) goto sentence_after_3;
/*SET*/	r_AA = YAYZKHUHJRJSVO;
//// [ &.name <any> ] 
/*DEF*/	DataCursor QHTYDWPBSZXSBZ;
/*SET*/	QHTYDWPBSZXSBZ = r_AA;
 if (!SLIDE(QHTYDWPBSZXSBZ, arg_to, l_G, r_G)) goto sentence_after_3;
//// [ `a` <any> ] 
/*DEF*/	DataCursor IYRVGQMLUNWSCP;
/*SET*/	IYRVGQMLUNWSCP = QHTYDWPBSZXSBZ;
/*INC*/	if (!INC(IYRVGQMLUNWSCP, arg_to)) goto sentence_after_3;
	if (IYRVGQMLUNWSCP.container->type != text || *(IYRVGQMLUNWSCP.container->value.text + IYRVGQMLUNWSCP.index) != '=') goto sentence_after_3;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor IRZFCBTSEPLKGW;
/*DEF*/	DataCursor l_BB;
/*DEF*/	DataCursor r_BB;
/*SET*/	l_BB = IYRVGQMLUNWSCP;
/*SET*/	IRZFCBTSEPLKGW = IYRVGQMLUNWSCP;
/*INC*/	if (!INC(IRZFCBTSEPLKGW, arg_to)) goto sentence_after_3;
	if (! isSymbolType(IRZFCBTSEPLKGW.container->type)) goto sentence_after_3;
/*SET*/	r_BB = IRZFCBTSEPLKGW;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = r_BB;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_RYHGDMLXUKWYZC = context->putChain(); 
DataChain* PRSKWGXULSUCKB = new DataChain(); 
DataContainer* PRSKWGXULSUCKB_execbr = newRefExecBrackets(Switch, PRSKWGXULSUCKB, "Switch");
chain_RYHGDMLXUKWYZC->append(PRSKWGXULSUCKB_execbr);
PRSKWGXULSUCKB->append_copy(l_G, r_G, context); 
PRSKWGXULSUCKB->append_copy(l_G, r_G, context); 
PRSKWGXULSUCKB->append(newRefText("=")); 
DataChain* SEPJEISZSGCEZW = new DataChain(); 
DataContainer* SEPJEISZSGCEZW_execbr = newRefExecBrackets(Maix, SEPJEISZSGCEZW, "Maix");
PRSKWGXULSUCKB->append(SEPJEISZSGCEZW_execbr);
SEPJEISZSGCEZW->append(newRefText("a")); 
SEPJEISZSGCEZW->append_copy(l_AA, r_AA, context); 
SEPJEISZSGCEZW->append_copy(l_BB, r_BB, context); 
DataChain* APQRVLWIGROVJC = new DataChain(); 
DataContainer* APQRVLWIGROVJC_execbr = newRefExecBrackets(Compare, APQRVLWIGROVJC, "Compare");
SEPJEISZSGCEZW->append(APQRVLWIGROVJC_execbr);
APQRVLWIGROVJC->append_copy(l_AA, r_AA, context); 
APQRVLWIGROVJC->append_copy(l_BB, r_BB, context); 
context->pushExecuteCall(APQRVLWIGROVJC_execbr); // Compare
context->pushExecuteCall(SEPJEISZSGCEZW_execbr); // Maix
PRSKWGXULSUCKB->append_copy(l_e, r_e, context); 
context->pushExecuteCall(PRSKWGXULSUCKB_execbr); // Switch
return chain_RYHGDMLXUKWYZC;
}
sentence_after_3: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor DZXXPHQLSRZIHM;
/*DEF*/	DataCursor l_G;
/*DEF*/	DataCursor r_G;
/*SET*/	l_G = arg_from;
/*SET*/	DZXXPHQLSRZIHM = arg_from;
/*INC*/	if (!INC(DZXXPHQLSRZIHM, arg_to)) goto sentence_after_4;
	if (! isSymbolType(DZXXPHQLSRZIHM.container->type)) goto sentence_after_4;
/*SET*/	r_G = DZXXPHQLSRZIHM;
//// [ &.name <any> ] 
/*DEF*/	DataCursor GZRIOQRQETKZFB;
/*SET*/	GZRIOQRQETKZFB = r_G;
 if (!SLIDE(GZRIOQRQETKZFB, arg_to, l_G, r_G)) goto sentence_after_4;
//// [ `a` <any> ] 
/*DEF*/	DataCursor LDJIEMSFZBHZFN;
/*SET*/	LDJIEMSFZBHZFN = GZRIOQRQETKZFB;
/*INC*/	if (!INC(LDJIEMSFZBHZFN, arg_to)) goto sentence_after_4;
	if (LDJIEMSFZBHZFN.container->type != text || *(LDJIEMSFZBHZFN.container->value.text + LDJIEMSFZBHZFN.index) != '=') goto sentence_after_4;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor WYWMXXGDPYLRAX;
/*DEF*/	DataCursor l_AA;
/*DEF*/	DataCursor r_AA;
/*SET*/	l_AA = LDJIEMSFZBHZFN;
/*SET*/	WYWMXXGDPYLRAX = LDJIEMSFZBHZFN;
/*INC*/	if (!INC(WYWMXXGDPYLRAX, arg_to)) goto sentence_after_4;
	if (! isSymbolType(WYWMXXGDPYLRAX.container->type)) goto sentence_after_4;
/*SET*/	r_AA = WYWMXXGDPYLRAX;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor GLMTBIYLBHCWHL;
/*DEF*/	DataCursor l_s;
/*DEF*/	DataCursor r_s;
/*SET*/	l_s = r_AA;
/*SET*/	GLMTBIYLBHCWHL = r_AA;
/*INC*/	if (!INC(GLMTBIYLBHCWHL, arg_to)) goto sentence_after_4;
	if (! isSymbolType(GLMTBIYLBHCWHL.container->type)) goto sentence_after_4;
/*SET*/	r_s = GLMTBIYLBHCWHL;
//// [ `a` <any> ] 
/*DEF*/	DataCursor SYOYHGMGOPPRZA;
/*SET*/	SYOYHGMGOPPRZA = r_s;
/*INC*/	if (!INC(SYOYHGMGOPPRZA, arg_to)) goto sentence_after_4;
	if (SYOYHGMGOPPRZA.container->type != text || *(SYOYHGMGOPPRZA.container->value.text + SYOYHGMGOPPRZA.index) != '=') goto sentence_after_4;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor XQMOMSYHGAGIUP;
/*DEF*/	DataCursor l_BB;
/*DEF*/	DataCursor r_BB;
/*SET*/	l_BB = SYOYHGMGOPPRZA;
/*SET*/	XQMOMSYHGAGIUP = SYOYHGMGOPPRZA;
/*INC*/	if (!INC(XQMOMSYHGAGIUP, arg_to)) goto sentence_after_4;
	if (! isSymbolType(XQMOMSYHGAGIUP.container->type)) goto sentence_after_4;
/*SET*/	r_BB = XQMOMSYHGAGIUP;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = r_BB;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_HUTIFKLGKLRNUW = context->putChain(); 
DataChain* KMSYQCPUIVAHQA = new DataChain(); 
DataContainer* KMSYQCPUIVAHQA_execbr = newRefExecBrackets(Switch, KMSYQCPUIVAHQA, "Switch");
chain_HUTIFKLGKLRNUW->append(KMSYQCPUIVAHQA_execbr);
KMSYQCPUIVAHQA->append_copy(l_G, r_G, context); 
KMSYQCPUIVAHQA->append_copy(l_G, r_G, context); 
KMSYQCPUIVAHQA->append(newRefText("=")); 
KMSYQCPUIVAHQA->append_copy(l_AA, r_AA, context); 
KMSYQCPUIVAHQA->append_copy(l_e, r_e, context); 
context->pushExecuteCall(KMSYQCPUIVAHQA_execbr); // Switch
return chain_HUTIFKLGKLRNUW;
}
sentence_after_4: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor TMSCKMAALKICSN;
/*DEF*/	DataCursor l_G;
/*DEF*/	DataCursor r_G;
/*SET*/	l_G = arg_from;
/*SET*/	TMSCKMAALKICSN = arg_from;
/*INC*/	if (!INC(TMSCKMAALKICSN, arg_to)) goto sentence_after_5;
	if (! isSymbolType(TMSCKMAALKICSN.container->type)) goto sentence_after_5;
/*SET*/	r_G = TMSCKMAALKICSN;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor XUCOVTYKRXAWZA;
/*DEF*/	DataCursor l_s;
/*DEF*/	DataCursor r_s;
/*SET*/	l_s = r_G;
/*SET*/	XUCOVTYKRXAWZA = r_G;
/*INC*/	if (!INC(XUCOVTYKRXAWZA, arg_to)) goto sentence_after_5;
	if (! isSymbolType(XUCOVTYKRXAWZA.container->type)) goto sentence_after_5;
/*SET*/	r_s = XUCOVTYKRXAWZA;
//// [ `a` <any> ] 
/*DEF*/	DataCursor DJXWXQMNDHLDTT;
/*SET*/	DJXWXQMNDHLDTT = r_s;
/*INC*/	if (!INC(DJXWXQMNDHLDTT, arg_to)) goto sentence_after_5;
	if (DJXWXQMNDHLDTT.container->type != text || *(DJXWXQMNDHLDTT.container->value.text + DJXWXQMNDHLDTT.index) != '=') goto sentence_after_5;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor XSKNXTEZNJSQTF;
/*DEF*/	DataCursor l_AA;
/*DEF*/	DataCursor r_AA;
/*SET*/	l_AA = DJXWXQMNDHLDTT;
/*SET*/	XSKNXTEZNJSQTF = DJXWXQMNDHLDTT;
/*INC*/	if (!INC(XSKNXTEZNJSQTF, arg_to)) goto sentence_after_5;
	if (! isSymbolType(XSKNXTEZNJSQTF.container->type)) goto sentence_after_5;
/*SET*/	r_AA = XSKNXTEZNJSQTF;
//// [ &.name <any> ] 
/*DEF*/	DataCursor BCCFQMWHBVSSII;
/*SET*/	BCCFQMWHBVSSII = r_AA;
 if (!SLIDE(BCCFQMWHBVSSII, arg_to, l_G, r_G)) goto sentence_after_5;
//// [ `a` <any> ] 
/*DEF*/	DataCursor GVIJSUXIICAAHM;
/*SET*/	GVIJSUXIICAAHM = BCCFQMWHBVSSII;
/*INC*/	if (!INC(GVIJSUXIICAAHM, arg_to)) goto sentence_after_5;
	if (GVIJSUXIICAAHM.container->type != text || *(GVIJSUXIICAAHM.container->value.text + GVIJSUXIICAAHM.index) != '=') goto sentence_after_5;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor KWYWTTJZPPKWLB;
/*DEF*/	DataCursor l_BB;
/*DEF*/	DataCursor r_BB;
/*SET*/	l_BB = GVIJSUXIICAAHM;
/*SET*/	KWYWTTJZPPKWLB = GVIJSUXIICAAHM;
/*INC*/	if (!INC(KWYWTTJZPPKWLB, arg_to)) goto sentence_after_5;
	if (! isSymbolType(KWYWTTJZPPKWLB.container->type)) goto sentence_after_5;
/*SET*/	r_BB = KWYWTTJZPPKWLB;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = r_BB;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_PRWVHSHZYAVQYE = context->putChain(); 
DataChain* CZTOZOABNANHRR = new DataChain(); 
DataContainer* CZTOZOABNANHRR_execbr = newRefExecBrackets(Switch, CZTOZOABNANHRR, "Switch");
chain_PRWVHSHZYAVQYE->append(CZTOZOABNANHRR_execbr);
CZTOZOABNANHRR->append_copy(l_G, r_G, context); 
CZTOZOABNANHRR->append_copy(l_G, r_G, context); 
CZTOZOABNANHRR->append(newRefText("=")); 
CZTOZOABNANHRR->append_copy(l_BB, r_BB, context); 
CZTOZOABNANHRR->append_copy(l_e, r_e, context); 
context->pushExecuteCall(CZTOZOABNANHRR_execbr); // Switch
return chain_PRWVHSHZYAVQYE;
}
sentence_after_5: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor BDDNDODXEUIOZI;
/*DEF*/	DataCursor l_G;
/*DEF*/	DataCursor r_G;
/*SET*/	l_G = arg_from;
/*SET*/	BDDNDODXEUIOZI = arg_from;
/*INC*/	if (!INC(BDDNDODXEUIOZI, arg_to)) goto sentence_after_6;
	if (! isSymbolType(BDDNDODXEUIOZI.container->type)) goto sentence_after_6;
/*SET*/	r_G = BDDNDODXEUIOZI;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor OIUOZXQTIHWAUR;
/*DEF*/	DataCursor l_s;
/*DEF*/	DataCursor r_s;
/*SET*/	l_s = r_G;
/*SET*/	OIUOZXQTIHWAUR = r_G;
/*INC*/	if (!INC(OIUOZXQTIHWAUR, arg_to)) goto sentence_after_6;
	if (! isSymbolType(OIUOZXQTIHWAUR.container->type)) goto sentence_after_6;
/*SET*/	r_s = OIUOZXQTIHWAUR;
//// [ `a` <any> ] 
/*DEF*/	DataCursor OQRDQWCVLXZIPO;
/*SET*/	OQRDQWCVLXZIPO = r_s;
/*INC*/	if (!INC(OQRDQWCVLXZIPO, arg_to)) goto sentence_after_6;
	if (OQRDQWCVLXZIPO.container->type != text || *(OQRDQWCVLXZIPO.container->value.text + OQRDQWCVLXZIPO.index) != '=') goto sentence_after_6;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor DIISPQNZOMCWVA;
/*DEF*/	DataCursor l_AA;
/*DEF*/	DataCursor r_AA;
/*SET*/	l_AA = OQRDQWCVLXZIPO;
/*SET*/	DIISPQNZOMCWVA = OQRDQWCVLXZIPO;
/*INC*/	if (!INC(DIISPQNZOMCWVA, arg_to)) goto sentence_after_6;
	if (! isSymbolType(DIISPQNZOMCWVA.container->type)) goto sentence_after_6;
/*SET*/	r_AA = DIISPQNZOMCWVA;
//// [ &.name <any> ] 
/*DEF*/	DataCursor PTGRGDFNYYTKWW;
/*SET*/	PTGRGDFNYYTKWW = r_AA;
 if (!SLIDE(PTGRGDFNYYTKWW, arg_to, l_s, r_s)) goto sentence_after_6;
//// [ `a` <any> ] 
/*DEF*/	DataCursor QQTMIUUYVGAIHF;
/*SET*/	QQTMIUUYVGAIHF = PTGRGDFNYYTKWW;
/*INC*/	if (!INC(QQTMIUUYVGAIHF, arg_to)) goto sentence_after_6;
	if (QQTMIUUYVGAIHF.container->type != text || *(QQTMIUUYVGAIHF.container->value.text + QQTMIUUYVGAIHF.index) != '=') goto sentence_after_6;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor SHCCXHUUYYHTGD;
/*DEF*/	DataCursor l_BB;
/*DEF*/	DataCursor r_BB;
/*SET*/	l_BB = QQTMIUUYVGAIHF;
/*SET*/	SHCCXHUUYYHTGD = QQTMIUUYVGAIHF;
/*INC*/	if (!INC(SHCCXHUUYYHTGD, arg_to)) goto sentence_after_6;
	if (! isSymbolType(SHCCXHUUYYHTGD.container->type)) goto sentence_after_6;
/*SET*/	r_BB = SHCCXHUUYYHTGD;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = r_BB;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_WJNGJNCPXRJVBV = context->putChain(); 
DataChain* CCEFKBEMGSDYMZ = new DataChain(); 
DataContainer* CCEFKBEMGSDYMZ_execbr = newRefExecBrackets(Switch, CCEFKBEMGSDYMZ, "Switch");
chain_WJNGJNCPXRJVBV->append(CCEFKBEMGSDYMZ_execbr);
CCEFKBEMGSDYMZ->append_copy(l_G, r_G, context); 
CCEFKBEMGSDYMZ->append_copy(l_s, r_s, context); 
CCEFKBEMGSDYMZ->append(newRefText("=")); 
DataChain* MMKWDEHFKRUQBY = new DataChain(); 
DataContainer* MMKWDEHFKRUQBY_execbr = newRefExecBrackets(Maix, MMKWDEHFKRUQBY, "Maix");
CCEFKBEMGSDYMZ->append(MMKWDEHFKRUQBY_execbr);
MMKWDEHFKRUQBY->append(newRefText("i")); 
MMKWDEHFKRUQBY->append_copy(l_AA, r_AA, context); 
MMKWDEHFKRUQBY->append_copy(l_BB, r_BB, context); 
DataChain* VECMPESROMDXLL = new DataChain(); 
DataContainer* VECMPESROMDXLL_execbr = newRefExecBrackets(Compare, VECMPESROMDXLL, "Compare");
MMKWDEHFKRUQBY->append(VECMPESROMDXLL_execbr);
VECMPESROMDXLL->append_copy(l_AA, r_AA, context); 
VECMPESROMDXLL->append_copy(l_BB, r_BB, context); 
context->pushExecuteCall(VECMPESROMDXLL_execbr); // Compare
context->pushExecuteCall(MMKWDEHFKRUQBY_execbr); // Maix
CCEFKBEMGSDYMZ->append_copy(l_e, r_e, context); 
context->pushExecuteCall(CCEFKBEMGSDYMZ_execbr); // Switch
return chain_WJNGJNCPXRJVBV;
}
sentence_after_6: 

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = arg_from;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_UBRYYESHQLZMRE = context->putChain(); 
DataChain* WQNKQITXGIIGQU = new DataChain(); 
DataContainer* WQNKQITXGIIGQU_execbr = newRefExecBrackets(Prout, WQNKQITXGIIGQU, "Prout");
chain_UBRYYESHQLZMRE->append(WQNKQITXGIIGQU_execbr);
WQNKQITXGIIGQU->append(newRefText("Sw unk: ")); 
WQNKQITXGIIGQU->append_copy(l_e, r_e, context); 
context->pushExecuteCall(WQNKQITXGIIGQU_execbr); // Prout
return chain_UBRYYESHQLZMRE;
}
sentence_after_7: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Maix(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor SKWTCZNLTERXBL;
/*SET*/	SKWTCZNLTERXBL = arg_from;
/*INC*/	if (!INC(SKWTCZNLTERXBL, arg_to)) goto sentence_after_1;
	if (SKWTCZNLTERXBL.container->type != text || *(SKWTCZNLTERXBL.container->value.text + SKWTCZNLTERXBL.index) != 'a') goto sentence_after_1;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor TZYDYZVAHNKIXJ;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = SKWTCZNLTERXBL;
/*SET*/	TZYDYZVAHNKIXJ = SKWTCZNLTERXBL;
/*INC*/	if (!INC(TZYDYZVAHNKIXJ, arg_to)) goto sentence_after_1;
	if (! isSymbolType(TZYDYZVAHNKIXJ.container->type)) goto sentence_after_1;
/*SET*/	r_A = TZYDYZVAHNKIXJ;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor WZZTDJPQSUOWKV;
/*DEF*/	DataCursor l_B;
/*DEF*/	DataCursor r_B;
/*SET*/	l_B = r_A;
/*SET*/	WZZTDJPQSUOWKV = r_A;
/*INC*/	if (!INC(WZZTDJPQSUOWKV, arg_to)) goto sentence_after_1;
	if (! isSymbolType(WZZTDJPQSUOWKV.container->type)) goto sentence_after_1;
/*SET*/	r_B = WZZTDJPQSUOWKV;
//// [ `a` <any> ] 
/*DEF*/	DataCursor FCCOCKVRJBFRJP;
/*SET*/	FCCOCKVRJBFRJP = r_B;
/*INC*/	if (!INC(FCCOCKVRJBFRJP, arg_to)) goto sentence_after_1;
	if (FCCOCKVRJBFRJP.container->type != text || *(FCCOCKVRJBFRJP.container->value.text + FCCOCKVRJBFRJP.index) != '-') goto sentence_after_1;
//// [ empty ] 
/*ISEMPTY*/	if (FCCOCKVRJBFRJP!=0 && arg_to != FCCOCKVRJBFRJP) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_LTJQVCCLPEZTSJ = context->putChain(); 
chain_LTJQVCCLPEZTSJ->append_copy(l_B, r_B, context); 
return chain_LTJQVCCLPEZTSJ;
}
sentence_after_1: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor PYNZFROTQPOXMW;
/*SET*/	PYNZFROTQPOXMW = arg_from;
/*INC*/	if (!INC(PYNZFROTQPOXMW, arg_to)) goto sentence_after_2;
	if (PYNZFROTQPOXMW.container->type != text || *(PYNZFROTQPOXMW.container->value.text + PYNZFROTQPOXMW.index) != 'a') goto sentence_after_2;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor HHWEWNVCBVDKUZ;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = PYNZFROTQPOXMW;
/*SET*/	HHWEWNVCBVDKUZ = PYNZFROTQPOXMW;
/*INC*/	if (!INC(HHWEWNVCBVDKUZ, arg_to)) goto sentence_after_2;
	if (! isSymbolType(HHWEWNVCBVDKUZ.container->type)) goto sentence_after_2;
/*SET*/	r_A = HHWEWNVCBVDKUZ;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor IFIFRTWQQEOJUE;
/*DEF*/	DataCursor l_B;
/*DEF*/	DataCursor r_B;
/*SET*/	l_B = r_A;
/*SET*/	IFIFRTWQQEOJUE = r_A;
/*INC*/	if (!INC(IFIFRTWQQEOJUE, arg_to)) goto sentence_after_2;
	if (! isSymbolType(IFIFRTWQQEOJUE.container->type)) goto sentence_after_2;
/*SET*/	r_B = IFIFRTWQQEOJUE;
//// [ `a` <any> ] 
/*DEF*/	DataCursor QBNSKWZEEWZKAO;
/*SET*/	QBNSKWZEEWZKAO = r_B;
/*INC*/	if (!INC(QBNSKWZEEWZKAO, arg_to)) goto sentence_after_2;
	if (QBNSKWZEEWZKAO.container->type != text || *(QBNSKWZEEWZKAO.container->value.text + QBNSKWZEEWZKAO.index) != '+') goto sentence_after_2;
//// [ empty ] 
/*ISEMPTY*/	if (QBNSKWZEEWZKAO!=0 && arg_to != QBNSKWZEEWZKAO) goto sentence_after_2;

// подстановка 
// new chain 
DataChain *chain_UWZKCTKAGXKSMF = context->putChain(); 
chain_UWZKCTKAGXKSMF->append_copy(l_A, r_A, context); 
return chain_UWZKCTKAGXKSMF;
}
sentence_after_2: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor AUWINSJLSOJTRX;
/*SET*/	AUWINSJLSOJTRX = arg_from;
/*INC*/	if (!INC(AUWINSJLSOJTRX, arg_to)) goto sentence_after_3;
	if (AUWINSJLSOJTRX.container->type != text || *(AUWINSJLSOJTRX.container->value.text + AUWINSJLSOJTRX.index) != 'i') goto sentence_after_3;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor HWMHLVBYPECJEI;
/*DEF*/	DataCursor l_B;
/*DEF*/	DataCursor r_B;
/*SET*/	l_B = AUWINSJLSOJTRX;
/*SET*/	HWMHLVBYPECJEI = AUWINSJLSOJTRX;
/*INC*/	if (!INC(HWMHLVBYPECJEI, arg_to)) goto sentence_after_3;
	if (! isSymbolType(HWMHLVBYPECJEI.container->type)) goto sentence_after_3;
/*SET*/	r_B = HWMHLVBYPECJEI;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor WWSTNEUIQUBPGU;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_B;
/*SET*/	WWSTNEUIQUBPGU = r_B;
/*INC*/	if (!INC(WWSTNEUIQUBPGU, arg_to)) goto sentence_after_3;
	if (! isSymbolType(WWSTNEUIQUBPGU.container->type)) goto sentence_after_3;
/*SET*/	r_A = WWSTNEUIQUBPGU;
//// [ `a` <any> ] 
/*DEF*/	DataCursor GWGNMIKDWICKDI;
/*SET*/	GWGNMIKDWICKDI = r_A;
/*INC*/	if (!INC(GWGNMIKDWICKDI, arg_to)) goto sentence_after_3;
	if (GWGNMIKDWICKDI.container->type != text || *(GWGNMIKDWICKDI.container->value.text + GWGNMIKDWICKDI.index) != '-') goto sentence_after_3;
//// [ empty ] 
/*ISEMPTY*/	if (GWGNMIKDWICKDI!=0 && arg_to != GWGNMIKDWICKDI) goto sentence_after_3;

// подстановка 
// new chain 
DataChain *chain_IJYLBIIMOFGXEI = context->putChain(); 
chain_IJYLBIIMOFGXEI->append_copy(l_B, r_B, context); 
return chain_IJYLBIIMOFGXEI;
}
sentence_after_3: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor RPBTYWQZAPKKCA;
/*SET*/	RPBTYWQZAPKKCA = arg_from;
/*INC*/	if (!INC(RPBTYWQZAPKKCA, arg_to)) goto sentence_after_4;
	if (RPBTYWQZAPKKCA.container->type != text || *(RPBTYWQZAPKKCA.container->value.text + RPBTYWQZAPKKCA.index) != 'i') goto sentence_after_4;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor FCOMVNTMDHZXLE;
/*DEF*/	DataCursor l_B;
/*DEF*/	DataCursor r_B;
/*SET*/	l_B = RPBTYWQZAPKKCA;
/*SET*/	FCOMVNTMDHZXLE = RPBTYWQZAPKKCA;
/*INC*/	if (!INC(FCOMVNTMDHZXLE, arg_to)) goto sentence_after_4;
	if (! isSymbolType(FCOMVNTMDHZXLE.container->type)) goto sentence_after_4;
/*SET*/	r_B = FCOMVNTMDHZXLE;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor FPPYEBEOEQZNBH;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_B;
/*SET*/	FPPYEBEOEQZNBH = r_B;
/*INC*/	if (!INC(FPPYEBEOEQZNBH, arg_to)) goto sentence_after_4;
	if (! isSymbolType(FPPYEBEOEQZNBH.container->type)) goto sentence_after_4;
/*SET*/	r_A = FPPYEBEOEQZNBH;
//// [ `a` <any> ] 
/*DEF*/	DataCursor YCWMFYAQQIANNY;
/*SET*/	YCWMFYAQQIANNY = r_A;
/*INC*/	if (!INC(YCWMFYAQQIANNY, arg_to)) goto sentence_after_4;
	if (YCWMFYAQQIANNY.container->type != text || *(YCWMFYAQQIANNY.container->value.text + YCWMFYAQQIANNY.index) != '+') goto sentence_after_4;
//// [ empty ] 
/*ISEMPTY*/	if (YCWMFYAQQIANNY!=0 && arg_to != YCWMFYAQQIANNY) goto sentence_after_4;

// подстановка 
// new chain 
DataChain *chain_QCWVZXTCTHYNMU = context->putChain(); 
chain_QCWVZXTCTHYNMU->append_copy(l_A, r_A, context); 
return chain_QCWVZXTCTHYNMU;
}
sentence_after_4: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = arg_from;
/*SET*/	r_e = arg_from;
/*JMP*/	goto label_XQKWWMTFISGGLG_firststep;
label_XQKWWMTFISGGLG: 
/*INC*/	if (!INC(r_e, arg_to)) goto sentence_after_5;
label_XQKWWMTFISGGLG_firststep: 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor COXPIPYTDBAMRY;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_e;
/*SET*/	COXPIPYTDBAMRY = r_e;
/*INC*/	if (!INC(COXPIPYTDBAMRY, arg_to)) goto label_XQKWWMTFISGGLG;
	if (! isSymbolType(COXPIPYTDBAMRY.container->type)) goto label_XQKWWMTFISGGLG;
/*SET*/	r_A = COXPIPYTDBAMRY;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor KBOKMWGSDDPQKR;
/*DEF*/	DataCursor l_zn;
/*DEF*/	DataCursor r_zn;
/*SET*/	l_zn = r_A;
/*SET*/	KBOKMWGSDDPQKR = r_A;
/*INC*/	if (!INC(KBOKMWGSDDPQKR, arg_to)) goto label_XQKWWMTFISGGLG;
	if (! isSymbolType(KBOKMWGSDDPQKR.container->type)) goto label_XQKWWMTFISGGLG;
/*SET*/	r_zn = KBOKMWGSDDPQKR;
//// [ empty ] 
/*ISEMPTY*/	if (r_zn!=0 && arg_to != r_zn) goto label_XQKWWMTFISGGLG;

// подстановка 
// new chain 
DataChain *chain_ZYJCHZTMIEPAGW = context->putChain(); 
chain_ZYJCHZTMIEPAGW->append_copy(l_A, r_A, context); 
return chain_ZYJCHZTMIEPAGW;
}
sentence_after_5: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* WriteXO(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ empty ] 
/*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_HROQKHWUDBCIHP = context->putChain(); 
return chain_HROQKHWUDBCIHP;
}
sentence_after_1: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor QWAQZXUGKVAKVL;
/*DEF*/	DataCursor AVKSWFZSDBVQID;
/*DEF*/	DataCursor HTBCDEYTMPPHKU;
/*SET*/	QWAQZXUGKVAKVL = arg_from;
/*INC*/	if (!INC(QWAQZXUGKVAKVL, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (QWAQZXUGKVAKVL.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	AVKSWFZSDBVQID = QWAQZXUGKVAKVL.container->value.bracket_data.chain->at_before_first();
	HTBCDEYTMPPHKU   = QWAQZXUGKVAKVL.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor HSXORPUFWHJRUT;
/*DEF*/	DataCursor l_g;
/*DEF*/	DataCursor r_g;
/*SET*/	l_g = AVKSWFZSDBVQID;
/*SET*/	HSXORPUFWHJRUT = AVKSWFZSDBVQID;
/*INC*/	if (!INC(HSXORPUFWHJRUT, HTBCDEYTMPPHKU)) goto sentence_after_2;
	if (! isSymbolType(HSXORPUFWHJRUT.container->type)) goto sentence_after_2;
/*SET*/	r_g = HSXORPUFWHJRUT;
//// [ empty ] 
/*ISEMPTY*/	if (r_g!=0 && HTBCDEYTMPPHKU != r_g) goto sentence_after_2;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor KSSLHLRXLYDXVK;
/*DEF*/	DataCursor OSAGGMPBGZVBAF;
/*DEF*/	DataCursor AZJOHQSSWTORCK;
/*SET*/	KSSLHLRXLYDXVK = QWAQZXUGKVAKVL;
/*INC*/	if (!INC(KSSLHLRXLYDXVK, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (KSSLHLRXLYDXVK.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	OSAGGMPBGZVBAF = KSSLHLRXLYDXVK.container->value.bracket_data.chain->at_before_first();
	AZJOHQSSWTORCK   = KSSLHLRXLYDXVK.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = OSAGGMPBGZVBAF;
/*SET*/	r_1 = AZJOHQSSWTORCK;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor QAXSREHNRLYJIW;
/*DEF*/	DataCursor TMHGLKOZFKMMXT;
/*DEF*/	DataCursor YVOXHFKXOPVYBJ;
/*SET*/	QAXSREHNRLYJIW = KSSLHLRXLYDXVK;
/*INC*/	if (!INC(QAXSREHNRLYJIW, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (QAXSREHNRLYJIW.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	TMHGLKOZFKMMXT = QAXSREHNRLYJIW.container->value.bracket_data.chain->at_before_first();
	YVOXHFKXOPVYBJ   = QAXSREHNRLYJIW.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = TMHGLKOZFKMMXT;
/*SET*/	r_2 = YVOXHFKXOPVYBJ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor ZOXHZUBDNTOAMZ;
/*DEF*/	DataCursor OTTCJTUEGMPQKC;
/*DEF*/	DataCursor DBBGCKJQTEBICH;
/*SET*/	ZOXHZUBDNTOAMZ = QAXSREHNRLYJIW;
/*INC*/	if (!INC(ZOXHZUBDNTOAMZ, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (ZOXHZUBDNTOAMZ.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	OTTCJTUEGMPQKC = ZOXHZUBDNTOAMZ.container->value.bracket_data.chain->at_before_first();
	DBBGCKJQTEBICH   = ZOXHZUBDNTOAMZ.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = OTTCJTUEGMPQKC;
/*SET*/	r_n = DBBGCKJQTEBICH;
//// [ empty ] 
/*ISEMPTY*/	if (ZOXHZUBDNTOAMZ!=0 && arg_to != ZOXHZUBDNTOAMZ) goto sentence_after_2;

// подстановка 
// new chain 
DataChain *chain_ZNPPRQISWBDHOY = context->putChain(); 
DataChain* NCSAETLGBFVIOC = new DataChain(); 
DataContainer* NCSAETLGBFVIOC_execbr = newRefExecBrackets(WXOif, NCSAETLGBFVIOC, "WXOif");
chain_ZNPPRQISWBDHOY->append(NCSAETLGBFVIOC_execbr);
DataChain* FWXWDRNLFFBFHV = new DataChain(); 
NCSAETLGBFVIOC->append(newRefStructBrackets(FWXWDRNLFFBFHV)); 
FWXWDRNLFFBFHV->append_copy(l_g, r_g, context); 
DataChain* YXZUKJWOCYHZQJ = new DataChain(); 
NCSAETLGBFVIOC->append(newRefStructBrackets(YXZUKJWOCYHZQJ)); 
DataChain* ZDHTBRRRLLKTCH = new DataChain(); 
DataContainer* ZDHTBRRRLLKTCH_execbr = newRefExecBrackets(Strategy, ZDHTBRRRLLKTCH, "Strategy");
YXZUKJWOCYHZQJ->append(ZDHTBRRRLLKTCH_execbr);
ZDHTBRRRLLKTCH->append_copy(l_1, r_1, context); 
context->pushExecuteCall(ZDHTBRRRLLKTCH_execbr); // Strategy
DataChain* FNCTPIRNAWONYD = new DataChain(); 
NCSAETLGBFVIOC->append(newRefStructBrackets(FNCTPIRNAWONYD)); 
DataChain* WWVUABUQCIMCNL = new DataChain(); 
DataContainer* WWVUABUQCIMCNL_execbr = newRefExecBrackets(Strategy, WWVUABUQCIMCNL, "Strategy");
FNCTPIRNAWONYD->append(WWVUABUQCIMCNL_execbr);
WWVUABUQCIMCNL->append_copy(l_2, r_2, context); 
context->pushExecuteCall(WWVUABUQCIMCNL_execbr); // Strategy
DataChain* HQODEMAKMUNMAX = new DataChain(); 
NCSAETLGBFVIOC->append(newRefStructBrackets(HQODEMAKMUNMAX)); 
DataChain* IOMKEYWCOFQBKD = new DataChain(); 
DataContainer* IOMKEYWCOFQBKD_execbr = newRefExecBrackets(Strategy, IOMKEYWCOFQBKD, "Strategy");
HQODEMAKMUNMAX->append(IOMKEYWCOFQBKD_execbr);
IOMKEYWCOFQBKD->append_copy(l_n, r_n, context); 
context->pushExecuteCall(IOMKEYWCOFQBKD_execbr); // Strategy
DataChain* MZOIZGQIPZAYIX = new DataChain(); 
NCSAETLGBFVIOC->append(newRefStructBrackets(MZOIZGQIPZAYIX)); 
MZOIZGQIPZAYIX->append_copy(l_1, r_1, context); 
DataChain* RYDWSOVHZTKGZS = new DataChain(); 
NCSAETLGBFVIOC->append(newRefStructBrackets(RYDWSOVHZTKGZS)); 
RYDWSOVHZTKGZS->append_copy(l_2, r_2, context); 
DataChain* KWPTKQCEXRNNXS = new DataChain(); 
NCSAETLGBFVIOC->append(newRefStructBrackets(KWPTKQCEXRNNXS)); 
KWPTKQCEXRNNXS->append_copy(l_n, r_n, context); 
context->pushExecuteCall(NCSAETLGBFVIOC_execbr); // WXOif
return chain_ZNPPRQISWBDHOY;
}
sentence_after_2: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* WXOif(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor KYWNDQIZLZKLNI;
/*DEF*/	DataCursor SSAMQAZHLNDNVI;
/*DEF*/	DataCursor LTKOIAFMEICGGU;
/*SET*/	KYWNDQIZLZKLNI = arg_from;
/*INC*/	if (!INC(KYWNDQIZLZKLNI, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (KYWNDQIZLZKLNI.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	SSAMQAZHLNDNVI = KYWNDQIZLZKLNI.container->value.bracket_data.chain->at_before_first();
	LTKOIAFMEICGGU   = KYWNDQIZLZKLNI.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor ZXHRDJZZHERUSW;
/*SET*/	ZXHRDJZZHERUSW = SSAMQAZHLNDNVI;
/*INC*/	if (!INC(ZXHRDJZZHERUSW, LTKOIAFMEICGGU)) goto sentence_after_1;
	if (ZXHRDJZZHERUSW.container->type != text || *(ZXHRDJZZHERUSW.container->value.text + ZXHRDJZZHERUSW.index) != '1') goto sentence_after_1;
//// [ empty ] 
/*ISEMPTY*/	if (ZXHRDJZZHERUSW!=0 && LTKOIAFMEICGGU != ZXHRDJZZHERUSW) goto sentence_after_1;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_eee1;
/*DEF*/	DataCursor r_eee1;
/*SET*/	l_eee1 = KYWNDQIZLZKLNI;
/*SET*/	r_eee1 = KYWNDQIZLZKLNI;
/*JMP*/	goto label_RNLDKLDKFZTAGI_firststep;
label_RNLDKLDKFZTAGI: 
/*INC*/	if (!INC(r_eee1, arg_to)) goto sentence_after_1;
label_RNLDKLDKFZTAGI_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor ENATJZWXCLKKUL;
/*DEF*/	DataCursor NCAQPTONEQLNBT;
/*DEF*/	DataCursor ODDBMIVAZXZMCO;
/*SET*/	ENATJZWXCLKKUL = r_eee1;
/*INC*/	if (!INC(ENATJZWXCLKKUL, arg_to)) goto label_RNLDKLDKFZTAGI;
//// ISBRACKET 
	if (ENATJZWXCLKKUL.container->type != struct_bracket) goto label_RNLDKLDKFZTAGI;
//// JMP_BRACKET 
	NCAQPTONEQLNBT = ENATJZWXCLKKUL.container->value.bracket_data.chain->at_before_first();
	ODDBMIVAZXZMCO   = ENATJZWXCLKKUL.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = NCAQPTONEQLNBT;
/*SET*/	r_1 = NCAQPTONEQLNBT;
/*JMP*/	goto label_JDHISWKAXIAGTU_firststep;
label_JDHISWKAXIAGTU: 
/*INC*/	if (!INC(r_1, ODDBMIVAZXZMCO)) goto label_RNLDKLDKFZTAGI;
label_JDHISWKAXIAGTU_firststep: 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor TAFRSVPPHURAAA;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_1;
/*SET*/	TAFRSVPPHURAAA = r_1;
/*INC*/	if (!INC(TAFRSVPPHURAAA, ODDBMIVAZXZMCO)) goto label_JDHISWKAXIAGTU;
	if (! isSymbolType(TAFRSVPPHURAAA.container->type)) goto label_JDHISWKAXIAGTU;
/*SET*/	r_A = TAFRSVPPHURAAA;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = r_A;
/*SET*/	r_2 = r_A;
/*JMP*/	goto label_IXZTWDYRUUMQAD_firststep;
label_IXZTWDYRUUMQAD: 
/*INC*/	if (!INC(r_2, ODDBMIVAZXZMCO)) goto label_JDHISWKAXIAGTU;
label_IXZTWDYRUUMQAD_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor JEPVVCVOIDWMTP;
/*SET*/	JEPVVCVOIDWMTP = r_2;
 if (!SLIDE(JEPVVCVOIDWMTP, ODDBMIVAZXZMCO, l_A, r_A)) goto label_IXZTWDYRUUMQAD;
//// [ e.1 ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = JEPVVCVOIDWMTP;
/*SET*/	r_3 = ODDBMIVAZXZMCO;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_eee2;
/*DEF*/	DataCursor r_eee2;
/*SET*/	l_eee2 = ENATJZWXCLKKUL;
/*SET*/	r_eee2 = ENATJZWXCLKKUL;
/*JMP*/	goto label_BNMQUIOPIWPUWC_firststep;
label_BNMQUIOPIWPUWC: 
/*INC*/	if (!INC(r_eee2, arg_to)) goto label_IXZTWDYRUUMQAD;
label_BNMQUIOPIWPUWC_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor ZDAPDZGHAVVIYI;
/*DEF*/	DataCursor ROJNOLSOWRMVVJ;
/*DEF*/	DataCursor IQSWRICMZSXAVD;
/*SET*/	ZDAPDZGHAVVIYI = r_eee2;
/*INC*/	if (!INC(ZDAPDZGHAVVIYI, arg_to)) goto label_BNMQUIOPIWPUWC;
//// ISBRACKET 
	if (ZDAPDZGHAVVIYI.container->type != struct_bracket) goto label_BNMQUIOPIWPUWC;
//// JMP_BRACKET 
	ROJNOLSOWRMVVJ = ZDAPDZGHAVVIYI.container->value.bracket_data.chain->at_before_first();
	IQSWRICMZSXAVD   = ZDAPDZGHAVVIYI.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_n1;
/*DEF*/	DataCursor r_n1;
/*SET*/	l_n1 = ROJNOLSOWRMVVJ;
/*SET*/	r_n1 = ROJNOLSOWRMVVJ;
/*JMP*/	goto label_QAMNFHWFGEOHSK_firststep;
label_QAMNFHWFGEOHSK: 
/*INC*/	if (!INC(r_n1, IQSWRICMZSXAVD)) goto label_BNMQUIOPIWPUWC;
label_QAMNFHWFGEOHSK_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor KEFUTXXIBHPULN;
/*SET*/	KEFUTXXIBHPULN = r_n1;
 if (!SLIDE(KEFUTXXIBHPULN, IQSWRICMZSXAVD, l_A, r_A)) goto label_QAMNFHWFGEOHSK;
//// [ e.1 ] 
/*DEF*/	DataCursor l_n2;
/*DEF*/	DataCursor r_n2;
/*SET*/	l_n2 = KEFUTXXIBHPULN;
/*SET*/	r_n2 = IQSWRICMZSXAVD;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor LWXQWWZDGDJGEQ;
/*DEF*/	DataCursor WAPBHLPUDOEMNN;
/*DEF*/	DataCursor TPOUAHGXJHZJBE;
/*SET*/	LWXQWWZDGDJGEQ = ZDAPDZGHAVVIYI;
/*INC*/	if (!INC(LWXQWWZDGDJGEQ, arg_to)) goto label_QAMNFHWFGEOHSK;
//// ISBRACKET 
	if (LWXQWWZDGDJGEQ.container->type != struct_bracket) goto label_QAMNFHWFGEOHSK;
//// JMP_BRACKET 
	WAPBHLPUDOEMNN = LWXQWWZDGDJGEQ.container->value.bracket_data.chain->at_before_first();
	TPOUAHGXJHZJBE   = LWXQWWZDGDJGEQ.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_e1;
/*DEF*/	DataCursor r_e1;
/*SET*/	l_e1 = WAPBHLPUDOEMNN;
/*SET*/	r_e1 = TPOUAHGXJHZJBE;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor PLTTRIABWUCRJM;
/*DEF*/	DataCursor BVBOZVMXOBATKH;
/*DEF*/	DataCursor QSQCHLHTBOFUIK;
/*SET*/	PLTTRIABWUCRJM = LWXQWWZDGDJGEQ;
/*INC*/	if (!INC(PLTTRIABWUCRJM, arg_to)) goto label_QAMNFHWFGEOHSK;
//// ISBRACKET 
	if (PLTTRIABWUCRJM.container->type != struct_bracket) goto label_QAMNFHWFGEOHSK;
//// JMP_BRACKET 
	BVBOZVMXOBATKH = PLTTRIABWUCRJM.container->value.bracket_data.chain->at_before_first();
	QSQCHLHTBOFUIK   = PLTTRIABWUCRJM.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_e2;
/*DEF*/	DataCursor r_e2;
/*SET*/	l_e2 = BVBOZVMXOBATKH;
/*SET*/	r_e2 = QSQCHLHTBOFUIK;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor WAFKCOWUUNTFHP;
/*DEF*/	DataCursor KDEYHOKQUWQVWT;
/*DEF*/	DataCursor THHHUGJZMFEUIN;
/*SET*/	WAFKCOWUUNTFHP = PLTTRIABWUCRJM;
/*INC*/	if (!INC(WAFKCOWUUNTFHP, arg_to)) goto label_QAMNFHWFGEOHSK;
//// ISBRACKET 
	if (WAFKCOWUUNTFHP.container->type != struct_bracket) goto label_QAMNFHWFGEOHSK;
//// JMP_BRACKET 
	KDEYHOKQUWQVWT = WAFKCOWUUNTFHP.container->value.bracket_data.chain->at_before_first();
	THHHUGJZMFEUIN   = WAFKCOWUUNTFHP.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = KDEYHOKQUWQVWT;
/*SET*/	r_n = THHHUGJZMFEUIN;
//// [ empty ] 
/*ISEMPTY*/	if (WAFKCOWUUNTFHP!=0 && arg_to != WAFKCOWUUNTFHP) goto label_QAMNFHWFGEOHSK;

// подстановка 
// new chain 
DataChain *chain_IPBNCIZOCKAADA = context->putChain(); 
chain_IPBNCIZOCKAADA->append(newRefText("#")); 
DataChain* LLJREQTKHUDBLP = new DataChain(); 
DataContainer* LLJREQTKHUDBLP_execbr = newRefExecBrackets(Lins, LLJREQTKHUDBLP, "Lins");
chain_IPBNCIZOCKAADA->append(LLJREQTKHUDBLP_execbr);
DataChain* RZLSRWXOCCSLUT = new DataChain(); 
LLJREQTKHUDBLP->append(newRefStructBrackets(RZLSRWXOCCSLUT)); 
RZLSRWXOCCSLUT->append_copy(l_n, r_n, context); 
DataChain* WQZSQTIJVCWNPF = new DataChain(); 
DataContainer* WQZSQTIJVCWNPF_execbr = newRefExecBrackets(AntiStrategy, WQZSQTIJVCWNPF, "AntiStrategy");
LLJREQTKHUDBLP->append(WQZSQTIJVCWNPF_execbr);
WQZSQTIJVCWNPF->append_copy(l_A, r_A, context); 
context->pushExecuteCall(WQZSQTIJVCWNPF_execbr); // AntiStrategy
context->pushExecuteCall(LLJREQTKHUDBLP_execbr); // Lins
return chain_IPBNCIZOCKAADA;
}
sentence_after_1: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor LRLUKDIAOHQJHR;
/*DEF*/	DataCursor AGLGRIYKLDKDFR;
/*DEF*/	DataCursor DRXJSTCWRSXGYW;
/*SET*/	LRLUKDIAOHQJHR = arg_from;
/*INC*/	if (!INC(LRLUKDIAOHQJHR, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (LRLUKDIAOHQJHR.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	AGLGRIYKLDKDFR = LRLUKDIAOHQJHR.container->value.bracket_data.chain->at_before_first();
	DRXJSTCWRSXGYW   = LRLUKDIAOHQJHR.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor FNHCBKPMESUPMT;
/*DEF*/	DataCursor l_g;
/*DEF*/	DataCursor r_g;
/*SET*/	l_g = AGLGRIYKLDKDFR;
/*SET*/	FNHCBKPMESUPMT = AGLGRIYKLDKDFR;
/*INC*/	if (!INC(FNHCBKPMESUPMT, DRXJSTCWRSXGYW)) goto sentence_after_2;
	if (! isSymbolType(FNHCBKPMESUPMT.container->type)) goto sentence_after_2;
/*SET*/	r_g = FNHCBKPMESUPMT;
//// [ empty ] 
/*ISEMPTY*/	if (r_g!=0 && DRXJSTCWRSXGYW != r_g) goto sentence_after_2;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = LRLUKDIAOHQJHR;
/*SET*/	r_e = LRLUKDIAOHQJHR;
/*JMP*/	goto label_RVIPFBKTBWZFAH_firststep;
label_RVIPFBKTBWZFAH: 
/*INC*/	if (!INC(r_e, arg_to)) goto sentence_after_2;
label_RVIPFBKTBWZFAH_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor OEVNHXBRHHFOBG;
/*DEF*/	DataCursor YWCVHKTDOXQTEK;
/*DEF*/	DataCursor IWWURZBLMLDLFI;
/*SET*/	OEVNHXBRHHFOBG = r_e;
/*INC*/	if (!INC(OEVNHXBRHHFOBG, arg_to)) goto label_RVIPFBKTBWZFAH;
//// ISBRACKET 
	if (OEVNHXBRHHFOBG.container->type != struct_bracket) goto label_RVIPFBKTBWZFAH;
//// JMP_BRACKET 
	YWCVHKTDOXQTEK = OEVNHXBRHHFOBG.container->value.bracket_data.chain->at_before_first();
	IWWURZBLMLDLFI   = OEVNHXBRHHFOBG.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = YWCVHKTDOXQTEK;
/*SET*/	r_1 = IWWURZBLMLDLFI;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor BDVEMUNNLXUBYK;
/*DEF*/	DataCursor VVRGKTRERPTISI;
/*DEF*/	DataCursor ZXHREVNXQUEZXK;
/*SET*/	BDVEMUNNLXUBYK = OEVNHXBRHHFOBG;
/*INC*/	if (!INC(BDVEMUNNLXUBYK, arg_to)) goto label_RVIPFBKTBWZFAH;
//// ISBRACKET 
	if (BDVEMUNNLXUBYK.container->type != struct_bracket) goto label_RVIPFBKTBWZFAH;
//// JMP_BRACKET 
	VVRGKTRERPTISI = BDVEMUNNLXUBYK.container->value.bracket_data.chain->at_before_first();
	ZXHREVNXQUEZXK   = BDVEMUNNLXUBYK.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = VVRGKTRERPTISI;
/*SET*/	r_2 = ZXHREVNXQUEZXK;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor UGROOHRHUDIDGV;
/*DEF*/	DataCursor HTJHYEZKYHPFXW;
/*DEF*/	DataCursor GPRPSEACCXKWVI;
/*SET*/	UGROOHRHUDIDGV = BDVEMUNNLXUBYK;
/*INC*/	if (!INC(UGROOHRHUDIDGV, arg_to)) goto label_RVIPFBKTBWZFAH;
//// ISBRACKET 
	if (UGROOHRHUDIDGV.container->type != struct_bracket) goto label_RVIPFBKTBWZFAH;
//// JMP_BRACKET 
	HTJHYEZKYHPFXW = UGROOHRHUDIDGV.container->value.bracket_data.chain->at_before_first();
	GPRPSEACCXKWVI   = UGROOHRHUDIDGV.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = HTJHYEZKYHPFXW;
/*SET*/	r_n = GPRPSEACCXKWVI;
//// [ empty ] 
/*ISEMPTY*/	if (UGROOHRHUDIDGV!=0 && arg_to != UGROOHRHUDIDGV) goto label_RVIPFBKTBWZFAH;

// подстановка 
// new chain 
DataChain *chain_XVFHQFAWKFDJPY = context->putChain(); 
DataChain* EEVDGGATFIEKIX = new DataChain(); 
DataContainer* EEVDGGATFIEKIX_execbr = newRefExecBrackets(WriteXO1, EEVDGGATFIEKIX, "WriteXO1");
chain_XVFHQFAWKFDJPY->append(EEVDGGATFIEKIX_execbr);
DataChain* EYRFCPXSCJKCFG = new DataChain(); 
EEVDGGATFIEKIX->append(newRefStructBrackets(EYRFCPXSCJKCFG)); 
EYRFCPXSCJKCFG->append_copy(l_g, r_g, context); 
DataChain* QMYHJMJTIMDSPI = new DataChain(); 
EEVDGGATFIEKIX->append(newRefStructBrackets(QMYHJMJTIMDSPI)); 
QMYHJMJTIMDSPI->append_copy(l_1, r_1, context); 
DataChain* ZHWZIZCYUCEGLM = new DataChain(); 
EEVDGGATFIEKIX->append(newRefStructBrackets(ZHWZIZCYUCEGLM)); 
ZHWZIZCYUCEGLM->append_copy(l_2, r_2, context); 
DataChain* MBGYGFVTQVZQAT = new DataChain(); 
EEVDGGATFIEKIX->append(newRefStructBrackets(MBGYGFVTQVZQAT)); 
MBGYGFVTQVZQAT->append_copy(l_n, r_n, context); 
context->pushExecuteCall(EEVDGGATFIEKIX_execbr); // WriteXO1
return chain_XVFHQFAWKFDJPY;
}
sentence_after_2: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Lins(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor XLGIBYZZKIAJXM;
/*DEF*/	DataCursor BHMKQLWHQNGHLV;
/*DEF*/	DataCursor LZGPPXOOEOQXPP;
/*SET*/	XLGIBYZZKIAJXM = arg_from;
/*INC*/	if (!INC(XLGIBYZZKIAJXM, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (XLGIBYZZKIAJXM.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	BHMKQLWHQNGHLV = XLGIBYZZKIAJXM.container->value.bracket_data.chain->at_before_first();
	LZGPPXOOEOQXPP   = XLGIBYZZKIAJXM.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_n1;
/*DEF*/	DataCursor r_n1;
/*SET*/	l_n1 = BHMKQLWHQNGHLV;
/*SET*/	r_n1 = BHMKQLWHQNGHLV;
/*JMP*/	goto label_BPMBLXNKEOFMNI_firststep;
label_BPMBLXNKEOFMNI: 
/*INC*/	if (!INC(r_n1, LZGPPXOOEOQXPP)) goto sentence_after_1;
label_BPMBLXNKEOFMNI_firststep: 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor UMJCAFCUYVDCUE;
/*DEF*/	DataCursor l_hod;
/*DEF*/	DataCursor r_hod;
/*SET*/	l_hod = r_n1;
/*SET*/	UMJCAFCUYVDCUE = r_n1;
/*INC*/	if (!INC(UMJCAFCUYVDCUE, LZGPPXOOEOQXPP)) goto label_BPMBLXNKEOFMNI;
	if (! isSymbolType(UMJCAFCUYVDCUE.container->type)) goto label_BPMBLXNKEOFMNI;
/*SET*/	r_hod = UMJCAFCUYVDCUE;
//// [ e.1 ] 
/*DEF*/	DataCursor l_n2;
/*DEF*/	DataCursor r_n2;
/*SET*/	l_n2 = r_hod;
/*SET*/	r_n2 = LZGPPXOOEOQXPP;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_as1;
/*DEF*/	DataCursor r_as1;
/*SET*/	l_as1 = XLGIBYZZKIAJXM;
/*SET*/	r_as1 = XLGIBYZZKIAJXM;
/*JMP*/	goto label_TERQPJJWAKNKXT_firststep;
label_TERQPJJWAKNKXT: 
/*INC*/	if (!INC(r_as1, arg_to)) goto label_BPMBLXNKEOFMNI;
label_TERQPJJWAKNKXT_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor LZQFLJNWKXGKFY;
/*SET*/	LZQFLJNWKXGKFY = r_as1;
 if (!SLIDE(LZQFLJNWKXGKFY, arg_to, l_hod, r_hod)) goto label_TERQPJJWAKNKXT;
//// [ e.1 ] 
/*DEF*/	DataCursor l_as2;
/*DEF*/	DataCursor r_as2;
/*SET*/	l_as2 = LZQFLJNWKXGKFY;
/*SET*/	r_as2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_LNUKBIYSPLKHJU = context->putChain(); 
chain_LNUKBIYSPLKHJU->append_copy(l_hod, r_hod, context); 
return chain_LNUKBIYSPLKHJU;
}
sentence_after_1: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* AntiStrategy(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor CFUWOHZVPHJBJY;
/*SET*/	CFUWOHZVPHJBJY = arg_from;
/*INC*/	if (!INC(CFUWOHZVPHJBJY, arg_to)) goto sentence_after_1;
	if (CFUWOHZVPHJBJY.container->type != text || *(CFUWOHZVPHJBJY.container->value.text + CFUWOHZVPHJBJY.index) != '1') goto sentence_after_1;
//// [ empty ] 
/*ISEMPTY*/	if (CFUWOHZVPHJBJY!=0 && arg_to != CFUWOHZVPHJBJY) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_YTFJYNQMGZAGBK = context->putChain(); 
chain_YTFJYNQMGZAGBK->append(newRefText("123")); 
return chain_YTFJYNQMGZAGBK;
}
sentence_after_1: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor WEKKOUXDCYNKHT;
/*SET*/	WEKKOUXDCYNKHT = arg_from;
/*INC*/	if (!INC(WEKKOUXDCYNKHT, arg_to)) goto sentence_after_2;
	if (WEKKOUXDCYNKHT.container->type != text || *(WEKKOUXDCYNKHT.container->value.text + WEKKOUXDCYNKHT.index) != '2') goto sentence_after_2;
//// [ empty ] 
/*ISEMPTY*/	if (WEKKOUXDCYNKHT!=0 && arg_to != WEKKOUXDCYNKHT) goto sentence_after_2;

// подстановка 
// new chain 
DataChain *chain_FULDVRXLONVKXZ = context->putChain(); 
chain_FULDVRXLONVKXZ->append(newRefText("456")); 
return chain_FULDVRXLONVKXZ;
}
sentence_after_2: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor ECXEPKMZZGXLUA;
/*SET*/	ECXEPKMZZGXLUA = arg_from;
/*INC*/	if (!INC(ECXEPKMZZGXLUA, arg_to)) goto sentence_after_3;
	if (ECXEPKMZZGXLUA.container->type != text || *(ECXEPKMZZGXLUA.container->value.text + ECXEPKMZZGXLUA.index) != '3') goto sentence_after_3;
//// [ empty ] 
/*ISEMPTY*/	if (ECXEPKMZZGXLUA!=0 && arg_to != ECXEPKMZZGXLUA) goto sentence_after_3;

// подстановка 
// new chain 
DataChain *chain_PJIKVPAUDVKXGL = context->putChain(); 
chain_PJIKVPAUDVKXGL->append(newRefText("789")); 
return chain_PJIKVPAUDVKXGL;
}
sentence_after_3: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor LISAAMBOVJKDQR;
/*SET*/	LISAAMBOVJKDQR = arg_from;
/*INC*/	if (!INC(LISAAMBOVJKDQR, arg_to)) goto sentence_after_4;
	if (LISAAMBOVJKDQR.container->type != text || *(LISAAMBOVJKDQR.container->value.text + LISAAMBOVJKDQR.index) != '4') goto sentence_after_4;
//// [ empty ] 
/*ISEMPTY*/	if (LISAAMBOVJKDQR!=0 && arg_to != LISAAMBOVJKDQR) goto sentence_after_4;

// подстановка 
// new chain 
DataChain *chain_ZIFAWFTZQGEMNH = context->putChain(); 
chain_ZIFAWFTZQGEMNH->append(newRefText("147")); 
return chain_ZIFAWFTZQGEMNH;
}
sentence_after_4: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor PQYICTMOYFPCVK;
/*SET*/	PQYICTMOYFPCVK = arg_from;
/*INC*/	if (!INC(PQYICTMOYFPCVK, arg_to)) goto sentence_after_5;
	if (PQYICTMOYFPCVK.container->type != text || *(PQYICTMOYFPCVK.container->value.text + PQYICTMOYFPCVK.index) != '5') goto sentence_after_5;
//// [ empty ] 
/*ISEMPTY*/	if (PQYICTMOYFPCVK!=0 && arg_to != PQYICTMOYFPCVK) goto sentence_after_5;

// подстановка 
// new chain 
DataChain *chain_OWDZSFQHKPLFBY = context->putChain(); 
chain_OWDZSFQHKPLFBY->append(newRefText("258")); 
return chain_OWDZSFQHKPLFBY;
}
sentence_after_5: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor ZMNIMDLXMJYDAX;
/*SET*/	ZMNIMDLXMJYDAX = arg_from;
/*INC*/	if (!INC(ZMNIMDLXMJYDAX, arg_to)) goto sentence_after_6;
	if (ZMNIMDLXMJYDAX.container->type != text || *(ZMNIMDLXMJYDAX.container->value.text + ZMNIMDLXMJYDAX.index) != '6') goto sentence_after_6;
//// [ empty ] 
/*ISEMPTY*/	if (ZMNIMDLXMJYDAX!=0 && arg_to != ZMNIMDLXMJYDAX) goto sentence_after_6;

// подстановка 
// new chain 
DataChain *chain_VOCDENQMWILXXZ = context->putChain(); 
chain_VOCDENQMWILXXZ->append(newRefText("369")); 
return chain_VOCDENQMWILXXZ;
}
sentence_after_6: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor OQFOTPIKPQUDMO;
/*SET*/	OQFOTPIKPQUDMO = arg_from;
/*INC*/	if (!INC(OQFOTPIKPQUDMO, arg_to)) goto sentence_after_7;
	if (OQFOTPIKPQUDMO.container->type != text || *(OQFOTPIKPQUDMO.container->value.text + OQFOTPIKPQUDMO.index) != '7') goto sentence_after_7;
//// [ empty ] 
/*ISEMPTY*/	if (OQFOTPIKPQUDMO!=0 && arg_to != OQFOTPIKPQUDMO) goto sentence_after_7;

// подстановка 
// new chain 
DataChain *chain_XIISYZWNHXYFVY = context->putChain(); 
chain_XIISYZWNHXYFVY->append(newRefText("159")); 
return chain_XIISYZWNHXYFVY;
}
sentence_after_7: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor DFMPDWOMCIUDCN;
/*SET*/	DFMPDWOMCIUDCN = arg_from;
/*INC*/	if (!INC(DFMPDWOMCIUDCN, arg_to)) goto sentence_after_8;
	if (DFMPDWOMCIUDCN.container->type != text || *(DFMPDWOMCIUDCN.container->value.text + DFMPDWOMCIUDCN.index) != '8') goto sentence_after_8;
//// [ empty ] 
/*ISEMPTY*/	if (DFMPDWOMCIUDCN!=0 && arg_to != DFMPDWOMCIUDCN) goto sentence_after_8;

// подстановка 
// new chain 
DataChain *chain_MXIISNEBPYWSGQ = context->putChain(); 
chain_MXIISNEBPYWSGQ->append(newRefText("357")); 
return chain_MXIISNEBPYWSGQ;
}
sentence_after_8: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* WriteXO1(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ empty ] 
/*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_SXDJPLWZFMJOOP = context->putChain(); 
return chain_SXDJPLWZFMJOOP;
}
sentence_after_1: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_eee;
/*DEF*/	DataCursor r_eee;
/*SET*/	l_eee = arg_from;
/*SET*/	r_eee = arg_from;
/*JMP*/	goto label_YYIFVKMWWPGPLJ_firststep;
label_YYIFVKMWWPGPLJ: 
/*INC*/	if (!INC(r_eee, arg_to)) goto sentence_after_2;
label_YYIFVKMWWPGPLJ_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor EAWPVAPIHOXUUF;
/*DEF*/	DataCursor FBRWHPEVCOQRGR;
/*DEF*/	DataCursor QWZHIBNORKHZML;
/*SET*/	EAWPVAPIHOXUUF = r_eee;
/*INC*/	if (!INC(EAWPVAPIHOXUUF, arg_to)) goto label_YYIFVKMWWPGPLJ;
//// ISBRACKET 
	if (EAWPVAPIHOXUUF.container->type != struct_bracket) goto label_YYIFVKMWWPGPLJ;
//// JMP_BRACKET 
	FBRWHPEVCOQRGR = EAWPVAPIHOXUUF.container->value.bracket_data.chain->at_before_first();
	QWZHIBNORKHZML   = EAWPVAPIHOXUUF.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = FBRWHPEVCOQRGR;
/*SET*/	r_3 = FBRWHPEVCOQRGR;
/*JMP*/	goto label_BZFHXUNRKLIBVP_firststep;
label_BZFHXUNRKLIBVP: 
/*INC*/	if (!INC(r_3, QWZHIBNORKHZML)) goto label_YYIFVKMWWPGPLJ;
label_BZFHXUNRKLIBVP_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor SZZNOPFGAXZGFL;
/*SET*/	SZZNOPFGAXZGFL = r_3;
/*INC*/	if (!INC(SZZNOPFGAXZGFL, QWZHIBNORKHZML)) goto label_BZFHXUNRKLIBVP;
	if (SZZNOPFGAXZGFL.container->type != text || *(SZZNOPFGAXZGFL.container->value.text + SZZNOPFGAXZGFL.index) != '>') goto label_BZFHXUNRKLIBVP;
//// [ empty ] 
/*ISEMPTY*/	if (SZZNOPFGAXZGFL!=0 && QWZHIBNORKHZML != SZZNOPFGAXZGFL) goto label_BZFHXUNRKLIBVP;
//// [ empty ] 
/*ISEMPTY*/	if (EAWPVAPIHOXUUF!=0 && arg_to != EAWPVAPIHOXUUF) goto label_BZFHXUNRKLIBVP;

// подстановка 
// new chain 
DataChain *chain_GCOZGTZIUFUZIM = context->putChain(); 
return chain_GCOZGTZIUFUZIM;
}
sentence_after_2: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor XEEKWNYSBICRFX;
/*DEF*/	DataCursor DIOGCSEOZPSCRH;
/*DEF*/	DataCursor JOTYCZCWMBAAOL;
/*SET*/	XEEKWNYSBICRFX = arg_from;
/*INC*/	if (!INC(XEEKWNYSBICRFX, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (XEEKWNYSBICRFX.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	DIOGCSEOZPSCRH = XEEKWNYSBICRFX.container->value.bracket_data.chain->at_before_first();
	JOTYCZCWMBAAOL   = XEEKWNYSBICRFX.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor SVUBPYLONMWAJG;
/*DEF*/	DataCursor l_g;
/*DEF*/	DataCursor r_g;
/*SET*/	l_g = DIOGCSEOZPSCRH;
/*SET*/	SVUBPYLONMWAJG = DIOGCSEOZPSCRH;
/*INC*/	if (!INC(SVUBPYLONMWAJG, JOTYCZCWMBAAOL)) goto sentence_after_3;
	if (! isSymbolType(SVUBPYLONMWAJG.container->type)) goto sentence_after_3;
/*SET*/	r_g = SVUBPYLONMWAJG;
//// [ empty ] 
/*ISEMPTY*/	if (r_g!=0 && JOTYCZCWMBAAOL != r_g) goto sentence_after_3;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_eee;
/*DEF*/	DataCursor r_eee;
/*SET*/	l_eee = XEEKWNYSBICRFX;
/*SET*/	r_eee = XEEKWNYSBICRFX;
/*JMP*/	goto label_XZGYZAOVENFVOC_firststep;
label_XZGYZAOVENFVOC: 
/*INC*/	if (!INC(r_eee, arg_to)) goto sentence_after_3;
label_XZGYZAOVENFVOC_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor IKQJTXGVENKSPP;
/*DEF*/	DataCursor WWPLHXTGYBVMAJ;
/*DEF*/	DataCursor EYFAXEGSEIJIKC;
/*SET*/	IKQJTXGVENKSPP = r_eee;
/*INC*/	if (!INC(IKQJTXGVENKSPP, arg_to)) goto label_XZGYZAOVENFVOC;
//// ISBRACKET 
	if (IKQJTXGVENKSPP.container->type != struct_bracket) goto label_XZGYZAOVENFVOC;
//// JMP_BRACKET 
	WWPLHXTGYBVMAJ = IKQJTXGVENKSPP.container->value.bracket_data.chain->at_before_first();
	EYFAXEGSEIJIKC   = IKQJTXGVENKSPP.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = WWPLHXTGYBVMAJ;
/*SET*/	r_3 = WWPLHXTGYBVMAJ;
/*JMP*/	goto label_MDUCLAAIOISSIS_firststep;
label_MDUCLAAIOISSIS: 
/*INC*/	if (!INC(r_3, EYFAXEGSEIJIKC)) goto label_XZGYZAOVENFVOC;
label_MDUCLAAIOISSIS_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor IYPPNZDUBPTSAV;
/*SET*/	IYPPNZDUBPTSAV = r_3;
/*INC*/	if (!INC(IYPPNZDUBPTSAV, EYFAXEGSEIJIKC)) goto label_MDUCLAAIOISSIS;
	if (IYPPNZDUBPTSAV.container->type != text || *(IYPPNZDUBPTSAV.container->value.text + IYPPNZDUBPTSAV.index) != '>') goto label_MDUCLAAIOISSIS;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor ESZSIPPQMOTJHK;
/*DEF*/	DataCursor l_s;
/*DEF*/	DataCursor r_s;
/*SET*/	l_s = IYPPNZDUBPTSAV;
/*SET*/	ESZSIPPQMOTJHK = IYPPNZDUBPTSAV;
/*INC*/	if (!INC(ESZSIPPQMOTJHK, EYFAXEGSEIJIKC)) goto label_MDUCLAAIOISSIS;
	if (! isSymbolType(ESZSIPPQMOTJHK.container->type)) goto label_MDUCLAAIOISSIS;
/*SET*/	r_s = ESZSIPPQMOTJHK;
//// [ e.1 ] 
/*DEF*/	DataCursor l_4;
/*DEF*/	DataCursor r_4;
/*SET*/	l_4 = r_s;
/*SET*/	r_4 = EYFAXEGSEIJIKC;
//// [ empty ] 
/*ISEMPTY*/	if (IKQJTXGVENKSPP!=0 && arg_to != IKQJTXGVENKSPP) goto label_MDUCLAAIOISSIS;

// подстановка 
// new chain 
DataChain *chain_LGEXKTRMHDDAPS = context->putChain(); 
DataChain* WPTFVOVUJIUWBM = new DataChain(); 
DataContainer* WPTFVOVUJIUWBM_execbr = newRefExecBrackets(Length, WPTFVOVUJIUWBM, "Length");
chain_LGEXKTRMHDDAPS->append(WPTFVOVUJIUWBM_execbr);
DataChain* IBRUCTTMRVZNJR = new DataChain(); 
DataContainer* IBRUCTTMRVZNJR_execbr = newRefExecBrackets(Optima21, IBRUCTTMRVZNJR, "Optima21");
WPTFVOVUJIUWBM->append(IBRUCTTMRVZNJR_execbr);
DataChain* CHJWZWMOZECRZN = new DataChain(); 
DataContainer* CHJWZWMOZECRZN_execbr = newRefExecBrackets(Analiz, CHJWZWMOZECRZN, "Analiz");
IBRUCTTMRVZNJR->append(CHJWZWMOZECRZN_execbr);
DataChain* JKFRVKRMRDWROA = new DataChain(); 
CHJWZWMOZECRZN->append(newRefStructBrackets(JKFRVKRMRDWROA)); 
JKFRVKRMRDWROA->append_copy(l_g, r_g, context); 
CHJWZWMOZECRZN->append_copy(l_eee, r_eee, context); 
DataChain* OCQPKTLMWXWTNU = new DataChain(); 
CHJWZWMOZECRZN->append(newRefStructBrackets(OCQPKTLMWXWTNU)); 
OCQPKTLMWXWTNU->append_copy(l_3, r_3, context); 
OCQPKTLMWXWTNU->append(newRefText(">")); 
OCQPKTLMWXWTNU->append_copy(l_s, r_s, context); 
OCQPKTLMWXWTNU->append_copy(l_4, r_4, context); 
context->pushExecuteCall(CHJWZWMOZECRZN_execbr); // Analiz
context->pushExecuteCall(IBRUCTTMRVZNJR_execbr); // Optima21
context->pushExecuteCall(WPTFVOVUJIUWBM_execbr); // Length
DataChain* AMQELRWBGBIJIL = new DataChain(); 
DataContainer* AMQELRWBGBIJIL_execbr = newRefExecBrackets(WriteXO, AMQELRWBGBIJIL, "WriteXO");
chain_LGEXKTRMHDDAPS->append(AMQELRWBGBIJIL_execbr);
DataChain* NHIIULLTOVBEFL = new DataChain(); 
AMQELRWBGBIJIL->append(newRefStructBrackets(NHIIULLTOVBEFL)); 
NHIIULLTOVBEFL->append_copy(l_g, r_g, context); 
AMQELRWBGBIJIL->append_copy(l_eee, r_eee, context); 
DataChain* WLPBHYFFHBAVHF = new DataChain(); 
AMQELRWBGBIJIL->append(newRefStructBrackets(WLPBHYFFHBAVHF)); 
WLPBHYFFHBAVHF->append_copy(l_3, r_3, context); 
WLPBHYFFHBAVHF->append_copy(l_s, r_s, context); 
WLPBHYFFHBAVHF->append(newRefText(">")); 
WLPBHYFFHBAVHF->append_copy(l_4, r_4, context); 
context->pushExecuteCall(AMQELRWBGBIJIL_execbr); // WriteXO
return chain_LGEXKTRMHDDAPS;
}
sentence_after_3: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* First1(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor UAHLINDJDFPEKX;
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	UAHLINDJDFPEKX = arg_from;
/*INC*/	if (!INC(UAHLINDJDFPEKX, arg_to)) goto sentence_after_1;
	if (! isSymbolType(UAHLINDJDFPEKX.container->type)) goto sentence_after_1;
/*SET*/	r_1 = UAHLINDJDFPEKX;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = r_1;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_GLIXLAXXTOLHGL = context->putChain(); 
chain_GLIXLAXXTOLHGL->append_copy(l_1, r_1, context); 
return chain_GLIXLAXXTOLHGL;
}
sentence_after_1: 

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_to;

// подстановка 
// new chain 
DataChain *chain_VWXKYVULCYJEFL = context->putChain(); 
chain_VWXKYVULCYJEFL->append_copy(l_1, r_1, context); 
return chain_VWXKYVULCYJEFL;
}
sentence_after_2: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Length(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_LOQZHLTMGTUJDC_firststep;
label_LOQZHLTMGTUJDC: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_1;
label_LOQZHLTMGTUJDC_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor UUGNROTLOTCPBN;
/*SET*/	UUGNROTLOTCPBN = r_1;
/*INC*/	if (!INC(UUGNROTLOTCPBN, arg_to)) goto label_LOQZHLTMGTUJDC;
	static DataChain *VEGHMFBMVKLSQF = text_to_chain("12");
	static DataCursor VEGHMFBMVKLSQF_l = VEGHMFBMVKLSQF->at_before_first();
	static DataCursor VEGHMFBMVKLSQF_r = VEGHMFBMVKLSQF->at_last();
 if (!SLIDE(UUGNROTLOTCPBN, arg_to, VEGHMFBMVKLSQF_l, VEGHMFBMVKLSQF_r)) goto label_LOQZHLTMGTUJDC;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = UUGNROTLOTCPBN;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_UBVXCTEPVMLJOH = context->putChain(); 
DataChain* ZXXOOLNVLAYGUO = new DataChain(); 
DataContainer* ZXXOOLNVLAYGUO_execbr = newRefExecBrackets(DivS, ZXXOOLNVLAYGUO, "DivS");
chain_UBVXCTEPVMLJOH->append(ZXXOOLNVLAYGUO_execbr);
DataChain* KQDAUPTYVJAFZZ = new DataChain(); 
DataContainer* KQDAUPTYVJAFZZ_execbr = newRefExecBrackets(First1, KQDAUPTYVJAFZZ, "First1");
ZXXOOLNVLAYGUO->append(KQDAUPTYVJAFZZ_execbr);
DataChain* KQTAXJLRBRUKKK = new DataChain(); 
DataContainer* KQTAXJLRBRUKKK_execbr = newRefExecBrackets(Lenw, KQTAXJLRBRUKKK, "Lenw");
KQDAUPTYVJAFZZ->append(KQTAXJLRBRUKKK_execbr);
KQTAXJLRBRUKKK->append_copy(l_1, r_1, context); 
KQTAXJLRBRUKKK->append(newRefText("1")); 
context->pushExecuteCall(KQTAXJLRBRUKKK_execbr); // Lenw
context->pushExecuteCall(KQDAUPTYVJAFZZ_execbr); // First1
DataChain* IGJMXQRBAZLPDE = new DataChain(); 
DataContainer* IGJMXQRBAZLPDE_execbr = newRefExecBrackets(First1, IGJMXQRBAZLPDE, "First1");
ZXXOOLNVLAYGUO->append(IGJMXQRBAZLPDE_execbr);
DataChain* VPEZPBWSHVPCKL = new DataChain(); 
DataContainer* VPEZPBWSHVPCKL_execbr = newRefExecBrackets(Lenw, VPEZPBWSHVPCKL, "Lenw");
IGJMXQRBAZLPDE->append(VPEZPBWSHVPCKL_execbr);
VPEZPBWSHVPCKL->append(newRefText("2")); 
VPEZPBWSHVPCKL->append_copy(l_2, r_2, context); 
context->pushExecuteCall(VPEZPBWSHVPCKL_execbr); // Lenw
context->pushExecuteCall(IGJMXQRBAZLPDE_execbr); // First1
context->pushExecuteCall(ZXXOOLNVLAYGUO_execbr); // DivS
return chain_UBVXCTEPVMLJOH;
}
sentence_after_1: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_DQGIVLQPIRQVWQ_firststep;
label_DQGIVLQPIRQVWQ: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_2;
label_DQGIVLQPIRQVWQ_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor QUYXPIXQIREUQA;
/*SET*/	QUYXPIXQIREUQA = r_1;
/*INC*/	if (!INC(QUYXPIXQIREUQA, arg_to)) goto label_DQGIVLQPIRQVWQ;
	if (QUYXPIXQIREUQA.container->type != text || *(QUYXPIXQIREUQA.container->value.text + QUYXPIXQIREUQA.index) != '1') goto label_DQGIVLQPIRQVWQ;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = QUYXPIXQIREUQA;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_DRNWWTQKDOZFPK = context->putChain(); 
chain_DRNWWTQKDOZFPK->append(newRefText("1=")); 
chain_DRNWWTQKDOZFPK->append(newRefInteger(2000000)); 
return chain_DRNWWTQKDOZFPK;
}
sentence_after_2: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_DUULIFZDPOHCGU_firststep;
label_DUULIFZDPOHCGU: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_3;
label_DUULIFZDPOHCGU_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor BKUREHRQBBXAJE;
/*SET*/	BKUREHRQBBXAJE = r_1;
/*INC*/	if (!INC(BKUREHRQBBXAJE, arg_to)) goto label_DUULIFZDPOHCGU;
	if (BKUREHRQBBXAJE.container->type != text || *(BKUREHRQBBXAJE.container->value.text + BKUREHRQBBXAJE.index) != '2') goto label_DUULIFZDPOHCGU;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = BKUREHRQBBXAJE;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_YSPDAAOXRAOJOT = context->putChain(); 
chain_YSPDAAOXRAOJOT->append(newRefText("2=")); 
chain_YSPDAAOXRAOJOT->append(newRefInteger(2000000)); 
return chain_YSPDAAOXRAOJOT;
}
sentence_after_3: 

{
// сопоставление 
//// [ empty ] 
/*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_4;

// подстановка 
// new chain 
DataChain *chain_JUFSTURTJHUDPE = context->putChain(); 
chain_JUFSTURTJHUDPE->append(newRefText("1=")); 
chain_JUFSTURTJHUDPE->append(newRefInteger(1)); 
return chain_JUFSTURTJHUDPE;
}
sentence_after_4: 

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_to;

// подстановка 
// new chain 
DataChain *chain_TSGRZUIGUSNWLY = context->putChain(); 
DataChain* RVFNKKMSDBUHVH = new DataChain(); 
DataContainer* RVFNKKMSDBUHVH_execbr = newRefExecBrackets(Prout, RVFNKKMSDBUHVH, "Prout");
chain_TSGRZUIGUSNWLY->append(RVFNKKMSDBUHVH_execbr);
RVFNKKMSDBUHVH->append(newRefText("Length error symbols!!! : ")); 
context->pushExecuteCall(RVFNKKMSDBUHVH_execbr); // Prout
DataChain* FQTDVTNLEWFQUU = new DataChain(); 
DataContainer* FQTDVTNLEWFQUU_execbr = newRefExecBrackets(Print, FQTDVTNLEWFQUU, "Print");
chain_TSGRZUIGUSNWLY->append(FQTDVTNLEWFQUU_execbr);
FQTDVTNLEWFQUU->append_copy(l_1, r_1, context); 
context->pushExecuteCall(FQTDVTNLEWFQUU_execbr); // Print
return chain_TSGRZUIGUSNWLY;
}
sentence_after_5: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* DivS(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor HTAINKEBBVZHTQ;
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	HTAINKEBBVZHTQ = arg_from;
/*INC*/	if (!INC(HTAINKEBBVZHTQ, arg_to)) goto sentence_after_1;
	if (! isSymbolType(HTAINKEBBVZHTQ.container->type)) goto sentence_after_1;
/*SET*/	r_1 = HTAINKEBBVZHTQ;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor BKDBMVHBSNJBTV;
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = r_1;
/*SET*/	BKDBMVHBSNJBTV = r_1;
/*INC*/	if (!INC(BKDBMVHBSNJBTV, arg_to)) goto sentence_after_1;
	if (! isSymbolType(BKDBMVHBSNJBTV.container->type)) goto sentence_after_1;
/*SET*/	r_2 = BKDBMVHBSNJBTV;
//// [ empty ] 
/*ISEMPTY*/	if (r_2!=0 && arg_to != r_2) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_JTQNBCHIWFUQLZ = context->putChain(); 
DataChain* SMXVFJTVQUITIV = new DataChain(); 
DataContainer* SMXVFJTVQUITIV_execbr = newRefExecBrackets(IfDiv, SMXVFJTVQUITIV, "IfDiv");
chain_JTQNBCHIWFUQLZ->append(SMXVFJTVQUITIV_execbr);
DataChain* YHZPXCDJWIKFAT = new DataChain(); 
DataContainer* YHZPXCDJWIKFAT_execbr = newRefExecBrackets(Compare, YHZPXCDJWIKFAT, "Compare");
SMXVFJTVQUITIV->append(YHZPXCDJWIKFAT_execbr);
YHZPXCDJWIKFAT->append_copy(l_1, r_1, context); 
YHZPXCDJWIKFAT->append_copy(l_2, r_2, context); 
context->pushExecuteCall(YHZPXCDJWIKFAT_execbr); // Compare
SMXVFJTVQUITIV->append_copy(l_1, r_1, context); 
SMXVFJTVQUITIV->append_copy(l_2, r_2, context); 
context->pushExecuteCall(SMXVFJTVQUITIV_execbr); // IfDiv
return chain_JTQNBCHIWFUQLZ;
}
sentence_after_1: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* IfDiv(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor CANCHXSSJLUHLY;
/*SET*/	CANCHXSSJLUHLY = arg_from;
/*INC*/	if (!INC(CANCHXSSJLUHLY, arg_to)) goto sentence_after_1;
	if (CANCHXSSJLUHLY.container->type != text || *(CANCHXSSJLUHLY.container->value.text + CANCHXSSJLUHLY.index) != '+') goto sentence_after_1;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor OEBCGNSQFZXXWG;
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = CANCHXSSJLUHLY;
/*SET*/	OEBCGNSQFZXXWG = CANCHXSSJLUHLY;
/*INC*/	if (!INC(OEBCGNSQFZXXWG, arg_to)) goto sentence_after_1;
	if (! isSymbolType(OEBCGNSQFZXXWG.container->type)) goto sentence_after_1;
/*SET*/	r_1 = OEBCGNSQFZXXWG;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor LIUEJOBCFPVNYR;
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = r_1;
/*SET*/	LIUEJOBCFPVNYR = r_1;
/*INC*/	if (!INC(LIUEJOBCFPVNYR, arg_to)) goto sentence_after_1;
	if (! isSymbolType(LIUEJOBCFPVNYR.container->type)) goto sentence_after_1;
/*SET*/	r_2 = LIUEJOBCFPVNYR;
//// [ empty ] 
/*ISEMPTY*/	if (r_2!=0 && arg_to != r_2) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_OCMERJMZIUDTSQ = context->putChain(); 
chain_OCMERJMZIUDTSQ->append(newRefText("1=")); 
DataChain* QOZVEJNRTIBVNJ = new DataChain(); 
DataContainer* QOZVEJNRTIBVNJ_execbr = newRefExecBrackets(Div, QOZVEJNRTIBVNJ, "/");
chain_OCMERJMZIUDTSQ->append(QOZVEJNRTIBVNJ_execbr);
QOZVEJNRTIBVNJ->append_copy(l_1, r_1, context); 
QOZVEJNRTIBVNJ->append_copy(l_2, r_2, context); 
context->pushExecuteCall(QOZVEJNRTIBVNJ_execbr); // /
return chain_OCMERJMZIUDTSQ;
}
sentence_after_1: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor EPFQDSMVSTMMWW;
/*DEF*/	DataCursor l_zn;
/*DEF*/	DataCursor r_zn;
/*SET*/	l_zn = arg_from;
/*SET*/	EPFQDSMVSTMMWW = arg_from;
/*INC*/	if (!INC(EPFQDSMVSTMMWW, arg_to)) goto sentence_after_2;
	if (! isSymbolType(EPFQDSMVSTMMWW.container->type)) goto sentence_after_2;
/*SET*/	r_zn = EPFQDSMVSTMMWW;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor WQKNNRMQMJCCPA;
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = r_zn;
/*SET*/	WQKNNRMQMJCCPA = r_zn;
/*INC*/	if (!INC(WQKNNRMQMJCCPA, arg_to)) goto sentence_after_2;
	if (! isSymbolType(WQKNNRMQMJCCPA.container->type)) goto sentence_after_2;
/*SET*/	r_1 = WQKNNRMQMJCCPA;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor OWAZFEURGPBFRY;
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = r_1;
/*SET*/	OWAZFEURGPBFRY = r_1;
/*INC*/	if (!INC(OWAZFEURGPBFRY, arg_to)) goto sentence_after_2;
	if (! isSymbolType(OWAZFEURGPBFRY.container->type)) goto sentence_after_2;
/*SET*/	r_2 = OWAZFEURGPBFRY;
//// [ empty ] 
/*ISEMPTY*/	if (r_2!=0 && arg_to != r_2) goto sentence_after_2;

// подстановка 
// new chain 
DataChain *chain_EDQJRLTMYMHYSO = context->putChain(); 
chain_EDQJRLTMYMHYSO->append(newRefText("1=")); 
DataChain* ICWUOHFEREBEAC = new DataChain(); 
DataContainer* ICWUOHFEREBEAC_execbr = newRefExecBrackets(Div, ICWUOHFEREBEAC, "/");
chain_EDQJRLTMYMHYSO->append(ICWUOHFEREBEAC_execbr);
ICWUOHFEREBEAC->append_copy(l_2, r_2, context); 
ICWUOHFEREBEAC->append_copy(l_1, r_1, context); 
context->pushExecuteCall(ICWUOHFEREBEAC_execbr); // /
return chain_EDQJRLTMYMHYSO;
}
sentence_after_2: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* NextPl(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor AZUVJOXYIPMSGU;
/*SET*/	AZUVJOXYIPMSGU = arg_from;
/*INC*/	if (!INC(AZUVJOXYIPMSGU, arg_to)) goto sentence_after_1;
	if (AZUVJOXYIPMSGU.container->type != text || *(AZUVJOXYIPMSGU.container->value.text + AZUVJOXYIPMSGU.index) != '1') goto sentence_after_1;
//// [ empty ] 
/*ISEMPTY*/	if (AZUVJOXYIPMSGU!=0 && arg_to != AZUVJOXYIPMSGU) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_QDHXWJHIUDGHYX = context->putChain(); 
chain_QDHXWJHIUDGHYX->append(newRefText("2")); 
return chain_QDHXWJHIUDGHYX;
}
sentence_after_1: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor YOXBSCEFTDRQEL;
/*SET*/	YOXBSCEFTDRQEL = arg_from;
/*INC*/	if (!INC(YOXBSCEFTDRQEL, arg_to)) goto sentence_after_2;
	if (YOXBSCEFTDRQEL.container->type != text || *(YOXBSCEFTDRQEL.container->value.text + YOXBSCEFTDRQEL.index) != '2') goto sentence_after_2;
//// [ empty ] 
/*ISEMPTY*/	if (YOXBSCEFTDRQEL!=0 && arg_to != YOXBSCEFTDRQEL) goto sentence_after_2;

// подстановка 
// new chain 
DataChain *chain_VSAPDSHAKGDVHC = context->putChain(); 
chain_VSAPDSHAKGDVHC->append(newRefText("1")); 
return chain_VSAPDSHAKGDVHC;
}
sentence_after_2: 

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = arg_from;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_FMCEZTGJCMHXLH = context->putChain(); 
DataChain* ASQKAUQLNFHGGT = new DataChain(); 
DataContainer* ASQKAUQLNFHGGT_execbr = newRefExecBrackets(Print, ASQKAUQLNFHGGT, "Print");
chain_FMCEZTGJCMHXLH->append(ASQKAUQLNFHGGT_execbr);
ASQKAUQLNFHGGT->append(newRefText("NextPl uncn.: ")); 
ASQKAUQLNFHGGT->append_copy(l_e, r_e, context); 
context->pushExecuteCall(ASQKAUQLNFHGGT_execbr); // Print
return chain_FMCEZTGJCMHXLH;
}
sentence_after_3: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Optima21(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = arg_from;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_AGRNFFMNPINWLE = context->putChain(); 
DataChain* XRQXISBFNHJZQV = new DataChain(); 
DataContainer* XRQXISBFNHJZQV_execbr = newRefExecBrackets(Optima211, XRQXISBFNHJZQV, "Optima211");
chain_AGRNFFMNPINWLE->append(XRQXISBFNHJZQV_execbr);
XRQXISBFNHJZQV->append_copy(l_e, r_e, context); 
context->pushExecuteCall(XRQXISBFNHJZQV_execbr); // Optima211
return chain_AGRNFFMNPINWLE;
}
sentence_after_1: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Optima211(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_OXKUKYLZCRUPMI_firststep;
label_OXKUKYLZCRUPMI: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_1;
label_OXKUKYLZCRUPMI_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor BACPJZSNACLMNU;
/*SET*/	BACPJZSNACLMNU = r_1;
/*INC*/	if (!INC(BACPJZSNACLMNU, arg_to)) goto label_OXKUKYLZCRUPMI;
	if (BACPJZSNACLMNU.container->type != text || *(BACPJZSNACLMNU.container->value.text + BACPJZSNACLMNU.index) != '1') goto label_OXKUKYLZCRUPMI;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = BACPJZSNACLMNU;
/*SET*/	r_2 = BACPJZSNACLMNU;
/*JMP*/	goto label_QNBDIFZLUJQVNF_firststep;
label_QNBDIFZLUJQVNF: 
/*INC*/	if (!INC(r_2, arg_to)) goto label_OXKUKYLZCRUPMI;
label_QNBDIFZLUJQVNF_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor JXXVKCZFKZZJQN;
/*SET*/	JXXVKCZFKZZJQN = r_2;
/*INC*/	if (!INC(JXXVKCZFKZZJQN, arg_to)) goto label_QNBDIFZLUJQVNF;
	if (JXXVKCZFKZZJQN.container->type != text || *(JXXVKCZFKZZJQN.container->value.text + JXXVKCZFKZZJQN.index) != '1') goto label_QNBDIFZLUJQVNF;
//// [ e.1 ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = JXXVKCZFKZZJQN;
/*SET*/	r_3 = arg_to;

// подстановка 
// new chain 
DataChain *chain_YUGTEDOGFURKXI = context->putChain(); 
chain_YUGTEDOGFURKXI->append(newRefText("11")); 
DataChain* YQUFOTIAJMWHYI = new DataChain(); 
DataContainer* YQUFOTIAJMWHYI_execbr = newRefExecBrackets(Optima211, YQUFOTIAJMWHYI, "Optima211");
chain_YUGTEDOGFURKXI->append(YQUFOTIAJMWHYI_execbr);
YQUFOTIAJMWHYI->append_copy(l_1, r_1, context); 
YQUFOTIAJMWHYI->append_copy(l_3, r_3, context); 
context->pushExecuteCall(YQUFOTIAJMWHYI_execbr); // Optima211
chain_YUGTEDOGFURKXI->append_copy(l_2, r_2, context); 
return chain_YUGTEDOGFURKXI;
}
sentence_after_1: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_LTHMOEVLWLRXPW_firststep;
label_LTHMOEVLWLRXPW: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_2;
label_LTHMOEVLWLRXPW_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor PZHSVBFZVTVHWY;
/*SET*/	PZHSVBFZVTVHWY = r_1;
/*INC*/	if (!INC(PZHSVBFZVTVHWY, arg_to)) goto label_LTHMOEVLWLRXPW;
	if (PZHSVBFZVTVHWY.container->type != text || *(PZHSVBFZVTVHWY.container->value.text + PZHSVBFZVTVHWY.index) != '1') goto label_LTHMOEVLWLRXPW;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = PZHSVBFZVTVHWY;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_RQPIZTEUOXGTHF = context->putChain(); 
chain_RQPIZTEUOXGTHF->append(newRefText("1")); 
DataChain* XSMXJRWPSURSGW = new DataChain(); 
DataContainer* XSMXJRWPSURSGW_execbr = newRefExecBrackets(Optima211, XSMXJRWPSURSGW, "Optima211");
chain_RQPIZTEUOXGTHF->append(XSMXJRWPSURSGW_execbr);
XSMXJRWPSURSGW->append_copy(l_1, r_1, context); 
XSMXJRWPSURSGW->append_copy(l_2, r_2, context); 
context->pushExecuteCall(XSMXJRWPSURSGW_execbr); // Optima211
return chain_RQPIZTEUOXGTHF;
}
sentence_after_2: 

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_to;

// подстановка 
// new chain 
DataChain *chain_THHILGDHZFZAXA = context->putChain(); 
chain_THHILGDHZFZAXA->append_copy(l_1, r_1, context); 
return chain_THHILGDHZFZAXA;
}
sentence_after_3: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Strategy(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ empty ] 
/*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_DTKLHYHQZFDIMS = context->putChain(); 
return chain_DTKLHYHQZFDIMS;
}
sentence_after_1: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_RUEECXKQKRUDLM_firststep;
label_RUEECXKQKRUDLM: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_2;
label_RUEECXKQKRUDLM_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor ZGDTNHMIVNNKCL;
/*SET*/	ZGDTNHMIVNNKCL = r_1;
/*INC*/	if (!INC(ZGDTNHMIVNNKCL, arg_to)) goto label_RUEECXKQKRUDLM;
	if (ZGDTNHMIVNNKCL.container->type != text || *(ZGDTNHMIVNNKCL.container->value.text + ZGDTNHMIVNNKCL.index) != '1') goto label_RUEECXKQKRUDLM;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = ZGDTNHMIVNNKCL;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_THIDZYQAZFNOVK = context->putChain(); 
chain_THIDZYQAZFNOVK->append(newRefText("147")); 
DataChain* TQCOTCHCOLINEI = new DataChain(); 
DataContainer* TQCOTCHCOLINEI_execbr = newRefExecBrackets(Strategy, TQCOTCHCOLINEI, "Strategy");
chain_THIDZYQAZFNOVK->append(TQCOTCHCOLINEI_execbr);
TQCOTCHCOLINEI->append_copy(l_1, r_1, context); 
TQCOTCHCOLINEI->append_copy(l_2, r_2, context); 
context->pushExecuteCall(TQCOTCHCOLINEI_execbr); // Strategy
return chain_THIDZYQAZFNOVK;
}
sentence_after_2: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_YTYMRJSCYOEIVD_firststep;
label_YTYMRJSCYOEIVD: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_3;
label_YTYMRJSCYOEIVD_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor YHPHLJZHEZOHMI;
/*SET*/	YHPHLJZHEZOHMI = r_1;
/*INC*/	if (!INC(YHPHLJZHEZOHMI, arg_to)) goto label_YTYMRJSCYOEIVD;
	if (YHPHLJZHEZOHMI.container->type != text || *(YHPHLJZHEZOHMI.container->value.text + YHPHLJZHEZOHMI.index) != '2') goto label_YTYMRJSCYOEIVD;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = YHPHLJZHEZOHMI;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_GTAOQMEMJLHGOX = context->putChain(); 
chain_GTAOQMEMJLHGOX->append(newRefText("15")); 
DataChain* PRURTYMKKTDBNO = new DataChain(); 
DataContainer* PRURTYMKKTDBNO_execbr = newRefExecBrackets(Strategy, PRURTYMKKTDBNO, "Strategy");
chain_GTAOQMEMJLHGOX->append(PRURTYMKKTDBNO_execbr);
PRURTYMKKTDBNO->append_copy(l_1, r_1, context); 
PRURTYMKKTDBNO->append_copy(l_2, r_2, context); 
context->pushExecuteCall(PRURTYMKKTDBNO_execbr); // Strategy
return chain_GTAOQMEMJLHGOX;
}
sentence_after_3: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_XWTTGEEQIMLHCZ_firststep;
label_XWTTGEEQIMLHCZ: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_4;
label_XWTTGEEQIMLHCZ_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor TCTYPHMEQDSUYV;
/*SET*/	TCTYPHMEQDSUYV = r_1;
/*INC*/	if (!INC(TCTYPHMEQDSUYV, arg_to)) goto label_XWTTGEEQIMLHCZ;
	if (TCTYPHMEQDSUYV.container->type != text || *(TCTYPHMEQDSUYV.container->value.text + TCTYPHMEQDSUYV.index) != '3') goto label_XWTTGEEQIMLHCZ;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = TCTYPHMEQDSUYV;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_VOZIMHXXQHDUIQ = context->putChain(); 
chain_VOZIMHXXQHDUIQ->append(newRefText("168")); 
DataChain* EDLNGWGOOOUPNE = new DataChain(); 
DataContainer* EDLNGWGOOOUPNE_execbr = newRefExecBrackets(Strategy, EDLNGWGOOOUPNE, "Strategy");
chain_VOZIMHXXQHDUIQ->append(EDLNGWGOOOUPNE_execbr);
EDLNGWGOOOUPNE->append_copy(l_1, r_1, context); 
EDLNGWGOOOUPNE->append_copy(l_2, r_2, context); 
context->pushExecuteCall(EDLNGWGOOOUPNE_execbr); // Strategy
return chain_VOZIMHXXQHDUIQ;
}
sentence_after_4: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_DKSDGPMHHDAQBS_firststep;
label_DKSDGPMHHDAQBS: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_5;
label_DKSDGPMHHDAQBS_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor QRFPDRSYKHBUTS;
/*SET*/	QRFPDRSYKHBUTS = r_1;
/*INC*/	if (!INC(QRFPDRSYKHBUTS, arg_to)) goto label_DKSDGPMHHDAQBS;
	if (QRFPDRSYKHBUTS.container->type != text || *(QRFPDRSYKHBUTS.container->value.text + QRFPDRSYKHBUTS.index) != '4') goto label_DKSDGPMHHDAQBS;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = QRFPDRSYKHBUTS;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_DYFOECQQNLEMKI = context->putChain(); 
chain_DYFOECQQNLEMKI->append(newRefText("24")); 
DataChain* MIPECEHLBTMBWN = new DataChain(); 
DataContainer* MIPECEHLBTMBWN_execbr = newRefExecBrackets(Strategy, MIPECEHLBTMBWN, "Strategy");
chain_DYFOECQQNLEMKI->append(MIPECEHLBTMBWN_execbr);
MIPECEHLBTMBWN->append_copy(l_1, r_1, context); 
MIPECEHLBTMBWN->append_copy(l_2, r_2, context); 
context->pushExecuteCall(MIPECEHLBTMBWN_execbr); // Strategy
return chain_DYFOECQQNLEMKI;
}
sentence_after_5: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_KDXYMECLSSHVKM_firststep;
label_KDXYMECLSSHVKM: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_6;
label_KDXYMECLSSHVKM_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor YWJXESHOIHMLGV;
/*SET*/	YWJXESHOIHMLGV = r_1;
/*INC*/	if (!INC(YWJXESHOIHMLGV, arg_to)) goto label_KDXYMECLSSHVKM;
	if (YWJXESHOIHMLGV.container->type != text || *(YWJXESHOIHMLGV.container->value.text + YWJXESHOIHMLGV.index) != '5') goto label_KDXYMECLSSHVKM;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = YWJXESHOIHMLGV;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_WCPAMEVWTYGFPH = context->putChain(); 
chain_WCPAMEVWTYGFPH->append(newRefText("2578")); 
DataChain* IFUBTTNWNPHDBY = new DataChain(); 
DataContainer* IFUBTTNWNPHDBY_execbr = newRefExecBrackets(Strategy, IFUBTTNWNPHDBY, "Strategy");
chain_WCPAMEVWTYGFPH->append(IFUBTTNWNPHDBY_execbr);
IFUBTTNWNPHDBY->append_copy(l_1, r_1, context); 
IFUBTTNWNPHDBY->append_copy(l_2, r_2, context); 
context->pushExecuteCall(IFUBTTNWNPHDBY_execbr); // Strategy
return chain_WCPAMEVWTYGFPH;
}
sentence_after_6: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_TWODCLRJPRSEQW_firststep;
label_TWODCLRJPRSEQW: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_7;
label_TWODCLRJPRSEQW_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor RDWSVYNCGFRAZZ;
/*SET*/	RDWSVYNCGFRAZZ = r_1;
/*INC*/	if (!INC(RDWSVYNCGFRAZZ, arg_to)) goto label_TWODCLRJPRSEQW;
	if (RDWSVYNCGFRAZZ.container->type != text || *(RDWSVYNCGFRAZZ.container->value.text + RDWSVYNCGFRAZZ.index) != '6') goto label_TWODCLRJPRSEQW;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = RDWSVYNCGFRAZZ;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_RMCDPOMJRYLEDH = context->putChain(); 
chain_RMCDPOMJRYLEDH->append(newRefText("26")); 
DataChain* UFHWKHZKTNKYTG = new DataChain(); 
DataContainer* UFHWKHZKTNKYTG_execbr = newRefExecBrackets(Strategy, UFHWKHZKTNKYTG, "Strategy");
chain_RMCDPOMJRYLEDH->append(UFHWKHZKTNKYTG_execbr);
UFHWKHZKTNKYTG->append_copy(l_1, r_1, context); 
UFHWKHZKTNKYTG->append_copy(l_2, r_2, context); 
context->pushExecuteCall(UFHWKHZKTNKYTG_execbr); // Strategy
return chain_RMCDPOMJRYLEDH;
}
sentence_after_7: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_JPMMGVXJCNJGZU_firststep;
label_JPMMGVXJCNJGZU: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_8;
label_JPMMGVXJCNJGZU_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor HWQQSLDZCSFOJS;
/*SET*/	HWQQSLDZCSFOJS = r_1;
/*INC*/	if (!INC(HWQQSLDZCSFOJS, arg_to)) goto label_JPMMGVXJCNJGZU;
	if (HWQQSLDZCSFOJS.container->type != text || *(HWQQSLDZCSFOJS.container->value.text + HWQQSLDZCSFOJS.index) != '7') goto label_JPMMGVXJCNJGZU;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = HWQQSLDZCSFOJS;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_PVTXDONPEASHNR = context->putChain(); 
chain_PVTXDONPEASHNR->append(newRefText("348")); 
DataChain* OHUVOGLDXHSPRN = new DataChain(); 
DataContainer* OHUVOGLDXHSPRN_execbr = newRefExecBrackets(Strategy, OHUVOGLDXHSPRN, "Strategy");
chain_PVTXDONPEASHNR->append(OHUVOGLDXHSPRN_execbr);
OHUVOGLDXHSPRN->append_copy(l_1, r_1, context); 
OHUVOGLDXHSPRN->append_copy(l_2, r_2, context); 
context->pushExecuteCall(OHUVOGLDXHSPRN_execbr); // Strategy
return chain_PVTXDONPEASHNR;
}
sentence_after_8: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_GSOQDJFQTEXYRW_firststep;
label_GSOQDJFQTEXYRW: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_9;
label_GSOQDJFQTEXYRW_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor IZZOEOWAQEZDLM;
/*SET*/	IZZOEOWAQEZDLM = r_1;
/*INC*/	if (!INC(IZZOEOWAQEZDLM, arg_to)) goto label_GSOQDJFQTEXYRW;
	if (IZZOEOWAQEZDLM.container->type != text || *(IZZOEOWAQEZDLM.container->value.text + IZZOEOWAQEZDLM.index) != '8') goto label_GSOQDJFQTEXYRW;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = IZZOEOWAQEZDLM;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_EKFGRCYVZSAHPS = context->putChain(); 
chain_EKFGRCYVZSAHPS->append(newRefText("35")); 
DataChain* ZOBRIXWXKPICLQ = new DataChain(); 
DataContainer* ZOBRIXWXKPICLQ_execbr = newRefExecBrackets(Strategy, ZOBRIXWXKPICLQ, "Strategy");
chain_EKFGRCYVZSAHPS->append(ZOBRIXWXKPICLQ_execbr);
ZOBRIXWXKPICLQ->append_copy(l_1, r_1, context); 
ZOBRIXWXKPICLQ->append_copy(l_2, r_2, context); 
context->pushExecuteCall(ZOBRIXWXKPICLQ_execbr); // Strategy
return chain_EKFGRCYVZSAHPS;
}
sentence_after_9: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_LJTKVNBIMPDKYE_firststep;
label_LJTKVNBIMPDKYE: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_10;
label_LJTKVNBIMPDKYE_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor BCWLFKFFRLZZMK;
/*SET*/	BCWLFKFFRLZZMK = r_1;
/*INC*/	if (!INC(BCWLFKFFRLZZMK, arg_to)) goto label_LJTKVNBIMPDKYE;
	if (BCWLFKFFRLZZMK.container->type != text || *(BCWLFKFFRLZZMK.container->value.text + BCWLFKFFRLZZMK.index) != '9') goto label_LJTKVNBIMPDKYE;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = BCWLFKFFRLZZMK;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_RBXJCRTUVTXFKI = context->putChain(); 
chain_RBXJCRTUVTXFKI->append(newRefText("367")); 
DataChain* DXHOAFYESYVIZV = new DataChain(); 
DataContainer* DXHOAFYESYVIZV_execbr = newRefExecBrackets(Strategy, DXHOAFYESYVIZV, "Strategy");
chain_RBXJCRTUVTXFKI->append(DXHOAFYESYVIZV_execbr);
DXHOAFYESYVIZV->append_copy(l_1, r_1, context); 
DXHOAFYESYVIZV->append_copy(l_2, r_2, context); 
context->pushExecuteCall(DXHOAFYESYVIZV_execbr); // Strategy
return chain_RBXJCRTUVTXFKI;
}
sentence_after_10: 

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_to;

// подстановка 
// new chain 
DataChain *chain_OZSQORQMQLESIX = context->putChain(); 
chain_OZSQORQMQLESIX->append_copy(l_1, r_1, context); 
return chain_OZSQORQMQLESIX;
}
sentence_after_11: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Ifwin(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor RNERZOOWRVWPMI;
/*DEF*/	DataCursor BHHYFFUVKOUKDW;
/*DEF*/	DataCursor JCVXQGLSCHJAGQ;
/*SET*/	RNERZOOWRVWPMI = arg_from;
/*INC*/	if (!INC(RNERZOOWRVWPMI, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (RNERZOOWRVWPMI.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	BHHYFFUVKOUKDW = RNERZOOWRVWPMI.container->value.bracket_data.chain->at_before_first();
	JCVXQGLSCHJAGQ   = RNERZOOWRVWPMI.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = BHHYFFUVKOUKDW;
/*SET*/	r_1 = JCVXQGLSCHJAGQ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor UEHPNHKYCPMJTG;
/*DEF*/	DataCursor LUDHRBEFJJFYTK;
/*DEF*/	DataCursor XLBNVMDWSYXHGS;
/*SET*/	UEHPNHKYCPMJTG = RNERZOOWRVWPMI;
/*INC*/	if (!INC(UEHPNHKYCPMJTG, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (UEHPNHKYCPMJTG.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	LUDHRBEFJJFYTK = UEHPNHKYCPMJTG.container->value.bracket_data.chain->at_before_first();
	XLBNVMDWSYXHGS   = UEHPNHKYCPMJTG.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = LUDHRBEFJJFYTK;
/*SET*/	r_2 = XLBNVMDWSYXHGS;
//// [ empty ] 
/*ISEMPTY*/	if (UEHPNHKYCPMJTG!=0 && arg_to != UEHPNHKYCPMJTG) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_CZHYJGDFGNWFPD = context->putChain(); 
DataChain* TLKHPEKHJNCYLC = new DataChain(); 
DataContainer* TLKHPEKHJNCYLC_execbr = newRefExecBrackets(Ifwin1, TLKHPEKHJNCYLC, "Ifwin1");
chain_CZHYJGDFGNWFPD->append(TLKHPEKHJNCYLC_execbr);
DataChain* QMSSYGHWDVAEQJ = new DataChain(); 
TLKHPEKHJNCYLC->append(newRefStructBrackets(QMSSYGHWDVAEQJ)); 
DataChain* KZMHIYDLXDJOHN = new DataChain(); 
DataContainer* KZMHIYDLXDJOHN_execbr = newRefExecBrackets(Strategy, KZMHIYDLXDJOHN, "Strategy");
QMSSYGHWDVAEQJ->append(KZMHIYDLXDJOHN_execbr);
KZMHIYDLXDJOHN->append_copy(l_1, r_1, context); 
context->pushExecuteCall(KZMHIYDLXDJOHN_execbr); // Strategy
DataChain* SCGHBTUSWZUMSQ = new DataChain(); 
TLKHPEKHJNCYLC->append(newRefStructBrackets(SCGHBTUSWZUMSQ)); 
DataChain* OYKIIDFWFXYAAA = new DataChain(); 
DataContainer* OYKIIDFWFXYAAA_execbr = newRefExecBrackets(Strategy, OYKIIDFWFXYAAA, "Strategy");
SCGHBTUSWZUMSQ->append(OYKIIDFWFXYAAA_execbr);
OYKIIDFWFXYAAA->append_copy(l_2, r_2, context); 
context->pushExecuteCall(OYKIIDFWFXYAAA_execbr); // Strategy
context->pushExecuteCall(TLKHPEKHJNCYLC_execbr); // Ifwin1
return chain_CZHYJGDFGNWFPD;
}
sentence_after_1: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Ifwin1(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor YMOIVFHJLRWYAX;
/*DEF*/	DataCursor AWGEURBRNBERAZ;
/*DEF*/	DataCursor SXTKAQUEHJFCEW;
/*SET*/	YMOIVFHJLRWYAX = arg_from;
/*INC*/	if (!INC(YMOIVFHJLRWYAX, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (YMOIVFHJLRWYAX.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	AWGEURBRNBERAZ = YMOIVFHJLRWYAX.container->value.bracket_data.chain->at_before_first();
	SXTKAQUEHJFCEW   = YMOIVFHJLRWYAX.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = AWGEURBRNBERAZ;
/*SET*/	r_1 = AWGEURBRNBERAZ;
/*JMP*/	goto label_CTBFJTPQDLJHEH_firststep;
label_CTBFJTPQDLJHEH: 
/*INC*/	if (!INC(r_1, SXTKAQUEHJFCEW)) goto sentence_after_1;
label_CTBFJTPQDLJHEH_firststep: 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor JOBMARGUQWSOKL;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_1;
/*SET*/	JOBMARGUQWSOKL = r_1;
/*INC*/	if (!INC(JOBMARGUQWSOKL, SXTKAQUEHJFCEW)) goto label_CTBFJTPQDLJHEH;
	if (! isSymbolType(JOBMARGUQWSOKL.container->type)) goto label_CTBFJTPQDLJHEH;
/*SET*/	r_A = JOBMARGUQWSOKL;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = r_A;
/*SET*/	r_2 = r_A;
/*JMP*/	goto label_DZSCSFACXFZXFJ_firststep;
label_DZSCSFACXFZXFJ: 
/*INC*/	if (!INC(r_2, SXTKAQUEHJFCEW)) goto label_CTBFJTPQDLJHEH;
label_DZSCSFACXFZXFJ_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor QOVERSCJZBKMZD;
/*SET*/	QOVERSCJZBKMZD = r_2;
 if (!SLIDE(QOVERSCJZBKMZD, SXTKAQUEHJFCEW, l_A, r_A)) goto label_DZSCSFACXFZXFJ;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = QOVERSCJZBKMZD;
/*SET*/	r_3 = QOVERSCJZBKMZD;
/*JMP*/	goto label_NDOSIYHTYAVOXH_firststep;
label_NDOSIYHTYAVOXH: 
/*INC*/	if (!INC(r_3, SXTKAQUEHJFCEW)) goto label_DZSCSFACXFZXFJ;
label_NDOSIYHTYAVOXH_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor TAPYEKTUATPRWS;
/*SET*/	TAPYEKTUATPRWS = r_3;
 if (!SLIDE(TAPYEKTUATPRWS, SXTKAQUEHJFCEW, l_A, r_A)) goto label_NDOSIYHTYAVOXH;
//// [ e.1 ] 
/*DEF*/	DataCursor l_4;
/*DEF*/	DataCursor r_4;
/*SET*/	l_4 = TAPYEKTUATPRWS;
/*SET*/	r_4 = SXTKAQUEHJFCEW;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor KXZCZNFDIUEHUW;
/*DEF*/	DataCursor YMTXDRNKLSMDUS;
/*DEF*/	DataCursor KVUTKFIUBZYBLW;
/*SET*/	KXZCZNFDIUEHUW = YMOIVFHJLRWYAX;
/*INC*/	if (!INC(KXZCZNFDIUEHUW, arg_to)) goto label_NDOSIYHTYAVOXH;
//// ISBRACKET 
	if (KXZCZNFDIUEHUW.container->type != struct_bracket) goto label_NDOSIYHTYAVOXH;
//// JMP_BRACKET 
	YMTXDRNKLSMDUS = KXZCZNFDIUEHUW.container->value.bracket_data.chain->at_before_first();
	KVUTKFIUBZYBLW   = KXZCZNFDIUEHUW.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = YMTXDRNKLSMDUS;
/*SET*/	r_e = KVUTKFIUBZYBLW;
//// [ empty ] 
/*ISEMPTY*/	if (KXZCZNFDIUEHUW!=0 && arg_to != KXZCZNFDIUEHUW) goto label_NDOSIYHTYAVOXH;

// подстановка 
// new chain 
DataChain *chain_MPARMJDSPXYWXE = context->putChain(); 
chain_MPARMJDSPXYWXE->append(newRefText("1")); 
return chain_MPARMJDSPXYWXE;
}
sentence_after_1: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor RFTZLKORIEBSUP;
/*DEF*/	DataCursor CPXCJWKUVEEREN;
/*DEF*/	DataCursor LAITVYCICYZALW;
/*SET*/	RFTZLKORIEBSUP = arg_from;
/*INC*/	if (!INC(RFTZLKORIEBSUP, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (RFTZLKORIEBSUP.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	CPXCJWKUVEEREN = RFTZLKORIEBSUP.container->value.bracket_data.chain->at_before_first();
	LAITVYCICYZALW   = RFTZLKORIEBSUP.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = CPXCJWKUVEEREN;
/*SET*/	r_e = LAITVYCICYZALW;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor UIUZTEYCTMUIFE;
/*DEF*/	DataCursor FYGAIAIOIIEDBY;
/*DEF*/	DataCursor WRGRTDXVDKOCSA;
/*SET*/	UIUZTEYCTMUIFE = RFTZLKORIEBSUP;
/*INC*/	if (!INC(UIUZTEYCTMUIFE, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (UIUZTEYCTMUIFE.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	FYGAIAIOIIEDBY = UIUZTEYCTMUIFE.container->value.bracket_data.chain->at_before_first();
	WRGRTDXVDKOCSA   = UIUZTEYCTMUIFE.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = FYGAIAIOIIEDBY;
/*SET*/	r_1 = FYGAIAIOIIEDBY;
/*JMP*/	goto label_EHFCILQJOEVAJN_firststep;
label_EHFCILQJOEVAJN: 
/*INC*/	if (!INC(r_1, WRGRTDXVDKOCSA)) goto sentence_after_2;
label_EHFCILQJOEVAJN_firststep: 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor JTTKNRSPRTKRLK;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_1;
/*SET*/	JTTKNRSPRTKRLK = r_1;
/*INC*/	if (!INC(JTTKNRSPRTKRLK, WRGRTDXVDKOCSA)) goto label_EHFCILQJOEVAJN;
	if (! isSymbolType(JTTKNRSPRTKRLK.container->type)) goto label_EHFCILQJOEVAJN;
/*SET*/	r_A = JTTKNRSPRTKRLK;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = r_A;
/*SET*/	r_2 = r_A;
/*JMP*/	goto label_JAPYMUZRPHZLCE_firststep;
label_JAPYMUZRPHZLCE: 
/*INC*/	if (!INC(r_2, WRGRTDXVDKOCSA)) goto label_EHFCILQJOEVAJN;
label_JAPYMUZRPHZLCE_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor PAYTFAVEOPSZRN;
/*SET*/	PAYTFAVEOPSZRN = r_2;
 if (!SLIDE(PAYTFAVEOPSZRN, WRGRTDXVDKOCSA, l_A, r_A)) goto label_JAPYMUZRPHZLCE;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = PAYTFAVEOPSZRN;
/*SET*/	r_3 = PAYTFAVEOPSZRN;
/*JMP*/	goto label_KVNEHRJSTZFLVY_firststep;
label_KVNEHRJSTZFLVY: 
/*INC*/	if (!INC(r_3, WRGRTDXVDKOCSA)) goto label_JAPYMUZRPHZLCE;
label_KVNEHRJSTZFLVY_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor AHORKTKMGYCOUI;
/*SET*/	AHORKTKMGYCOUI = r_3;
 if (!SLIDE(AHORKTKMGYCOUI, WRGRTDXVDKOCSA, l_A, r_A)) goto label_KVNEHRJSTZFLVY;
//// [ e.1 ] 
/*DEF*/	DataCursor l_4;
/*DEF*/	DataCursor r_4;
/*SET*/	l_4 = AHORKTKMGYCOUI;
/*SET*/	r_4 = WRGRTDXVDKOCSA;
//// [ empty ] 
/*ISEMPTY*/	if (UIUZTEYCTMUIFE!=0 && arg_to != UIUZTEYCTMUIFE) goto label_KVNEHRJSTZFLVY;

// подстановка 
// new chain 
DataChain *chain_ERTLPBJCSXQLGY = context->putChain(); 
chain_ERTLPBJCSXQLGY->append(newRefText("2")); 
return chain_ERTLPBJCSXQLGY;
}
sentence_after_2: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor GLMVLYQXIXIPVW;
/*DEF*/	DataCursor OQLNKAEQMARVXU;
/*DEF*/	DataCursor MKRNJCOKVFKTQJ;
/*SET*/	GLMVLYQXIXIPVW = arg_from;
/*INC*/	if (!INC(GLMVLYQXIXIPVW, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (GLMVLYQXIXIPVW.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	OQLNKAEQMARVXU = GLMVLYQXIXIPVW.container->value.bracket_data.chain->at_before_first();
	MKRNJCOKVFKTQJ   = GLMVLYQXIXIPVW.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = OQLNKAEQMARVXU;
/*SET*/	r_1 = MKRNJCOKVFKTQJ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor DCUGBIDVBXRNSA;
/*DEF*/	DataCursor QWXTBFTQSNPAVY;
/*DEF*/	DataCursor TODPJDPVYQXKSU;
/*SET*/	DCUGBIDVBXRNSA = GLMVLYQXIXIPVW;
/*INC*/	if (!INC(DCUGBIDVBXRNSA, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (DCUGBIDVBXRNSA.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	QWXTBFTQSNPAVY = DCUGBIDVBXRNSA.container->value.bracket_data.chain->at_before_first();
	TODPJDPVYQXKSU   = DCUGBIDVBXRNSA.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = QWXTBFTQSNPAVY;
/*SET*/	r_2 = TODPJDPVYQXKSU;
//// [ empty ] 
/*ISEMPTY*/	if (DCUGBIDVBXRNSA!=0 && arg_to != DCUGBIDVBXRNSA) goto sentence_after_3;

// подстановка 
// new chain 
DataChain *chain_VZWZTJRWOVTTLN = context->putChain(); 
chain_VZWZTJRWOVTTLN->append(newRefText("0")); 
return chain_VZWZTJRWOVTTLN;
}
sentence_after_3: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Analiz(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_KZNQDQIAUAPWKC_firststep;
label_KZNQDQIAUAPWKC: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_1;
label_KZNQDQIAUAPWKC_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor ZXRXOPENEUXFLG;
/*DEF*/	DataCursor BDWJMHJGUZPEUD;
/*DEF*/	DataCursor DFEIMOZYFRQMFO;
/*SET*/	ZXRXOPENEUXFLG = r_1;
/*INC*/	if (!INC(ZXRXOPENEUXFLG, arg_to)) goto label_KZNQDQIAUAPWKC;
//// ISBRACKET 
	if (ZXRXOPENEUXFLG.container->type != struct_bracket) goto label_KZNQDQIAUAPWKC;
//// JMP_BRACKET 
	BDWJMHJGUZPEUD = ZXRXOPENEUXFLG.container->value.bracket_data.chain->at_before_first();
	DFEIMOZYFRQMFO   = ZXRXOPENEUXFLG.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = BDWJMHJGUZPEUD;
/*SET*/	r_3 = BDWJMHJGUZPEUD;
/*JMP*/	goto label_ZISSCCRIFWQBHX_firststep;
label_ZISSCCRIFWQBHX: 
/*INC*/	if (!INC(r_3, DFEIMOZYFRQMFO)) goto label_KZNQDQIAUAPWKC;
label_ZISSCCRIFWQBHX_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor YEHKTUSDGZXLAE;
/*SET*/	YEHKTUSDGZXLAE = r_3;
/*INC*/	if (!INC(YEHKTUSDGZXLAE, DFEIMOZYFRQMFO)) goto label_ZISSCCRIFWQBHX;
	if (YEHKTUSDGZXLAE.container->type != text || *(YEHKTUSDGZXLAE.container->value.text + YEHKTUSDGZXLAE.index) != '>') goto label_ZISSCCRIFWQBHX;
//// [ empty ] 
/*ISEMPTY*/	if (YEHKTUSDGZXLAE!=0 && DFEIMOZYFRQMFO != YEHKTUSDGZXLAE) goto label_ZISSCCRIFWQBHX;
//// [ empty ] 
/*ISEMPTY*/	if (ZXRXOPENEUXFLG!=0 && arg_to != ZXRXOPENEUXFLG) goto label_ZISSCCRIFWQBHX;

// подстановка 
// new chain 
DataChain *chain_AMUQGBDNRSMBXR = context->putChain(); 
return chain_AMUQGBDNRSMBXR;
}
sentence_after_1: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor VBTFGLOWFFCTUJ;
/*DEF*/	DataCursor TZQWZGGTLBHROP;
/*DEF*/	DataCursor KWKBBWVNAKWVVD;
/*SET*/	VBTFGLOWFFCTUJ = arg_from;
/*INC*/	if (!INC(VBTFGLOWFFCTUJ, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (VBTFGLOWFFCTUJ.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	TZQWZGGTLBHROP = VBTFGLOWFFCTUJ.container->value.bracket_data.chain->at_before_first();
	KWKBBWVNAKWVVD   = VBTFGLOWFFCTUJ.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor YCXCZOZQIWORVP;
/*SET*/	YCXCZOZQIWORVP = TZQWZGGTLBHROP;
/*INC*/	if (!INC(YCXCZOZQIWORVP, KWKBBWVNAKWVVD)) goto sentence_after_2;
	if (YCXCZOZQIWORVP.container->type != text || *(YCXCZOZQIWORVP.container->value.text + YCXCZOZQIWORVP.index) != '1') goto sentence_after_2;
//// [ empty ] 
/*ISEMPTY*/	if (YCXCZOZQIWORVP!=0 && KWKBBWVNAKWVVD != YCXCZOZQIWORVP) goto sentence_after_2;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor NKCXEKJQZVUESW;
/*DEF*/	DataCursor QKNZPYVYSDKHSO;
/*DEF*/	DataCursor ICMHCZOHEFNASL;
/*SET*/	NKCXEKJQZVUESW = VBTFGLOWFFCTUJ;
/*INC*/	if (!INC(NKCXEKJQZVUESW, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (NKCXEKJQZVUESW.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	QKNZPYVYSDKHSO = NKCXEKJQZVUESW.container->value.bracket_data.chain->at_before_first();
	ICMHCZOHEFNASL   = NKCXEKJQZVUESW.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = QKNZPYVYSDKHSO;
/*SET*/	r_1 = ICMHCZOHEFNASL;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor XWXLLXLEWTZUWB;
/*DEF*/	DataCursor SUVSENEIQWHNEZ;
/*DEF*/	DataCursor OJKXHORYESUGDH;
/*SET*/	XWXLLXLEWTZUWB = NKCXEKJQZVUESW;
/*INC*/	if (!INC(XWXLLXLEWTZUWB, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (XWXLLXLEWTZUWB.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	SUVSENEIQWHNEZ = XWXLLXLEWTZUWB.container->value.bracket_data.chain->at_before_first();
	OJKXHORYESUGDH   = XWXLLXLEWTZUWB.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = SUVSENEIQWHNEZ;
/*SET*/	r_2 = OJKXHORYESUGDH;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor TJCKQJDFGNRDOI;
/*DEF*/	DataCursor ZPYFMDLQLWQIOD;
/*DEF*/	DataCursor CWFYGKIVBUJFIN;
/*SET*/	TJCKQJDFGNRDOI = XWXLLXLEWTZUWB;
/*INC*/	if (!INC(TJCKQJDFGNRDOI, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (TJCKQJDFGNRDOI.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	ZPYFMDLQLWQIOD = TJCKQJDFGNRDOI.container->value.bracket_data.chain->at_before_first();
	CWFYGKIVBUJFIN   = TJCKQJDFGNRDOI.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = ZPYFMDLQLWQIOD;
/*SET*/	r_3 = ZPYFMDLQLWQIOD;
/*JMP*/	goto label_ZYHCEJCJOJONHG_firststep;
label_ZYHCEJCJOJONHG: 
/*INC*/	if (!INC(r_3, CWFYGKIVBUJFIN)) goto sentence_after_2;
label_ZYHCEJCJOJONHG_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor USTQJFNECOLOCM;
/*SET*/	USTQJFNECOLOCM = r_3;
/*INC*/	if (!INC(USTQJFNECOLOCM, CWFYGKIVBUJFIN)) goto label_ZYHCEJCJOJONHG;
	if (USTQJFNECOLOCM.container->type != text || *(USTQJFNECOLOCM.container->value.text + USTQJFNECOLOCM.index) != '>') goto label_ZYHCEJCJOJONHG;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor FHPZXTGFPMUSCR;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = USTQJFNECOLOCM;
/*SET*/	FHPZXTGFPMUSCR = USTQJFNECOLOCM;
/*INC*/	if (!INC(FHPZXTGFPMUSCR, CWFYGKIVBUJFIN)) goto label_ZYHCEJCJOJONHG;
	if (! isSymbolType(FHPZXTGFPMUSCR.container->type)) goto label_ZYHCEJCJOJONHG;
/*SET*/	r_A = FHPZXTGFPMUSCR;
//// [ e.1 ] 
/*DEF*/	DataCursor l_4;
/*DEF*/	DataCursor r_4;
/*SET*/	l_4 = r_A;
/*SET*/	r_4 = CWFYGKIVBUJFIN;
//// [ empty ] 
/*ISEMPTY*/	if (TJCKQJDFGNRDOI!=0 && arg_to != TJCKQJDFGNRDOI) goto label_ZYHCEJCJOJONHG;

// подстановка 
// new chain 
DataChain *chain_IPQZEVBYKTBVTP = context->putChain(); 
DataChain* WVTTGECAJYLQVU = new DataChain(); 
DataContainer* WVTTGECAJYLQVU_execbr = newRefExecBrackets(PolnAnaliz, WVTTGECAJYLQVU, "PolnAnaliz");
chain_IPQZEVBYKTBVTP->append(WVTTGECAJYLQVU_execbr);
DataChain* IZFSOAYXZILJZE = new DataChain(); 
WVTTGECAJYLQVU->append(newRefStructBrackets(IZFSOAYXZILJZE)); 
IZFSOAYXZILJZE->append(newRefText("2")); 
DataChain* GBLCATMVEFQRZX = new DataChain(); 
WVTTGECAJYLQVU->append(newRefStructBrackets(GBLCATMVEFQRZX)); 
GBLCATMVEFQRZX->append_copy(l_1, r_1, context); 
GBLCATMVEFQRZX->append_copy(l_A, r_A, context); 
DataChain* WKTNDPBBZDRWLP = new DataChain(); 
WVTTGECAJYLQVU->append(newRefStructBrackets(WKTNDPBBZDRWLP)); 
WKTNDPBBZDRWLP->append_copy(l_2, r_2, context); 
DataChain* HLGDYWDOFNZXQL = new DataChain(); 
WVTTGECAJYLQVU->append(newRefStructBrackets(HLGDYWDOFNZXQL)); 
HLGDYWDOFNZXQL->append_copy(l_3, r_3, context); 
HLGDYWDOFNZXQL->append_copy(l_4, r_4, context); 
context->pushExecuteCall(WVTTGECAJYLQVU_execbr); // PolnAnaliz
return chain_IPQZEVBYKTBVTP;
}
sentence_after_2: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor XVKHDJYALHVVPA;
/*DEF*/	DataCursor ANGODNLXHLSXSH;
/*DEF*/	DataCursor HTIFXICKOBIXBB;
/*SET*/	XVKHDJYALHVVPA = arg_from;
/*INC*/	if (!INC(XVKHDJYALHVVPA, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (XVKHDJYALHVVPA.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	ANGODNLXHLSXSH = XVKHDJYALHVVPA.container->value.bracket_data.chain->at_before_first();
	HTIFXICKOBIXBB   = XVKHDJYALHVVPA.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor DUZVNGQIAGGCXF;
/*SET*/	DUZVNGQIAGGCXF = ANGODNLXHLSXSH;
/*INC*/	if (!INC(DUZVNGQIAGGCXF, HTIFXICKOBIXBB)) goto sentence_after_3;
	if (DUZVNGQIAGGCXF.container->type != text || *(DUZVNGQIAGGCXF.container->value.text + DUZVNGQIAGGCXF.index) != '2') goto sentence_after_3;
//// [ empty ] 
/*ISEMPTY*/	if (DUZVNGQIAGGCXF!=0 && HTIFXICKOBIXBB != DUZVNGQIAGGCXF) goto sentence_after_3;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor GUDBEWKGWGTOCB;
/*DEF*/	DataCursor LXJECCGQHBCZIB;
/*DEF*/	DataCursor HQUFQQXVLLVMTZ;
/*SET*/	GUDBEWKGWGTOCB = XVKHDJYALHVVPA;
/*INC*/	if (!INC(GUDBEWKGWGTOCB, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (GUDBEWKGWGTOCB.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	LXJECCGQHBCZIB = GUDBEWKGWGTOCB.container->value.bracket_data.chain->at_before_first();
	HQUFQQXVLLVMTZ   = GUDBEWKGWGTOCB.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = LXJECCGQHBCZIB;
/*SET*/	r_1 = HQUFQQXVLLVMTZ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor HFMBEZPLHQAKBM;
/*DEF*/	DataCursor MVAFQYXJYEXDSS;
/*DEF*/	DataCursor WBJIOUYMHLZCLT;
/*SET*/	HFMBEZPLHQAKBM = GUDBEWKGWGTOCB;
/*INC*/	if (!INC(HFMBEZPLHQAKBM, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (HFMBEZPLHQAKBM.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	MVAFQYXJYEXDSS = HFMBEZPLHQAKBM.container->value.bracket_data.chain->at_before_first();
	WBJIOUYMHLZCLT   = HFMBEZPLHQAKBM.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = MVAFQYXJYEXDSS;
/*SET*/	r_2 = WBJIOUYMHLZCLT;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor JUDOBFUOIWUBGE;
/*DEF*/	DataCursor IDPMVKHOZHKDUC;
/*DEF*/	DataCursor OMLGLTLVEINNCA;
/*SET*/	JUDOBFUOIWUBGE = HFMBEZPLHQAKBM;
/*INC*/	if (!INC(JUDOBFUOIWUBGE, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (JUDOBFUOIWUBGE.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	IDPMVKHOZHKDUC = JUDOBFUOIWUBGE.container->value.bracket_data.chain->at_before_first();
	OMLGLTLVEINNCA   = JUDOBFUOIWUBGE.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = IDPMVKHOZHKDUC;
/*SET*/	r_3 = IDPMVKHOZHKDUC;
/*JMP*/	goto label_IKNSUGJQCCASDX_firststep;
label_IKNSUGJQCCASDX: 
/*INC*/	if (!INC(r_3, OMLGLTLVEINNCA)) goto sentence_after_3;
label_IKNSUGJQCCASDX_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor DAZCRTVLLKFVTE;
/*SET*/	DAZCRTVLLKFVTE = r_3;
/*INC*/	if (!INC(DAZCRTVLLKFVTE, OMLGLTLVEINNCA)) goto label_IKNSUGJQCCASDX;
	if (DAZCRTVLLKFVTE.container->type != text || *(DAZCRTVLLKFVTE.container->value.text + DAZCRTVLLKFVTE.index) != '>') goto label_IKNSUGJQCCASDX;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor ZAZZCSCTLEGENL;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = DAZCRTVLLKFVTE;
/*SET*/	ZAZZCSCTLEGENL = DAZCRTVLLKFVTE;
/*INC*/	if (!INC(ZAZZCSCTLEGENL, OMLGLTLVEINNCA)) goto label_IKNSUGJQCCASDX;
	if (! isSymbolType(ZAZZCSCTLEGENL.container->type)) goto label_IKNSUGJQCCASDX;
/*SET*/	r_A = ZAZZCSCTLEGENL;
//// [ e.1 ] 
/*DEF*/	DataCursor l_4;
/*DEF*/	DataCursor r_4;
/*SET*/	l_4 = r_A;
/*SET*/	r_4 = OMLGLTLVEINNCA;
//// [ empty ] 
/*ISEMPTY*/	if (JUDOBFUOIWUBGE!=0 && arg_to != JUDOBFUOIWUBGE) goto label_IKNSUGJQCCASDX;

// подстановка 
// new chain 
DataChain *chain_DSYQNCSDJSDCXX = context->putChain(); 
DataChain* YRGHRWPQINXMRI = new DataChain(); 
DataContainer* YRGHRWPQINXMRI_execbr = newRefExecBrackets(PolnAnaliz, YRGHRWPQINXMRI, "PolnAnaliz");
chain_DSYQNCSDJSDCXX->append(YRGHRWPQINXMRI_execbr);
DataChain* DXPDPQUNVKWXRY = new DataChain(); 
YRGHRWPQINXMRI->append(newRefStructBrackets(DXPDPQUNVKWXRY)); 
DXPDPQUNVKWXRY->append(newRefText("1")); 
DataChain* KXTLXYPPFMAJFH = new DataChain(); 
YRGHRWPQINXMRI->append(newRefStructBrackets(KXTLXYPPFMAJFH)); 
KXTLXYPPFMAJFH->append_copy(l_1, r_1, context); 
DataChain* QYUDWTIGBJTMQM = new DataChain(); 
YRGHRWPQINXMRI->append(newRefStructBrackets(QYUDWTIGBJTMQM)); 
QYUDWTIGBJTMQM->append_copy(l_2, r_2, context); 
QYUDWTIGBJTMQM->append_copy(l_A, r_A, context); 
DataChain* DLTCQZGCAIWSWF = new DataChain(); 
YRGHRWPQINXMRI->append(newRefStructBrackets(DLTCQZGCAIWSWF)); 
DLTCQZGCAIWSWF->append_copy(l_3, r_3, context); 
DLTCQZGCAIWSWF->append_copy(l_4, r_4, context); 
context->pushExecuteCall(YRGHRWPQINXMRI_execbr); // PolnAnaliz
return chain_DSYQNCSDJSDCXX;
}
sentence_after_3: 

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = arg_from;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_YRYHCWWIARUHII = context->putChain(); 
DataChain* BUJOPGRQNPIUGK = new DataChain(); 
DataContainer* BUJOPGRQNPIUGK_execbr = newRefExecBrackets(Prout, BUJOPGRQNPIUGK, "Prout");
chain_YRYHCWWIARUHII->append(BUJOPGRQNPIUGK_execbr);
BUJOPGRQNPIUGK->append(newRefText("No point: ")); 
BUJOPGRQNPIUGK->append_copy(l_e, r_e, context); 
context->pushExecuteCall(BUJOPGRQNPIUGK_execbr); // Prout
return chain_YRYHCWWIARUHII;
}
sentence_after_4: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* PolnAnaliz(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor DQTESOJACQHNWD;
/*DEF*/	DataCursor AGNVXESFRFIEFA;
/*DEF*/	DataCursor ABRADQEELKPKEC;
/*SET*/	DQTESOJACQHNWD = arg_from;
/*INC*/	if (!INC(DQTESOJACQHNWD, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (DQTESOJACQHNWD.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	AGNVXESFRFIEFA = DQTESOJACQHNWD.container->value.bracket_data.chain->at_before_first();
	ABRADQEELKPKEC   = DQTESOJACQHNWD.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor VPSDWELPDJMMBP;
/*DEF*/	DataCursor l_g;
/*DEF*/	DataCursor r_g;
/*SET*/	l_g = AGNVXESFRFIEFA;
/*SET*/	VPSDWELPDJMMBP = AGNVXESFRFIEFA;
/*INC*/	if (!INC(VPSDWELPDJMMBP, ABRADQEELKPKEC)) goto sentence_after_1;
	if (! isSymbolType(VPSDWELPDJMMBP.container->type)) goto sentence_after_1;
/*SET*/	r_g = VPSDWELPDJMMBP;
//// [ empty ] 
/*ISEMPTY*/	if (r_g!=0 && ABRADQEELKPKEC != r_g) goto sentence_after_1;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor DUPZVTVJXYDKDN;
/*DEF*/	DataCursor CUGGHONUCWEGVF;
/*DEF*/	DataCursor JZBDWKBEVKGDWU;
/*SET*/	DUPZVTVJXYDKDN = DQTESOJACQHNWD;
/*INC*/	if (!INC(DUPZVTVJXYDKDN, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (DUPZVTVJXYDKDN.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	CUGGHONUCWEGVF = DUPZVTVJXYDKDN.container->value.bracket_data.chain->at_before_first();
	JZBDWKBEVKGDWU   = DUPZVTVJXYDKDN.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = CUGGHONUCWEGVF;
/*SET*/	r_1 = JZBDWKBEVKGDWU;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor BTJVTOQOTHGGTD;
/*DEF*/	DataCursor RDOLGJMFUBZZPN;
/*DEF*/	DataCursor HJAQWOTZQBLHMR;
/*SET*/	BTJVTOQOTHGGTD = DUPZVTVJXYDKDN;
/*INC*/	if (!INC(BTJVTOQOTHGGTD, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (BTJVTOQOTHGGTD.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	RDOLGJMFUBZZPN = BTJVTOQOTHGGTD.container->value.bracket_data.chain->at_before_first();
	HJAQWOTZQBLHMR   = BTJVTOQOTHGGTD.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = RDOLGJMFUBZZPN;
/*SET*/	r_2 = HJAQWOTZQBLHMR;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor FZFGYKZMUCWWPD;
/*DEF*/	DataCursor YJVCTVFAMCGLTM;
/*DEF*/	DataCursor JTMRCJIVHSYTNW;
/*SET*/	FZFGYKZMUCWWPD = BTJVTOQOTHGGTD;
/*INC*/	if (!INC(FZFGYKZMUCWWPD, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (FZFGYKZMUCWWPD.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	YJVCTVFAMCGLTM = FZFGYKZMUCWWPD.container->value.bracket_data.chain->at_before_first();
	JTMRCJIVHSYTNW   = FZFGYKZMUCWWPD.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = YJVCTVFAMCGLTM;
/*SET*/	r_n = JTMRCJIVHSYTNW;
//// [ empty ] 
/*ISEMPTY*/	if (FZFGYKZMUCWWPD!=0 && arg_to != FZFGYKZMUCWWPD) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_MQQJVMOHFYESQX = context->putChain(); 
DataChain* DVRJGFVGYMHLWD = new DataChain(); 
DataContainer* DVRJGFVGYMHLWD_execbr = newRefExecBrackets(Ifmust, DVRJGFVGYMHLWD, "Ifmust");
chain_MQQJVMOHFYESQX->append(DVRJGFVGYMHLWD_execbr);
DataChain* XLOZMCQMVHTCEX = new DataChain(); 
DVRJGFVGYMHLWD->append(newRefStructBrackets(XLOZMCQMVHTCEX)); 
DataChain* AMEYKVIXDAQVSS = new DataChain(); 
DataContainer* AMEYKVIXDAQVSS_execbr = newRefExecBrackets(Strategy, AMEYKVIXDAQVSS, "Strategy");
XLOZMCQMVHTCEX->append(AMEYKVIXDAQVSS_execbr);
AMEYKVIXDAQVSS->append_copy(l_1, r_1, context); 
context->pushExecuteCall(AMEYKVIXDAQVSS_execbr); // Strategy
DataChain* DWWOEDKLQENAFB = new DataChain(); 
DVRJGFVGYMHLWD->append(newRefStructBrackets(DWWOEDKLQENAFB)); 
DataChain* CFNHWRHDKJCSXO = new DataChain(); 
DataContainer* CFNHWRHDKJCSXO_execbr = newRefExecBrackets(Strategy, CFNHWRHDKJCSXO, "Strategy");
DWWOEDKLQENAFB->append(CFNHWRHDKJCSXO_execbr);
CFNHWRHDKJCSXO->append_copy(l_2, r_2, context); 
context->pushExecuteCall(CFNHWRHDKJCSXO_execbr); // Strategy
DataChain* HDVRBNLBLSEEND = new DataChain(); 
DVRJGFVGYMHLWD->append(newRefStructBrackets(HDVRBNLBLSEEND)); 
DataChain* UBKXAORTEJLRCM = new DataChain(); 
DataContainer* UBKXAORTEJLRCM_execbr = newRefExecBrackets(Strategy, UBKXAORTEJLRCM, "Strategy");
HDVRBNLBLSEEND->append(UBKXAORTEJLRCM_execbr);
UBKXAORTEJLRCM->append_copy(l_n, r_n, context); 
context->pushExecuteCall(UBKXAORTEJLRCM_execbr); // Strategy
DataChain* CVOVRSQRCOPNNP = new DataChain(); 
DVRJGFVGYMHLWD->append(newRefStructBrackets(CVOVRSQRCOPNNP)); 
CVOVRSQRCOPNNP->append_copy(l_g, r_g, context); 
DataChain* KUNKKCPOENVPKV = new DataChain(); 
DVRJGFVGYMHLWD->append(newRefStructBrackets(KUNKKCPOENVPKV)); 
KUNKKCPOENVPKV->append_copy(l_1, r_1, context); 
DataChain* YGUNPABOUJVIRE = new DataChain(); 
DVRJGFVGYMHLWD->append(newRefStructBrackets(YGUNPABOUJVIRE)); 
YGUNPABOUJVIRE->append_copy(l_2, r_2, context); 
DataChain* LEHLGECTNAZVQP = new DataChain(); 
DVRJGFVGYMHLWD->append(newRefStructBrackets(LEHLGECTNAZVQP)); 
LEHLGECTNAZVQP->append_copy(l_n, r_n, context); 
context->pushExecuteCall(DVRJGFVGYMHLWD_execbr); // Ifmust
return chain_MQQJVMOHFYESQX;
}
sentence_after_1: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Ifmust(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor SOUUBCPYFIKGQT;
/*DEF*/	DataCursor UFVQQEVCPCJPMJ;
/*DEF*/	DataCursor HPUACSIASPTSKQ;
/*SET*/	SOUUBCPYFIKGQT = arg_from;
/*INC*/	if (!INC(SOUUBCPYFIKGQT, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (SOUUBCPYFIKGQT.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	UFVQQEVCPCJPMJ = SOUUBCPYFIKGQT.container->value.bracket_data.chain->at_before_first();
	HPUACSIASPTSKQ   = SOUUBCPYFIKGQT.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_e1;
/*DEF*/	DataCursor r_e1;
/*SET*/	l_e1 = UFVQQEVCPCJPMJ;
/*SET*/	r_e1 = HPUACSIASPTSKQ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor YHITAUZFABLPQL;
/*DEF*/	DataCursor KUKAHMLIVZAPRO;
/*DEF*/	DataCursor TLQDIUOEEYKIQZ;
/*SET*/	YHITAUZFABLPQL = SOUUBCPYFIKGQT;
/*INC*/	if (!INC(YHITAUZFABLPQL, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (YHITAUZFABLPQL.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	KUKAHMLIVZAPRO = YHITAUZFABLPQL.container->value.bracket_data.chain->at_before_first();
	TLQDIUOEEYKIQZ   = YHITAUZFABLPQL.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e21;
/*DEF*/	DataCursor r_e21;
/*SET*/	l_e21 = KUKAHMLIVZAPRO;
/*SET*/	r_e21 = KUKAHMLIVZAPRO;
/*JMP*/	goto label_AHFAVZZRFRZZEM_firststep;
label_AHFAVZZRFRZZEM: 
/*INC*/	if (!INC(r_e21, TLQDIUOEEYKIQZ)) goto sentence_after_1;
label_AHFAVZZRFRZZEM_firststep: 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor IYZVOBXUOJORAW;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_e21;
/*SET*/	IYZVOBXUOJORAW = r_e21;
/*INC*/	if (!INC(IYZVOBXUOJORAW, TLQDIUOEEYKIQZ)) goto label_AHFAVZZRFRZZEM;
	if (! isSymbolType(IYZVOBXUOJORAW.container->type)) goto label_AHFAVZZRFRZZEM;
/*SET*/	r_A = IYZVOBXUOJORAW;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e22;
/*DEF*/	DataCursor r_e22;
/*SET*/	l_e22 = r_A;
/*SET*/	r_e22 = r_A;
/*JMP*/	goto label_URHJOPPNNCTEHR_firststep;
label_URHJOPPNNCTEHR: 
/*INC*/	if (!INC(r_e22, TLQDIUOEEYKIQZ)) goto label_AHFAVZZRFRZZEM;
label_URHJOPPNNCTEHR_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor ULPGKOZUYWMOBC;
/*SET*/	ULPGKOZUYWMOBC = r_e22;
 if (!SLIDE(ULPGKOZUYWMOBC, TLQDIUOEEYKIQZ, l_A, r_A)) goto label_URHJOPPNNCTEHR;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e23;
/*DEF*/	DataCursor r_e23;
/*SET*/	l_e23 = ULPGKOZUYWMOBC;
/*SET*/	r_e23 = TLQDIUOEEYKIQZ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor DLBOFBJEJAZSRU;
/*DEF*/	DataCursor LVQTAMMEMHQPYI;
/*DEF*/	DataCursor OWMNLQAEFZSIOT;
/*SET*/	DLBOFBJEJAZSRU = YHITAUZFABLPQL;
/*INC*/	if (!INC(DLBOFBJEJAZSRU, arg_to)) goto label_URHJOPPNNCTEHR;
//// ISBRACKET 
	if (DLBOFBJEJAZSRU.container->type != struct_bracket) goto label_URHJOPPNNCTEHR;
//// JMP_BRACKET 
	LVQTAMMEMHQPYI = DLBOFBJEJAZSRU.container->value.bracket_data.chain->at_before_first();
	OWMNLQAEFZSIOT   = DLBOFBJEJAZSRU.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_nn1;
/*DEF*/	DataCursor r_nn1;
/*SET*/	l_nn1 = LVQTAMMEMHQPYI;
/*SET*/	r_nn1 = LVQTAMMEMHQPYI;
/*JMP*/	goto label_PXJWOCJEUMCJDQ_firststep;
label_PXJWOCJEUMCJDQ: 
/*INC*/	if (!INC(r_nn1, OWMNLQAEFZSIOT)) goto label_URHJOPPNNCTEHR;
label_PXJWOCJEUMCJDQ_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor SZRRRUGIMNJBJA;
/*SET*/	SZRRRUGIMNJBJA = r_nn1;
 if (!SLIDE(SZRRRUGIMNJBJA, OWMNLQAEFZSIOT, l_A, r_A)) goto label_PXJWOCJEUMCJDQ;
//// [ e.1 ] 
/*DEF*/	DataCursor l_nn2;
/*DEF*/	DataCursor r_nn2;
/*SET*/	l_nn2 = SZRRRUGIMNJBJA;
/*SET*/	r_nn2 = OWMNLQAEFZSIOT;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor LQLRCEZJFXCHWD;
/*DEF*/	DataCursor DXONZMNJVLRJXR;
/*DEF*/	DataCursor XWKDUOOERCTEEQ;
/*SET*/	LQLRCEZJFXCHWD = DLBOFBJEJAZSRU;
/*INC*/	if (!INC(LQLRCEZJFXCHWD, arg_to)) goto label_PXJWOCJEUMCJDQ;
//// ISBRACKET 
	if (LQLRCEZJFXCHWD.container->type != struct_bracket) goto label_PXJWOCJEUMCJDQ;
//// JMP_BRACKET 
	DXONZMNJVLRJXR = LQLRCEZJFXCHWD.container->value.bracket_data.chain->at_before_first();
	XWKDUOOERCTEEQ   = LQLRCEZJFXCHWD.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor DVDLRWAMNKYXJS;
/*SET*/	DVDLRWAMNKYXJS = DXONZMNJVLRJXR;
/*INC*/	if (!INC(DVDLRWAMNKYXJS, XWKDUOOERCTEEQ)) goto label_PXJWOCJEUMCJDQ;
	if (DVDLRWAMNKYXJS.container->type != text || *(DVDLRWAMNKYXJS.container->value.text + DVDLRWAMNKYXJS.index) != '2') goto label_PXJWOCJEUMCJDQ;
//// [ empty ] 
/*ISEMPTY*/	if (DVDLRWAMNKYXJS!=0 && XWKDUOOERCTEEQ != DVDLRWAMNKYXJS) goto label_PXJWOCJEUMCJDQ;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = LQLRCEZJFXCHWD;
/*SET*/	r_1 = LQLRCEZJFXCHWD;
/*JMP*/	goto label_XFSMQHIBNGJTGR_firststep;
label_XFSMQHIBNGJTGR: 
/*INC*/	if (!INC(r_1, arg_to)) goto label_PXJWOCJEUMCJDQ;
label_XFSMQHIBNGJTGR_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor KPFERAYXDZNPGK;
/*SET*/	KPFERAYXDZNPGK = r_1;
/*INC*/	if (!INC(KPFERAYXDZNPGK, arg_to)) goto label_XFSMQHIBNGJTGR;
	if (KPFERAYXDZNPGK.container->type != word || !memcmp(KPFERAYXDZNPGK.container->value.word.value, "e2", KPFERAYXDZNPGK.container->value.word.leng)) goto label_XFSMQHIBNGJTGR;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor SDFPDJOBICQFQM;
/*DEF*/	DataCursor FSTQHPFMCPMFDC;
/*DEF*/	DataCursor DCCMODLQJQGWJO;
/*SET*/	SDFPDJOBICQFQM = KPFERAYXDZNPGK;
/*INC*/	if (!INC(SDFPDJOBICQFQM, arg_to)) goto label_XFSMQHIBNGJTGR;
//// ISBRACKET 
	if (SDFPDJOBICQFQM.container->type != struct_bracket) goto label_XFSMQHIBNGJTGR;
//// JMP_BRACKET 
	FSTQHPFMCPMFDC = SDFPDJOBICQFQM.container->value.bracket_data.chain->at_before_first();
	DCCMODLQJQGWJO   = SDFPDJOBICQFQM.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = FSTQHPFMCPMFDC;
/*SET*/	r_n = DCCMODLQJQGWJO;
//// [ empty ] 
/*ISEMPTY*/	if (SDFPDJOBICQFQM!=0 && arg_to != SDFPDJOBICQFQM) goto label_XFSMQHIBNGJTGR;

// подстановка 
// new chain 
DataChain *chain_FNUQNPMHDVKZEB = context->putChain(); 
chain_FNUQNPMHDVKZEB->append(newRefText("2")); 
return chain_FNUQNPMHDVKZEB;
}
sentence_after_1: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor NLIGKJFSWCXWCU;
/*DEF*/	DataCursor JWHEPDBSGTFFKB;
/*DEF*/	DataCursor YKEUHNFZNGKPMV;
/*SET*/	NLIGKJFSWCXWCU = arg_from;
/*INC*/	if (!INC(NLIGKJFSWCXWCU, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (NLIGKJFSWCXWCU.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	JWHEPDBSGTFFKB = NLIGKJFSWCXWCU.container->value.bracket_data.chain->at_before_first();
	YKEUHNFZNGKPMV   = NLIGKJFSWCXWCU.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e21;
/*DEF*/	DataCursor r_e21;
/*SET*/	l_e21 = JWHEPDBSGTFFKB;
/*SET*/	r_e21 = JWHEPDBSGTFFKB;
/*JMP*/	goto label_QTHEJJRBZHRCGG_firststep;
label_QTHEJJRBZHRCGG: 
/*INC*/	if (!INC(r_e21, YKEUHNFZNGKPMV)) goto sentence_after_2;
label_QTHEJJRBZHRCGG_firststep: 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor OEWVRXBWYSZBLQ;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_e21;
/*SET*/	OEWVRXBWYSZBLQ = r_e21;
/*INC*/	if (!INC(OEWVRXBWYSZBLQ, YKEUHNFZNGKPMV)) goto label_QTHEJJRBZHRCGG;
	if (! isSymbolType(OEWVRXBWYSZBLQ.container->type)) goto label_QTHEJJRBZHRCGG;
/*SET*/	r_A = OEWVRXBWYSZBLQ;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e22;
/*DEF*/	DataCursor r_e22;
/*SET*/	l_e22 = r_A;
/*SET*/	r_e22 = r_A;
/*JMP*/	goto label_GPWJPLTJFRQCOC_firststep;
label_GPWJPLTJFRQCOC: 
/*INC*/	if (!INC(r_e22, YKEUHNFZNGKPMV)) goto label_QTHEJJRBZHRCGG;
label_GPWJPLTJFRQCOC_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor QXYLUTTLWHTZAS;
/*SET*/	QXYLUTTLWHTZAS = r_e22;
 if (!SLIDE(QXYLUTTLWHTZAS, YKEUHNFZNGKPMV, l_A, r_A)) goto label_GPWJPLTJFRQCOC;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e23;
/*DEF*/	DataCursor r_e23;
/*SET*/	l_e23 = QXYLUTTLWHTZAS;
/*SET*/	r_e23 = YKEUHNFZNGKPMV;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor NQEOYJBXKIQMAJ;
/*DEF*/	DataCursor AGFHZZFBDVFUYU;
/*DEF*/	DataCursor RLVURNWRAMCADU;
/*SET*/	NQEOYJBXKIQMAJ = NLIGKJFSWCXWCU;
/*INC*/	if (!INC(NQEOYJBXKIQMAJ, arg_to)) goto label_GPWJPLTJFRQCOC;
//// ISBRACKET 
	if (NQEOYJBXKIQMAJ.container->type != struct_bracket) goto label_GPWJPLTJFRQCOC;
//// JMP_BRACKET 
	AGFHZZFBDVFUYU = NQEOYJBXKIQMAJ.container->value.bracket_data.chain->at_before_first();
	RLVURNWRAMCADU   = NQEOYJBXKIQMAJ.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_e1;
/*DEF*/	DataCursor r_e1;
/*SET*/	l_e1 = AGFHZZFBDVFUYU;
/*SET*/	r_e1 = RLVURNWRAMCADU;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor NWUGTUESHXMGZV;
/*DEF*/	DataCursor SRMCIFBVRASUCU;
/*DEF*/	DataCursor VIVOWLZIVLIICZ;
/*SET*/	NWUGTUESHXMGZV = NQEOYJBXKIQMAJ;
/*INC*/	if (!INC(NWUGTUESHXMGZV, arg_to)) goto label_GPWJPLTJFRQCOC;
//// ISBRACKET 
	if (NWUGTUESHXMGZV.container->type != struct_bracket) goto label_GPWJPLTJFRQCOC;
//// JMP_BRACKET 
	SRMCIFBVRASUCU = NWUGTUESHXMGZV.container->value.bracket_data.chain->at_before_first();
	VIVOWLZIVLIICZ   = NWUGTUESHXMGZV.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_nn1;
/*DEF*/	DataCursor r_nn1;
/*SET*/	l_nn1 = SRMCIFBVRASUCU;
/*SET*/	r_nn1 = SRMCIFBVRASUCU;
/*JMP*/	goto label_PUSSWAFKENWEMO_firststep;
label_PUSSWAFKENWEMO: 
/*INC*/	if (!INC(r_nn1, VIVOWLZIVLIICZ)) goto label_GPWJPLTJFRQCOC;
label_PUSSWAFKENWEMO_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor CIMLMSLEBFIIAR;
/*SET*/	CIMLMSLEBFIIAR = r_nn1;
 if (!SLIDE(CIMLMSLEBFIIAR, VIVOWLZIVLIICZ, l_A, r_A)) goto label_PUSSWAFKENWEMO;
//// [ e.1 ] 
/*DEF*/	DataCursor l_nn2;
/*DEF*/	DataCursor r_nn2;
/*SET*/	l_nn2 = CIMLMSLEBFIIAR;
/*SET*/	r_nn2 = VIVOWLZIVLIICZ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor GFMUABIZMYQPTH;
/*DEF*/	DataCursor DMZEIEGQCJTSJH;
/*DEF*/	DataCursor QKMVWZEDALKJDV;
/*SET*/	GFMUABIZMYQPTH = NWUGTUESHXMGZV;
/*INC*/	if (!INC(GFMUABIZMYQPTH, arg_to)) goto label_PUSSWAFKENWEMO;
//// ISBRACKET 
	if (GFMUABIZMYQPTH.container->type != struct_bracket) goto label_PUSSWAFKENWEMO;
//// JMP_BRACKET 
	DMZEIEGQCJTSJH = GFMUABIZMYQPTH.container->value.bracket_data.chain->at_before_first();
	QKMVWZEDALKJDV   = GFMUABIZMYQPTH.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor MZGRXOKCHGOALG;
/*SET*/	MZGRXOKCHGOALG = DMZEIEGQCJTSJH;
/*INC*/	if (!INC(MZGRXOKCHGOALG, QKMVWZEDALKJDV)) goto label_PUSSWAFKENWEMO;
	if (MZGRXOKCHGOALG.container->type != text || *(MZGRXOKCHGOALG.container->value.text + MZGRXOKCHGOALG.index) != '1') goto label_PUSSWAFKENWEMO;
//// [ empty ] 
/*ISEMPTY*/	if (MZGRXOKCHGOALG!=0 && QKMVWZEDALKJDV != MZGRXOKCHGOALG) goto label_PUSSWAFKENWEMO;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = GFMUABIZMYQPTH;
/*SET*/	r_1 = GFMUABIZMYQPTH;
/*JMP*/	goto label_JWSDGCOFGLCQGD_firststep;
label_JWSDGCOFGLCQGD: 
/*INC*/	if (!INC(r_1, arg_to)) goto label_PUSSWAFKENWEMO;
label_JWSDGCOFGLCQGD_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor NDBYPQQIDCLZXS;
/*SET*/	NDBYPQQIDCLZXS = r_1;
/*INC*/	if (!INC(NDBYPQQIDCLZXS, arg_to)) goto label_JWSDGCOFGLCQGD;
	if (NDBYPQQIDCLZXS.container->type != word || !memcmp(NDBYPQQIDCLZXS.container->value.word.value, "e2", NDBYPQQIDCLZXS.container->value.word.leng)) goto label_JWSDGCOFGLCQGD;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor QBJWIPLOXDERKL;
/*DEF*/	DataCursor GBXGOGNWYUNRNU;
/*DEF*/	DataCursor MFOLBALEZROKNK;
/*SET*/	QBJWIPLOXDERKL = NDBYPQQIDCLZXS;
/*INC*/	if (!INC(QBJWIPLOXDERKL, arg_to)) goto label_JWSDGCOFGLCQGD;
//// ISBRACKET 
	if (QBJWIPLOXDERKL.container->type != struct_bracket) goto label_JWSDGCOFGLCQGD;
//// JMP_BRACKET 
	GBXGOGNWYUNRNU = QBJWIPLOXDERKL.container->value.bracket_data.chain->at_before_first();
	MFOLBALEZROKNK   = QBJWIPLOXDERKL.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = GBXGOGNWYUNRNU;
/*SET*/	r_n = MFOLBALEZROKNK;
//// [ empty ] 
/*ISEMPTY*/	if (QBJWIPLOXDERKL!=0 && arg_to != QBJWIPLOXDERKL) goto label_JWSDGCOFGLCQGD;

// подстановка 
// new chain 
DataChain *chain_JNWRWEBGELZBGI = context->putChain(); 
chain_JNWRWEBGELZBGI->append(newRefText("1")); 
return chain_JNWRWEBGELZBGI;
}
sentence_after_2: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor QDSCWTSBXXZKGH;
/*DEF*/	DataCursor SKGEXLEVGXNYDQ;
/*DEF*/	DataCursor VTYJSLLQKEHTLI;
/*SET*/	QDSCWTSBXXZKGH = arg_from;
/*INC*/	if (!INC(QDSCWTSBXXZKGH, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (QDSCWTSBXXZKGH.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	SKGEXLEVGXNYDQ = QDSCWTSBXXZKGH.container->value.bracket_data.chain->at_before_first();
	VTYJSLLQKEHTLI   = QDSCWTSBXXZKGH.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_e1;
/*DEF*/	DataCursor r_e1;
/*SET*/	l_e1 = SKGEXLEVGXNYDQ;
/*SET*/	r_e1 = VTYJSLLQKEHTLI;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor AUYICCQDMFIEJR;
/*DEF*/	DataCursor QNRNAZCRFHPBJM;
/*DEF*/	DataCursor RFBYQMHDABALHT;
/*SET*/	AUYICCQDMFIEJR = QDSCWTSBXXZKGH;
/*INC*/	if (!INC(AUYICCQDMFIEJR, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (AUYICCQDMFIEJR.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	QNRNAZCRFHPBJM = AUYICCQDMFIEJR.container->value.bracket_data.chain->at_before_first();
	RFBYQMHDABALHT   = AUYICCQDMFIEJR.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e21;
/*DEF*/	DataCursor r_e21;
/*SET*/	l_e21 = QNRNAZCRFHPBJM;
/*SET*/	r_e21 = QNRNAZCRFHPBJM;
/*JMP*/	goto label_IGPQMWFONTEPRC_firststep;
label_IGPQMWFONTEPRC: 
/*INC*/	if (!INC(r_e21, RFBYQMHDABALHT)) goto sentence_after_3;
label_IGPQMWFONTEPRC_firststep: 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor HDDWEQDOHSPJDG;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_e21;
/*SET*/	HDDWEQDOHSPJDG = r_e21;
/*INC*/	if (!INC(HDDWEQDOHSPJDG, RFBYQMHDABALHT)) goto label_IGPQMWFONTEPRC;
	if (! isSymbolType(HDDWEQDOHSPJDG.container->type)) goto label_IGPQMWFONTEPRC;
/*SET*/	r_A = HDDWEQDOHSPJDG;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e22;
/*DEF*/	DataCursor r_e22;
/*SET*/	l_e22 = r_A;
/*SET*/	r_e22 = r_A;
/*JMP*/	goto label_VLZMJBMWEOILEJ_firststep;
label_VLZMJBMWEOILEJ: 
/*INC*/	if (!INC(r_e22, RFBYQMHDABALHT)) goto label_IGPQMWFONTEPRC;
label_VLZMJBMWEOILEJ_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor RPKSBXEESTGPSM;
/*SET*/	RPKSBXEESTGPSM = r_e22;
 if (!SLIDE(RPKSBXEESTGPSM, RFBYQMHDABALHT, l_A, r_A)) goto label_VLZMJBMWEOILEJ;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e23;
/*DEF*/	DataCursor r_e23;
/*SET*/	l_e23 = RPKSBXEESTGPSM;
/*SET*/	r_e23 = RFBYQMHDABALHT;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor NMALPUSWIBUBAQ;
/*DEF*/	DataCursor VOTCAYTBTUZDTW;
/*DEF*/	DataCursor SYSJRVRWGIXZHX;
/*SET*/	NMALPUSWIBUBAQ = AUYICCQDMFIEJR;
/*INC*/	if (!INC(NMALPUSWIBUBAQ, arg_to)) goto label_VLZMJBMWEOILEJ;
//// ISBRACKET 
	if (NMALPUSWIBUBAQ.container->type != struct_bracket) goto label_VLZMJBMWEOILEJ;
//// JMP_BRACKET 
	VOTCAYTBTUZDTW = NMALPUSWIBUBAQ.container->value.bracket_data.chain->at_before_first();
	SYSJRVRWGIXZHX   = NMALPUSWIBUBAQ.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_nn1;
/*DEF*/	DataCursor r_nn1;
/*SET*/	l_nn1 = VOTCAYTBTUZDTW;
/*SET*/	r_nn1 = VOTCAYTBTUZDTW;
/*JMP*/	goto label_WHIUHVQTKJPQZY_firststep;
label_WHIUHVQTKJPQZY: 
/*INC*/	if (!INC(r_nn1, SYSJRVRWGIXZHX)) goto label_VLZMJBMWEOILEJ;
label_WHIUHVQTKJPQZY_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor YHHTXMJFMQLFWZ;
/*SET*/	YHHTXMJFMQLFWZ = r_nn1;
 if (!SLIDE(YHHTXMJFMQLFWZ, SYSJRVRWGIXZHX, l_A, r_A)) goto label_WHIUHVQTKJPQZY;
//// [ e.1 ] 
/*DEF*/	DataCursor l_nn2;
/*DEF*/	DataCursor r_nn2;
/*SET*/	l_nn2 = YHHTXMJFMQLFWZ;
/*SET*/	r_nn2 = SYSJRVRWGIXZHX;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor JFQVBENLERLKYA;
/*DEF*/	DataCursor WOLVBTYZGEWXCC;
/*DEF*/	DataCursor HSWMWGHBBANCUE;
/*SET*/	JFQVBENLERLKYA = NMALPUSWIBUBAQ;
/*INC*/	if (!INC(JFQVBENLERLKYA, arg_to)) goto label_WHIUHVQTKJPQZY;
//// ISBRACKET 
	if (JFQVBENLERLKYA.container->type != struct_bracket) goto label_WHIUHVQTKJPQZY;
//// JMP_BRACKET 
	WOLVBTYZGEWXCC = JFQVBENLERLKYA.container->value.bracket_data.chain->at_before_first();
	HSWMWGHBBANCUE   = JFQVBENLERLKYA.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor JVMWGSFFVOWDLR;
/*SET*/	JVMWGSFFVOWDLR = WOLVBTYZGEWXCC;
/*INC*/	if (!INC(JVMWGSFFVOWDLR, HSWMWGHBBANCUE)) goto label_WHIUHVQTKJPQZY;
	if (JVMWGSFFVOWDLR.container->type != text || *(JVMWGSFFVOWDLR.container->value.text + JVMWGSFFVOWDLR.index) != '1') goto label_WHIUHVQTKJPQZY;
//// [ empty ] 
/*ISEMPTY*/	if (JVMWGSFFVOWDLR!=0 && HSWMWGHBBANCUE != JVMWGSFFVOWDLR) goto label_WHIUHVQTKJPQZY;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = JFQVBENLERLKYA;
/*SET*/	r_1 = JFQVBENLERLKYA;
/*JMP*/	goto label_YGQKXRWDVRKCOY_firststep;
label_YGQKXRWDVRKCOY: 
/*INC*/	if (!INC(r_1, arg_to)) goto label_WHIUHVQTKJPQZY;
label_YGQKXRWDVRKCOY_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor TXKCWEAGYDMHRP;
/*SET*/	TXKCWEAGYDMHRP = r_1;
/*INC*/	if (!INC(TXKCWEAGYDMHRP, arg_to)) goto label_YGQKXRWDVRKCOY;
	if (TXKCWEAGYDMHRP.container->type != word || !memcmp(TXKCWEAGYDMHRP.container->value.word.value, "e2", TXKCWEAGYDMHRP.container->value.word.leng)) goto label_YGQKXRWDVRKCOY;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor YQUIMWRBVEZZVV;
/*DEF*/	DataCursor JPGIHCYFQZVADT;
/*DEF*/	DataCursor DFYEMFQVYNBDLR;
/*SET*/	YQUIMWRBVEZZVV = TXKCWEAGYDMHRP;
/*INC*/	if (!INC(YQUIMWRBVEZZVV, arg_to)) goto label_YGQKXRWDVRKCOY;
//// ISBRACKET 
	if (YQUIMWRBVEZZVV.container->type != struct_bracket) goto label_YGQKXRWDVRKCOY;
//// JMP_BRACKET 
	JPGIHCYFQZVADT = YQUIMWRBVEZZVV.container->value.bracket_data.chain->at_before_first();
	DFYEMFQVYNBDLR   = YQUIMWRBVEZZVV.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = JPGIHCYFQZVADT;
/*SET*/	r_n = DFYEMFQVYNBDLR;
//// [ empty ] 
/*ISEMPTY*/	if (YQUIMWRBVEZZVV!=0 && arg_to != YQUIMWRBVEZZVV) goto label_YGQKXRWDVRKCOY;

// подстановка 
// new chain 
DataChain *chain_QHVAPGYSGGXDOR = context->putChain(); 
DataChain* KVMVQEXPJFGVPI = new DataChain(); 
DataContainer* KVMVQEXPJFGVPI_execbr = newRefExecBrackets(StepShag, KVMVQEXPJFGVPI, "StepShag");
chain_QHVAPGYSGGXDOR->append(KVMVQEXPJFGVPI_execbr);
DataChain* FYIDTTGGSDYJBV = new DataChain(); 
DataContainer* FYIDTTGGSDYJBV_execbr = newRefExecBrackets(Lins, FYIDTTGGSDYJBV, "Lins");
KVMVQEXPJFGVPI->append(FYIDTTGGSDYJBV_execbr);
DataChain* OLBMCGBRRVKUPT = new DataChain(); 
FYIDTTGGSDYJBV->append(newRefStructBrackets(OLBMCGBRRVKUPT)); 
OLBMCGBRRVKUPT->append_copy(l_n, r_n, context); 
DataChain* ANLZOSCTFNYSZK = new DataChain(); 
DataContainer* ANLZOSCTFNYSZK_execbr = newRefExecBrackets(AntiStrategy, ANLZOSCTFNYSZK, "AntiStrategy");
FYIDTTGGSDYJBV->append(ANLZOSCTFNYSZK_execbr);
ANLZOSCTFNYSZK->append_copy(l_A, r_A, context); 
context->pushExecuteCall(ANLZOSCTFNYSZK_execbr); // AntiStrategy
context->pushExecuteCall(FYIDTTGGSDYJBV_execbr); // Lins
DataChain* LRNZRKUXYJPWWM = new DataChain(); 
KVMVQEXPJFGVPI->append(newRefStructBrackets(LRNZRKUXYJPWWM)); 
LRNZRKUXYJPWWM->append(newRefText("1")); 
KVMVQEXPJFGVPI->append_copy(l_1, r_1, context); 
KVMVQEXPJFGVPI->append(newRefWord("e2")); 
DataChain* INHPLXGXWULGXH = new DataChain(); 
KVMVQEXPJFGVPI->append(newRefStructBrackets(INHPLXGXWULGXH)); 
INHPLXGXWULGXH->append_copy(l_n, r_n, context); 
context->pushExecuteCall(KVMVQEXPJFGVPI_execbr); // StepShag
return chain_QHVAPGYSGGXDOR;
}
sentence_after_3: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor LMSBZRQUAJUAXP;
/*DEF*/	DataCursor DPSMWIWXXDVIPO;
/*DEF*/	DataCursor UXTLKQWWOWRQEA;
/*SET*/	LMSBZRQUAJUAXP = arg_from;
/*INC*/	if (!INC(LMSBZRQUAJUAXP, arg_to)) goto sentence_after_4;
//// ISBRACKET 
	if (LMSBZRQUAJUAXP.container->type != struct_bracket) goto sentence_after_4;
//// JMP_BRACKET 
	DPSMWIWXXDVIPO = LMSBZRQUAJUAXP.container->value.bracket_data.chain->at_before_first();
	UXTLKQWWOWRQEA   = LMSBZRQUAJUAXP.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e21;
/*DEF*/	DataCursor r_e21;
/*SET*/	l_e21 = DPSMWIWXXDVIPO;
/*SET*/	r_e21 = DPSMWIWXXDVIPO;
/*JMP*/	goto label_TQBMMILPOXBIPW_firststep;
label_TQBMMILPOXBIPW: 
/*INC*/	if (!INC(r_e21, UXTLKQWWOWRQEA)) goto sentence_after_4;
label_TQBMMILPOXBIPW_firststep: 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor WEGHTFIQJQKBNJ;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_e21;
/*SET*/	WEGHTFIQJQKBNJ = r_e21;
/*INC*/	if (!INC(WEGHTFIQJQKBNJ, UXTLKQWWOWRQEA)) goto label_TQBMMILPOXBIPW;
	if (! isSymbolType(WEGHTFIQJQKBNJ.container->type)) goto label_TQBMMILPOXBIPW;
/*SET*/	r_A = WEGHTFIQJQKBNJ;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e22;
/*DEF*/	DataCursor r_e22;
/*SET*/	l_e22 = r_A;
/*SET*/	r_e22 = r_A;
/*JMP*/	goto label_HXDKUNEBQGRIZK_firststep;
label_HXDKUNEBQGRIZK: 
/*INC*/	if (!INC(r_e22, UXTLKQWWOWRQEA)) goto label_TQBMMILPOXBIPW;
label_HXDKUNEBQGRIZK_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor EKGERQQLYYFESO;
/*SET*/	EKGERQQLYYFESO = r_e22;
 if (!SLIDE(EKGERQQLYYFESO, UXTLKQWWOWRQEA, l_A, r_A)) goto label_HXDKUNEBQGRIZK;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e23;
/*DEF*/	DataCursor r_e23;
/*SET*/	l_e23 = EKGERQQLYYFESO;
/*SET*/	r_e23 = UXTLKQWWOWRQEA;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor YKMVAYQBNKSTMD;
/*DEF*/	DataCursor EFRMTWKYLNONCH;
/*DEF*/	DataCursor IGMTFBOURZHMFF;
/*SET*/	YKMVAYQBNKSTMD = LMSBZRQUAJUAXP;
/*INC*/	if (!INC(YKMVAYQBNKSTMD, arg_to)) goto label_HXDKUNEBQGRIZK;
//// ISBRACKET 
	if (YKMVAYQBNKSTMD.container->type != struct_bracket) goto label_HXDKUNEBQGRIZK;
//// JMP_BRACKET 
	EFRMTWKYLNONCH = YKMVAYQBNKSTMD.container->value.bracket_data.chain->at_before_first();
	IGMTFBOURZHMFF   = YKMVAYQBNKSTMD.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_e1;
/*DEF*/	DataCursor r_e1;
/*SET*/	l_e1 = EFRMTWKYLNONCH;
/*SET*/	r_e1 = IGMTFBOURZHMFF;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor FSRCBDZDFBEOST;
/*DEF*/	DataCursor FVSKREBTLJHZKR;
/*DEF*/	DataCursor GHTSGBBDHLSICU;
/*SET*/	FSRCBDZDFBEOST = YKMVAYQBNKSTMD;
/*INC*/	if (!INC(FSRCBDZDFBEOST, arg_to)) goto label_HXDKUNEBQGRIZK;
//// ISBRACKET 
	if (FSRCBDZDFBEOST.container->type != struct_bracket) goto label_HXDKUNEBQGRIZK;
//// JMP_BRACKET 
	FVSKREBTLJHZKR = FSRCBDZDFBEOST.container->value.bracket_data.chain->at_before_first();
	GHTSGBBDHLSICU   = FSRCBDZDFBEOST.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_nn1;
/*DEF*/	DataCursor r_nn1;
/*SET*/	l_nn1 = FVSKREBTLJHZKR;
/*SET*/	r_nn1 = FVSKREBTLJHZKR;
/*JMP*/	goto label_TFMMJOUTFVEXDC_firststep;
label_TFMMJOUTFVEXDC: 
/*INC*/	if (!INC(r_nn1, GHTSGBBDHLSICU)) goto label_HXDKUNEBQGRIZK;
label_TFMMJOUTFVEXDC_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor ZSCHYTBCRKLIWC;
/*SET*/	ZSCHYTBCRKLIWC = r_nn1;
 if (!SLIDE(ZSCHYTBCRKLIWC, GHTSGBBDHLSICU, l_A, r_A)) goto label_TFMMJOUTFVEXDC;
//// [ e.1 ] 
/*DEF*/	DataCursor l_nn2;
/*DEF*/	DataCursor r_nn2;
/*SET*/	l_nn2 = ZSCHYTBCRKLIWC;
/*SET*/	r_nn2 = GHTSGBBDHLSICU;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor XKGOQVUFYOGVFR;
/*DEF*/	DataCursor NYMOPFWPNFUZEI;
/*DEF*/	DataCursor HXYXANSPRGGWDY;
/*SET*/	XKGOQVUFYOGVFR = FSRCBDZDFBEOST;
/*INC*/	if (!INC(XKGOQVUFYOGVFR, arg_to)) goto label_TFMMJOUTFVEXDC;
//// ISBRACKET 
	if (XKGOQVUFYOGVFR.container->type != struct_bracket) goto label_TFMMJOUTFVEXDC;
//// JMP_BRACKET 
	NYMOPFWPNFUZEI = XKGOQVUFYOGVFR.container->value.bracket_data.chain->at_before_first();
	HXYXANSPRGGWDY   = XKGOQVUFYOGVFR.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor AFAWQGQBTDGFFC;
/*SET*/	AFAWQGQBTDGFFC = NYMOPFWPNFUZEI;
/*INC*/	if (!INC(AFAWQGQBTDGFFC, HXYXANSPRGGWDY)) goto label_TFMMJOUTFVEXDC;
	if (AFAWQGQBTDGFFC.container->type != text || *(AFAWQGQBTDGFFC.container->value.text + AFAWQGQBTDGFFC.index) != '2') goto label_TFMMJOUTFVEXDC;
//// [ empty ] 
/*ISEMPTY*/	if (AFAWQGQBTDGFFC!=0 && HXYXANSPRGGWDY != AFAWQGQBTDGFFC) goto label_TFMMJOUTFVEXDC;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = XKGOQVUFYOGVFR;
/*SET*/	r_1 = XKGOQVUFYOGVFR;
/*JMP*/	goto label_SYDYMVPEIBGXFF_firststep;
label_SYDYMVPEIBGXFF: 
/*INC*/	if (!INC(r_1, arg_to)) goto label_TFMMJOUTFVEXDC;
label_SYDYMVPEIBGXFF_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor NOPFYMRMQHUCGO;
/*SET*/	NOPFYMRMQHUCGO = r_1;
/*INC*/	if (!INC(NOPFYMRMQHUCGO, arg_to)) goto label_SYDYMVPEIBGXFF;
	if (NOPFYMRMQHUCGO.container->type != word || !memcmp(NOPFYMRMQHUCGO.container->value.word.value, "e2", NOPFYMRMQHUCGO.container->value.word.leng)) goto label_SYDYMVPEIBGXFF;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor MDIUXEMXBZYSLV;
/*DEF*/	DataCursor LITWUBNSPBMEWW;
/*DEF*/	DataCursor HGPMPRKCYFDXKM;
/*SET*/	MDIUXEMXBZYSLV = NOPFYMRMQHUCGO;
/*INC*/	if (!INC(MDIUXEMXBZYSLV, arg_to)) goto label_SYDYMVPEIBGXFF;
//// ISBRACKET 
	if (MDIUXEMXBZYSLV.container->type != struct_bracket) goto label_SYDYMVPEIBGXFF;
//// JMP_BRACKET 
	LITWUBNSPBMEWW = MDIUXEMXBZYSLV.container->value.bracket_data.chain->at_before_first();
	HGPMPRKCYFDXKM   = MDIUXEMXBZYSLV.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = LITWUBNSPBMEWW;
/*SET*/	r_n = HGPMPRKCYFDXKM;
//// [ empty ] 
/*ISEMPTY*/	if (MDIUXEMXBZYSLV!=0 && arg_to != MDIUXEMXBZYSLV) goto label_SYDYMVPEIBGXFF;

// подстановка 
// new chain 
DataChain *chain_TUHEVOIXRWLMXW = context->putChain(); 
DataChain* GCNOYZMMYOVRTE = new DataChain(); 
DataContainer* GCNOYZMMYOVRTE_execbr = newRefExecBrackets(StepShag, GCNOYZMMYOVRTE, "StepShag");
chain_TUHEVOIXRWLMXW->append(GCNOYZMMYOVRTE_execbr);
DataChain* PQTIBDVTHMPOAQ = new DataChain(); 
DataContainer* PQTIBDVTHMPOAQ_execbr = newRefExecBrackets(Lins, PQTIBDVTHMPOAQ, "Lins");
GCNOYZMMYOVRTE->append(PQTIBDVTHMPOAQ_execbr);
DataChain* YDDQRXNVKIYADV = new DataChain(); 
PQTIBDVTHMPOAQ->append(newRefStructBrackets(YDDQRXNVKIYADV)); 
YDDQRXNVKIYADV->append_copy(l_n, r_n, context); 
DataChain* LOYEMCYCFCPYUW = new DataChain(); 
DataContainer* LOYEMCYCFCPYUW_execbr = newRefExecBrackets(AntiStrategy, LOYEMCYCFCPYUW, "AntiStrategy");
PQTIBDVTHMPOAQ->append(LOYEMCYCFCPYUW_execbr);
LOYEMCYCFCPYUW->append_copy(l_A, r_A, context); 
context->pushExecuteCall(LOYEMCYCFCPYUW_execbr); // AntiStrategy
context->pushExecuteCall(PQTIBDVTHMPOAQ_execbr); // Lins
DataChain* KZEBCJAEDSBVQQ = new DataChain(); 
GCNOYZMMYOVRTE->append(newRefStructBrackets(KZEBCJAEDSBVQQ)); 
KZEBCJAEDSBVQQ->append(newRefText("2")); 
GCNOYZMMYOVRTE->append_copy(l_1, r_1, context); 
GCNOYZMMYOVRTE->append(newRefWord("e2")); 
DataChain* IJQLGJYCJPKPXF = new DataChain(); 
GCNOYZMMYOVRTE->append(newRefStructBrackets(IJQLGJYCJPKPXF)); 
IJQLGJYCJPKPXF->append_copy(l_n, r_n, context); 
context->pushExecuteCall(GCNOYZMMYOVRTE_execbr); // StepShag
return chain_TUHEVOIXRWLMXW;
}
sentence_after_4: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor LCEONIYVQVURDI;
/*DEF*/	DataCursor AQMSRTFGWTPEPU;
/*DEF*/	DataCursor NUGEAJDGZSJEWS;
/*SET*/	LCEONIYVQVURDI = arg_from;
/*INC*/	if (!INC(LCEONIYVQVURDI, arg_to)) goto sentence_after_5;
//// ISBRACKET 
	if (LCEONIYVQVURDI.container->type != struct_bracket) goto sentence_after_5;
//// JMP_BRACKET 
	AQMSRTFGWTPEPU = LCEONIYVQVURDI.container->value.bracket_data.chain->at_before_first();
	NUGEAJDGZSJEWS   = LCEONIYVQVURDI.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_e1;
/*DEF*/	DataCursor r_e1;
/*SET*/	l_e1 = AQMSRTFGWTPEPU;
/*SET*/	r_e1 = NUGEAJDGZSJEWS;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor QRMJZSSBXJVOTJ;
/*DEF*/	DataCursor VJQCFQPTBZGKET;
/*DEF*/	DataCursor QKITTRHYUBKEWF;
/*SET*/	QRMJZSSBXJVOTJ = LCEONIYVQVURDI;
/*INC*/	if (!INC(QRMJZSSBXJVOTJ, arg_to)) goto sentence_after_5;
//// ISBRACKET 
	if (QRMJZSSBXJVOTJ.container->type != struct_bracket) goto sentence_after_5;
//// JMP_BRACKET 
	VJQCFQPTBZGKET = QRMJZSSBXJVOTJ.container->value.bracket_data.chain->at_before_first();
	QKITTRHYUBKEWF   = QRMJZSSBXJVOTJ.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_e2;
/*DEF*/	DataCursor r_e2;
/*SET*/	l_e2 = VJQCFQPTBZGKET;
/*SET*/	r_e2 = QKITTRHYUBKEWF;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor EKRCIHHXJEIGUT;
/*DEF*/	DataCursor WIGDBBDXRBWMBR;
/*DEF*/	DataCursor MBVGAOWLVDJYDD;
/*SET*/	EKRCIHHXJEIGUT = QRMJZSSBXJVOTJ;
/*INC*/	if (!INC(EKRCIHHXJEIGUT, arg_to)) goto sentence_after_5;
//// ISBRACKET 
	if (EKRCIHHXJEIGUT.container->type != struct_bracket) goto sentence_after_5;
//// JMP_BRACKET 
	WIGDBBDXRBWMBR = EKRCIHHXJEIGUT.container->value.bracket_data.chain->at_before_first();
	MBVGAOWLVDJYDD   = EKRCIHHXJEIGUT.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_nn;
/*DEF*/	DataCursor r_nn;
/*SET*/	l_nn = WIGDBBDXRBWMBR;
/*SET*/	r_nn = MBVGAOWLVDJYDD;
//// [ e.1 ] 
/*DEF*/	DataCursor l_hn;
/*DEF*/	DataCursor r_hn;
/*SET*/	l_hn = EKRCIHHXJEIGUT;
/*SET*/	r_hn = arg_to;

// подстановка 
// new chain 
DataChain *chain_YCTCOCKMGZVARP = context->putChain(); 
DataChain* FOBGMHPAOJOIQP = new DataChain(); 
DataContainer* FOBGMHPAOJOIQP_execbr = newRefExecBrackets(PolnAnalizEny, FOBGMHPAOJOIQP, "PolnAnalizEny");
chain_YCTCOCKMGZVARP->append(FOBGMHPAOJOIQP_execbr);
FOBGMHPAOJOIQP->append_copy(l_hn, r_hn, context); 
context->pushExecuteCall(FOBGMHPAOJOIQP_execbr); // PolnAnalizEny
return chain_YCTCOCKMGZVARP;
}
sentence_after_5: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* StepShag(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor QTXTUCRORYSMGT;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = arg_from;
/*SET*/	QTXTUCRORYSMGT = arg_from;
/*INC*/	if (!INC(QTXTUCRORYSMGT, arg_to)) goto sentence_after_1;
	if (! isSymbolType(QTXTUCRORYSMGT.container->type)) goto sentence_after_1;
/*SET*/	r_A = QTXTUCRORYSMGT;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor XCFZLBJBIPFIMU;
/*DEF*/	DataCursor NEZPQAQJASIXVW;
/*DEF*/	DataCursor OQYJVXKHCQPQIA;
/*SET*/	XCFZLBJBIPFIMU = r_A;
/*INC*/	if (!INC(XCFZLBJBIPFIMU, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (XCFZLBJBIPFIMU.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	NEZPQAQJASIXVW = XCFZLBJBIPFIMU.container->value.bracket_data.chain->at_before_first();
	OQYJVXKHCQPQIA   = XCFZLBJBIPFIMU.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor BUBQQDOFEHHJTZ;
/*SET*/	BUBQQDOFEHHJTZ = NEZPQAQJASIXVW;
/*INC*/	if (!INC(BUBQQDOFEHHJTZ, OQYJVXKHCQPQIA)) goto sentence_after_1;
	if (BUBQQDOFEHHJTZ.container->type != text || *(BUBQQDOFEHHJTZ.container->value.text + BUBQQDOFEHHJTZ.index) != '1') goto sentence_after_1;
//// [ empty ] 
/*ISEMPTY*/	if (BUBQQDOFEHHJTZ!=0 && OQYJVXKHCQPQIA != BUBQQDOFEHHJTZ) goto sentence_after_1;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor KOYLPNZOIPZWDM;
/*DEF*/	DataCursor KRBHDNTDKVPDEL;
/*DEF*/	DataCursor ORQCJKQZZPINOQ;
/*SET*/	KOYLPNZOIPZWDM = XCFZLBJBIPFIMU;
/*INC*/	if (!INC(KOYLPNZOIPZWDM, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (KOYLPNZOIPZWDM.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	KRBHDNTDKVPDEL = KOYLPNZOIPZWDM.container->value.bracket_data.chain->at_before_first();
	ORQCJKQZZPINOQ   = KOYLPNZOIPZWDM.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = KRBHDNTDKVPDEL;
/*SET*/	r_1 = ORQCJKQZZPINOQ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor LUIBJGNQQLFEWI;
/*DEF*/	DataCursor OAMGMRCEMOAXVU;
/*DEF*/	DataCursor FYQYPCHHGFMIZR;
/*SET*/	LUIBJGNQQLFEWI = KOYLPNZOIPZWDM;
/*INC*/	if (!INC(LUIBJGNQQLFEWI, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (LUIBJGNQQLFEWI.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	OAMGMRCEMOAXVU = LUIBJGNQQLFEWI.container->value.bracket_data.chain->at_before_first();
	FYQYPCHHGFMIZR   = LUIBJGNQQLFEWI.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = OAMGMRCEMOAXVU;
/*SET*/	r_2 = FYQYPCHHGFMIZR;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor CKLYHBPJJZRRUG;
/*DEF*/	DataCursor OFLUIOIVOVXMRA;
/*DEF*/	DataCursor WZSWPFNCNFYTMC;
/*SET*/	CKLYHBPJJZRRUG = LUIBJGNQQLFEWI;
/*INC*/	if (!INC(CKLYHBPJJZRRUG, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (CKLYHBPJJZRRUG.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	OFLUIOIVOVXMRA = CKLYHBPJJZRRUG.container->value.bracket_data.chain->at_before_first();
	WZSWPFNCNFYTMC   = CKLYHBPJJZRRUG.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_n1;
/*DEF*/	DataCursor r_n1;
/*SET*/	l_n1 = OFLUIOIVOVXMRA;
/*SET*/	r_n1 = OFLUIOIVOVXMRA;
/*JMP*/	goto label_FVWNRMFZGPZPOL_firststep;
label_FVWNRMFZGPZPOL: 
/*INC*/	if (!INC(r_n1, WZSWPFNCNFYTMC)) goto sentence_after_1;
label_FVWNRMFZGPZPOL_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor TVNBMVWTHJSVHB;
/*SET*/	TVNBMVWTHJSVHB = r_n1;
 if (!SLIDE(TVNBMVWTHJSVHB, WZSWPFNCNFYTMC, l_A, r_A)) goto label_FVWNRMFZGPZPOL;
//// [ e.1 ] 
/*DEF*/	DataCursor l_n2;
/*DEF*/	DataCursor r_n2;
/*SET*/	l_n2 = TVNBMVWTHJSVHB;
/*SET*/	r_n2 = WZSWPFNCNFYTMC;
//// [ empty ] 
/*ISEMPTY*/	if (CKLYHBPJJZRRUG!=0 && arg_to != CKLYHBPJJZRRUG) goto label_FVWNRMFZGPZPOL;

// подстановка 
// new chain 
DataChain *chain_XSEWQYCKWEXZPM = context->putChain(); 
DataChain* IEXGRJXJMDWBQY = new DataChain(); 
DataContainer* IEXGRJXJMDWBQY_execbr = newRefExecBrackets(PolnAnaliz, IEXGRJXJMDWBQY, "PolnAnaliz");
chain_XSEWQYCKWEXZPM->append(IEXGRJXJMDWBQY_execbr);
DataChain* UIPXARRBPHNZWK = new DataChain(); 
IEXGRJXJMDWBQY->append(newRefStructBrackets(UIPXARRBPHNZWK)); 
UIPXARRBPHNZWK->append(newRefText("2")); 
DataChain* BCLGBVOCYUZUTZ = new DataChain(); 
IEXGRJXJMDWBQY->append(newRefStructBrackets(BCLGBVOCYUZUTZ)); 
BCLGBVOCYUZUTZ->append_copy(l_1, r_1, context); 
BCLGBVOCYUZUTZ->append_copy(l_A, r_A, context); 
DataChain* YPIROCYYUCCLQZ = new DataChain(); 
IEXGRJXJMDWBQY->append(newRefStructBrackets(YPIROCYYUCCLQZ)); 
YPIROCYYUCCLQZ->append_copy(l_2, r_2, context); 
DataChain* CXTAWHXKHALPUK = new DataChain(); 
IEXGRJXJMDWBQY->append(newRefStructBrackets(CXTAWHXKHALPUK)); 
CXTAWHXKHALPUK->append_copy(l_n1, r_n1, context); 
CXTAWHXKHALPUK->append_copy(l_n2, r_n2, context); 
context->pushExecuteCall(IEXGRJXJMDWBQY_execbr); // PolnAnaliz
return chain_XSEWQYCKWEXZPM;
}
sentence_after_1: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor JRMGSXOCKDRAAU;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = arg_from;
/*SET*/	JRMGSXOCKDRAAU = arg_from;
/*INC*/	if (!INC(JRMGSXOCKDRAAU, arg_to)) goto sentence_after_2;
	if (! isSymbolType(JRMGSXOCKDRAAU.container->type)) goto sentence_after_2;
/*SET*/	r_A = JRMGSXOCKDRAAU;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor ACXKPMRFLSPDLQ;
/*DEF*/	DataCursor KEWYQJFTFWAHGQ;
/*DEF*/	DataCursor OHKQNKTTIQFYRH;
/*SET*/	ACXKPMRFLSPDLQ = r_A;
/*INC*/	if (!INC(ACXKPMRFLSPDLQ, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (ACXKPMRFLSPDLQ.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	KEWYQJFTFWAHGQ = ACXKPMRFLSPDLQ.container->value.bracket_data.chain->at_before_first();
	OHKQNKTTIQFYRH   = ACXKPMRFLSPDLQ.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor DSGEUEIVKRNEZU;
/*SET*/	DSGEUEIVKRNEZU = KEWYQJFTFWAHGQ;
/*INC*/	if (!INC(DSGEUEIVKRNEZU, OHKQNKTTIQFYRH)) goto sentence_after_2;
	if (DSGEUEIVKRNEZU.container->type != text || *(DSGEUEIVKRNEZU.container->value.text + DSGEUEIVKRNEZU.index) != '2') goto sentence_after_2;
//// [ empty ] 
/*ISEMPTY*/	if (DSGEUEIVKRNEZU!=0 && OHKQNKTTIQFYRH != DSGEUEIVKRNEZU) goto sentence_after_2;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor CNSCQKCJBCHVRS;
/*DEF*/	DataCursor PZOTKDBIDWWYGO;
/*DEF*/	DataCursor WWQHNZFJQHFGIM;
/*SET*/	CNSCQKCJBCHVRS = ACXKPMRFLSPDLQ;
/*INC*/	if (!INC(CNSCQKCJBCHVRS, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (CNSCQKCJBCHVRS.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	PZOTKDBIDWWYGO = CNSCQKCJBCHVRS.container->value.bracket_data.chain->at_before_first();
	WWQHNZFJQHFGIM   = CNSCQKCJBCHVRS.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = PZOTKDBIDWWYGO;
/*SET*/	r_1 = WWQHNZFJQHFGIM;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor WJGRJVQSPOOSLA;
/*DEF*/	DataCursor QKXZEHZEGKWUTI;
/*DEF*/	DataCursor YPZVVZTDURGODX;
/*SET*/	WJGRJVQSPOOSLA = CNSCQKCJBCHVRS;
/*INC*/	if (!INC(WJGRJVQSPOOSLA, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (WJGRJVQSPOOSLA.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	QKXZEHZEGKWUTI = WJGRJVQSPOOSLA.container->value.bracket_data.chain->at_before_first();
	YPZVVZTDURGODX   = WJGRJVQSPOOSLA.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = QKXZEHZEGKWUTI;
/*SET*/	r_2 = YPZVVZTDURGODX;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor VAAHGUIGPSGLHA;
/*DEF*/	DataCursor BNQBWTQMBDSMBF;
/*DEF*/	DataCursor ZTHYUMQUOWLDNO;
/*SET*/	VAAHGUIGPSGLHA = WJGRJVQSPOOSLA;
/*INC*/	if (!INC(VAAHGUIGPSGLHA, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (VAAHGUIGPSGLHA.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	BNQBWTQMBDSMBF = VAAHGUIGPSGLHA.container->value.bracket_data.chain->at_before_first();
	ZTHYUMQUOWLDNO   = VAAHGUIGPSGLHA.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_n1;
/*DEF*/	DataCursor r_n1;
/*SET*/	l_n1 = BNQBWTQMBDSMBF;
/*SET*/	r_n1 = BNQBWTQMBDSMBF;
/*JMP*/	goto label_VUCOIMMQSZMSRZ_firststep;
label_VUCOIMMQSZMSRZ: 
/*INC*/	if (!INC(r_n1, ZTHYUMQUOWLDNO)) goto sentence_after_2;
label_VUCOIMMQSZMSRZ_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor QPMADDCVHINJJD;
/*SET*/	QPMADDCVHINJJD = r_n1;
 if (!SLIDE(QPMADDCVHINJJD, ZTHYUMQUOWLDNO, l_A, r_A)) goto label_VUCOIMMQSZMSRZ;
//// [ e.1 ] 
/*DEF*/	DataCursor l_n2;
/*DEF*/	DataCursor r_n2;
/*SET*/	l_n2 = QPMADDCVHINJJD;
/*SET*/	r_n2 = ZTHYUMQUOWLDNO;
//// [ empty ] 
/*ISEMPTY*/	if (VAAHGUIGPSGLHA!=0 && arg_to != VAAHGUIGPSGLHA) goto label_VUCOIMMQSZMSRZ;

// подстановка 
// new chain 
DataChain *chain_FYWRWSDAGMVYQH = context->putChain(); 
DataChain* TQWFYIAISTVHBZ = new DataChain(); 
DataContainer* TQWFYIAISTVHBZ_execbr = newRefExecBrackets(PolnAnaliz, TQWFYIAISTVHBZ, "PolnAnaliz");
chain_FYWRWSDAGMVYQH->append(TQWFYIAISTVHBZ_execbr);
DataChain* VROOVJFTEGSKJR = new DataChain(); 
TQWFYIAISTVHBZ->append(newRefStructBrackets(VROOVJFTEGSKJR)); 
VROOVJFTEGSKJR->append(newRefText("1")); 
DataChain* JYNGLSSHITXZGF = new DataChain(); 
TQWFYIAISTVHBZ->append(newRefStructBrackets(JYNGLSSHITXZGF)); 
JYNGLSSHITXZGF->append_copy(l_1, r_1, context); 
DataChain* WAWLYZGKXYSPEK = new DataChain(); 
TQWFYIAISTVHBZ->append(newRefStructBrackets(WAWLYZGKXYSPEK)); 
WAWLYZGKXYSPEK->append_copy(l_2, r_2, context); 
WAWLYZGKXYSPEK->append_copy(l_A, r_A, context); 
DataChain* DARMEQDKXJFLKJ = new DataChain(); 
TQWFYIAISTVHBZ->append(newRefStructBrackets(DARMEQDKXJFLKJ)); 
DARMEQDKXJFLKJ->append_copy(l_n1, r_n1, context); 
DARMEQDKXJFLKJ->append_copy(l_n2, r_n2, context); 
context->pushExecuteCall(TQWFYIAISTVHBZ_execbr); // PolnAnaliz
return chain_FYWRWSDAGMVYQH;
}
sentence_after_2: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* PolnAnalizEny(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor WNWWFZINWTXSCJ;
/*DEF*/	DataCursor BPAWNHBSKILHSD;
/*DEF*/	DataCursor UDSLMCRFIPQQBP;
/*SET*/	WNWWFZINWTXSCJ = arg_from;
/*INC*/	if (!INC(WNWWFZINWTXSCJ, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (WNWWFZINWTXSCJ.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	BPAWNHBSKILHSD = WNWWFZINWTXSCJ.container->value.bracket_data.chain->at_before_first();
	UDSLMCRFIPQQBP   = WNWWFZINWTXSCJ.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor BFGCQYXEJHGAHX;
/*DEF*/	DataCursor l_s;
/*DEF*/	DataCursor r_s;
/*SET*/	l_s = BPAWNHBSKILHSD;
/*SET*/	BFGCQYXEJHGAHX = BPAWNHBSKILHSD;
/*INC*/	if (!INC(BFGCQYXEJHGAHX, UDSLMCRFIPQQBP)) goto sentence_after_1;
	if (! isSymbolType(BFGCQYXEJHGAHX.container->type)) goto sentence_after_1;
/*SET*/	r_s = BFGCQYXEJHGAHX;
//// [ empty ] 
/*ISEMPTY*/	if (r_s!=0 && UDSLMCRFIPQQBP != r_s) goto sentence_after_1;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor WJMSKGAPLCJJLT;
/*DEF*/	DataCursor QTROZAMUINYSTP;
/*DEF*/	DataCursor KLZLIVFHVSJTKZ;
/*SET*/	WJMSKGAPLCJJLT = WNWWFZINWTXSCJ;
/*INC*/	if (!INC(WJMSKGAPLCJJLT, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (WJMSKGAPLCJJLT.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	QTROZAMUINYSTP = WJMSKGAPLCJJLT.container->value.bracket_data.chain->at_before_first();
	KLZLIVFHVSJTKZ   = WJMSKGAPLCJJLT.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = QTROZAMUINYSTP;
/*SET*/	r_1 = KLZLIVFHVSJTKZ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor MNKABBALEIZTJP;
/*DEF*/	DataCursor ZHZTQHVNSJBJUL;
/*DEF*/	DataCursor USJTYYNQGPYSVA;
/*SET*/	MNKABBALEIZTJP = WJMSKGAPLCJJLT;
/*INC*/	if (!INC(MNKABBALEIZTJP, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (MNKABBALEIZTJP.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	ZHZTQHVNSJBJUL = MNKABBALEIZTJP.container->value.bracket_data.chain->at_before_first();
	USJTYYNQGPYSVA   = MNKABBALEIZTJP.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = ZHZTQHVNSJBJUL;
/*SET*/	r_2 = USJTYYNQGPYSVA;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor LZDFEDGAUFCHGK;
/*DEF*/	DataCursor GXAPVWBNUHYMEA;
/*DEF*/	DataCursor HSCSNSIIMBMTJS;
/*SET*/	LZDFEDGAUFCHGK = MNKABBALEIZTJP;
/*INC*/	if (!INC(LZDFEDGAUFCHGK, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (LZDFEDGAUFCHGK.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	GXAPVWBNUHYMEA = LZDFEDGAUFCHGK.container->value.bracket_data.chain->at_before_first();
	HSCSNSIIMBMTJS   = LZDFEDGAUFCHGK.container->value.bracket_data.chain->at_last();
//// [ empty ] 
/*ISEMPTY*/	if (GXAPVWBNUHYMEA!=0 && HSCSNSIIMBMTJS != GXAPVWBNUHYMEA) goto sentence_after_1;
//// [ empty ] 
/*ISEMPTY*/	if (LZDFEDGAUFCHGK!=0 && arg_to != LZDFEDGAUFCHGK) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_TPVRJUFSIKDVWY = context->putChain(); 
return chain_TPVRJUFSIKDVWY;
}
sentence_after_1: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor RIZUBLBBGWADBF;
/*DEF*/	DataCursor ZRWMOHSCFWYGAV;
/*DEF*/	DataCursor ZJAOXRDILPOMOI;
/*SET*/	RIZUBLBBGWADBF = arg_from;
/*INC*/	if (!INC(RIZUBLBBGWADBF, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (RIZUBLBBGWADBF.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	ZRWMOHSCFWYGAV = RIZUBLBBGWADBF.container->value.bracket_data.chain->at_before_first();
	ZJAOXRDILPOMOI   = RIZUBLBBGWADBF.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor SJJSWFDYYNVLQR;
/*DEF*/	DataCursor l_s;
/*DEF*/	DataCursor r_s;
/*SET*/	l_s = ZRWMOHSCFWYGAV;
/*SET*/	SJJSWFDYYNVLQR = ZRWMOHSCFWYGAV;
/*INC*/	if (!INC(SJJSWFDYYNVLQR, ZJAOXRDILPOMOI)) goto sentence_after_2;
	if (! isSymbolType(SJJSWFDYYNVLQR.container->type)) goto sentence_after_2;
/*SET*/	r_s = SJJSWFDYYNVLQR;
//// [ empty ] 
/*ISEMPTY*/	if (r_s!=0 && ZJAOXRDILPOMOI != r_s) goto sentence_after_2;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor MHJCSZFRZPSFCC;
/*DEF*/	DataCursor TAYVFICQBEBAZK;
/*DEF*/	DataCursor LEEWJYNEZRXDMF;
/*SET*/	MHJCSZFRZPSFCC = RIZUBLBBGWADBF;
/*INC*/	if (!INC(MHJCSZFRZPSFCC, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (MHJCSZFRZPSFCC.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	TAYVFICQBEBAZK = MHJCSZFRZPSFCC.container->value.bracket_data.chain->at_before_first();
	LEEWJYNEZRXDMF   = MHJCSZFRZPSFCC.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = TAYVFICQBEBAZK;
/*SET*/	r_1 = LEEWJYNEZRXDMF;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor QYWOHWHRGVTZCD;
/*DEF*/	DataCursor VSFDVHPVSNLCWN;
/*DEF*/	DataCursor NDAEFGENZGLNXH;
/*SET*/	QYWOHWHRGVTZCD = MHJCSZFRZPSFCC;
/*INC*/	if (!INC(QYWOHWHRGVTZCD, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (QYWOHWHRGVTZCD.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	VSFDVHPVSNLCWN = QYWOHWHRGVTZCD.container->value.bracket_data.chain->at_before_first();
	NDAEFGENZGLNXH   = QYWOHWHRGVTZCD.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = VSFDVHPVSNLCWN;
/*SET*/	r_2 = NDAEFGENZGLNXH;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor OMKSIGNQHQGXAT;
/*DEF*/	DataCursor PXWLDSXUFANNEB;
/*DEF*/	DataCursor AVSPETVUCZJMUT;
/*SET*/	OMKSIGNQHQGXAT = QYWOHWHRGVTZCD;
/*INC*/	if (!INC(OMKSIGNQHQGXAT, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (OMKSIGNQHQGXAT.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	PXWLDSXUFANNEB = OMKSIGNQHQGXAT.container->value.bracket_data.chain->at_before_first();
	AVSPETVUCZJMUT   = OMKSIGNQHQGXAT.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = PXWLDSXUFANNEB;
/*SET*/	r_3 = PXWLDSXUFANNEB;
/*JMP*/	goto label_KXZYBNIEHUESBL_firststep;
label_KXZYBNIEHUESBL: 
/*INC*/	if (!INC(r_3, AVSPETVUCZJMUT)) goto sentence_after_2;
label_KXZYBNIEHUESBL_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor HLPXNPOYMJEEBH;
/*SET*/	HLPXNPOYMJEEBH = r_3;
/*INC*/	if (!INC(HLPXNPOYMJEEBH, AVSPETVUCZJMUT)) goto label_KXZYBNIEHUESBL;
	if (HLPXNPOYMJEEBH.container->type != text || *(HLPXNPOYMJEEBH.container->value.text + HLPXNPOYMJEEBH.index) != '>') goto label_KXZYBNIEHUESBL;
//// [ empty ] 
/*ISEMPTY*/	if (HLPXNPOYMJEEBH!=0 && AVSPETVUCZJMUT != HLPXNPOYMJEEBH) goto label_KXZYBNIEHUESBL;
//// [ empty ] 
/*ISEMPTY*/	if (OMKSIGNQHQGXAT!=0 && arg_to != OMKSIGNQHQGXAT) goto label_KXZYBNIEHUESBL;

// подстановка 
// new chain 
DataChain *chain_KGUWTZEFPXPBDR = context->putChain(); 
return chain_KGUWTZEFPXPBDR;
}
sentence_after_2: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor XFUTVBUUFJVGZP;
/*DEF*/	DataCursor DFSCRZSWPQDBDZ;
/*DEF*/	DataCursor VNJDAKGVQXHGKA;
/*SET*/	XFUTVBUUFJVGZP = arg_from;
/*INC*/	if (!INC(XFUTVBUUFJVGZP, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (XFUTVBUUFJVGZP.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	DFSCRZSWPQDBDZ = XFUTVBUUFJVGZP.container->value.bracket_data.chain->at_before_first();
	VNJDAKGVQXHGKA   = XFUTVBUUFJVGZP.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor SGYRKPCZGBHHEV;
/*DEF*/	DataCursor l_s;
/*DEF*/	DataCursor r_s;
/*SET*/	l_s = DFSCRZSWPQDBDZ;
/*SET*/	SGYRKPCZGBHHEV = DFSCRZSWPQDBDZ;
/*INC*/	if (!INC(SGYRKPCZGBHHEV, VNJDAKGVQXHGKA)) goto sentence_after_3;
	if (! isSymbolType(SGYRKPCZGBHHEV.container->type)) goto sentence_after_3;
/*SET*/	r_s = SGYRKPCZGBHHEV;
//// [ empty ] 
/*ISEMPTY*/	if (r_s!=0 && VNJDAKGVQXHGKA != r_s) goto sentence_after_3;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor OOKFPDEQKOHKTE;
/*DEF*/	DataCursor VFNORJBEZAWPYZ;
/*DEF*/	DataCursor AUDWUXQLDJWJRI;
/*SET*/	OOKFPDEQKOHKTE = XFUTVBUUFJVGZP;
/*INC*/	if (!INC(OOKFPDEQKOHKTE, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (OOKFPDEQKOHKTE.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	VFNORJBEZAWPYZ = OOKFPDEQKOHKTE.container->value.bracket_data.chain->at_before_first();
	AUDWUXQLDJWJRI   = OOKFPDEQKOHKTE.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_I;
/*DEF*/	DataCursor r_I;
/*SET*/	l_I = VFNORJBEZAWPYZ;
/*SET*/	r_I = AUDWUXQLDJWJRI;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor QAQSJRQJGOAXIU;
/*DEF*/	DataCursor SXHARYEVOZNQGQ;
/*DEF*/	DataCursor BTEQMPPCIIDGZF;
/*SET*/	QAQSJRQJGOAXIU = OOKFPDEQKOHKTE;
/*INC*/	if (!INC(QAQSJRQJGOAXIU, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (QAQSJRQJGOAXIU.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	SXHARYEVOZNQGQ = QAQSJRQJGOAXIU.container->value.bracket_data.chain->at_before_first();
	BTEQMPPCIIDGZF   = QAQSJRQJGOAXIU.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_Y;
/*DEF*/	DataCursor r_Y;
/*SET*/	l_Y = SXHARYEVOZNQGQ;
/*SET*/	r_Y = BTEQMPPCIIDGZF;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor VGQVZEEMWWAZST;
/*DEF*/	DataCursor QOCWVNTDNAQYBC;
/*DEF*/	DataCursor FRMNZRSLRDEXUP;
/*SET*/	VGQVZEEMWWAZST = QAQSJRQJGOAXIU;
/*INC*/	if (!INC(VGQVZEEMWWAZST, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (VGQVZEEMWWAZST.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	QOCWVNTDNAQYBC = VGQVZEEMWWAZST.container->value.bracket_data.chain->at_before_first();
	FRMNZRSLRDEXUP   = VGQVZEEMWWAZST.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = QOCWVNTDNAQYBC;
/*SET*/	r_1 = QOCWVNTDNAQYBC;
/*JMP*/	goto label_SXUHACPTTDYFAQ_firststep;
label_SXUHACPTTDYFAQ: 
/*INC*/	if (!INC(r_1, FRMNZRSLRDEXUP)) goto sentence_after_3;
label_SXUHACPTTDYFAQ_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor WCGPWVNKRVKCOF;
/*SET*/	WCGPWVNKRVKCOF = r_1;
/*INC*/	if (!INC(WCGPWVNKRVKCOF, FRMNZRSLRDEXUP)) goto label_SXUHACPTTDYFAQ;
	if (WCGPWVNKRVKCOF.container->type != text || *(WCGPWVNKRVKCOF.container->value.text + WCGPWVNKRVKCOF.index) != '>') goto label_SXUHACPTTDYFAQ;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor DGBBGPDOXJUUYY;
/*DEF*/	DataCursor l_sss;
/*DEF*/	DataCursor r_sss;
/*SET*/	l_sss = WCGPWVNKRVKCOF;
/*SET*/	DGBBGPDOXJUUYY = WCGPWVNKRVKCOF;
/*INC*/	if (!INC(DGBBGPDOXJUUYY, FRMNZRSLRDEXUP)) goto label_SXUHACPTTDYFAQ;
	if (! isSymbolType(DGBBGPDOXJUUYY.container->type)) goto label_SXUHACPTTDYFAQ;
/*SET*/	r_sss = DGBBGPDOXJUUYY;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = r_sss;
/*SET*/	r_2 = FRMNZRSLRDEXUP;
//// [ empty ] 
/*ISEMPTY*/	if (VGQVZEEMWWAZST!=0 && arg_to != VGQVZEEMWWAZST) goto label_SXUHACPTTDYFAQ;

// подстановка 
// new chain 
DataChain *chain_HTLFSPJHCGFASD = context->putChain(); 
DataChain* VWJGPLBQZJBBLL = new DataChain(); 
DataContainer* VWJGPLBQZJBBLL_execbr = newRefExecBrackets(Analiz, VWJGPLBQZJBBLL, "Analiz");
chain_HTLFSPJHCGFASD->append(VWJGPLBQZJBBLL_execbr);
DataChain* FHNHECBJSNTZZI = new DataChain(); 
VWJGPLBQZJBBLL->append(newRefStructBrackets(FHNHECBJSNTZZI)); 
FHNHECBJSNTZZI->append_copy(l_s, r_s, context); 
DataChain* OXAUWZKJZHZDFW = new DataChain(); 
VWJGPLBQZJBBLL->append(newRefStructBrackets(OXAUWZKJZHZDFW)); 
OXAUWZKJZHZDFW->append_copy(l_I, r_I, context); 
DataChain* DSVWYXGHQILWNC = new DataChain(); 
VWJGPLBQZJBBLL->append(newRefStructBrackets(DSVWYXGHQILWNC)); 
DSVWYXGHQILWNC->append_copy(l_Y, r_Y, context); 
DataChain* NKIJCAPBYQUXVE = new DataChain(); 
VWJGPLBQZJBBLL->append(newRefStructBrackets(NKIJCAPBYQUXVE)); 
NKIJCAPBYQUXVE->append_copy(l_1, r_1, context); 
NKIJCAPBYQUXVE->append(newRefText(">")); 
NKIJCAPBYQUXVE->append_copy(l_sss, r_sss, context); 
NKIJCAPBYQUXVE->append_copy(l_2, r_2, context); 
context->pushExecuteCall(VWJGPLBQZJBBLL_execbr); // Analiz
DataChain* JECIZVVIZTCBDO = new DataChain(); 
DataContainer* JECIZVVIZTCBDO_execbr = newRefExecBrackets(PolnAnaliz, JECIZVVIZTCBDO, "PolnAnaliz");
chain_HTLFSPJHCGFASD->append(JECIZVVIZTCBDO_execbr);
DataChain* QJHVEIGVEKKFKZ = new DataChain(); 
JECIZVVIZTCBDO->append(newRefStructBrackets(QJHVEIGVEKKFKZ)); 
QJHVEIGVEKKFKZ->append_copy(l_s, r_s, context); 
DataChain* NCNKYVOGUWPIIK = new DataChain(); 
JECIZVVIZTCBDO->append(newRefStructBrackets(NCNKYVOGUWPIIK)); 
NCNKYVOGUWPIIK->append_copy(l_I, r_I, context); 
DataChain* TAJDJNTSGIECRP = new DataChain(); 
JECIZVVIZTCBDO->append(newRefStructBrackets(TAJDJNTSGIECRP)); 
TAJDJNTSGIECRP->append_copy(l_Y, r_Y, context); 
DataChain* WINBUMVKTIZKXN = new DataChain(); 
JECIZVVIZTCBDO->append(newRefStructBrackets(WINBUMVKTIZKXN)); 
WINBUMVKTIZKXN->append_copy(l_1, r_1, context); 
WINBUMVKTIZKXN->append_copy(l_sss, r_sss, context); 
WINBUMVKTIZKXN->append(newRefText(">")); 
WINBUMVKTIZKXN->append_copy(l_2, r_2, context); 
context->pushExecuteCall(JECIZVVIZTCBDO_execbr); // PolnAnaliz
return chain_HTLFSPJHCGFASD;
}
sentence_after_3: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_sIY;
/*DEF*/	DataCursor r_sIY;
/*SET*/	l_sIY = arg_from;
/*SET*/	r_sIY = arg_from;
/*JMP*/	goto label_RSDKQBVAPLUDLB_firststep;
label_RSDKQBVAPLUDLB: 
/*INC*/	if (!INC(r_sIY, arg_to)) goto sentence_after_4;
label_RSDKQBVAPLUDLB_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor EGDRHPTKWPIGFR;
/*DEF*/	DataCursor CDMGZJEIBTERRW;
/*DEF*/	DataCursor DLCECZOTVIWLPF;
/*SET*/	EGDRHPTKWPIGFR = r_sIY;
/*INC*/	if (!INC(EGDRHPTKWPIGFR, arg_to)) goto label_RSDKQBVAPLUDLB;
//// ISBRACKET 
	if (EGDRHPTKWPIGFR.container->type != struct_bracket) goto label_RSDKQBVAPLUDLB;
//// JMP_BRACKET 
	CDMGZJEIBTERRW = EGDRHPTKWPIGFR.container->value.bracket_data.chain->at_before_first();
	DLCECZOTVIWLPF   = EGDRHPTKWPIGFR.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = CDMGZJEIBTERRW;
/*SET*/	r_1 = DLCECZOTVIWLPF;
//// [ empty ] 
/*ISEMPTY*/	if (EGDRHPTKWPIGFR!=0 && arg_to != EGDRHPTKWPIGFR) goto label_RSDKQBVAPLUDLB;

// подстановка 
// new chain 
DataChain *chain_IBYANRAAHOAWOM = context->putChain(); 
DataChain* XZORZGVKTIAZLZ = new DataChain(); 
DataContainer* XZORZGVKTIAZLZ_execbr = newRefExecBrackets(PolnAnaliz, XZORZGVKTIAZLZ, "PolnAnaliz");
chain_IBYANRAAHOAWOM->append(XZORZGVKTIAZLZ_execbr);
XZORZGVKTIAZLZ->append_copy(l_sIY, r_sIY, context); 
DataChain* YNKMWBCRUJPDZQ = new DataChain(); 
XZORZGVKTIAZLZ->append(newRefStructBrackets(YNKMWBCRUJPDZQ)); 
YNKMWBCRUJPDZQ->append(newRefText(">")); 
YNKMWBCRUJPDZQ->append_copy(l_1, r_1, context); 
context->pushExecuteCall(XZORZGVKTIAZLZ_execbr); // PolnAnaliz
return chain_IBYANRAAHOAWOM;
}
sentence_after_4: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}
