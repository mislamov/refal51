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
SRTKJPREPGGXRP->append(newRefText("Who is first?  ( 1 - pc  2 - you ) ", __LINE__)); 
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
NPLJVRVIPYAMYE->append(newRefText("2", __LINE__)); 
DataChain* HWQNQRQPMXUJJL = new DataChain(); 
VABOYGPOEYLFPB->append(newRefStructBrackets(HWQNQRQPMXUJJL)); 
HWQNQRQPMXUJJL->append(newRefText("1", __LINE__)); 
DataChain* OOVAOWUXWHMSNC = new DataChain(); 
VABOYGPOEYLFPB->append(newRefStructBrackets(OOVAOWUXWHMSNC)); 
DataChain* BXCOKSFZKVATXD = new DataChain(); 
VABOYGPOEYLFPB->append(newRefStructBrackets(BXCOKSFZKVATXD)); 
BXCOKSFZKVATXD->append(newRefText("23456789", __LINE__)); 
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
OJWAYYZPVSCMPS->append(newRefText("2", __LINE__)); 
DataChain* AJLFVGUBFAAOVL = new DataChain(); 
AUGZQRCDDIUTEI->append(newRefStructBrackets(AJLFVGUBFAAOVL)); 
DataChain* ZYLNTRKDCPWSRT = new DataChain(); 
AUGZQRCDDIUTEI->append(newRefStructBrackets(ZYLNTRKDCPWSRT)); 
DataChain* ESJWHDIZCOBZCN = new DataChain(); 
AUGZQRCDDIUTEI->append(newRefStructBrackets(ESJWHDIZCOBZCN)); 
ESJWHDIZCOBZCN->append(newRefText("123456789", __LINE__)); 
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
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = arg_from;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_CBLDVGYLWGBUSB = context->putChain(); 
DataChain* MBORXTLHCSMPXO = new DataChain(); 
DataContainer* MBORXTLHCSMPXO_execbr = newRefExecBrackets(Prout, MBORXTLHCSMPXO, "Prout");
chain_CBLDVGYLWGBUSB->append(MBORXTLHCSMPXO_execbr);
MBORXTLHCSMPXO->append(newRefText("Game: ", __LINE__)); 
MBORXTLHCSMPXO->append_copy(l_e, r_e, context); 
context->pushExecuteCall(MBORXTLHCSMPXO_execbr); // Prout
DataChain* HGMGNKEUFDXOTO = new DataChain(); 
DataContainer* HGMGNKEUFDXOTO_execbr = newRefExecBrackets(Game_, HGMGNKEUFDXOTO, "Game_");
chain_CBLDVGYLWGBUSB->append(HGMGNKEUFDXOTO_execbr);
HGMGNKEUFDXOTO->append_copy(l_e, r_e, context); 
context->pushExecuteCall(HGMGNKEUFDXOTO_execbr); // Game_
return chain_CBLDVGYLWGBUSB;
}
sentence_after_1: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Game_(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor GBGXPEYANFETCU;
/*DEF*/	DataCursor KEPZSHKLJUGGGE;
/*DEF*/	DataCursor KJDQZJENPEVQGX;
/*SET*/	GBGXPEYANFETCU = arg_from;
/*INC*/	if (!INC(GBGXPEYANFETCU, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (GBGXPEYANFETCU.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	KEPZSHKLJUGGGE = GBGXPEYANFETCU.container->value.bracket_data.chain->at_before_first();
	KJDQZJENPEVQGX   = GBGXPEYANFETCU.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor IEPJSRDZJAZUJL;
/*DEF*/	DataCursor l_g;
/*DEF*/	DataCursor r_g;
/*SET*/	l_g = KEPZSHKLJUGGGE;
/*SET*/	IEPJSRDZJAZUJL = KEPZSHKLJUGGGE;
/*INC*/	if (!INC(IEPJSRDZJAZUJL, KJDQZJENPEVQGX)) goto sentence_after_1;
	if (! isSymbolType(IEPJSRDZJAZUJL.container->type)) goto sentence_after_1;
/*SET*/	r_g = IEPJSRDZJAZUJL;
//// [ empty ] 
/*ISEMPTY*/	if (r_g!=0 && KJDQZJENPEVQGX != r_g) goto sentence_after_1;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor LCHHBFQMKIMWZO;
/*DEF*/	DataCursor BIWYBXDUUNFSKS;
/*DEF*/	DataCursor RSRTEKMQDCYZJE;
/*SET*/	LCHHBFQMKIMWZO = GBGXPEYANFETCU;
/*INC*/	if (!INC(LCHHBFQMKIMWZO, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (LCHHBFQMKIMWZO.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	BIWYBXDUUNFSKS = LCHHBFQMKIMWZO.container->value.bracket_data.chain->at_before_first();
	RSRTEKMQDCYZJE   = LCHHBFQMKIMWZO.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = BIWYBXDUUNFSKS;
/*SET*/	r_1 = RSRTEKMQDCYZJE;
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
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = FIONEEDDPSZRNA;
/*SET*/	r_2 = VYMMTATBDZQSOE;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor MUVNPPPSUACBAZ;
/*DEF*/	DataCursor UXMHECTHLEGRPU;
/*DEF*/	DataCursor NKDMBPPWEQTGJO;
/*SET*/	MUVNPPPSUACBAZ = EUHMSRQCOZIJIP;
/*INC*/	if (!INC(MUVNPPPSUACBAZ, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (MUVNPPPSUACBAZ.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	UXMHECTHLEGRPU = MUVNPPPSUACBAZ.container->value.bracket_data.chain->at_before_first();
	NKDMBPPWEQTGJO   = MUVNPPPSUACBAZ.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = UXMHECTHLEGRPU;
/*SET*/	r_n = NKDMBPPWEQTGJO;
//// [ empty ] 
/*ISEMPTY*/	if (MUVNPPPSUACBAZ!=0 && arg_to != MUVNPPPSUACBAZ) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_PARMOWZDQYOXYT = context->putChain(); 
DataChain* JBBHAWDYDCPRJB = new DataChain(); 
DataContainer* JBBHAWDYDCPRJB_execbr = newRefExecBrackets(Ekran, JBBHAWDYDCPRJB, "Ekran");
chain_PARMOWZDQYOXYT->append(JBBHAWDYDCPRJB_execbr);
DataChain* XPHOOHPKWQYUHR = new DataChain(); 
JBBHAWDYDCPRJB->append(newRefStructBrackets(XPHOOHPKWQYUHR)); 
XPHOOHPKWQYUHR->append_copy(l_1, r_1, context); 
DataChain* QZHNBNFUVQNQQL = new DataChain(); 
JBBHAWDYDCPRJB->append(newRefStructBrackets(QZHNBNFUVQNQQL)); 
QZHNBNFUVQNQQL->append_copy(l_2, r_2, context); 
context->pushExecuteCall(JBBHAWDYDCPRJB_execbr); // Ekran
DataChain* RZJPXIOGVLIEXD = new DataChain(); 
DataContainer* RZJPXIOGVLIEXD_execbr = newRefExecBrackets(GameIfWin, RZJPXIOGVLIEXD, "GameIfWin");
chain_PARMOWZDQYOXYT->append(RZJPXIOGVLIEXD_execbr);
DataChain* ZUZOSRKRUSVOJB = new DataChain(); 
DataContainer* ZUZOSRKRUSVOJB_execbr = newRefExecBrackets(Ifwin, ZUZOSRKRUSVOJB, "Ifwin");
RZJPXIOGVLIEXD->append(ZUZOSRKRUSVOJB_execbr);
DataChain* RZMWZPOWKJILEF = new DataChain(); 
ZUZOSRKRUSVOJB->append(newRefStructBrackets(RZMWZPOWKJILEF)); 
RZMWZPOWKJILEF->append_copy(l_1, r_1, context); 
DataChain* RAAMDIGPNPUUHG = new DataChain(); 
ZUZOSRKRUSVOJB->append(newRefStructBrackets(RAAMDIGPNPUUHG)); 
RAAMDIGPNPUUHG->append_copy(l_2, r_2, context); 
context->pushExecuteCall(ZUZOSRKRUSVOJB_execbr); // Ifwin
DataChain* XPQNJWJMWAXXMN = new DataChain(); 
RZJPXIOGVLIEXD->append(newRefStructBrackets(XPQNJWJMWAXXMN)); 
XPQNJWJMWAXXMN->append_copy(l_g, r_g, context); 
DataChain* SNHHLQQRZUDLTF = new DataChain(); 
RZJPXIOGVLIEXD->append(newRefStructBrackets(SNHHLQQRZUDLTF)); 
SNHHLQQRZUDLTF->append_copy(l_1, r_1, context); 
DataChain* ZOTCJTNZXUGLSD = new DataChain(); 
RZJPXIOGVLIEXD->append(newRefStructBrackets(ZOTCJTNZXUGLSD)); 
ZOTCJTNZXUGLSD->append_copy(l_2, r_2, context); 
DataChain* SMZCNOCKVFAJFR = new DataChain(); 
RZJPXIOGVLIEXD->append(newRefStructBrackets(SMZCNOCKVFAJFR)); 
SMZCNOCKVFAJFR->append_copy(l_n, r_n, context); 
context->pushExecuteCall(RZJPXIOGVLIEXD_execbr); // GameIfWin
return chain_PARMOWZDQYOXYT;
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
DataChain *chain_MXOTHOWKBJZWUC = context->putChain(); 
return chain_MXOTHOWKBJZWUC;
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
/*DEF*/	DataCursor WLJFRIMPMYHCHZ;
/*SET*/	WLJFRIMPMYHCHZ = arg_from;
/*INC*/	if (!INC(WLJFRIMPMYHCHZ, arg_to)) goto sentence_after_1;
	if (WLJFRIMPMYHCHZ.container->type != text || *(WLJFRIMPMYHCHZ.container->value.text + WLJFRIMPMYHCHZ.index) != '0') goto sentence_after_1;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = WLJFRIMPMYHCHZ;
/*SET*/	r_e = WLJFRIMPMYHCHZ;
/*JMP*/	goto label_RIWKBARXBGFCBC_firststep;
label_RIWKBARXBGFCBC: 
/*INC*/	if (!INC(r_e, arg_to)) goto sentence_after_1;
label_RIWKBARXBGFCBC_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor EYHJUGIXWTBVTR;
/*DEF*/	DataCursor EHBBCPXIFBXVFB;
/*DEF*/	DataCursor CGKCFQCKCOTZGK;
/*SET*/	EYHJUGIXWTBVTR = r_e;
/*INC*/	if (!INC(EYHJUGIXWTBVTR, arg_to)) goto label_RIWKBARXBGFCBC;
//// ISBRACKET 
	if (EYHJUGIXWTBVTR.container->type != struct_bracket) goto label_RIWKBARXBGFCBC;
//// JMP_BRACKET 
	EHBBCPXIFBXVFB = EYHJUGIXWTBVTR.container->value.bracket_data.chain->at_before_first();
	CGKCFQCKCOTZGK   = EYHJUGIXWTBVTR.container->value.bracket_data.chain->at_last();
//// [ empty ] 
/*ISEMPTY*/	if (EHBBCPXIFBXVFB!=0 && CGKCFQCKCOTZGK != EHBBCPXIFBXVFB) goto label_RIWKBARXBGFCBC;
//// [ empty ] 
/*ISEMPTY*/	if (EYHJUGIXWTBVTR!=0 && arg_to != EYHJUGIXWTBVTR) goto label_RIWKBARXBGFCBC;

// подстановка 
// new chain 
DataChain *chain_ROEFWSJRXJHGUZ = context->putChain(); 
DataChain* YUPZWWEIQURPIX = new DataChain(); 
DataContainer* YUPZWWEIQURPIX_execbr = newRefExecBrackets(Prout, YUPZWWEIQURPIX, "Prout");
chain_ROEFWSJRXJHGUZ->append(YUPZWWEIQURPIX_execbr);
YUPZWWEIQURPIX->append(newRefText("Nobody !!!.", __LINE__)); 
context->pushExecuteCall(YUPZWWEIQURPIX_execbr); // Prout
return chain_ROEFWSJRXJHGUZ;
}
sentence_after_1: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor IQFLDUUVEOOWQC;
/*SET*/	IQFLDUUVEOOWQC = arg_from;
/*INC*/	if (!INC(IQFLDUUVEOOWQC, arg_to)) goto sentence_after_2;
	if (IQFLDUUVEOOWQC.container->type != text || *(IQFLDUUVEOOWQC.container->value.text + IQFLDUUVEOOWQC.index) != '1') goto sentence_after_2;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = IQFLDUUVEOOWQC;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_ZFSKUIDUBURISW = context->putChain(); 
DataChain* TBRECUYKABFCVK = new DataChain(); 
DataContainer* TBRECUYKABFCVK_execbr = newRefExecBrackets(Prout, TBRECUYKABFCVK, "Prout");
chain_ZFSKUIDUBURISW->append(TBRECUYKABFCVK_execbr);
TBRECUYKABFCVK->append(newRefText("Winner X", __LINE__)); 
context->pushExecuteCall(TBRECUYKABFCVK_execbr); // Prout
return chain_ZFSKUIDUBURISW;
}
sentence_after_2: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor DZEZTOIDUKUHJZ;
/*SET*/	DZEZTOIDUKUHJZ = arg_from;
/*INC*/	if (!INC(DZEZTOIDUKUHJZ, arg_to)) goto sentence_after_3;
	if (DZEZTOIDUKUHJZ.container->type != text || *(DZEZTOIDUKUHJZ.container->value.text + DZEZTOIDUKUHJZ.index) != '2') goto sentence_after_3;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = DZEZTOIDUKUHJZ;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_IKFOBUCDHTHXDJ = context->putChain(); 
DataChain* GKJELRLPAXAMCE = new DataChain(); 
DataContainer* GKJELRLPAXAMCE_execbr = newRefExecBrackets(Prout, GKJELRLPAXAMCE, "Prout");
chain_IKFOBUCDHTHXDJ->append(GKJELRLPAXAMCE_execbr);
GKJELRLPAXAMCE->append(newRefText("Winner O", __LINE__)); 
context->pushExecuteCall(GKJELRLPAXAMCE_execbr); // Prout
return chain_IKFOBUCDHTHXDJ;
}
sentence_after_3: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor ROSWITDPTPCCLI;
/*SET*/	ROSWITDPTPCCLI = arg_from;
/*INC*/	if (!INC(ROSWITDPTPCCLI, arg_to)) goto sentence_after_4;
	if (ROSWITDPTPCCLI.container->type != text || *(ROSWITDPTPCCLI.container->value.text + ROSWITDPTPCCLI.index) != '0') goto sentence_after_4;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = ROSWITDPTPCCLI;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_BNEFXNXVGZEDYY = context->putChain(); 
DataChain* HNGYCDRUDMPHME = new DataChain(); 
DataContainer* HNGYCDRUDMPHME_execbr = newRefExecBrackets(Game1, HNGYCDRUDMPHME, "Game1");
chain_BNEFXNXVGZEDYY->append(HNGYCDRUDMPHME_execbr);
HNGYCDRUDMPHME->append_copy(l_e, r_e, context); 
context->pushExecuteCall(HNGYCDRUDMPHME_execbr); // Game1
return chain_BNEFXNXVGZEDYY;
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
/*DEF*/	DataCursor CKOTRWOSPOFGHF;
/*DEF*/	DataCursor OZQVLQFXWWKMFX;
/*DEF*/	DataCursor DYYGMDCASZSGOV;
/*SET*/	CKOTRWOSPOFGHF = arg_from;
/*INC*/	if (!INC(CKOTRWOSPOFGHF, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (CKOTRWOSPOFGHF.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	OZQVLQFXWWKMFX = CKOTRWOSPOFGHF.container->value.bracket_data.chain->at_before_first();
	DYYGMDCASZSGOV   = CKOTRWOSPOFGHF.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor SODKJGHCWMBMXR;
/*SET*/	SODKJGHCWMBMXR = OZQVLQFXWWKMFX;
/*INC*/	if (!INC(SODKJGHCWMBMXR, DYYGMDCASZSGOV)) goto sentence_after_1;
	if (SODKJGHCWMBMXR.container->type != text || *(SODKJGHCWMBMXR.container->value.text + SODKJGHCWMBMXR.index) != '1') goto sentence_after_1;
//// [ empty ] 
/*ISEMPTY*/	if (SODKJGHCWMBMXR!=0 && DYYGMDCASZSGOV != SODKJGHCWMBMXR) goto sentence_after_1;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_12;
/*DEF*/	DataCursor r_12;
/*SET*/	l_12 = CKOTRWOSPOFGHF;
/*SET*/	r_12 = CKOTRWOSPOFGHF;
/*JMP*/	goto label_LZNAYXQKQOYZWM_firststep;
label_LZNAYXQKQOYZWM: 
/*INC*/	if (!INC(r_12, arg_to)) goto sentence_after_1;
label_LZNAYXQKQOYZWM_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor YUBZAZCPKHKTKY;
/*DEF*/	DataCursor DZIVCUYPURFMBI;
/*DEF*/	DataCursor SGEKYRGZVXDHPO;
/*SET*/	YUBZAZCPKHKTKY = r_12;
/*INC*/	if (!INC(YUBZAZCPKHKTKY, arg_to)) goto label_LZNAYXQKQOYZWM;
//// ISBRACKET 
	if (YUBZAZCPKHKTKY.container->type != struct_bracket) goto label_LZNAYXQKQOYZWM;
//// JMP_BRACKET 
	DZIVCUYPURFMBI = YUBZAZCPKHKTKY.container->value.bracket_data.chain->at_before_first();
	SGEKYRGZVXDHPO   = YUBZAZCPKHKTKY.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = DZIVCUYPURFMBI;
/*SET*/	r_n = SGEKYRGZVXDHPO;
//// [ empty ] 
/*ISEMPTY*/	if (YUBZAZCPKHKTKY!=0 && arg_to != YUBZAZCPKHKTKY) goto label_LZNAYXQKQOYZWM;

// подстановка 
// new chain 
DataChain *chain_AMVAFYRARXSVKH = context->putChain(); 
DataChain* TQDIHERSIGBHZJ = new DataChain(); 
DataContainer* TQDIHERSIGBHZJ_execbr = newRefExecBrackets(Prout, TQDIHERSIGBHZJ, "Prout");
chain_AMVAFYRARXSVKH->append(TQDIHERSIGBHZJ_execbr);
TQDIHERSIGBHZJ->append(newRefText("hmm ...", __LINE__)); 
context->pushExecuteCall(TQDIHERSIGBHZJ_execbr); // Prout
DataChain* ZUJXMMYSPNARAE = new DataChain(); 
DataContainer* ZUJXMMYSPNARAE_execbr = newRefExecBrackets(Game, ZUJXMMYSPNARAE, "Game");
chain_AMVAFYRARXSVKH->append(ZUJXMMYSPNARAE_execbr);
DataChain* WKEGJCCVHHRJVB = new DataChain(); 
ZUJXMMYSPNARAE->append(newRefStructBrackets(WKEGJCCVHHRJVB)); 
WKEGJCCVHHRJVB->append(newRefText("2", __LINE__)); 
DataChain* JTSQDJOOTGPKNF = new DataChain(); 
DataContainer* JTSQDJOOTGPKNF_execbr = newRefExecBrackets(PlayerHod, JTSQDJOOTGPKNF, "PlayerHod");
ZUJXMMYSPNARAE->append(JTSQDJOOTGPKNF_execbr);
JTSQDJOOTGPKNF->append(newRefText("1", __LINE__)); 
DataChain* PFYCGFIEOWQRWW = new DataChain(); 
DataContainer* PFYCGFIEOWQRWW_execbr = newRefExecBrackets(GetHod, PFYCGFIEOWQRWW, "GetHod");
JTSQDJOOTGPKNF->append(PFYCGFIEOWQRWW_execbr);
PFYCGFIEOWQRWW->append(newRefText("1", __LINE__)); 
DataChain* WPZSQMETOGEPSP = new DataChain(); 
PFYCGFIEOWQRWW->append(newRefStructBrackets(WPZSQMETOGEPSP)); 
WPZSQMETOGEPSP->append(newRefText("1", __LINE__)); 
PFYCGFIEOWQRWW->append_copy(l_12, r_12, context); 
DataChain* XNVJIUPALYYNMK = new DataChain(); 
PFYCGFIEOWQRWW->append(newRefStructBrackets(XNVJIUPALYYNMK)); 
XNVJIUPALYYNMK->append_copy(l_n, r_n, context); 
context->pushExecuteCall(PFYCGFIEOWQRWW_execbr); // GetHod
JTSQDJOOTGPKNF->append_copy(l_12, r_12, context); 
DataChain* MNUVKLHSECDWRA = new DataChain(); 
JTSQDJOOTGPKNF->append(newRefStructBrackets(MNUVKLHSECDWRA)); 
MNUVKLHSECDWRA->append_copy(l_n, r_n, context); 
context->pushExecuteCall(JTSQDJOOTGPKNF_execbr); // PlayerHod
context->pushExecuteCall(ZUJXMMYSPNARAE_execbr); // Game
return chain_AMVAFYRARXSVKH;
}
sentence_after_1: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor CGFMZKGIPDFODK;
/*DEF*/	DataCursor JMJQWIQPUOQHIM;
/*DEF*/	DataCursor VFVUZWYVIJGFUL;
/*SET*/	CGFMZKGIPDFODK = arg_from;
/*INC*/	if (!INC(CGFMZKGIPDFODK, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (CGFMZKGIPDFODK.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	JMJQWIQPUOQHIM = CGFMZKGIPDFODK.container->value.bracket_data.chain->at_before_first();
	VFVUZWYVIJGFUL   = CGFMZKGIPDFODK.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor LKJDUHSJAFBTLK;
/*SET*/	LKJDUHSJAFBTLK = JMJQWIQPUOQHIM;
/*INC*/	if (!INC(LKJDUHSJAFBTLK, VFVUZWYVIJGFUL)) goto sentence_after_2;
	if (LKJDUHSJAFBTLK.container->type != text || *(LKJDUHSJAFBTLK.container->value.text + LKJDUHSJAFBTLK.index) != '2') goto sentence_after_2;
//// [ empty ] 
/*ISEMPTY*/	if (LKJDUHSJAFBTLK!=0 && VFVUZWYVIJGFUL != LKJDUHSJAFBTLK) goto sentence_after_2;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_12;
/*DEF*/	DataCursor r_12;
/*SET*/	l_12 = CGFMZKGIPDFODK;
/*SET*/	r_12 = CGFMZKGIPDFODK;
/*JMP*/	goto label_QCTYDTEAMDCJBP_firststep;
label_QCTYDTEAMDCJBP: 
/*INC*/	if (!INC(r_12, arg_to)) goto sentence_after_2;
label_QCTYDTEAMDCJBP_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor RHTNEGYIWXGCJW;
/*DEF*/	DataCursor LGRSMEAEARWTVJ;
/*DEF*/	DataCursor SJBAOIOJLWHYPN;
/*SET*/	RHTNEGYIWXGCJW = r_12;
/*INC*/	if (!INC(RHTNEGYIWXGCJW, arg_to)) goto label_QCTYDTEAMDCJBP;
//// ISBRACKET 
	if (RHTNEGYIWXGCJW.container->type != struct_bracket) goto label_QCTYDTEAMDCJBP;
//// JMP_BRACKET 
	LGRSMEAEARWTVJ = RHTNEGYIWXGCJW.container->value.bracket_data.chain->at_before_first();
	SJBAOIOJLWHYPN   = RHTNEGYIWXGCJW.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = LGRSMEAEARWTVJ;
/*SET*/	r_n = SJBAOIOJLWHYPN;
//// [ empty ] 
/*ISEMPTY*/	if (RHTNEGYIWXGCJW!=0 && arg_to != RHTNEGYIWXGCJW) goto label_QCTYDTEAMDCJBP;

// подстановка 
// new chain 
DataChain *chain_VRUIHOSWKIFYGT = context->putChain(); 
DataChain* YDHACWYHSGEWZM = new DataChain(); 
DataContainer* YDHACWYHSGEWZM_execbr = newRefExecBrackets(Game, YDHACWYHSGEWZM, "Game");
chain_VRUIHOSWKIFYGT->append(YDHACWYHSGEWZM_execbr);
DataChain* TGONZLTJHGAUHN = new DataChain(); 
YDHACWYHSGEWZM->append(newRefStructBrackets(TGONZLTJHGAUHN)); 
TGONZLTJHGAUHN->append(newRefText("1", __LINE__)); 
DataChain* IHREQGJFWKJSMT = new DataChain(); 
DataContainer* IHREQGJFWKJSMT_execbr = newRefExecBrackets(PlayerHod, IHREQGJFWKJSMT, "PlayerHod");
YDHACWYHSGEWZM->append(IHREQGJFWKJSMT_execbr);
IHREQGJFWKJSMT->append(newRefText("2", __LINE__)); 
DataChain* PJHAEFQZAAULDR = new DataChain(); 
DataContainer* PJHAEFQZAAULDR_execbr = newRefExecBrackets(Prout, PJHAEFQZAAULDR, "Prout");
IHREQGJFWKJSMT->append(PJHAEFQZAAULDR_execbr);
PJHAEFQZAAULDR->append(newRefText("Select number for 0:", __LINE__)); 
context->pushExecuteCall(PJHAEFQZAAULDR_execbr); // Prout
DataChain* CHJCCDYRFVVRIV = new DataChain(); 
DataContainer* CHJCCDYRFVVRIV_execbr = newRefExecBrackets(Card, CHJCCDYRFVVRIV, "Card");
IHREQGJFWKJSMT->append(CHJCCDYRFVVRIV_execbr);
context->pushExecuteCall(CHJCCDYRFVVRIV_execbr); // Card
IHREQGJFWKJSMT->append_copy(l_12, r_12, context); 
DataChain* UYEEGFIVDRCYGU = new DataChain(); 
IHREQGJFWKJSMT->append(newRefStructBrackets(UYEEGFIVDRCYGU)); 
UYEEGFIVDRCYGU->append_copy(l_n, r_n, context); 
context->pushExecuteCall(IHREQGJFWKJSMT_execbr); // PlayerHod
context->pushExecuteCall(YDHACWYHSGEWZM_execbr); // Game
return chain_VRUIHOSWKIFYGT;
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
/*DEF*/	DataCursor RQDREDAKUBNFGU;
/*SET*/	RQDREDAKUBNFGU = arg_from;
/*INC*/	if (!INC(RQDREDAKUBNFGU, arg_to)) goto sentence_after_1;
	if (RQDREDAKUBNFGU.container->type != text || *(RQDREDAKUBNFGU.container->value.text + RQDREDAKUBNFGU.index) != '1') goto sentence_after_1;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor PROQYLOBCWQXKZ;
/*DEF*/	DataCursor l_h;
/*DEF*/	DataCursor r_h;
/*SET*/	l_h = RQDREDAKUBNFGU;
/*SET*/	PROQYLOBCWQXKZ = RQDREDAKUBNFGU;
/*INC*/	if (!INC(PROQYLOBCWQXKZ, arg_to)) goto sentence_after_1;
	if (! isSymbolType(PROQYLOBCWQXKZ.container->type)) goto sentence_after_1;
/*SET*/	r_h = PROQYLOBCWQXKZ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor MAUSJGMHCMHGDN;
/*DEF*/	DataCursor MPHNQKAMHURKTR;
/*DEF*/	DataCursor FFACLVGRZKKLDA;
/*SET*/	MAUSJGMHCMHGDN = r_h;
/*INC*/	if (!INC(MAUSJGMHCMHGDN, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (MAUSJGMHCMHGDN.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	MPHNQKAMHURKTR = MAUSJGMHCMHGDN.container->value.bracket_data.chain->at_before_first();
	FFACLVGRZKKLDA   = MAUSJGMHCMHGDN.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = MPHNQKAMHURKTR;
/*SET*/	r_1 = FFACLVGRZKKLDA;
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
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = YJZGINRNNZWACX;
/*SET*/	r_2 = XAEDRWUDXZRFUS;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor EWJTBOXVYNFHKS;
/*DEF*/	DataCursor TCENAUMNDDXFDM;
/*DEF*/	DataCursor VZCAUTDCCKXAAY;
/*SET*/	EWJTBOXVYNFHKS = CLLTEOJOMONXRQ;
/*INC*/	if (!INC(EWJTBOXVYNFHKS, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (EWJTBOXVYNFHKS.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	TCENAUMNDDXFDM = EWJTBOXVYNFHKS.container->value.bracket_data.chain->at_before_first();
	VZCAUTDCCKXAAY   = EWJTBOXVYNFHKS.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_n1;
/*DEF*/	DataCursor r_n1;
/*SET*/	l_n1 = TCENAUMNDDXFDM;
/*SET*/	r_n1 = TCENAUMNDDXFDM;
/*JMP*/	goto label_DZSXTTOBBGQNGV_firststep;
label_DZSXTTOBBGQNGV: 
/*INC*/	if (!INC(r_n1, VZCAUTDCCKXAAY)) goto sentence_after_1;
label_DZSXTTOBBGQNGV_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor VPJGOJOGLMKXGB;
/*SET*/	VPJGOJOGLMKXGB = r_n1;
 if (!SLIDE(VPJGOJOGLMKXGB, VZCAUTDCCKXAAY, l_h, r_h)) goto label_DZSXTTOBBGQNGV;
//// [ e.1 ] 
/*DEF*/	DataCursor l_n2;
/*DEF*/	DataCursor r_n2;
/*SET*/	l_n2 = VPJGOJOGLMKXGB;
/*SET*/	r_n2 = VZCAUTDCCKXAAY;
//// [ empty ] 
/*ISEMPTY*/	if (EWJTBOXVYNFHKS!=0 && arg_to != EWJTBOXVYNFHKS) goto label_DZSXTTOBBGQNGV;

// подстановка 
// new chain 
DataChain *chain_WRXBZMQRLXVOBT = context->putChain(); 
DataChain* WHXGINFGFRCCLM = new DataChain(); 
DataContainer* WHXGINFGFRCCLM_execbr = newRefExecBrackets(Prout, WHXGINFGFRCCLM, "Prout");
chain_WRXBZMQRLXVOBT->append(WHXGINFGFRCCLM_execbr);
WHXGINFGFRCCLM->append(newRefText("step:", __LINE__)); 
WHXGINFGFRCCLM->append_copy(l_h, r_h, context); 
context->pushExecuteCall(WHXGINFGFRCCLM_execbr); // Prout
DataChain* ZNMJUGWWBSQFCI = new DataChain(); 
chain_WRXBZMQRLXVOBT->append(newRefStructBrackets(ZNMJUGWWBSQFCI)); 
ZNMJUGWWBSQFCI->append_copy(l_1, r_1, context); 
ZNMJUGWWBSQFCI->append_copy(l_h, r_h, context); 
DataChain* HUBSJOLLMSQSGH = new DataChain(); 
chain_WRXBZMQRLXVOBT->append(newRefStructBrackets(HUBSJOLLMSQSGH)); 
HUBSJOLLMSQSGH->append_copy(l_2, r_2, context); 
DataChain* MCPHELSOTFLBGS = new DataChain(); 
chain_WRXBZMQRLXVOBT->append(newRefStructBrackets(MCPHELSOTFLBGS)); 
MCPHELSOTFLBGS->append_copy(l_n1, r_n1, context); 
MCPHELSOTFLBGS->append_copy(l_n2, r_n2, context); 
return chain_WRXBZMQRLXVOBT;
}
sentence_after_1: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor FNPCUZSRUPCHYN;
/*SET*/	FNPCUZSRUPCHYN = arg_from;
/*INC*/	if (!INC(FNPCUZSRUPCHYN, arg_to)) goto sentence_after_2;
	if (FNPCUZSRUPCHYN.container->type != text || *(FNPCUZSRUPCHYN.container->value.text + FNPCUZSRUPCHYN.index) != '2') goto sentence_after_2;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor VZHCPQUGRIWNIQ;
/*DEF*/	DataCursor l_h;
/*DEF*/	DataCursor r_h;
/*SET*/	l_h = FNPCUZSRUPCHYN;
/*SET*/	VZHCPQUGRIWNIQ = FNPCUZSRUPCHYN;
/*INC*/	if (!INC(VZHCPQUGRIWNIQ, arg_to)) goto sentence_after_2;
	if (! isSymbolType(VZHCPQUGRIWNIQ.container->type)) goto sentence_after_2;
/*SET*/	r_h = VZHCPQUGRIWNIQ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor XDFJPWPXFBLKPN;
/*DEF*/	DataCursor PEELFJMTKUQPZO;
/*DEF*/	DataCursor MWNLMBUPMKTLPT;
/*SET*/	XDFJPWPXFBLKPN = r_h;
/*INC*/	if (!INC(XDFJPWPXFBLKPN, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (XDFJPWPXFBLKPN.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	PEELFJMTKUQPZO = XDFJPWPXFBLKPN.container->value.bracket_data.chain->at_before_first();
	MWNLMBUPMKTLPT   = XDFJPWPXFBLKPN.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = PEELFJMTKUQPZO;
/*SET*/	r_1 = MWNLMBUPMKTLPT;
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
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = NEMWBORIFSUQHC;
/*SET*/	r_2 = ESKMKHSSMVNONW;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor AFXWHGBIBABVQO;
/*DEF*/	DataCursor PQFOVIUSSQFQWE;
/*DEF*/	DataCursor HTXDZUJTLNTXMR;
/*SET*/	AFXWHGBIBABVQO = NDMPDSYDSGVFPE;
/*INC*/	if (!INC(AFXWHGBIBABVQO, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (AFXWHGBIBABVQO.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	PQFOVIUSSQFQWE = AFXWHGBIBABVQO.container->value.bracket_data.chain->at_before_first();
	HTXDZUJTLNTXMR   = AFXWHGBIBABVQO.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_n1;
/*DEF*/	DataCursor r_n1;
/*SET*/	l_n1 = PQFOVIUSSQFQWE;
/*SET*/	r_n1 = PQFOVIUSSQFQWE;
/*JMP*/	goto label_JXXWTLGGKYTBIO_firststep;
label_JXXWTLGGKYTBIO: 
/*INC*/	if (!INC(r_n1, HTXDZUJTLNTXMR)) goto sentence_after_2;
label_JXXWTLGGKYTBIO_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor LYDNILQADOJSKK;
/*SET*/	LYDNILQADOJSKK = r_n1;
 if (!SLIDE(LYDNILQADOJSKK, HTXDZUJTLNTXMR, l_h, r_h)) goto label_JXXWTLGGKYTBIO;
//// [ e.1 ] 
/*DEF*/	DataCursor l_n2;
/*DEF*/	DataCursor r_n2;
/*SET*/	l_n2 = LYDNILQADOJSKK;
/*SET*/	r_n2 = HTXDZUJTLNTXMR;
//// [ empty ] 
/*ISEMPTY*/	if (AFXWHGBIBABVQO!=0 && arg_to != AFXWHGBIBABVQO) goto label_JXXWTLGGKYTBIO;

// подстановка 
// new chain 
DataChain *chain_RINTDWCLDVDXRO = context->putChain(); 
DataChain* PBYJZWYYOJUOTH = new DataChain(); 
DataContainer* PBYJZWYYOJUOTH_execbr = newRefExecBrackets(Prout, PBYJZWYYOJUOTH, "Prout");
chain_RINTDWCLDVDXRO->append(PBYJZWYYOJUOTH_execbr);
PBYJZWYYOJUOTH->append(newRefText("step:", __LINE__)); 
PBYJZWYYOJUOTH->append_copy(l_h, r_h, context); 
context->pushExecuteCall(PBYJZWYYOJUOTH_execbr); // Prout
DataChain* WMLVRGLFZDZDBT = new DataChain(); 
chain_RINTDWCLDVDXRO->append(newRefStructBrackets(WMLVRGLFZDZDBT)); 
WMLVRGLFZDZDBT->append_copy(l_1, r_1, context); 
DataChain* UBXUOFFVNCRSWS = new DataChain(); 
chain_RINTDWCLDVDXRO->append(newRefStructBrackets(UBXUOFFVNCRSWS)); 
UBXUOFFVNCRSWS->append_copy(l_2, r_2, context); 
UBXUOFFVNCRSWS->append_copy(l_h, r_h, context); 
DataChain* AZNMOIJOIVVGOB = new DataChain(); 
chain_RINTDWCLDVDXRO->append(newRefStructBrackets(AZNMOIJOIVVGOB)); 
AZNMOIJOIVVGOB->append_copy(l_n1, r_n1, context); 
AZNMOIJOIVVGOB->append_copy(l_n2, r_n2, context); 
return chain_RINTDWCLDVDXRO;
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
DataChain *chain_QPNCKWVNHKEBMT = context->putChain(); 
return chain_QPNCKWVNHKEBMT;
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
/*DEF*/	DataCursor DHVYGKJISUXHAT;
/*DEF*/	DataCursor l_v;
/*DEF*/	DataCursor r_v;
/*SET*/	l_v = arg_from;
/*SET*/	DHVYGKJISUXHAT = arg_from;
/*INC*/	if (!INC(DHVYGKJISUXHAT, arg_to)) goto sentence_after_1;
	if (! isSymbolType(DHVYGKJISUXHAT.container->type)) goto sentence_after_1;
/*SET*/	r_v = DHVYGKJISUXHAT;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = r_v;
/*SET*/	r_e = r_v;
/*JMP*/	goto label_MUUDQBHMKNHFXA_firststep;
label_MUUDQBHMKNHFXA: 
/*INC*/	if (!INC(r_e, arg_to)) goto sentence_after_1;
label_MUUDQBHMKNHFXA_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor XQXKJLZZQTSJFA;
/*DEF*/	DataCursor EEDFUUJKOLXJOQ;
/*DEF*/	DataCursor KDVFEPVLHVHRWT;
/*SET*/	XQXKJLZZQTSJFA = r_e;
/*INC*/	if (!INC(XQXKJLZZQTSJFA, arg_to)) goto label_MUUDQBHMKNHFXA;
//// ISBRACKET 
	if (XQXKJLZZQTSJFA.container->type != struct_bracket) goto label_MUUDQBHMKNHFXA;
//// JMP_BRACKET 
	EEDFUUJKOLXJOQ = XQXKJLZZQTSJFA.container->value.bracket_data.chain->at_before_first();
	KDVFEPVLHVHRWT   = XQXKJLZZQTSJFA.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_not;
/*DEF*/	DataCursor r_not;
/*SET*/	l_not = EEDFUUJKOLXJOQ;
/*SET*/	r_not = KDVFEPVLHVHRWT;
//// [ empty ] 
/*ISEMPTY*/	if (XQXKJLZZQTSJFA!=0 && arg_to != XQXKJLZZQTSJFA) goto label_MUUDQBHMKNHFXA;

// подстановка 
// new chain 
DataChain *chain_FDUKXFFJPSSWYX = context->putChain(); 
DataChain* LIJJHEVRYXOZBA = new DataChain(); 
DataContainer* LIJJHEVRYXOZBA_execbr = newRefExecBrackets(UseHod, LIJJHEVRYXOZBA, "UseHod");
chain_FDUKXFFJPSSWYX->append(LIJJHEVRYXOZBA_execbr);
LIJJHEVRYXOZBA->append_copy(l_v, r_v, context); 
LIJJHEVRYXOZBA->append_copy(l_e, r_e, context); 
DataChain* FPFMOWGRGONUAT = new DataChain(); 
LIJJHEVRYXOZBA->append(newRefStructBrackets(FPFMOWGRGONUAT)); 
FPFMOWGRGONUAT->append_copy(l_not, r_not, context); 
DataChain* DQLAHYGGYLJDDJ = new DataChain(); 
LIJJHEVRYXOZBA->append(newRefStructBrackets(DQLAHYGGYLJDDJ)); 
DataChain* HMLTEDZLODSRKE = new DataChain(); 
DataContainer* HMLTEDZLODSRKE_execbr = newRefExecBrackets(WriteXO, HMLTEDZLODSRKE, "WriteXO");
DQLAHYGGYLJDDJ->append(HMLTEDZLODSRKE_execbr);
HMLTEDZLODSRKE->append_copy(l_e, r_e, context); 
DataChain* UTGTNKNTARJKPX = new DataChain(); 
HMLTEDZLODSRKE->append(newRefStructBrackets(UTGTNKNTARJKPX)); 
UTGTNKNTARJKPX->append(newRefText(">", __LINE__)); 
UTGTNKNTARJKPX->append_copy(l_not, r_not, context); 
context->pushExecuteCall(HMLTEDZLODSRKE_execbr); // WriteXO
context->pushExecuteCall(LIJJHEVRYXOZBA_execbr); // UseHod
return chain_FDUKXFFJPSSWYX;
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
/*JMP*/	goto label_INOVGZDTHUNWOO_firststep;
label_INOVGZDTHUNWOO: 
/*INC*/	if (!INC(r_e, arg_to)) goto sentence_after_1;
label_INOVGZDTHUNWOO_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor XVJJMPSVKNHKWJ;
/*DEF*/	DataCursor OPMMLEBKSUCVZQ;
/*DEF*/	DataCursor LYQNWCMBVBHRML;
/*SET*/	XVJJMPSVKNHKWJ = r_e;
/*INC*/	if (!INC(XVJJMPSVKNHKWJ, arg_to)) goto label_INOVGZDTHUNWOO;
//// ISBRACKET 
	if (XVJJMPSVKNHKWJ.container->type != struct_bracket) goto label_INOVGZDTHUNWOO;
//// JMP_BRACKET 
	OPMMLEBKSUCVZQ = XVJJMPSVKNHKWJ.container->value.bracket_data.chain->at_before_first();
	LYQNWCMBVBHRML   = XVJJMPSVKNHKWJ.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor OWPJBWYVWTGTOQ;
/*SET*/	OWPJBWYVWTGTOQ = OPMMLEBKSUCVZQ;
/*INC*/	if (!INC(OWPJBWYVWTGTOQ, LYQNWCMBVBHRML)) goto label_INOVGZDTHUNWOO;
	if (OWPJBWYVWTGTOQ.container->type != text || *(OWPJBWYVWTGTOQ.container->value.text + OWPJBWYVWTGTOQ.index) != '#') goto label_INOVGZDTHUNWOO;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor NMICXAPZARKNNX;
/*DEF*/	DataCursor l_s;
/*DEF*/	DataCursor r_s;
/*SET*/	l_s = OWPJBWYVWTGTOQ;
/*SET*/	NMICXAPZARKNNX = OWPJBWYVWTGTOQ;
/*INC*/	if (!INC(NMICXAPZARKNNX, LYQNWCMBVBHRML)) goto label_INOVGZDTHUNWOO;
	if (! isSymbolType(NMICXAPZARKNNX.container->type)) goto label_INOVGZDTHUNWOO;
/*SET*/	r_s = NMICXAPZARKNNX;
//// [ empty ] 
/*ISEMPTY*/	if (r_s!=0 && LYQNWCMBVBHRML != r_s) goto label_INOVGZDTHUNWOO;
//// [ empty ] 
/*ISEMPTY*/	if (XVJJMPSVKNHKWJ!=0 && arg_to != XVJJMPSVKNHKWJ) goto label_INOVGZDTHUNWOO;

// подстановка 
// new chain 
DataChain *chain_MTCJGHECQUDOSR = context->putChain(); 
chain_MTCJGHECQUDOSR->append_copy(l_s, r_s, context); 
return chain_MTCJGHECQUDOSR;
}
sentence_after_1: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor TJXYAAYKQRXYCR;
/*DEF*/	DataCursor l_v;
/*DEF*/	DataCursor r_v;
/*SET*/	l_v = arg_from;
/*SET*/	TJXYAAYKQRXYCR = arg_from;
/*INC*/	if (!INC(TJXYAAYKQRXYCR, arg_to)) goto sentence_after_2;
	if (! isSymbolType(TJXYAAYKQRXYCR.container->type)) goto sentence_after_2;
/*SET*/	r_v = TJXYAAYKQRXYCR;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = r_v;
/*SET*/	r_e = r_v;
/*JMP*/	goto label_XUWJXNPQJNBKCP_firststep;
label_XUWJXNPQJNBKCP: 
/*INC*/	if (!INC(r_e, arg_to)) goto sentence_after_2;
label_XUWJXNPQJNBKCP_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor DMOKALXAPEMVBQ;
/*DEF*/	DataCursor LZSVXZKUTAPPWG;
/*DEF*/	DataCursor ZPDPYZKZCVBNTC;
/*SET*/	DMOKALXAPEMVBQ = r_e;
/*INC*/	if (!INC(DMOKALXAPEMVBQ, arg_to)) goto label_XUWJXNPQJNBKCP;
//// ISBRACKET 
	if (DMOKALXAPEMVBQ.container->type != struct_bracket) goto label_XUWJXNPQJNBKCP;
//// JMP_BRACKET 
	LZSVXZKUTAPPWG = DMOKALXAPEMVBQ.container->value.bracket_data.chain->at_before_first();
	ZPDPYZKZCVBNTC   = DMOKALXAPEMVBQ.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_not;
/*DEF*/	DataCursor r_not;
/*SET*/	l_not = LZSVXZKUTAPPWG;
/*SET*/	r_not = ZPDPYZKZCVBNTC;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor VFXSXPJAOXTFHV;
/*DEF*/	DataCursor XXYTGOKRCXAETA;
/*DEF*/	DataCursor UQGNDMPHWZYIAY;
/*SET*/	VFXSXPJAOXTFHV = DMOKALXAPEMVBQ;
/*INC*/	if (!INC(VFXSXPJAOXTFHV, arg_to)) goto label_XUWJXNPQJNBKCP;
//// ISBRACKET 
	if (VFXSXPJAOXTFHV.container->type != struct_bracket) goto label_XUWJXNPQJNBKCP;
//// JMP_BRACKET 
	XXYTGOKRCXAETA = VFXSXPJAOXTFHV.container->value.bracket_data.chain->at_before_first();
	UQGNDMPHWZYIAY   = VFXSXPJAOXTFHV.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_Wr;
/*DEF*/	DataCursor r_Wr;
/*SET*/	l_Wr = XXYTGOKRCXAETA;
/*SET*/	r_Wr = UQGNDMPHWZYIAY;
//// [ empty ] 
/*ISEMPTY*/	if (VFXSXPJAOXTFHV!=0 && arg_to != VFXSXPJAOXTFHV) goto label_XUWJXNPQJNBKCP;

// подстановка 
// new chain 
DataChain *chain_ABJRQGEPPXYJST = context->putChain(); 
DataChain* TYZUVLDVYBSUXK = new DataChain(); 
DataContainer* TYZUVLDVYBSUXK_execbr = newRefExecBrackets(UHod, TYZUVLDVYBSUXK, "UHod");
chain_ABJRQGEPPXYJST->append(TYZUVLDVYBSUXK_execbr);
DataChain* BMFZVRTNOVIDZN = new DataChain(); 
TYZUVLDVYBSUXK->append(newRefStructBrackets(BMFZVRTNOVIDZN)); 
DataChain* PGHOZVAFMSNSNQ = new DataChain(); 
DataContainer* PGHOZVAFMSNSNQ_execbr = newRefExecBrackets(Switch, PGHOZVAFMSNSNQ, "Switch");
BMFZVRTNOVIDZN->append(PGHOZVAFMSNSNQ_execbr);
PGHOZVAFMSNSNQ->append_copy(l_v, r_v, context); 
PGHOZVAFMSNSNQ->append_copy(l_Wr, r_Wr, context); 
context->pushExecuteCall(PGHOZVAFMSNSNQ_execbr); // Switch
DataChain* IVMVUBCWTFSRQT = new DataChain(); 
TYZUVLDVYBSUXK->append(newRefStructBrackets(IVMVUBCWTFSRQT)); 
IVMVUBCWTFSRQT->append_copy(l_Wr, r_Wr, context); 
DataChain* MKNEPBHOWEJAZH = new DataChain(); 
TYZUVLDVYBSUXK->append(newRefStructBrackets(MKNEPBHOWEJAZH)); 
MKNEPBHOWEJAZH->append_copy(l_not, r_not, context); 
context->pushExecuteCall(TYZUVLDVYBSUXK_execbr); // UHod
return chain_ABJRQGEPPXYJST;
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
/*DEF*/	DataCursor KWCMMTPIXXXLZQ;
/*DEF*/	DataCursor YSXTWWTAIDYAXY;
/*DEF*/	DataCursor QLEPRXIBEXXYFV;
/*SET*/	KWCMMTPIXXXLZQ = arg_from;
/*INC*/	if (!INC(KWCMMTPIXXXLZQ, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (KWCMMTPIXXXLZQ.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	YSXTWWTAIDYAXY = KWCMMTPIXXXLZQ.container->value.bracket_data.chain->at_before_first();
	QLEPRXIBEXXYFV   = KWCMMTPIXXXLZQ.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_Sw;
/*DEF*/	DataCursor r_Sw;
/*SET*/	l_Sw = YSXTWWTAIDYAXY;
/*SET*/	r_Sw = QLEPRXIBEXXYFV;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor SDDYGTHCUYYFWP;
/*DEF*/	DataCursor JSFYBGLGZMBINT;
/*DEF*/	DataCursor ATTNHODTONPYZW;
/*SET*/	SDDYGTHCUYYFWP = KWCMMTPIXXXLZQ;
/*INC*/	if (!INC(SDDYGTHCUYYFWP, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (SDDYGTHCUYYFWP.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	JSFYBGLGZMBINT = SDDYGTHCUYYFWP.container->value.bracket_data.chain->at_before_first();
	ATTNHODTONPYZW   = SDDYGTHCUYYFWP.container->value.bracket_data.chain->at_last();
//// [ &.name <any> ] 
/*DEF*/	DataCursor OTKGNGUPHPKXEA;
/*SET*/	OTKGNGUPHPKXEA = JSFYBGLGZMBINT;
 if (!SLIDE(OTKGNGUPHPKXEA, ATTNHODTONPYZW, l_Sw, r_Sw)) goto sentence_after_1;
//// [ e.1 ] 
/*DEF*/	DataCursor l_Wr;
/*DEF*/	DataCursor r_Wr;
/*SET*/	l_Wr = OTKGNGUPHPKXEA;
/*SET*/	r_Wr = ATTNHODTONPYZW;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor TOWZABSDNVQHKF;
/*DEF*/	DataCursor CMOFISFRFQGVPM;
/*DEF*/	DataCursor VORPJFZSLZMPJJ;
/*SET*/	TOWZABSDNVQHKF = SDDYGTHCUYYFWP;
/*INC*/	if (!INC(TOWZABSDNVQHKF, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (TOWZABSDNVQHKF.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	CMOFISFRFQGVPM = TOWZABSDNVQHKF.container->value.bracket_data.chain->at_before_first();
	VORPJFZSLZMPJJ   = TOWZABSDNVQHKF.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor NEHRYKXJZUBUAC;
/*DEF*/	DataCursor l_s;
/*DEF*/	DataCursor r_s;
/*SET*/	l_s = CMOFISFRFQGVPM;
/*SET*/	NEHRYKXJZUBUAC = CMOFISFRFQGVPM;
/*INC*/	if (!INC(NEHRYKXJZUBUAC, VORPJFZSLZMPJJ)) goto sentence_after_1;
	if (! isSymbolType(NEHRYKXJZUBUAC.container->type)) goto sentence_after_1;
/*SET*/	r_s = NEHRYKXJZUBUAC;
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = r_s;
/*SET*/	r_n = VORPJFZSLZMPJJ;
//// [ empty ] 
/*ISEMPTY*/	if (TOWZABSDNVQHKF!=0 && arg_to != TOWZABSDNVQHKF) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_CLFKCYZOBGHTUO = context->putChain(); 
chain_CLFKCYZOBGHTUO->append_copy(l_s, r_s, context); 
return chain_CLFKCYZOBGHTUO;
}
sentence_after_1: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor XRAJVPRECWGXXP;
/*DEF*/	DataCursor SWCGMMVEDEWDMF;
/*DEF*/	DataCursor NQWCUQDSCILIQE;
/*SET*/	XRAJVPRECWGXXP = arg_from;
/*INC*/	if (!INC(XRAJVPRECWGXXP, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (XRAJVPRECWGXXP.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	SWCGMMVEDEWDMF = XRAJVPRECWGXXP.container->value.bracket_data.chain->at_before_first();
	NQWCUQDSCILIQE   = XRAJVPRECWGXXP.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_Sw;
/*DEF*/	DataCursor r_Sw;
/*SET*/	l_Sw = SWCGMMVEDEWDMF;
/*SET*/	r_Sw = NQWCUQDSCILIQE;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor CIHLUILGMFCSWT;
/*DEF*/	DataCursor WKKXLCBHQKVCSW;
/*DEF*/	DataCursor JEBKRJLPGFGRAT;
/*SET*/	CIHLUILGMFCSWT = XRAJVPRECWGXXP;
/*INC*/	if (!INC(CIHLUILGMFCSWT, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (CIHLUILGMFCSWT.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	WKKXLCBHQKVCSW = CIHLUILGMFCSWT.container->value.bracket_data.chain->at_before_first();
	JEBKRJLPGFGRAT   = CIHLUILGMFCSWT.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor ZBSGUVZIFNHYXW;
/*DEF*/	DataCursor l_s1;
/*DEF*/	DataCursor r_s1;
/*SET*/	l_s1 = WKKXLCBHQKVCSW;
/*SET*/	ZBSGUVZIFNHYXW = WKKXLCBHQKVCSW;
/*INC*/	if (!INC(ZBSGUVZIFNHYXW, JEBKRJLPGFGRAT)) goto sentence_after_2;
	if (! isSymbolType(ZBSGUVZIFNHYXW.container->type)) goto sentence_after_2;
/*SET*/	r_s1 = ZBSGUVZIFNHYXW;
//// [ `a` <any> ] 
/*DEF*/	DataCursor JSJAVWAUXPANNA;
/*SET*/	JSJAVWAUXPANNA = r_s1;
/*INC*/	if (!INC(JSJAVWAUXPANNA, JEBKRJLPGFGRAT)) goto sentence_after_2;
	if (JSJAVWAUXPANNA.container->type != text || *(JSJAVWAUXPANNA.container->value.text + JSJAVWAUXPANNA.index) != '=') goto sentence_after_2;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor MXJDVZUHNACZYH;
/*DEF*/	DataCursor l_s2;
/*DEF*/	DataCursor r_s2;
/*SET*/	l_s2 = JSJAVWAUXPANNA;
/*SET*/	MXJDVZUHNACZYH = JSJAVWAUXPANNA;
/*INC*/	if (!INC(MXJDVZUHNACZYH, JEBKRJLPGFGRAT)) goto sentence_after_2;
	if (! isSymbolType(MXJDVZUHNACZYH.container->type)) goto sentence_after_2;
/*SET*/	r_s2 = MXJDVZUHNACZYH;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = r_s2;
/*SET*/	r_e = r_s2;
/*JMP*/	goto label_EPWZOLHUSLRKVW_firststep;
label_EPWZOLHUSLRKVW: 
/*INC*/	if (!INC(r_e, JEBKRJLPGFGRAT)) goto sentence_after_2;
label_EPWZOLHUSLRKVW_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor PNVGZMIIZWUDWD;
/*SET*/	PNVGZMIIZWUDWD = r_e;
 if (!SLIDE(PNVGZMIIZWUDWD, JEBKRJLPGFGRAT, l_Sw, r_Sw)) goto label_EPWZOLHUSLRKVW;
//// [ e.1 ] 
/*DEF*/	DataCursor l_Wr;
/*DEF*/	DataCursor r_Wr;
/*SET*/	l_Wr = PNVGZMIIZWUDWD;
/*SET*/	r_Wr = JEBKRJLPGFGRAT;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor DSJVEZKMESBJLK;
/*DEF*/	DataCursor YERTAHNEXHUQMJ;
/*DEF*/	DataCursor ICBMUSQDKLASOL;
/*SET*/	DSJVEZKMESBJLK = CIHLUILGMFCSWT;
/*INC*/	if (!INC(DSJVEZKMESBJLK, arg_to)) goto label_EPWZOLHUSLRKVW;
//// ISBRACKET 
	if (DSJVEZKMESBJLK.container->type != struct_bracket) goto label_EPWZOLHUSLRKVW;
//// JMP_BRACKET 
	YERTAHNEXHUQMJ = DSJVEZKMESBJLK.container->value.bracket_data.chain->at_before_first();
	ICBMUSQDKLASOL   = DSJVEZKMESBJLK.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor WJXPTXXEUMZFWY;
/*DEF*/	DataCursor l_s;
/*DEF*/	DataCursor r_s;
/*SET*/	l_s = YERTAHNEXHUQMJ;
/*SET*/	WJXPTXXEUMZFWY = YERTAHNEXHUQMJ;
/*INC*/	if (!INC(WJXPTXXEUMZFWY, ICBMUSQDKLASOL)) goto label_EPWZOLHUSLRKVW;
	if (! isSymbolType(WJXPTXXEUMZFWY.container->type)) goto label_EPWZOLHUSLRKVW;
/*SET*/	r_s = WJXPTXXEUMZFWY;
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = r_s;
/*SET*/	r_n = ICBMUSQDKLASOL;
//// [ empty ] 
/*ISEMPTY*/	if (DSJVEZKMESBJLK!=0 && arg_to != DSJVEZKMESBJLK) goto label_EPWZOLHUSLRKVW;

// подстановка 
// new chain 
DataChain *chain_UCPABQSEFFUNQP = context->putChain(); 
DataChain* KFNNBECBBCJPDY = new DataChain(); 
DataContainer* KFNNBECBBCJPDY_execbr = newRefExecBrackets(UHod, KFNNBECBBCJPDY, "UHod");
chain_UCPABQSEFFUNQP->append(KFNNBECBBCJPDY_execbr);
DataChain* JLIBITLLPLXELR = new DataChain(); 
KFNNBECBBCJPDY->append(newRefStructBrackets(JLIBITLLPLXELR)); 
JLIBITLLPLXELR->append_copy(l_Sw, r_Sw, context); 
DataChain* DKEXDTQUVPTTEY = new DataChain(); 
KFNNBECBBCJPDY->append(newRefStructBrackets(DKEXDTQUVPTTEY)); 
DKEXDTQUVPTTEY->append_copy(l_e, r_e, context); 
DKEXDTQUVPTTEY->append_copy(l_Sw, r_Sw, context); 
DKEXDTQUVPTTEY->append_copy(l_Wr, r_Wr, context); 
DataChain* HTLQLBBBVOQOZK = new DataChain(); 
KFNNBECBBCJPDY->append(newRefStructBrackets(HTLQLBBBVOQOZK)); 
HTLQLBBBVOQOZK->append_copy(l_n, r_n, context); 
context->pushExecuteCall(KFNNBECBBCJPDY_execbr); // UHod
return chain_UCPABQSEFFUNQP;
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
DataChain *chain_YNAYYRBAQMYJHZ = context->putChain(); 
DataChain* XNDSIYFSEXWBIO = new DataChain(); 
DataContainer* XNDSIYFSEXWBIO_execbr = newRefExecBrackets(Prout, XNDSIYFSEXWBIO, "Prout");
chain_YNAYYRBAQMYJHZ->append(XNDSIYFSEXWBIO_execbr);
XNDSIYFSEXWBIO->append(newRefText("*===T===T===*", __LINE__)); 
context->pushExecuteCall(XNDSIYFSEXWBIO_execbr); // Prout
DataChain* EWQVQRTCDLPQMV = new DataChain(); 
DataContainer* EWQVQRTCDLPQMV_execbr = newRefExecBrackets(Prout, EWQVQRTCDLPQMV, "Prout");
chain_YNAYYRBAQMYJHZ->append(EWQVQRTCDLPQMV_execbr);
EWQVQRTCDLPQMV->append(newRefText("|", __LINE__)); 
DataChain* JIFVGYMKGOTZJM = new DataChain(); 
DataContainer* JIFVGYMKGOTZJM_execbr = newRefExecBrackets(XO, JIFVGYMKGOTZJM, "XO");
EWQVQRTCDLPQMV->append(JIFVGYMKGOTZJM_execbr);
JIFVGYMKGOTZJM->append(newRefText("1", __LINE__)); 
JIFVGYMKGOTZJM->append_copy(l_1, r_1, context); 
context->pushExecuteCall(JIFVGYMKGOTZJM_execbr); // XO
EWQVQRTCDLPQMV->append(newRefText("|", __LINE__)); 
DataChain* NZQTMRPNDEVNMT = new DataChain(); 
DataContainer* NZQTMRPNDEVNMT_execbr = newRefExecBrackets(XO, NZQTMRPNDEVNMT, "XO");
EWQVQRTCDLPQMV->append(NZQTMRPNDEVNMT_execbr);
NZQTMRPNDEVNMT->append(newRefText("2", __LINE__)); 
NZQTMRPNDEVNMT->append_copy(l_1, r_1, context); 
context->pushExecuteCall(NZQTMRPNDEVNMT_execbr); // XO
EWQVQRTCDLPQMV->append(newRefText("|", __LINE__)); 
DataChain* HJITSSPAQNJRDO = new DataChain(); 
DataContainer* HJITSSPAQNJRDO_execbr = newRefExecBrackets(XO, HJITSSPAQNJRDO, "XO");
EWQVQRTCDLPQMV->append(HJITSSPAQNJRDO_execbr);
HJITSSPAQNJRDO->append(newRefText("3", __LINE__)); 
HJITSSPAQNJRDO->append_copy(l_1, r_1, context); 
context->pushExecuteCall(HJITSSPAQNJRDO_execbr); // XO
EWQVQRTCDLPQMV->append(newRefText("|", __LINE__)); 
context->pushExecuteCall(EWQVQRTCDLPQMV_execbr); // Prout
DataChain* YJWPYATMLEYQSV = new DataChain(); 
DataContainer* YJWPYATMLEYQSV_execbr = newRefExecBrackets(Prout, YJWPYATMLEYQSV, "Prout");
chain_YNAYYRBAQMYJHZ->append(YJWPYATMLEYQSV_execbr);
YJWPYATMLEYQSV->append(newRefText("*===I===I===*", __LINE__)); 
context->pushExecuteCall(YJWPYATMLEYQSV_execbr); // Prout
DataChain* KPAMSVBMVXRLLI = new DataChain(); 
DataContainer* KPAMSVBMVXRLLI_execbr = newRefExecBrackets(Prout, KPAMSVBMVXRLLI, "Prout");
chain_YNAYYRBAQMYJHZ->append(KPAMSVBMVXRLLI_execbr);
KPAMSVBMVXRLLI->append(newRefText("|", __LINE__)); 
DataChain* VFEDKJIGAVYXJV = new DataChain(); 
DataContainer* VFEDKJIGAVYXJV_execbr = newRefExecBrackets(XO, VFEDKJIGAVYXJV, "XO");
KPAMSVBMVXRLLI->append(VFEDKJIGAVYXJV_execbr);
VFEDKJIGAVYXJV->append(newRefText("4", __LINE__)); 
VFEDKJIGAVYXJV->append_copy(l_1, r_1, context); 
context->pushExecuteCall(VFEDKJIGAVYXJV_execbr); // XO
KPAMSVBMVXRLLI->append(newRefText("|", __LINE__)); 
DataChain* EQVRBACUIGAIPY = new DataChain(); 
DataContainer* EQVRBACUIGAIPY_execbr = newRefExecBrackets(XO, EQVRBACUIGAIPY, "XO");
KPAMSVBMVXRLLI->append(EQVRBACUIGAIPY_execbr);
EQVRBACUIGAIPY->append(newRefText("5", __LINE__)); 
EQVRBACUIGAIPY->append_copy(l_1, r_1, context); 
context->pushExecuteCall(EQVRBACUIGAIPY_execbr); // XO
KPAMSVBMVXRLLI->append(newRefText("|", __LINE__)); 
DataChain* HBBXIPBZNCWHRB = new DataChain(); 
DataContainer* HBBXIPBZNCWHRB_execbr = newRefExecBrackets(XO, HBBXIPBZNCWHRB, "XO");
KPAMSVBMVXRLLI->append(HBBXIPBZNCWHRB_execbr);
HBBXIPBZNCWHRB->append(newRefText("6", __LINE__)); 
HBBXIPBZNCWHRB->append_copy(l_1, r_1, context); 
context->pushExecuteCall(HBBXIPBZNCWHRB_execbr); // XO
KPAMSVBMVXRLLI->append(newRefText("|", __LINE__)); 
context->pushExecuteCall(KPAMSVBMVXRLLI_execbr); // Prout
DataChain* LIRIZXOQPTQQWE = new DataChain(); 
DataContainer* LIRIZXOQPTQQWE_execbr = newRefExecBrackets(Prout, LIRIZXOQPTQQWE, "Prout");
chain_YNAYYRBAQMYJHZ->append(LIRIZXOQPTQQWE_execbr);
LIRIZXOQPTQQWE->append(newRefText("*===I===I===*", __LINE__)); 
context->pushExecuteCall(LIRIZXOQPTQQWE_execbr); // Prout
DataChain* AAFJEQIOZPYFAU = new DataChain(); 
DataContainer* AAFJEQIOZPYFAU_execbr = newRefExecBrackets(Prout, AAFJEQIOZPYFAU, "Prout");
chain_YNAYYRBAQMYJHZ->append(AAFJEQIOZPYFAU_execbr);
AAFJEQIOZPYFAU->append(newRefText("|", __LINE__)); 
DataChain* UQMVHXKMNXMSYA = new DataChain(); 
DataContainer* UQMVHXKMNXMSYA_execbr = newRefExecBrackets(XO, UQMVHXKMNXMSYA, "XO");
AAFJEQIOZPYFAU->append(UQMVHXKMNXMSYA_execbr);
UQMVHXKMNXMSYA->append(newRefText("7", __LINE__)); 
UQMVHXKMNXMSYA->append_copy(l_1, r_1, context); 
context->pushExecuteCall(UQMVHXKMNXMSYA_execbr); // XO
AAFJEQIOZPYFAU->append(newRefText("|", __LINE__)); 
DataChain* MPTLZANOTLSLWU = new DataChain(); 
DataContainer* MPTLZANOTLSLWU_execbr = newRefExecBrackets(XO, MPTLZANOTLSLWU, "XO");
AAFJEQIOZPYFAU->append(MPTLZANOTLSLWU_execbr);
MPTLZANOTLSLWU->append(newRefText("8", __LINE__)); 
MPTLZANOTLSLWU->append_copy(l_1, r_1, context); 
context->pushExecuteCall(MPTLZANOTLSLWU_execbr); // XO
AAFJEQIOZPYFAU->append(newRefText("|", __LINE__)); 
DataChain* HTFQJRRWBWHMQH = new DataChain(); 
DataContainer* HTFQJRRWBWHMQH_execbr = newRefExecBrackets(XO, HTFQJRRWBWHMQH, "XO");
AAFJEQIOZPYFAU->append(HTFQJRRWBWHMQH_execbr);
HTFQJRRWBWHMQH->append(newRefText("9", __LINE__)); 
HTFQJRRWBWHMQH->append_copy(l_1, r_1, context); 
context->pushExecuteCall(HTFQJRRWBWHMQH_execbr); // XO
AAFJEQIOZPYFAU->append(newRefText("|", __LINE__)); 
context->pushExecuteCall(AAFJEQIOZPYFAU_execbr); // Prout
DataChain* ZKHDKCRFVBEIYI = new DataChain(); 
DataContainer* ZKHDKCRFVBEIYI_execbr = newRefExecBrackets(Prout, ZKHDKCRFVBEIYI, "Prout");
chain_YNAYYRBAQMYJHZ->append(ZKHDKCRFVBEIYI_execbr);
ZKHDKCRFVBEIYI->append(newRefText("*===I===I===*", __LINE__)); 
context->pushExecuteCall(ZKHDKCRFVBEIYI_execbr); // Prout
return chain_YNAYYRBAQMYJHZ;
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
/*DEF*/	DataCursor PVFVPZHYUJABTQ;
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	PVFVPZHYUJABTQ = arg_from;
/*INC*/	if (!INC(PVFVPZHYUJABTQ, arg_to)) goto sentence_after_1;
	if (! isSymbolType(PVFVPZHYUJABTQ.container->type)) goto sentence_after_1;
/*SET*/	r_1 = PVFVPZHYUJABTQ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor WWTBKDOGKEMHIB;
/*DEF*/	DataCursor YXRNXSXRZLETBQ;
/*DEF*/	DataCursor EXKRQOIERNAPLQ;
/*SET*/	WWTBKDOGKEMHIB = r_1;
/*INC*/	if (!INC(WWTBKDOGKEMHIB, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (WWTBKDOGKEMHIB.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	YXRNXSXRZLETBQ = WWTBKDOGKEMHIB.container->value.bracket_data.chain->at_before_first();
	EXKRQOIERNAPLQ   = WWTBKDOGKEMHIB.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_21;
/*DEF*/	DataCursor r_21;
/*SET*/	l_21 = YXRNXSXRZLETBQ;
/*SET*/	r_21 = YXRNXSXRZLETBQ;
/*JMP*/	goto label_YJPQOUBVJSEBAL_firststep;
label_YJPQOUBVJSEBAL: 
/*INC*/	if (!INC(r_21, EXKRQOIERNAPLQ)) goto sentence_after_1;
label_YJPQOUBVJSEBAL_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor WNKSVLOIDZFPIR;
/*SET*/	WNKSVLOIDZFPIR = r_21;
 if (!SLIDE(WNKSVLOIDZFPIR, EXKRQOIERNAPLQ, l_1, r_1)) goto label_YJPQOUBVJSEBAL;
//// [ e.1 ] 
/*DEF*/	DataCursor l_22;
/*DEF*/	DataCursor r_22;
/*SET*/	l_22 = WNKSVLOIDZFPIR;
/*SET*/	r_22 = EXKRQOIERNAPLQ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor WYCZTWZZVEWXOT;
/*DEF*/	DataCursor AKUDKPEDUPKCZL;
/*DEF*/	DataCursor HWUSKDNEVDCPLB;
/*SET*/	WYCZTWZZVEWXOT = WWTBKDOGKEMHIB;
/*INC*/	if (!INC(WYCZTWZZVEWXOT, arg_to)) goto label_YJPQOUBVJSEBAL;
//// ISBRACKET 
	if (WYCZTWZZVEWXOT.container->type != struct_bracket) goto label_YJPQOUBVJSEBAL;
//// JMP_BRACKET 
	AKUDKPEDUPKCZL = WYCZTWZZVEWXOT.container->value.bracket_data.chain->at_before_first();
	HWUSKDNEVDCPLB   = WYCZTWZZVEWXOT.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = AKUDKPEDUPKCZL;
/*SET*/	r_3 = HWUSKDNEVDCPLB;
//// [ empty ] 
/*ISEMPTY*/	if (WYCZTWZZVEWXOT!=0 && arg_to != WYCZTWZZVEWXOT) goto label_YJPQOUBVJSEBAL;

// подстановка 
// new chain 
DataChain *chain_KLPJMPFDCYQTRC = context->putChain(); 
chain_KLPJMPFDCYQTRC->append(newRefText("-X-", __LINE__)); 
return chain_KLPJMPFDCYQTRC;
}
sentence_after_1: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor VVVTRFFVPEKKQM;
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	VVVTRFFVPEKKQM = arg_from;
/*INC*/	if (!INC(VVVTRFFVPEKKQM, arg_to)) goto sentence_after_2;
	if (! isSymbolType(VVVTRFFVPEKKQM.container->type)) goto sentence_after_2;
/*SET*/	r_1 = VVVTRFFVPEKKQM;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor CUPRYJAUTEUVCZ;
/*DEF*/	DataCursor VICTHRXSXCLPRG;
/*DEF*/	DataCursor DLWXFAIGAYRUEI;
/*SET*/	CUPRYJAUTEUVCZ = r_1;
/*INC*/	if (!INC(CUPRYJAUTEUVCZ, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (CUPRYJAUTEUVCZ.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	VICTHRXSXCLPRG = CUPRYJAUTEUVCZ.container->value.bracket_data.chain->at_before_first();
	DLWXFAIGAYRUEI   = CUPRYJAUTEUVCZ.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = VICTHRXSXCLPRG;
/*SET*/	r_2 = DLWXFAIGAYRUEI;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor CUFDIAMHTKBXOT;
/*DEF*/	DataCursor DIRXXGVZQMEYRO;
/*DEF*/	DataCursor VFICHQNIVFJZAU;
/*SET*/	CUFDIAMHTKBXOT = CUPRYJAUTEUVCZ;
/*INC*/	if (!INC(CUFDIAMHTKBXOT, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (CUFDIAMHTKBXOT.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	DIRXXGVZQMEYRO = CUFDIAMHTKBXOT.container->value.bracket_data.chain->at_before_first();
	VFICHQNIVFJZAU   = CUFDIAMHTKBXOT.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_31;
/*DEF*/	DataCursor r_31;
/*SET*/	l_31 = DIRXXGVZQMEYRO;
/*SET*/	r_31 = DIRXXGVZQMEYRO;
/*JMP*/	goto label_QFDFTGMOPSRGPU_firststep;
label_QFDFTGMOPSRGPU: 
/*INC*/	if (!INC(r_31, VFICHQNIVFJZAU)) goto sentence_after_2;
label_QFDFTGMOPSRGPU_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor GXTUHLCVSPIHAZ;
/*SET*/	GXTUHLCVSPIHAZ = r_31;
 if (!SLIDE(GXTUHLCVSPIHAZ, VFICHQNIVFJZAU, l_1, r_1)) goto label_QFDFTGMOPSRGPU;
//// [ e.1 ] 
/*DEF*/	DataCursor l_32;
/*DEF*/	DataCursor r_32;
/*SET*/	l_32 = GXTUHLCVSPIHAZ;
/*SET*/	r_32 = VFICHQNIVFJZAU;
//// [ empty ] 
/*ISEMPTY*/	if (CUFDIAMHTKBXOT!=0 && arg_to != CUFDIAMHTKBXOT) goto label_QFDFTGMOPSRGPU;

// подстановка 
// new chain 
DataChain *chain_RSSFSZWXBQMURW = context->putChain(); 
chain_RSSFSZWXBQMURW->append(newRefText("-O-", __LINE__)); 
return chain_RSSFSZWXBQMURW;
}
sentence_after_2: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor MXCDBHUMRGJQMV;
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	MXCDBHUMRGJQMV = arg_from;
/*INC*/	if (!INC(MXCDBHUMRGJQMV, arg_to)) goto sentence_after_3;
	if (! isSymbolType(MXCDBHUMRGJQMV.container->type)) goto sentence_after_3;
/*SET*/	r_1 = MXCDBHUMRGJQMV;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor NKYRTNSJVWZXSS;
/*DEF*/	DataCursor QXNJOMUYJNJUWR;
/*DEF*/	DataCursor SYXWQYYXCSZPOK;
/*SET*/	NKYRTNSJVWZXSS = r_1;
/*INC*/	if (!INC(NKYRTNSJVWZXSS, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (NKYRTNSJVWZXSS.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	QXNJOMUYJNJUWR = NKYRTNSJVWZXSS.container->value.bracket_data.chain->at_before_first();
	SYXWQYYXCSZPOK   = NKYRTNSJVWZXSS.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = QXNJOMUYJNJUWR;
/*SET*/	r_2 = SYXWQYYXCSZPOK;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor LWJDRLTBSCIEDP;
/*DEF*/	DataCursor IWLAQIGESJSQHS;
/*DEF*/	DataCursor JLRGLMWANRXRFN;
/*SET*/	LWJDRLTBSCIEDP = NKYRTNSJVWZXSS;
/*INC*/	if (!INC(LWJDRLTBSCIEDP, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (LWJDRLTBSCIEDP.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	IWLAQIGESJSQHS = LWJDRLTBSCIEDP.container->value.bracket_data.chain->at_before_first();
	JLRGLMWANRXRFN   = LWJDRLTBSCIEDP.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = IWLAQIGESJSQHS;
/*SET*/	r_3 = JLRGLMWANRXRFN;
//// [ empty ] 
/*ISEMPTY*/	if (LWJDRLTBSCIEDP!=0 && arg_to != LWJDRLTBSCIEDP) goto sentence_after_3;

// подстановка 
// new chain 
DataChain *chain_WAKZTGJHXAUNFQ = context->putChain(); 
chain_WAKZTGJHXAUNFQ->append_copy(l_1, r_1, context); 
chain_WAKZTGJHXAUNFQ->append(newRefText("  ", __LINE__)); 
return chain_WAKZTGJHXAUNFQ;
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
/*DEF*/	DataCursor JVXIOHNJQRJSHY;
/*SET*/	JVXIOHNJQRJSHY = arg_from;
/*INC*/	if (!INC(JVXIOHNJQRJSHY, arg_to)) goto sentence_after_1;
	if (JVXIOHNJQRJSHY.container->type != integer || JVXIOHNJQRJSHY.container->value.num != 0) goto sentence_after_1;
//// [ empty ] 
/*ISEMPTY*/	if (JVXIOHNJQRJSHY!=0 && arg_to != JVXIOHNJQRJSHY) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_MDOVWGEFHJESVH = context->putChain(); 
return chain_MDOVWGEFHJESVH;
}
sentence_after_1: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor TIZIOJLJDPMOXB;
/*DEF*/	DataCursor l_G;
/*DEF*/	DataCursor r_G;
/*SET*/	l_G = arg_from;
/*SET*/	TIZIOJLJDPMOXB = arg_from;
/*INC*/	if (!INC(TIZIOJLJDPMOXB, arg_to)) goto sentence_after_2;
	if (! isSymbolType(TIZIOJLJDPMOXB.container->type)) goto sentence_after_2;
/*SET*/	r_G = TIZIOJLJDPMOXB;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor YUYOPQJKZTVJGK;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_G;
/*SET*/	YUYOPQJKZTVJGK = r_G;
/*INC*/	if (!INC(YUYOPQJKZTVJGK, arg_to)) goto sentence_after_2;
	if (! isSymbolType(YUYOPQJKZTVJGK.container->type)) goto sentence_after_2;
/*SET*/	r_A = YUYOPQJKZTVJGK;
//// [ `a` <any> ] 
/*DEF*/	DataCursor WXKEWPZHBJSUTH;
/*SET*/	WXKEWPZHBJSUTH = r_A;
/*INC*/	if (!INC(WXKEWPZHBJSUTH, arg_to)) goto sentence_after_2;
	if (WXKEWPZHBJSUTH.container->type != text || *(WXKEWPZHBJSUTH.container->value.text + WXKEWPZHBJSUTH.index) != '=') goto sentence_after_2;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor SYOEFJGWWYEOZL;
/*DEF*/	DataCursor l_AA;
/*DEF*/	DataCursor r_AA;
/*SET*/	l_AA = WXKEWPZHBJSUTH;
/*SET*/	SYOEFJGWWYEOZL = WXKEWPZHBJSUTH;
/*INC*/	if (!INC(SYOEFJGWWYEOZL, arg_to)) goto sentence_after_2;
	if (! isSymbolType(SYOEFJGWWYEOZL.container->type)) goto sentence_after_2;
/*SET*/	r_AA = SYOEFJGWWYEOZL;
//// [ empty ] 
/*ISEMPTY*/	if (r_AA!=0 && arg_to != r_AA) goto sentence_after_2;

// подстановка 
// new chain 
DataChain *chain_XMJVCAXXSUFAHY = context->putChain(); 
chain_XMJVCAXXSUFAHY->append_copy(l_A, r_A, context); 
chain_XMJVCAXXSUFAHY->append(newRefText("=", __LINE__)); 
chain_XMJVCAXXSUFAHY->append_copy(l_AA, r_AA, context); 
return chain_XMJVCAXXSUFAHY;
}
sentence_after_2: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor YAYZKHUHJRJSVO;
/*DEF*/	DataCursor l_G;
/*DEF*/	DataCursor r_G;
/*SET*/	l_G = arg_from;
/*SET*/	YAYZKHUHJRJSVO = arg_from;
/*INC*/	if (!INC(YAYZKHUHJRJSVO, arg_to)) goto sentence_after_3;
	if (! isSymbolType(YAYZKHUHJRJSVO.container->type)) goto sentence_after_3;
/*SET*/	r_G = YAYZKHUHJRJSVO;
//// [ &.name <any> ] 
/*DEF*/	DataCursor QHTYDWPBSZXSBZ;
/*SET*/	QHTYDWPBSZXSBZ = r_G;
 if (!SLIDE(QHTYDWPBSZXSBZ, arg_to, l_G, r_G)) goto sentence_after_3;
//// [ `a` <any> ] 
/*DEF*/	DataCursor IYRVGQMLUNWSCP;
/*SET*/	IYRVGQMLUNWSCP = QHTYDWPBSZXSBZ;
/*INC*/	if (!INC(IYRVGQMLUNWSCP, arg_to)) goto sentence_after_3;
	if (IYRVGQMLUNWSCP.container->type != text || *(IYRVGQMLUNWSCP.container->value.text + IYRVGQMLUNWSCP.index) != '=') goto sentence_after_3;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor IRZFCBTSEPLKGW;
/*DEF*/	DataCursor l_AA;
/*DEF*/	DataCursor r_AA;
/*SET*/	l_AA = IYRVGQMLUNWSCP;
/*SET*/	IRZFCBTSEPLKGW = IYRVGQMLUNWSCP;
/*INC*/	if (!INC(IRZFCBTSEPLKGW, arg_to)) goto sentence_after_3;
	if (! isSymbolType(IRZFCBTSEPLKGW.container->type)) goto sentence_after_3;
/*SET*/	r_AA = IRZFCBTSEPLKGW;
//// [ &.name <any> ] 
/*DEF*/	DataCursor FKHROUOYSRWMQO;
/*SET*/	FKHROUOYSRWMQO = r_AA;
 if (!SLIDE(FKHROUOYSRWMQO, arg_to, l_G, r_G)) goto sentence_after_3;
//// [ `a` <any> ] 
/*DEF*/	DataCursor JAHYQMFEVSDCOM;
/*SET*/	JAHYQMFEVSDCOM = FKHROUOYSRWMQO;
/*INC*/	if (!INC(JAHYQMFEVSDCOM, arg_to)) goto sentence_after_3;
	if (JAHYQMFEVSDCOM.container->type != text || *(JAHYQMFEVSDCOM.container->value.text + JAHYQMFEVSDCOM.index) != '=') goto sentence_after_3;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor RYHGDMLXUKWYZC;
/*DEF*/	DataCursor l_BB;
/*DEF*/	DataCursor r_BB;
/*SET*/	l_BB = JAHYQMFEVSDCOM;
/*SET*/	RYHGDMLXUKWYZC = JAHYQMFEVSDCOM;
/*INC*/	if (!INC(RYHGDMLXUKWYZC, arg_to)) goto sentence_after_3;
	if (! isSymbolType(RYHGDMLXUKWYZC.container->type)) goto sentence_after_3;
/*SET*/	r_BB = RYHGDMLXUKWYZC;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = r_BB;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_APQRVLWIGROVJC = context->putChain(); 
DataChain* DZXXPHQLSRZIHM = new DataChain(); 
DataContainer* DZXXPHQLSRZIHM_execbr = newRefExecBrackets(Switch, DZXXPHQLSRZIHM, "Switch");
chain_APQRVLWIGROVJC->append(DZXXPHQLSRZIHM_execbr);
DZXXPHQLSRZIHM->append_copy(l_G, r_G, context); 
DZXXPHQLSRZIHM->append_copy(l_G, r_G, context); 
DZXXPHQLSRZIHM->append(newRefText("=", __LINE__)); 
DataChain* GZRIOQRQETKZFB = new DataChain(); 
DataContainer* GZRIOQRQETKZFB_execbr = newRefExecBrackets(Maix, GZRIOQRQETKZFB, "Maix");
DZXXPHQLSRZIHM->append(GZRIOQRQETKZFB_execbr);
GZRIOQRQETKZFB->append(newRefText("a", __LINE__)); 
GZRIOQRQETKZFB->append_copy(l_AA, r_AA, context); 
GZRIOQRQETKZFB->append_copy(l_BB, r_BB, context); 
DataChain* LDJIEMSFZBHZFN = new DataChain(); 
DataContainer* LDJIEMSFZBHZFN_execbr = newRefExecBrackets(Compare, LDJIEMSFZBHZFN, "Compare");
GZRIOQRQETKZFB->append(LDJIEMSFZBHZFN_execbr);
LDJIEMSFZBHZFN->append_copy(l_AA, r_AA, context); 
LDJIEMSFZBHZFN->append_copy(l_BB, r_BB, context); 
context->pushExecuteCall(LDJIEMSFZBHZFN_execbr); // Compare
context->pushExecuteCall(GZRIOQRQETKZFB_execbr); // Maix
DZXXPHQLSRZIHM->append_copy(l_e, r_e, context); 
context->pushExecuteCall(DZXXPHQLSRZIHM_execbr); // Switch
return chain_APQRVLWIGROVJC;
}
sentence_after_3: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor WYWMXXGDPYLRAX;
/*DEF*/	DataCursor l_G;
/*DEF*/	DataCursor r_G;
/*SET*/	l_G = arg_from;
/*SET*/	WYWMXXGDPYLRAX = arg_from;
/*INC*/	if (!INC(WYWMXXGDPYLRAX, arg_to)) goto sentence_after_4;
	if (! isSymbolType(WYWMXXGDPYLRAX.container->type)) goto sentence_after_4;
/*SET*/	r_G = WYWMXXGDPYLRAX;
//// [ &.name <any> ] 
/*DEF*/	DataCursor GLMTBIYLBHCWHL;
/*SET*/	GLMTBIYLBHCWHL = r_G;
 if (!SLIDE(GLMTBIYLBHCWHL, arg_to, l_G, r_G)) goto sentence_after_4;
//// [ `a` <any> ] 
/*DEF*/	DataCursor SYOYHGMGOPPRZA;
/*SET*/	SYOYHGMGOPPRZA = GLMTBIYLBHCWHL;
/*INC*/	if (!INC(SYOYHGMGOPPRZA, arg_to)) goto sentence_after_4;
	if (SYOYHGMGOPPRZA.container->type != text || *(SYOYHGMGOPPRZA.container->value.text + SYOYHGMGOPPRZA.index) != '=') goto sentence_after_4;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor XQMOMSYHGAGIUP;
/*DEF*/	DataCursor l_AA;
/*DEF*/	DataCursor r_AA;
/*SET*/	l_AA = SYOYHGMGOPPRZA;
/*SET*/	XQMOMSYHGAGIUP = SYOYHGMGOPPRZA;
/*INC*/	if (!INC(XQMOMSYHGAGIUP, arg_to)) goto sentence_after_4;
	if (! isSymbolType(XQMOMSYHGAGIUP.container->type)) goto sentence_after_4;
/*SET*/	r_AA = XQMOMSYHGAGIUP;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor JQBZXTHTOPOTMI;
/*DEF*/	DataCursor l_s;
/*DEF*/	DataCursor r_s;
/*SET*/	l_s = r_AA;
/*SET*/	JQBZXTHTOPOTMI = r_AA;
/*INC*/	if (!INC(JQBZXTHTOPOTMI, arg_to)) goto sentence_after_4;
	if (! isSymbolType(JQBZXTHTOPOTMI.container->type)) goto sentence_after_4;
/*SET*/	r_s = JQBZXTHTOPOTMI;
//// [ `a` <any> ] 
/*DEF*/	DataCursor TNQWTOETONXWZG;
/*SET*/	TNQWTOETONXWZG = r_s;
/*INC*/	if (!INC(TNQWTOETONXWZG, arg_to)) goto sentence_after_4;
	if (TNQWTOETONXWZG.container->type != text || *(TNQWTOETONXWZG.container->value.text + TNQWTOETONXWZG.index) != '=') goto sentence_after_4;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor HUTIFKLGKLRNUW;
/*DEF*/	DataCursor l_BB;
/*DEF*/	DataCursor r_BB;
/*SET*/	l_BB = TNQWTOETONXWZG;
/*SET*/	HUTIFKLGKLRNUW = TNQWTOETONXWZG;
/*INC*/	if (!INC(HUTIFKLGKLRNUW, arg_to)) goto sentence_after_4;
	if (! isSymbolType(HUTIFKLGKLRNUW.container->type)) goto sentence_after_4;
/*SET*/	r_BB = HUTIFKLGKLRNUW;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = r_BB;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_XUCOVTYKRXAWZA = context->putChain(); 
DataChain* DJXWXQMNDHLDTT = new DataChain(); 
DataContainer* DJXWXQMNDHLDTT_execbr = newRefExecBrackets(Switch, DJXWXQMNDHLDTT, "Switch");
chain_XUCOVTYKRXAWZA->append(DJXWXQMNDHLDTT_execbr);
DJXWXQMNDHLDTT->append_copy(l_G, r_G, context); 
DJXWXQMNDHLDTT->append_copy(l_G, r_G, context); 
DJXWXQMNDHLDTT->append(newRefText("=", __LINE__)); 
DJXWXQMNDHLDTT->append_copy(l_AA, r_AA, context); 
DJXWXQMNDHLDTT->append_copy(l_e, r_e, context); 
context->pushExecuteCall(DJXWXQMNDHLDTT_execbr); // Switch
return chain_XUCOVTYKRXAWZA;
}
sentence_after_4: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor XSKNXTEZNJSQTF;
/*DEF*/	DataCursor l_G;
/*DEF*/	DataCursor r_G;
/*SET*/	l_G = arg_from;
/*SET*/	XSKNXTEZNJSQTF = arg_from;
/*INC*/	if (!INC(XSKNXTEZNJSQTF, arg_to)) goto sentence_after_5;
	if (! isSymbolType(XSKNXTEZNJSQTF.container->type)) goto sentence_after_5;
/*SET*/	r_G = XSKNXTEZNJSQTF;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor BCCFQMWHBVSSII;
/*DEF*/	DataCursor l_s;
/*DEF*/	DataCursor r_s;
/*SET*/	l_s = r_G;
/*SET*/	BCCFQMWHBVSSII = r_G;
/*INC*/	if (!INC(BCCFQMWHBVSSII, arg_to)) goto sentence_after_5;
	if (! isSymbolType(BCCFQMWHBVSSII.container->type)) goto sentence_after_5;
/*SET*/	r_s = BCCFQMWHBVSSII;
//// [ `a` <any> ] 
/*DEF*/	DataCursor GVIJSUXIICAAHM;
/*SET*/	GVIJSUXIICAAHM = r_s;
/*INC*/	if (!INC(GVIJSUXIICAAHM, arg_to)) goto sentence_after_5;
	if (GVIJSUXIICAAHM.container->type != text || *(GVIJSUXIICAAHM.container->value.text + GVIJSUXIICAAHM.index) != '=') goto sentence_after_5;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor KWYWTTJZPPKWLB;
/*DEF*/	DataCursor l_AA;
/*DEF*/	DataCursor r_AA;
/*SET*/	l_AA = GVIJSUXIICAAHM;
/*SET*/	KWYWTTJZPPKWLB = GVIJSUXIICAAHM;
/*INC*/	if (!INC(KWYWTTJZPPKWLB, arg_to)) goto sentence_after_5;
	if (! isSymbolType(KWYWTTJZPPKWLB.container->type)) goto sentence_after_5;
/*SET*/	r_AA = KWYWTTJZPPKWLB;
//// [ &.name <any> ] 
/*DEF*/	DataCursor MJAHTPUTIEBPBB;
/*SET*/	MJAHTPUTIEBPBB = r_AA;
 if (!SLIDE(MJAHTPUTIEBPBB, arg_to, l_G, r_G)) goto sentence_after_5;
//// [ `a` <any> ] 
/*DEF*/	DataCursor MUEGYRHLTHXWGJ;
/*SET*/	MUEGYRHLTHXWGJ = MJAHTPUTIEBPBB;
/*INC*/	if (!INC(MUEGYRHLTHXWGJ, arg_to)) goto sentence_after_5;
	if (MUEGYRHLTHXWGJ.container->type != text || *(MUEGYRHLTHXWGJ.container->value.text + MUEGYRHLTHXWGJ.index) != '=') goto sentence_after_5;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor PRWVHSHZYAVQYE;
/*DEF*/	DataCursor l_BB;
/*DEF*/	DataCursor r_BB;
/*SET*/	l_BB = MUEGYRHLTHXWGJ;
/*SET*/	PRWVHSHZYAVQYE = MUEGYRHLTHXWGJ;
/*INC*/	if (!INC(PRWVHSHZYAVQYE, arg_to)) goto sentence_after_5;
	if (! isSymbolType(PRWVHSHZYAVQYE.container->type)) goto sentence_after_5;
/*SET*/	r_BB = PRWVHSHZYAVQYE;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = r_BB;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_OIUOZXQTIHWAUR = context->putChain(); 
DataChain* OQRDQWCVLXZIPO = new DataChain(); 
DataContainer* OQRDQWCVLXZIPO_execbr = newRefExecBrackets(Switch, OQRDQWCVLXZIPO, "Switch");
chain_OIUOZXQTIHWAUR->append(OQRDQWCVLXZIPO_execbr);
OQRDQWCVLXZIPO->append_copy(l_G, r_G, context); 
OQRDQWCVLXZIPO->append_copy(l_G, r_G, context); 
OQRDQWCVLXZIPO->append(newRefText("=", __LINE__)); 
OQRDQWCVLXZIPO->append_copy(l_BB, r_BB, context); 
OQRDQWCVLXZIPO->append_copy(l_e, r_e, context); 
context->pushExecuteCall(OQRDQWCVLXZIPO_execbr); // Switch
return chain_OIUOZXQTIHWAUR;
}
sentence_after_5: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor DIISPQNZOMCWVA;
/*DEF*/	DataCursor l_G;
/*DEF*/	DataCursor r_G;
/*SET*/	l_G = arg_from;
/*SET*/	DIISPQNZOMCWVA = arg_from;
/*INC*/	if (!INC(DIISPQNZOMCWVA, arg_to)) goto sentence_after_6;
	if (! isSymbolType(DIISPQNZOMCWVA.container->type)) goto sentence_after_6;
/*SET*/	r_G = DIISPQNZOMCWVA;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor PTGRGDFNYYTKWW;
/*DEF*/	DataCursor l_s;
/*DEF*/	DataCursor r_s;
/*SET*/	l_s = r_G;
/*SET*/	PTGRGDFNYYTKWW = r_G;
/*INC*/	if (!INC(PTGRGDFNYYTKWW, arg_to)) goto sentence_after_6;
	if (! isSymbolType(PTGRGDFNYYTKWW.container->type)) goto sentence_after_6;
/*SET*/	r_s = PTGRGDFNYYTKWW;
//// [ `a` <any> ] 
/*DEF*/	DataCursor QQTMIUUYVGAIHF;
/*SET*/	QQTMIUUYVGAIHF = r_s;
/*INC*/	if (!INC(QQTMIUUYVGAIHF, arg_to)) goto sentence_after_6;
	if (QQTMIUUYVGAIHF.container->type != text || *(QQTMIUUYVGAIHF.container->value.text + QQTMIUUYVGAIHF.index) != '=') goto sentence_after_6;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor SHCCXHUUYYHTGD;
/*DEF*/	DataCursor l_AA;
/*DEF*/	DataCursor r_AA;
/*SET*/	l_AA = QQTMIUUYVGAIHF;
/*SET*/	SHCCXHUUYYHTGD = QQTMIUUYVGAIHF;
/*INC*/	if (!INC(SHCCXHUUYYHTGD, arg_to)) goto sentence_after_6;
	if (! isSymbolType(SHCCXHUUYYHTGD.container->type)) goto sentence_after_6;
/*SET*/	r_AA = SHCCXHUUYYHTGD;
//// [ &.name <any> ] 
/*DEF*/	DataCursor GLFCIEBDUTOEUN;
/*SET*/	GLFCIEBDUTOEUN = r_AA;
 if (!SLIDE(GLFCIEBDUTOEUN, arg_to, l_s, r_s)) goto sentence_after_6;
//// [ `a` <any> ] 
/*DEF*/	DataCursor FHDAXPHBSYWZTP;
/*SET*/	FHDAXPHBSYWZTP = GLFCIEBDUTOEUN;
/*INC*/	if (!INC(FHDAXPHBSYWZTP, arg_to)) goto sentence_after_6;
	if (FHDAXPHBSYWZTP.container->type != text || *(FHDAXPHBSYWZTP.container->value.text + FHDAXPHBSYWZTP.index) != '=') goto sentence_after_6;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor WJNGJNCPXRJVBV;
/*DEF*/	DataCursor l_BB;
/*DEF*/	DataCursor r_BB;
/*SET*/	l_BB = FHDAXPHBSYWZTP;
/*SET*/	WJNGJNCPXRJVBV = FHDAXPHBSYWZTP;
/*INC*/	if (!INC(WJNGJNCPXRJVBV, arg_to)) goto sentence_after_6;
	if (! isSymbolType(WJNGJNCPXRJVBV.container->type)) goto sentence_after_6;
/*SET*/	r_BB = WJNGJNCPXRJVBV;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = r_BB;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_VECMPESROMDXLL = context->putChain(); 
DataChain* UBRYYESHQLZMRE = new DataChain(); 
DataContainer* UBRYYESHQLZMRE_execbr = newRefExecBrackets(Switch, UBRYYESHQLZMRE, "Switch");
chain_VECMPESROMDXLL->append(UBRYYESHQLZMRE_execbr);
UBRYYESHQLZMRE->append_copy(l_G, r_G, context); 
UBRYYESHQLZMRE->append_copy(l_s, r_s, context); 
UBRYYESHQLZMRE->append(newRefText("=", __LINE__)); 
DataChain* WQNKQITXGIIGQU = new DataChain(); 
DataContainer* WQNKQITXGIIGQU_execbr = newRefExecBrackets(Maix, WQNKQITXGIIGQU, "Maix");
UBRYYESHQLZMRE->append(WQNKQITXGIIGQU_execbr);
WQNKQITXGIIGQU->append(newRefText("i", __LINE__)); 
WQNKQITXGIIGQU->append_copy(l_AA, r_AA, context); 
WQNKQITXGIIGQU->append_copy(l_BB, r_BB, context); 
DataChain* SKWTCZNLTERXBL = new DataChain(); 
DataContainer* SKWTCZNLTERXBL_execbr = newRefExecBrackets(Compare, SKWTCZNLTERXBL, "Compare");
WQNKQITXGIIGQU->append(SKWTCZNLTERXBL_execbr);
SKWTCZNLTERXBL->append_copy(l_AA, r_AA, context); 
SKWTCZNLTERXBL->append_copy(l_BB, r_BB, context); 
context->pushExecuteCall(SKWTCZNLTERXBL_execbr); // Compare
context->pushExecuteCall(WQNKQITXGIIGQU_execbr); // Maix
UBRYYESHQLZMRE->append_copy(l_e, r_e, context); 
context->pushExecuteCall(UBRYYESHQLZMRE_execbr); // Switch
return chain_VECMPESROMDXLL;
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
DataChain *chain_TZYDYZVAHNKIXJ = context->putChain(); 
DataChain* WZZTDJPQSUOWKV = new DataChain(); 
DataContainer* WZZTDJPQSUOWKV_execbr = newRefExecBrackets(Prout, WZZTDJPQSUOWKV, "Prout");
chain_TZYDYZVAHNKIXJ->append(WZZTDJPQSUOWKV_execbr);
WZZTDJPQSUOWKV->append(newRefText("Sw unk: ", __LINE__)); 
WZZTDJPQSUOWKV->append_copy(l_e, r_e, context); 
context->pushExecuteCall(WZZTDJPQSUOWKV_execbr); // Prout
return chain_TZYDYZVAHNKIXJ;
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
/*DEF*/	DataCursor FCCOCKVRJBFRJP;
/*SET*/	FCCOCKVRJBFRJP = arg_from;
/*INC*/	if (!INC(FCCOCKVRJBFRJP, arg_to)) goto sentence_after_1;
	if (FCCOCKVRJBFRJP.container->type != text || *(FCCOCKVRJBFRJP.container->value.text + FCCOCKVRJBFRJP.index) != 'a') goto sentence_after_1;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor CGDJDRWDNPOSRJ;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = FCCOCKVRJBFRJP;
/*SET*/	CGDJDRWDNPOSRJ = FCCOCKVRJBFRJP;
/*INC*/	if (!INC(CGDJDRWDNPOSRJ, arg_to)) goto sentence_after_1;
	if (! isSymbolType(CGDJDRWDNPOSRJ.container->type)) goto sentence_after_1;
/*SET*/	r_A = CGDJDRWDNPOSRJ;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor GDRQRVQTVPPAZH;
/*DEF*/	DataCursor l_B;
/*DEF*/	DataCursor r_B;
/*SET*/	l_B = r_A;
/*SET*/	GDRQRVQTVPPAZH = r_A;
/*INC*/	if (!INC(GDRQRVQTVPPAZH, arg_to)) goto sentence_after_1;
	if (! isSymbolType(GDRQRVQTVPPAZH.container->type)) goto sentence_after_1;
/*SET*/	r_B = GDRQRVQTVPPAZH;
//// [ `a` <any> ] 
/*DEF*/	DataCursor LTJQVCCLPEZTSJ;
/*SET*/	LTJQVCCLPEZTSJ = r_B;
/*INC*/	if (!INC(LTJQVCCLPEZTSJ, arg_to)) goto sentence_after_1;
	if (LTJQVCCLPEZTSJ.container->type != text || *(LTJQVCCLPEZTSJ.container->value.text + LTJQVCCLPEZTSJ.index) != '-') goto sentence_after_1;
//// [ empty ] 
/*ISEMPTY*/	if (LTJQVCCLPEZTSJ!=0 && arg_to != LTJQVCCLPEZTSJ) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_IFIFRTWQQEOJUE = context->putChain(); 
chain_IFIFRTWQQEOJUE->append_copy(l_B, r_B, context); 
return chain_IFIFRTWQQEOJUE;
}
sentence_after_1: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor QBNSKWZEEWZKAO;
/*SET*/	QBNSKWZEEWZKAO = arg_from;
/*INC*/	if (!INC(QBNSKWZEEWZKAO, arg_to)) goto sentence_after_2;
	if (QBNSKWZEEWZKAO.container->type != text || *(QBNSKWZEEWZKAO.container->value.text + QBNSKWZEEWZKAO.index) != 'a') goto sentence_after_2;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor JURSQGSCZVHHUJ;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = QBNSKWZEEWZKAO;
/*SET*/	JURSQGSCZVHHUJ = QBNSKWZEEWZKAO;
/*INC*/	if (!INC(JURSQGSCZVHHUJ, arg_to)) goto sentence_after_2;
	if (! isSymbolType(JURSQGSCZVHHUJ.container->type)) goto sentence_after_2;
/*SET*/	r_A = JURSQGSCZVHHUJ;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor ZUMIGOFHWBKKFL;
/*DEF*/	DataCursor l_B;
/*DEF*/	DataCursor r_B;
/*SET*/	l_B = r_A;
/*SET*/	ZUMIGOFHWBKKFL = r_A;
/*INC*/	if (!INC(ZUMIGOFHWBKKFL, arg_to)) goto sentence_after_2;
	if (! isSymbolType(ZUMIGOFHWBKKFL.container->type)) goto sentence_after_2;
/*SET*/	r_B = ZUMIGOFHWBKKFL;
//// [ `a` <any> ] 
/*DEF*/	DataCursor UWZKCTKAGXKSMF;
/*SET*/	UWZKCTKAGXKSMF = r_B;
/*INC*/	if (!INC(UWZKCTKAGXKSMF, arg_to)) goto sentence_after_2;
	if (UWZKCTKAGXKSMF.container->type != text || *(UWZKCTKAGXKSMF.container->value.text + UWZKCTKAGXKSMF.index) != '+') goto sentence_after_2;
//// [ empty ] 
/*ISEMPTY*/	if (UWZKCTKAGXKSMF!=0 && arg_to != UWZKCTKAGXKSMF) goto sentence_after_2;

// подстановка 
// new chain 
DataChain *chain_WWSTNEUIQUBPGU = context->putChain(); 
chain_WWSTNEUIQUBPGU->append_copy(l_A, r_A, context); 
return chain_WWSTNEUIQUBPGU;
}
sentence_after_2: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor GWGNMIKDWICKDI;
/*SET*/	GWGNMIKDWICKDI = arg_from;
/*INC*/	if (!INC(GWGNMIKDWICKDI, arg_to)) goto sentence_after_3;
	if (GWGNMIKDWICKDI.container->type != text || *(GWGNMIKDWICKDI.container->value.text + GWGNMIKDWICKDI.index) != 'i') goto sentence_after_3;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor LSNPDQSVMTERDF;
/*DEF*/	DataCursor l_B;
/*DEF*/	DataCursor r_B;
/*SET*/	l_B = GWGNMIKDWICKDI;
/*SET*/	LSNPDQSVMTERDF = GWGNMIKDWICKDI;
/*INC*/	if (!INC(LSNPDQSVMTERDF, arg_to)) goto sentence_after_3;
	if (! isSymbolType(LSNPDQSVMTERDF.container->type)) goto sentence_after_3;
/*SET*/	r_B = LSNPDQSVMTERDF;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor BLHWBAFBGARCSF;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_B;
/*SET*/	BLHWBAFBGARCSF = r_B;
/*INC*/	if (!INC(BLHWBAFBGARCSF, arg_to)) goto sentence_after_3;
	if (! isSymbolType(BLHWBAFBGARCSF.container->type)) goto sentence_after_3;
/*SET*/	r_A = BLHWBAFBGARCSF;
//// [ `a` <any> ] 
/*DEF*/	DataCursor IJYLBIIMOFGXEI;
/*SET*/	IJYLBIIMOFGXEI = r_A;
/*INC*/	if (!INC(IJYLBIIMOFGXEI, arg_to)) goto sentence_after_3;
	if (IJYLBIIMOFGXEI.container->type != text || *(IJYLBIIMOFGXEI.container->value.text + IJYLBIIMOFGXEI.index) != '-') goto sentence_after_3;
//// [ empty ] 
/*ISEMPTY*/	if (IJYLBIIMOFGXEI!=0 && arg_to != IJYLBIIMOFGXEI) goto sentence_after_3;

// подстановка 
// new chain 
DataChain *chain_FPPYEBEOEQZNBH = context->putChain(); 
chain_FPPYEBEOEQZNBH->append_copy(l_B, r_B, context); 
return chain_FPPYEBEOEQZNBH;
}
sentence_after_3: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor YCWMFYAQQIANNY;
/*SET*/	YCWMFYAQQIANNY = arg_from;
/*INC*/	if (!INC(YCWMFYAQQIANNY, arg_to)) goto sentence_after_4;
	if (YCWMFYAQQIANNY.container->type != text || *(YCWMFYAQQIANNY.container->value.text + YCWMFYAQQIANNY.index) != 'i') goto sentence_after_4;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor HQOUIZVEAVGZJW;
/*DEF*/	DataCursor l_B;
/*DEF*/	DataCursor r_B;
/*SET*/	l_B = YCWMFYAQQIANNY;
/*SET*/	HQOUIZVEAVGZJW = YCWMFYAQQIANNY;
/*INC*/	if (!INC(HQOUIZVEAVGZJW, arg_to)) goto sentence_after_4;
	if (! isSymbolType(HQOUIZVEAVGZJW.container->type)) goto sentence_after_4;
/*SET*/	r_B = HQOUIZVEAVGZJW;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor OBLSGWNKVJLNIV;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_B;
/*SET*/	OBLSGWNKVJLNIV = r_B;
/*INC*/	if (!INC(OBLSGWNKVJLNIV, arg_to)) goto sentence_after_4;
	if (! isSymbolType(OBLSGWNKVJLNIV.container->type)) goto sentence_after_4;
/*SET*/	r_A = OBLSGWNKVJLNIV;
//// [ `a` <any> ] 
/*DEF*/	DataCursor QCWVZXTCTHYNMU;
/*SET*/	QCWVZXTCTHYNMU = r_A;
/*INC*/	if (!INC(QCWVZXTCTHYNMU, arg_to)) goto sentence_after_4;
	if (QCWVZXTCTHYNMU.container->type != text || *(QCWVZXTCTHYNMU.container->value.text + QCWVZXTCTHYNMU.index) != '+') goto sentence_after_4;
//// [ empty ] 
/*ISEMPTY*/	if (QCWVZXTCTHYNMU!=0 && arg_to != QCWVZXTCTHYNMU) goto sentence_after_4;

// подстановка 
// new chain 
DataChain *chain_KBOKMWGSDDPQKR = context->putChain(); 
chain_KBOKMWGSDDPQKR->append_copy(l_A, r_A, context); 
return chain_KBOKMWGSDDPQKR;
}
sentence_after_4: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = arg_from;
/*SET*/	r_e = arg_from;
/*JMP*/	goto label_ZYJCHZTMIEPAGW_firststep;
label_ZYJCHZTMIEPAGW: 
/*INC*/	if (!INC(r_e, arg_to)) goto sentence_after_5;
label_ZYJCHZTMIEPAGW_firststep: 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor HROQKHWUDBCIHP;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_e;
/*SET*/	HROQKHWUDBCIHP = r_e;
/*INC*/	if (!INC(HROQKHWUDBCIHP, arg_to)) goto label_ZYJCHZTMIEPAGW;
	if (! isSymbolType(HROQKHWUDBCIHP.container->type)) goto label_ZYJCHZTMIEPAGW;
/*SET*/	r_A = HROQKHWUDBCIHP;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor QWAQZXUGKVAKVL;
/*DEF*/	DataCursor l_zn;
/*DEF*/	DataCursor r_zn;
/*SET*/	l_zn = r_A;
/*SET*/	QWAQZXUGKVAKVL = r_A;
/*INC*/	if (!INC(QWAQZXUGKVAKVL, arg_to)) goto label_ZYJCHZTMIEPAGW;
	if (! isSymbolType(QWAQZXUGKVAKVL.container->type)) goto label_ZYJCHZTMIEPAGW;
/*SET*/	r_zn = QWAQZXUGKVAKVL;
//// [ empty ] 
/*ISEMPTY*/	if (r_zn!=0 && arg_to != r_zn) goto label_ZYJCHZTMIEPAGW;

// подстановка 
// new chain 
DataChain *chain_AVKSWFZSDBVQID = context->putChain(); 
chain_AVKSWFZSDBVQID->append_copy(l_A, r_A, context); 
return chain_AVKSWFZSDBVQID;
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
DataChain *chain_HTBCDEYTMPPHKU = context->putChain(); 
return chain_HTBCDEYTMPPHKU;
}
sentence_after_1: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor HSXORPUFWHJRUT;
/*DEF*/	DataCursor KSSLHLRXLYDXVK;
/*DEF*/	DataCursor OSAGGMPBGZVBAF;
/*SET*/	HSXORPUFWHJRUT = arg_from;
/*INC*/	if (!INC(HSXORPUFWHJRUT, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (HSXORPUFWHJRUT.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	KSSLHLRXLYDXVK = HSXORPUFWHJRUT.container->value.bracket_data.chain->at_before_first();
	OSAGGMPBGZVBAF   = HSXORPUFWHJRUT.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor AZJOHQSSWTORCK;
/*DEF*/	DataCursor l_g;
/*DEF*/	DataCursor r_g;
/*SET*/	l_g = KSSLHLRXLYDXVK;
/*SET*/	AZJOHQSSWTORCK = KSSLHLRXLYDXVK;
/*INC*/	if (!INC(AZJOHQSSWTORCK, OSAGGMPBGZVBAF)) goto sentence_after_2;
	if (! isSymbolType(AZJOHQSSWTORCK.container->type)) goto sentence_after_2;
/*SET*/	r_g = AZJOHQSSWTORCK;
//// [ empty ] 
/*ISEMPTY*/	if (r_g!=0 && OSAGGMPBGZVBAF != r_g) goto sentence_after_2;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor QAXSREHNRLYJIW;
/*DEF*/	DataCursor TMHGLKOZFKMMXT;
/*DEF*/	DataCursor YVOXHFKXOPVYBJ;
/*SET*/	QAXSREHNRLYJIW = HSXORPUFWHJRUT;
/*INC*/	if (!INC(QAXSREHNRLYJIW, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (QAXSREHNRLYJIW.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	TMHGLKOZFKMMXT = QAXSREHNRLYJIW.container->value.bracket_data.chain->at_before_first();
	YVOXHFKXOPVYBJ   = QAXSREHNRLYJIW.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = TMHGLKOZFKMMXT;
/*SET*/	r_1 = YVOXHFKXOPVYBJ;
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
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = OTTCJTUEGMPQKC;
/*SET*/	r_2 = DBBGCKJQTEBICH;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor ZNPPRQISWBDHOY;
/*DEF*/	DataCursor NCSAETLGBFVIOC;
/*DEF*/	DataCursor FWXWDRNLFFBFHV;
/*SET*/	ZNPPRQISWBDHOY = ZOXHZUBDNTOAMZ;
/*INC*/	if (!INC(ZNPPRQISWBDHOY, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (ZNPPRQISWBDHOY.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	NCSAETLGBFVIOC = ZNPPRQISWBDHOY.container->value.bracket_data.chain->at_before_first();
	FWXWDRNLFFBFHV   = ZNPPRQISWBDHOY.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = NCSAETLGBFVIOC;
/*SET*/	r_n = FWXWDRNLFFBFHV;
//// [ empty ] 
/*ISEMPTY*/	if (ZNPPRQISWBDHOY!=0 && arg_to != ZNPPRQISWBDHOY) goto sentence_after_2;

// подстановка 
// new chain 
DataChain *chain_YXZUKJWOCYHZQJ = context->putChain(); 
DataChain* ZDHTBRRRLLKTCH = new DataChain(); 
DataContainer* ZDHTBRRRLLKTCH_execbr = newRefExecBrackets(WXOif, ZDHTBRRRLLKTCH, "WXOif");
chain_YXZUKJWOCYHZQJ->append(ZDHTBRRRLLKTCH_execbr);
DataChain* FNCTPIRNAWONYD = new DataChain(); 
ZDHTBRRRLLKTCH->append(newRefStructBrackets(FNCTPIRNAWONYD)); 
FNCTPIRNAWONYD->append_copy(l_g, r_g, context); 
DataChain* WWVUABUQCIMCNL = new DataChain(); 
ZDHTBRRRLLKTCH->append(newRefStructBrackets(WWVUABUQCIMCNL)); 
DataChain* HQODEMAKMUNMAX = new DataChain(); 
DataContainer* HQODEMAKMUNMAX_execbr = newRefExecBrackets(Strategy, HQODEMAKMUNMAX, "Strategy");
WWVUABUQCIMCNL->append(HQODEMAKMUNMAX_execbr);
HQODEMAKMUNMAX->append_copy(l_1, r_1, context); 
context->pushExecuteCall(HQODEMAKMUNMAX_execbr); // Strategy
DataChain* IOMKEYWCOFQBKD = new DataChain(); 
ZDHTBRRRLLKTCH->append(newRefStructBrackets(IOMKEYWCOFQBKD)); 
DataChain* MZOIZGQIPZAYIX = new DataChain(); 
DataContainer* MZOIZGQIPZAYIX_execbr = newRefExecBrackets(Strategy, MZOIZGQIPZAYIX, "Strategy");
IOMKEYWCOFQBKD->append(MZOIZGQIPZAYIX_execbr);
MZOIZGQIPZAYIX->append_copy(l_2, r_2, context); 
context->pushExecuteCall(MZOIZGQIPZAYIX_execbr); // Strategy
DataChain* RYDWSOVHZTKGZS = new DataChain(); 
ZDHTBRRRLLKTCH->append(newRefStructBrackets(RYDWSOVHZTKGZS)); 
DataChain* KWPTKQCEXRNNXS = new DataChain(); 
DataContainer* KWPTKQCEXRNNXS_execbr = newRefExecBrackets(Strategy, KWPTKQCEXRNNXS, "Strategy");
RYDWSOVHZTKGZS->append(KWPTKQCEXRNNXS_execbr);
KWPTKQCEXRNNXS->append_copy(l_n, r_n, context); 
context->pushExecuteCall(KWPTKQCEXRNNXS_execbr); // Strategy
DataChain* KYWNDQIZLZKLNI = new DataChain(); 
ZDHTBRRRLLKTCH->append(newRefStructBrackets(KYWNDQIZLZKLNI)); 
KYWNDQIZLZKLNI->append_copy(l_1, r_1, context); 
DataChain* SSAMQAZHLNDNVI = new DataChain(); 
ZDHTBRRRLLKTCH->append(newRefStructBrackets(SSAMQAZHLNDNVI)); 
SSAMQAZHLNDNVI->append_copy(l_2, r_2, context); 
DataChain* LTKOIAFMEICGGU = new DataChain(); 
ZDHTBRRRLLKTCH->append(newRefStructBrackets(LTKOIAFMEICGGU)); 
LTKOIAFMEICGGU->append_copy(l_n, r_n, context); 
context->pushExecuteCall(ZDHTBRRRLLKTCH_execbr); // WXOif
return chain_YXZUKJWOCYHZQJ;
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
/*DEF*/	DataCursor ZXHRDJZZHERUSW;
/*DEF*/	DataCursor AVNVSLONOASRUD;
/*DEF*/	DataCursor RNLDKLDKFZTAGI;
/*SET*/	ZXHRDJZZHERUSW = arg_from;
/*INC*/	if (!INC(ZXHRDJZZHERUSW, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (ZXHRDJZZHERUSW.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	AVNVSLONOASRUD = ZXHRDJZZHERUSW.container->value.bracket_data.chain->at_before_first();
	RNLDKLDKFZTAGI   = ZXHRDJZZHERUSW.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor ENATJZWXCLKKUL;
/*SET*/	ENATJZWXCLKKUL = AVNVSLONOASRUD;
/*INC*/	if (!INC(ENATJZWXCLKKUL, RNLDKLDKFZTAGI)) goto sentence_after_1;
	if (ENATJZWXCLKKUL.container->type != text || *(ENATJZWXCLKKUL.container->value.text + ENATJZWXCLKKUL.index) != '1') goto sentence_after_1;
//// [ empty ] 
/*ISEMPTY*/	if (ENATJZWXCLKKUL!=0 && RNLDKLDKFZTAGI != ENATJZWXCLKKUL) goto sentence_after_1;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_eee1;
/*DEF*/	DataCursor r_eee1;
/*SET*/	l_eee1 = ZXHRDJZZHERUSW;
/*SET*/	r_eee1 = ZXHRDJZZHERUSW;
/*JMP*/	goto label_ODDBMIVAZXZMCO_firststep;
label_ODDBMIVAZXZMCO: 
/*INC*/	if (!INC(r_eee1, arg_to)) goto sentence_after_1;
label_ODDBMIVAZXZMCO_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor JDHISWKAXIAGTU;
/*DEF*/	DataCursor TAFRSVPPHURAAA;
/*DEF*/	DataCursor IXZTWDYRUUMQAD;
/*SET*/	JDHISWKAXIAGTU = r_eee1;
/*INC*/	if (!INC(JDHISWKAXIAGTU, arg_to)) goto label_ODDBMIVAZXZMCO;
//// ISBRACKET 
	if (JDHISWKAXIAGTU.container->type != struct_bracket) goto label_ODDBMIVAZXZMCO;
//// JMP_BRACKET 
	TAFRSVPPHURAAA = JDHISWKAXIAGTU.container->value.bracket_data.chain->at_before_first();
	IXZTWDYRUUMQAD   = JDHISWKAXIAGTU.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = TAFRSVPPHURAAA;
/*SET*/	r_1 = TAFRSVPPHURAAA;
/*JMP*/	goto label_JEPVVCVOIDWMTP_firststep;
label_JEPVVCVOIDWMTP: 
/*INC*/	if (!INC(r_1, IXZTWDYRUUMQAD)) goto label_ODDBMIVAZXZMCO;
label_JEPVVCVOIDWMTP_firststep: 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor BNMQUIOPIWPUWC;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_1;
/*SET*/	BNMQUIOPIWPUWC = r_1;
/*INC*/	if (!INC(BNMQUIOPIWPUWC, IXZTWDYRUUMQAD)) goto label_JEPVVCVOIDWMTP;
	if (! isSymbolType(BNMQUIOPIWPUWC.container->type)) goto label_JEPVVCVOIDWMTP;
/*SET*/	r_A = BNMQUIOPIWPUWC;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = r_A;
/*SET*/	r_2 = r_A;
/*JMP*/	goto label_ZDAPDZGHAVVIYI_firststep;
label_ZDAPDZGHAVVIYI: 
/*INC*/	if (!INC(r_2, IXZTWDYRUUMQAD)) goto label_JEPVVCVOIDWMTP;
label_ZDAPDZGHAVVIYI_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor ROJNOLSOWRMVVJ;
/*SET*/	ROJNOLSOWRMVVJ = r_2;
 if (!SLIDE(ROJNOLSOWRMVVJ, IXZTWDYRUUMQAD, l_A, r_A)) goto label_ZDAPDZGHAVVIYI;
//// [ e.1 ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = ROJNOLSOWRMVVJ;
/*SET*/	r_3 = IXZTWDYRUUMQAD;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_eee2;
/*DEF*/	DataCursor r_eee2;
/*SET*/	l_eee2 = JDHISWKAXIAGTU;
/*SET*/	r_eee2 = JDHISWKAXIAGTU;
/*JMP*/	goto label_IQSWRICMZSXAVD_firststep;
label_IQSWRICMZSXAVD: 
/*INC*/	if (!INC(r_eee2, arg_to)) goto label_ZDAPDZGHAVVIYI;
label_IQSWRICMZSXAVD_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor QAMNFHWFGEOHSK;
/*DEF*/	DataCursor KEFUTXXIBHPULN;
/*DEF*/	DataCursor LWXQWWZDGDJGEQ;
/*SET*/	QAMNFHWFGEOHSK = r_eee2;
/*INC*/	if (!INC(QAMNFHWFGEOHSK, arg_to)) goto label_IQSWRICMZSXAVD;
//// ISBRACKET 
	if (QAMNFHWFGEOHSK.container->type != struct_bracket) goto label_IQSWRICMZSXAVD;
//// JMP_BRACKET 
	KEFUTXXIBHPULN = QAMNFHWFGEOHSK.container->value.bracket_data.chain->at_before_first();
	LWXQWWZDGDJGEQ   = QAMNFHWFGEOHSK.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_n1;
/*DEF*/	DataCursor r_n1;
/*SET*/	l_n1 = KEFUTXXIBHPULN;
/*SET*/	r_n1 = KEFUTXXIBHPULN;
/*JMP*/	goto label_WAPBHLPUDOEMNN_firststep;
label_WAPBHLPUDOEMNN: 
/*INC*/	if (!INC(r_n1, LWXQWWZDGDJGEQ)) goto label_IQSWRICMZSXAVD;
label_WAPBHLPUDOEMNN_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor TPOUAHGXJHZJBE;
/*SET*/	TPOUAHGXJHZJBE = r_n1;
 if (!SLIDE(TPOUAHGXJHZJBE, LWXQWWZDGDJGEQ, l_A, r_A)) goto label_WAPBHLPUDOEMNN;
//// [ e.1 ] 
/*DEF*/	DataCursor l_n2;
/*DEF*/	DataCursor r_n2;
/*SET*/	l_n2 = TPOUAHGXJHZJBE;
/*SET*/	r_n2 = LWXQWWZDGDJGEQ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor PLTTRIABWUCRJM;
/*DEF*/	DataCursor BVBOZVMXOBATKH;
/*DEF*/	DataCursor QSQCHLHTBOFUIK;
/*SET*/	PLTTRIABWUCRJM = QAMNFHWFGEOHSK;
/*INC*/	if (!INC(PLTTRIABWUCRJM, arg_to)) goto label_WAPBHLPUDOEMNN;
//// ISBRACKET 
	if (PLTTRIABWUCRJM.container->type != struct_bracket) goto label_WAPBHLPUDOEMNN;
//// JMP_BRACKET 
	BVBOZVMXOBATKH = PLTTRIABWUCRJM.container->value.bracket_data.chain->at_before_first();
	QSQCHLHTBOFUIK   = PLTTRIABWUCRJM.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_e1;
/*DEF*/	DataCursor r_e1;
/*SET*/	l_e1 = BVBOZVMXOBATKH;
/*SET*/	r_e1 = QSQCHLHTBOFUIK;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor WAFKCOWUUNTFHP;
/*DEF*/	DataCursor KDEYHOKQUWQVWT;
/*DEF*/	DataCursor THHHUGJZMFEUIN;
/*SET*/	WAFKCOWUUNTFHP = PLTTRIABWUCRJM;
/*INC*/	if (!INC(WAFKCOWUUNTFHP, arg_to)) goto label_WAPBHLPUDOEMNN;
//// ISBRACKET 
	if (WAFKCOWUUNTFHP.container->type != struct_bracket) goto label_WAPBHLPUDOEMNN;
//// JMP_BRACKET 
	KDEYHOKQUWQVWT = WAFKCOWUUNTFHP.container->value.bracket_data.chain->at_before_first();
	THHHUGJZMFEUIN   = WAFKCOWUUNTFHP.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_e2;
/*DEF*/	DataCursor r_e2;
/*SET*/	l_e2 = KDEYHOKQUWQVWT;
/*SET*/	r_e2 = THHHUGJZMFEUIN;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor IPBNCIZOCKAADA;
/*DEF*/	DataCursor LLJREQTKHUDBLP;
/*DEF*/	DataCursor RZLSRWXOCCSLUT;
/*SET*/	IPBNCIZOCKAADA = WAFKCOWUUNTFHP;
/*INC*/	if (!INC(IPBNCIZOCKAADA, arg_to)) goto label_WAPBHLPUDOEMNN;
//// ISBRACKET 
	if (IPBNCIZOCKAADA.container->type != struct_bracket) goto label_WAPBHLPUDOEMNN;
//// JMP_BRACKET 
	LLJREQTKHUDBLP = IPBNCIZOCKAADA.container->value.bracket_data.chain->at_before_first();
	RZLSRWXOCCSLUT   = IPBNCIZOCKAADA.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = LLJREQTKHUDBLP;
/*SET*/	r_n = RZLSRWXOCCSLUT;
//// [ empty ] 
/*ISEMPTY*/	if (IPBNCIZOCKAADA!=0 && arg_to != IPBNCIZOCKAADA) goto label_WAPBHLPUDOEMNN;

// подстановка 
// new chain 
DataChain *chain_WQZSQTIJVCWNPF = context->putChain(); 
chain_WQZSQTIJVCWNPF->append(newRefText("#", __LINE__)); 
DataChain* LRLUKDIAOHQJHR = new DataChain(); 
DataContainer* LRLUKDIAOHQJHR_execbr = newRefExecBrackets(Lins, LRLUKDIAOHQJHR, "Lins");
chain_WQZSQTIJVCWNPF->append(LRLUKDIAOHQJHR_execbr);
DataChain* AGLGRIYKLDKDFR = new DataChain(); 
LRLUKDIAOHQJHR->append(newRefStructBrackets(AGLGRIYKLDKDFR)); 
AGLGRIYKLDKDFR->append_copy(l_n, r_n, context); 
DataChain* DRXJSTCWRSXGYW = new DataChain(); 
DataContainer* DRXJSTCWRSXGYW_execbr = newRefExecBrackets(AntiStrategy, DRXJSTCWRSXGYW, "AntiStrategy");
LRLUKDIAOHQJHR->append(DRXJSTCWRSXGYW_execbr);
DRXJSTCWRSXGYW->append_copy(l_A, r_A, context); 
context->pushExecuteCall(DRXJSTCWRSXGYW_execbr); // AntiStrategy
context->pushExecuteCall(LRLUKDIAOHQJHR_execbr); // Lins
return chain_WQZSQTIJVCWNPF;
}
sentence_after_1: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor FNHCBKPMESUPMT;
/*DEF*/	DataCursor RVIPFBKTBWZFAH;
/*DEF*/	DataCursor OEVNHXBRHHFOBG;
/*SET*/	FNHCBKPMESUPMT = arg_from;
/*INC*/	if (!INC(FNHCBKPMESUPMT, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (FNHCBKPMESUPMT.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	RVIPFBKTBWZFAH = FNHCBKPMESUPMT.container->value.bracket_data.chain->at_before_first();
	OEVNHXBRHHFOBG   = FNHCBKPMESUPMT.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor YWCVHKTDOXQTEK;
/*DEF*/	DataCursor l_g;
/*DEF*/	DataCursor r_g;
/*SET*/	l_g = RVIPFBKTBWZFAH;
/*SET*/	YWCVHKTDOXQTEK = RVIPFBKTBWZFAH;
/*INC*/	if (!INC(YWCVHKTDOXQTEK, OEVNHXBRHHFOBG)) goto sentence_after_2;
	if (! isSymbolType(YWCVHKTDOXQTEK.container->type)) goto sentence_after_2;
/*SET*/	r_g = YWCVHKTDOXQTEK;
//// [ empty ] 
/*ISEMPTY*/	if (r_g!=0 && OEVNHXBRHHFOBG != r_g) goto sentence_after_2;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = FNHCBKPMESUPMT;
/*SET*/	r_e = FNHCBKPMESUPMT;
/*JMP*/	goto label_IWWURZBLMLDLFI_firststep;
label_IWWURZBLMLDLFI: 
/*INC*/	if (!INC(r_e, arg_to)) goto sentence_after_2;
label_IWWURZBLMLDLFI_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor BDVEMUNNLXUBYK;
/*DEF*/	DataCursor VVRGKTRERPTISI;
/*DEF*/	DataCursor ZXHREVNXQUEZXK;
/*SET*/	BDVEMUNNLXUBYK = r_e;
/*INC*/	if (!INC(BDVEMUNNLXUBYK, arg_to)) goto label_IWWURZBLMLDLFI;
//// ISBRACKET 
	if (BDVEMUNNLXUBYK.container->type != struct_bracket) goto label_IWWURZBLMLDLFI;
//// JMP_BRACKET 
	VVRGKTRERPTISI = BDVEMUNNLXUBYK.container->value.bracket_data.chain->at_before_first();
	ZXHREVNXQUEZXK   = BDVEMUNNLXUBYK.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = VVRGKTRERPTISI;
/*SET*/	r_1 = ZXHREVNXQUEZXK;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor UGROOHRHUDIDGV;
/*DEF*/	DataCursor HTJHYEZKYHPFXW;
/*DEF*/	DataCursor GPRPSEACCXKWVI;
/*SET*/	UGROOHRHUDIDGV = BDVEMUNNLXUBYK;
/*INC*/	if (!INC(UGROOHRHUDIDGV, arg_to)) goto label_IWWURZBLMLDLFI;
//// ISBRACKET 
	if (UGROOHRHUDIDGV.container->type != struct_bracket) goto label_IWWURZBLMLDLFI;
//// JMP_BRACKET 
	HTJHYEZKYHPFXW = UGROOHRHUDIDGV.container->value.bracket_data.chain->at_before_first();
	GPRPSEACCXKWVI   = UGROOHRHUDIDGV.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = HTJHYEZKYHPFXW;
/*SET*/	r_2 = GPRPSEACCXKWVI;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor XVFHQFAWKFDJPY;
/*DEF*/	DataCursor EEVDGGATFIEKIX;
/*DEF*/	DataCursor EYRFCPXSCJKCFG;
/*SET*/	XVFHQFAWKFDJPY = UGROOHRHUDIDGV;
/*INC*/	if (!INC(XVFHQFAWKFDJPY, arg_to)) goto label_IWWURZBLMLDLFI;
//// ISBRACKET 
	if (XVFHQFAWKFDJPY.container->type != struct_bracket) goto label_IWWURZBLMLDLFI;
//// JMP_BRACKET 
	EEVDGGATFIEKIX = XVFHQFAWKFDJPY.container->value.bracket_data.chain->at_before_first();
	EYRFCPXSCJKCFG   = XVFHQFAWKFDJPY.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = EEVDGGATFIEKIX;
/*SET*/	r_n = EYRFCPXSCJKCFG;
//// [ empty ] 
/*ISEMPTY*/	if (XVFHQFAWKFDJPY!=0 && arg_to != XVFHQFAWKFDJPY) goto label_IWWURZBLMLDLFI;

// подстановка 
// new chain 
DataChain *chain_QMYHJMJTIMDSPI = context->putChain(); 
DataChain* ZHWZIZCYUCEGLM = new DataChain(); 
DataContainer* ZHWZIZCYUCEGLM_execbr = newRefExecBrackets(WriteXO1, ZHWZIZCYUCEGLM, "WriteXO1");
chain_QMYHJMJTIMDSPI->append(ZHWZIZCYUCEGLM_execbr);
DataChain* MBGYGFVTQVZQAT = new DataChain(); 
ZHWZIZCYUCEGLM->append(newRefStructBrackets(MBGYGFVTQVZQAT)); 
MBGYGFVTQVZQAT->append_copy(l_g, r_g, context); 
DataChain* XLGIBYZZKIAJXM = new DataChain(); 
ZHWZIZCYUCEGLM->append(newRefStructBrackets(XLGIBYZZKIAJXM)); 
XLGIBYZZKIAJXM->append_copy(l_1, r_1, context); 
DataChain* BHMKQLWHQNGHLV = new DataChain(); 
ZHWZIZCYUCEGLM->append(newRefStructBrackets(BHMKQLWHQNGHLV)); 
BHMKQLWHQNGHLV->append_copy(l_2, r_2, context); 
DataChain* LZGPPXOOEOQXPP = new DataChain(); 
ZHWZIZCYUCEGLM->append(newRefStructBrackets(LZGPPXOOEOQXPP)); 
LZGPPXOOEOQXPP->append_copy(l_n, r_n, context); 
context->pushExecuteCall(ZHWZIZCYUCEGLM_execbr); // WriteXO1
return chain_QMYHJMJTIMDSPI;
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
/*DEF*/	DataCursor BPMBLXNKEOFMNI;
/*DEF*/	DataCursor UMJCAFCUYVDCUE;
/*DEF*/	DataCursor TERQPJJWAKNKXT;
/*SET*/	BPMBLXNKEOFMNI = arg_from;
/*INC*/	if (!INC(BPMBLXNKEOFMNI, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (BPMBLXNKEOFMNI.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	UMJCAFCUYVDCUE = BPMBLXNKEOFMNI.container->value.bracket_data.chain->at_before_first();
	TERQPJJWAKNKXT   = BPMBLXNKEOFMNI.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_n1;
/*DEF*/	DataCursor r_n1;
/*SET*/	l_n1 = UMJCAFCUYVDCUE;
/*SET*/	r_n1 = UMJCAFCUYVDCUE;
/*JMP*/	goto label_LZQFLJNWKXGKFY_firststep;
label_LZQFLJNWKXGKFY: 
/*INC*/	if (!INC(r_n1, TERQPJJWAKNKXT)) goto sentence_after_1;
label_LZQFLJNWKXGKFY_firststep: 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor LNUKBIYSPLKHJU;
/*DEF*/	DataCursor l_hod;
/*DEF*/	DataCursor r_hod;
/*SET*/	l_hod = r_n1;
/*SET*/	LNUKBIYSPLKHJU = r_n1;
/*INC*/	if (!INC(LNUKBIYSPLKHJU, TERQPJJWAKNKXT)) goto label_LZQFLJNWKXGKFY;
	if (! isSymbolType(LNUKBIYSPLKHJU.container->type)) goto label_LZQFLJNWKXGKFY;
/*SET*/	r_hod = LNUKBIYSPLKHJU;
//// [ e.1 ] 
/*DEF*/	DataCursor l_n2;
/*DEF*/	DataCursor r_n2;
/*SET*/	l_n2 = r_hod;
/*SET*/	r_n2 = TERQPJJWAKNKXT;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_as1;
/*DEF*/	DataCursor r_as1;
/*SET*/	l_as1 = BPMBLXNKEOFMNI;
/*SET*/	r_as1 = BPMBLXNKEOFMNI;
/*JMP*/	goto label_CFUWOHZVPHJBJY_firststep;
label_CFUWOHZVPHJBJY: 
/*INC*/	if (!INC(r_as1, arg_to)) goto label_LZQFLJNWKXGKFY;
label_CFUWOHZVPHJBJY_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor OVDLNBFRKVBEMW;
/*SET*/	OVDLNBFRKVBEMW = r_as1;
 if (!SLIDE(OVDLNBFRKVBEMW, arg_to, l_hod, r_hod)) goto label_CFUWOHZVPHJBJY;
//// [ e.1 ] 
/*DEF*/	DataCursor l_as2;
/*DEF*/	DataCursor r_as2;
/*SET*/	l_as2 = OVDLNBFRKVBEMW;
/*SET*/	r_as2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_YTFJYNQMGZAGBK = context->putChain(); 
chain_YTFJYNQMGZAGBK->append_copy(l_hod, r_hod, context); 
return chain_YTFJYNQMGZAGBK;
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
/*DEF*/	DataCursor WEKKOUXDCYNKHT;
/*SET*/	WEKKOUXDCYNKHT = arg_from;
/*INC*/	if (!INC(WEKKOUXDCYNKHT, arg_to)) goto sentence_after_1;
	if (WEKKOUXDCYNKHT.container->type != text || *(WEKKOUXDCYNKHT.container->value.text + WEKKOUXDCYNKHT.index) != '1') goto sentence_after_1;
//// [ empty ] 
/*ISEMPTY*/	if (WEKKOUXDCYNKHT!=0 && arg_to != WEKKOUXDCYNKHT) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_FULDVRXLONVKXZ = context->putChain(); 
chain_FULDVRXLONVKXZ->append(newRefText("123", __LINE__)); 
return chain_FULDVRXLONVKXZ;
}
sentence_after_1: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor ECXEPKMZZGXLUA;
/*SET*/	ECXEPKMZZGXLUA = arg_from;
/*INC*/	if (!INC(ECXEPKMZZGXLUA, arg_to)) goto sentence_after_2;
	if (ECXEPKMZZGXLUA.container->type != text || *(ECXEPKMZZGXLUA.container->value.text + ECXEPKMZZGXLUA.index) != '2') goto sentence_after_2;
//// [ empty ] 
/*ISEMPTY*/	if (ECXEPKMZZGXLUA!=0 && arg_to != ECXEPKMZZGXLUA) goto sentence_after_2;

// подстановка 
// new chain 
DataChain *chain_PJIKVPAUDVKXGL = context->putChain(); 
chain_PJIKVPAUDVKXGL->append(newRefText("456", __LINE__)); 
return chain_PJIKVPAUDVKXGL;
}
sentence_after_2: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor LISAAMBOVJKDQR;
/*SET*/	LISAAMBOVJKDQR = arg_from;
/*INC*/	if (!INC(LISAAMBOVJKDQR, arg_to)) goto sentence_after_3;
	if (LISAAMBOVJKDQR.container->type != text || *(LISAAMBOVJKDQR.container->value.text + LISAAMBOVJKDQR.index) != '3') goto sentence_after_3;
//// [ empty ] 
/*ISEMPTY*/	if (LISAAMBOVJKDQR!=0 && arg_to != LISAAMBOVJKDQR) goto sentence_after_3;

// подстановка 
// new chain 
DataChain *chain_ZIFAWFTZQGEMNH = context->putChain(); 
chain_ZIFAWFTZQGEMNH->append(newRefText("789", __LINE__)); 
return chain_ZIFAWFTZQGEMNH;
}
sentence_after_3: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor PQYICTMOYFPCVK;
/*SET*/	PQYICTMOYFPCVK = arg_from;
/*INC*/	if (!INC(PQYICTMOYFPCVK, arg_to)) goto sentence_after_4;
	if (PQYICTMOYFPCVK.container->type != text || *(PQYICTMOYFPCVK.container->value.text + PQYICTMOYFPCVK.index) != '4') goto sentence_after_4;
//// [ empty ] 
/*ISEMPTY*/	if (PQYICTMOYFPCVK!=0 && arg_to != PQYICTMOYFPCVK) goto sentence_after_4;

// подстановка 
// new chain 
DataChain *chain_OWDZSFQHKPLFBY = context->putChain(); 
chain_OWDZSFQHKPLFBY->append(newRefText("147", __LINE__)); 
return chain_OWDZSFQHKPLFBY;
}
sentence_after_4: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor ZMNIMDLXMJYDAX;
/*SET*/	ZMNIMDLXMJYDAX = arg_from;
/*INC*/	if (!INC(ZMNIMDLXMJYDAX, arg_to)) goto sentence_after_5;
	if (ZMNIMDLXMJYDAX.container->type != text || *(ZMNIMDLXMJYDAX.container->value.text + ZMNIMDLXMJYDAX.index) != '5') goto sentence_after_5;
//// [ empty ] 
/*ISEMPTY*/	if (ZMNIMDLXMJYDAX!=0 && arg_to != ZMNIMDLXMJYDAX) goto sentence_after_5;

// подстановка 
// new chain 
DataChain *chain_VOCDENQMWILXXZ = context->putChain(); 
chain_VOCDENQMWILXXZ->append(newRefText("258", __LINE__)); 
return chain_VOCDENQMWILXXZ;
}
sentence_after_5: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor OQFOTPIKPQUDMO;
/*SET*/	OQFOTPIKPQUDMO = arg_from;
/*INC*/	if (!INC(OQFOTPIKPQUDMO, arg_to)) goto sentence_after_6;
	if (OQFOTPIKPQUDMO.container->type != text || *(OQFOTPIKPQUDMO.container->value.text + OQFOTPIKPQUDMO.index) != '6') goto sentence_after_6;
//// [ empty ] 
/*ISEMPTY*/	if (OQFOTPIKPQUDMO!=0 && arg_to != OQFOTPIKPQUDMO) goto sentence_after_6;

// подстановка 
// new chain 
DataChain *chain_XIISYZWNHXYFVY = context->putChain(); 
chain_XIISYZWNHXYFVY->append(newRefText("369", __LINE__)); 
return chain_XIISYZWNHXYFVY;
}
sentence_after_6: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor DFMPDWOMCIUDCN;
/*SET*/	DFMPDWOMCIUDCN = arg_from;
/*INC*/	if (!INC(DFMPDWOMCIUDCN, arg_to)) goto sentence_after_7;
	if (DFMPDWOMCIUDCN.container->type != text || *(DFMPDWOMCIUDCN.container->value.text + DFMPDWOMCIUDCN.index) != '7') goto sentence_after_7;
//// [ empty ] 
/*ISEMPTY*/	if (DFMPDWOMCIUDCN!=0 && arg_to != DFMPDWOMCIUDCN) goto sentence_after_7;

// подстановка 
// new chain 
DataChain *chain_MXIISNEBPYWSGQ = context->putChain(); 
chain_MXIISNEBPYWSGQ->append(newRefText("159", __LINE__)); 
return chain_MXIISNEBPYWSGQ;
}
sentence_after_7: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor SXDJPLWZFMJOOP;
/*SET*/	SXDJPLWZFMJOOP = arg_from;
/*INC*/	if (!INC(SXDJPLWZFMJOOP, arg_to)) goto sentence_after_8;
	if (SXDJPLWZFMJOOP.container->type != text || *(SXDJPLWZFMJOOP.container->value.text + SXDJPLWZFMJOOP.index) != '8') goto sentence_after_8;
//// [ empty ] 
/*ISEMPTY*/	if (SXDJPLWZFMJOOP!=0 && arg_to != SXDJPLWZFMJOOP) goto sentence_after_8;

// подстановка 
// new chain 
DataChain *chain_EAWPVAPIHOXUUF = context->putChain(); 
chain_EAWPVAPIHOXUUF->append(newRefText("357", __LINE__)); 
return chain_EAWPVAPIHOXUUF;
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
DataChain *chain_FBRWHPEVCOQRGR = context->putChain(); 
return chain_FBRWHPEVCOQRGR;
}
sentence_after_1: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_eee;
/*DEF*/	DataCursor r_eee;
/*SET*/	l_eee = arg_from;
/*SET*/	r_eee = arg_from;
/*JMP*/	goto label_QWZHIBNORKHZML_firststep;
label_QWZHIBNORKHZML: 
/*INC*/	if (!INC(r_eee, arg_to)) goto sentence_after_2;
label_QWZHIBNORKHZML_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor BZFHXUNRKLIBVP;
/*DEF*/	DataCursor SZZNOPFGAXZGFL;
/*DEF*/	DataCursor TLSXBTUMILOCLT;
/*SET*/	BZFHXUNRKLIBVP = r_eee;
/*INC*/	if (!INC(BZFHXUNRKLIBVP, arg_to)) goto label_QWZHIBNORKHZML;
//// ISBRACKET 
	if (BZFHXUNRKLIBVP.container->type != struct_bracket) goto label_QWZHIBNORKHZML;
//// JMP_BRACKET 
	SZZNOPFGAXZGFL = BZFHXUNRKLIBVP.container->value.bracket_data.chain->at_before_first();
	TLSXBTUMILOCLT   = BZFHXUNRKLIBVP.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = SZZNOPFGAXZGFL;
/*SET*/	r_3 = SZZNOPFGAXZGFL;
/*JMP*/	goto label_GCOZGTZIUFUZIM_firststep;
label_GCOZGTZIUFUZIM: 
/*INC*/	if (!INC(r_3, TLSXBTUMILOCLT)) goto label_QWZHIBNORKHZML;
label_GCOZGTZIUFUZIM_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor XEEKWNYSBICRFX;
/*SET*/	XEEKWNYSBICRFX = r_3;
/*INC*/	if (!INC(XEEKWNYSBICRFX, TLSXBTUMILOCLT)) goto label_GCOZGTZIUFUZIM;
	if (XEEKWNYSBICRFX.container->type != text || *(XEEKWNYSBICRFX.container->value.text + XEEKWNYSBICRFX.index) != '>') goto label_GCOZGTZIUFUZIM;
//// [ empty ] 
/*ISEMPTY*/	if (XEEKWNYSBICRFX!=0 && TLSXBTUMILOCLT != XEEKWNYSBICRFX) goto label_GCOZGTZIUFUZIM;
//// [ empty ] 
/*ISEMPTY*/	if (BZFHXUNRKLIBVP!=0 && arg_to != BZFHXUNRKLIBVP) goto label_GCOZGTZIUFUZIM;

// подстановка 
// new chain 
DataChain *chain_JOTYCZCWMBAAOL = context->putChain(); 
return chain_JOTYCZCWMBAAOL;
}
sentence_after_2: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor SVUBPYLONMWAJG;
/*DEF*/	DataCursor XZGYZAOVENFVOC;
/*DEF*/	DataCursor IKQJTXGVENKSPP;
/*SET*/	SVUBPYLONMWAJG = arg_from;
/*INC*/	if (!INC(SVUBPYLONMWAJG, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (SVUBPYLONMWAJG.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	XZGYZAOVENFVOC = SVUBPYLONMWAJG.container->value.bracket_data.chain->at_before_first();
	IKQJTXGVENKSPP   = SVUBPYLONMWAJG.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor WWPLHXTGYBVMAJ;
/*DEF*/	DataCursor l_g;
/*DEF*/	DataCursor r_g;
/*SET*/	l_g = XZGYZAOVENFVOC;
/*SET*/	WWPLHXTGYBVMAJ = XZGYZAOVENFVOC;
/*INC*/	if (!INC(WWPLHXTGYBVMAJ, IKQJTXGVENKSPP)) goto sentence_after_3;
	if (! isSymbolType(WWPLHXTGYBVMAJ.container->type)) goto sentence_after_3;
/*SET*/	r_g = WWPLHXTGYBVMAJ;
//// [ empty ] 
/*ISEMPTY*/	if (r_g!=0 && IKQJTXGVENKSPP != r_g) goto sentence_after_3;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_eee;
/*DEF*/	DataCursor r_eee;
/*SET*/	l_eee = SVUBPYLONMWAJG;
/*SET*/	r_eee = SVUBPYLONMWAJG;
/*JMP*/	goto label_EYFAXEGSEIJIKC_firststep;
label_EYFAXEGSEIJIKC: 
/*INC*/	if (!INC(r_eee, arg_to)) goto sentence_after_3;
label_EYFAXEGSEIJIKC_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor MDUCLAAIOISSIS;
/*DEF*/	DataCursor IYPPNZDUBPTSAV;
/*DEF*/	DataCursor ESZSIPPQMOTJHK;
/*SET*/	MDUCLAAIOISSIS = r_eee;
/*INC*/	if (!INC(MDUCLAAIOISSIS, arg_to)) goto label_EYFAXEGSEIJIKC;
//// ISBRACKET 
	if (MDUCLAAIOISSIS.container->type != struct_bracket) goto label_EYFAXEGSEIJIKC;
//// JMP_BRACKET 
	IYPPNZDUBPTSAV = MDUCLAAIOISSIS.container->value.bracket_data.chain->at_before_first();
	ESZSIPPQMOTJHK   = MDUCLAAIOISSIS.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = IYPPNZDUBPTSAV;
/*SET*/	r_3 = IYPPNZDUBPTSAV;
/*JMP*/	goto label_UDNVQZBKATNEFU_firststep;
label_UDNVQZBKATNEFU: 
/*INC*/	if (!INC(r_3, ESZSIPPQMOTJHK)) goto label_EYFAXEGSEIJIKC;
label_UDNVQZBKATNEFU_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor LGEXKTRMHDDAPS;
/*SET*/	LGEXKTRMHDDAPS = r_3;
/*INC*/	if (!INC(LGEXKTRMHDDAPS, ESZSIPPQMOTJHK)) goto label_UDNVQZBKATNEFU;
	if (LGEXKTRMHDDAPS.container->type != text || *(LGEXKTRMHDDAPS.container->value.text + LGEXKTRMHDDAPS.index) != '>') goto label_UDNVQZBKATNEFU;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor WPTFVOVUJIUWBM;
/*DEF*/	DataCursor l_s;
/*DEF*/	DataCursor r_s;
/*SET*/	l_s = LGEXKTRMHDDAPS;
/*SET*/	WPTFVOVUJIUWBM = LGEXKTRMHDDAPS;
/*INC*/	if (!INC(WPTFVOVUJIUWBM, ESZSIPPQMOTJHK)) goto label_UDNVQZBKATNEFU;
	if (! isSymbolType(WPTFVOVUJIUWBM.container->type)) goto label_UDNVQZBKATNEFU;
/*SET*/	r_s = WPTFVOVUJIUWBM;
//// [ e.1 ] 
/*DEF*/	DataCursor l_4;
/*DEF*/	DataCursor r_4;
/*SET*/	l_4 = r_s;
/*SET*/	r_4 = ESZSIPPQMOTJHK;
//// [ empty ] 
/*ISEMPTY*/	if (MDUCLAAIOISSIS!=0 && arg_to != MDUCLAAIOISSIS) goto label_UDNVQZBKATNEFU;

// подстановка 
// new chain 
DataChain *chain_CHJWZWMOZECRZN = context->putChain(); 
DataChain* JKFRVKRMRDWROA = new DataChain(); 
DataContainer* JKFRVKRMRDWROA_execbr = newRefExecBrackets(Length, JKFRVKRMRDWROA, "Length");
chain_CHJWZWMOZECRZN->append(JKFRVKRMRDWROA_execbr);
DataChain* OCQPKTLMWXWTNU = new DataChain(); 
DataContainer* OCQPKTLMWXWTNU_execbr = newRefExecBrackets(Optima21, OCQPKTLMWXWTNU, "Optima21");
JKFRVKRMRDWROA->append(OCQPKTLMWXWTNU_execbr);
DataChain* AMQELRWBGBIJIL = new DataChain(); 
DataContainer* AMQELRWBGBIJIL_execbr = newRefExecBrackets(Analiz, AMQELRWBGBIJIL, "Analiz");
OCQPKTLMWXWTNU->append(AMQELRWBGBIJIL_execbr);
DataChain* NHIIULLTOVBEFL = new DataChain(); 
AMQELRWBGBIJIL->append(newRefStructBrackets(NHIIULLTOVBEFL)); 
NHIIULLTOVBEFL->append_copy(l_g, r_g, context); 
AMQELRWBGBIJIL->append_copy(l_eee, r_eee, context); 
DataChain* WLPBHYFFHBAVHF = new DataChain(); 
AMQELRWBGBIJIL->append(newRefStructBrackets(WLPBHYFFHBAVHF)); 
WLPBHYFFHBAVHF->append_copy(l_3, r_3, context); 
WLPBHYFFHBAVHF->append(newRefText(">", __LINE__)); 
WLPBHYFFHBAVHF->append_copy(l_s, r_s, context); 
WLPBHYFFHBAVHF->append_copy(l_4, r_4, context); 
context->pushExecuteCall(AMQELRWBGBIJIL_execbr); // Analiz
context->pushExecuteCall(OCQPKTLMWXWTNU_execbr); // Optima21
context->pushExecuteCall(JKFRVKRMRDWROA_execbr); // Length
DataChain* UAHLINDJDFPEKX = new DataChain(); 
DataContainer* UAHLINDJDFPEKX_execbr = newRefExecBrackets(WriteXO, UAHLINDJDFPEKX, "WriteXO");
chain_CHJWZWMOZECRZN->append(UAHLINDJDFPEKX_execbr);
DataChain* GLIXLAXXTOLHGL = new DataChain(); 
UAHLINDJDFPEKX->append(newRefStructBrackets(GLIXLAXXTOLHGL)); 
GLIXLAXXTOLHGL->append_copy(l_g, r_g, context); 
UAHLINDJDFPEKX->append_copy(l_eee, r_eee, context); 
DataChain* VWXKYVULCYJEFL = new DataChain(); 
UAHLINDJDFPEKX->append(newRefStructBrackets(VWXKYVULCYJEFL)); 
VWXKYVULCYJEFL->append_copy(l_3, r_3, context); 
VWXKYVULCYJEFL->append_copy(l_s, r_s, context); 
VWXKYVULCYJEFL->append(newRefText(">", __LINE__)); 
VWXKYVULCYJEFL->append_copy(l_4, r_4, context); 
context->pushExecuteCall(UAHLINDJDFPEKX_execbr); // WriteXO
return chain_CHJWZWMOZECRZN;
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
/*DEF*/	DataCursor LOQZHLTMGTUJDC;
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	LOQZHLTMGTUJDC = arg_from;
/*INC*/	if (!INC(LOQZHLTMGTUJDC, arg_to)) goto sentence_after_1;
	if (! isSymbolType(LOQZHLTMGTUJDC.container->type)) goto sentence_after_1;
/*SET*/	r_1 = LOQZHLTMGTUJDC;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = r_1;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_UUGNROTLOTCPBN = context->putChain(); 
chain_UUGNROTLOTCPBN->append_copy(l_1, r_1, context); 
return chain_UUGNROTLOTCPBN;
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
DataChain *chain_YFHEJEGCMFPTQM = context->putChain(); 
chain_YFHEJEGCMFPTQM->append_copy(l_1, r_1, context); 
return chain_YFHEJEGCMFPTQM;
}
sentence_after_2: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Length_(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = arg_from;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_VEGHMFBMVKLSQF = context->putChain(); 
DataChain* UBVXCTEPVMLJOH = new DataChain(); 
DataContainer* UBVXCTEPVMLJOH_execbr = newRefExecBrackets(Prout, UBVXCTEPVMLJOH, "Prout");
chain_VEGHMFBMVKLSQF->append(UBVXCTEPVMLJOH_execbr);
UBVXCTEPVMLJOH->append(newRefText("Length: ", __LINE__)); 
UBVXCTEPVMLJOH->append_copy(l_e, r_e, context); 
context->pushExecuteCall(UBVXCTEPVMLJOH_execbr); // Prout
DataChain* ZXXOOLNVLAYGUO = new DataChain(); 
DataContainer* ZXXOOLNVLAYGUO_execbr = newRefExecBrackets(Length_, ZXXOOLNVLAYGUO, "Length_");
chain_VEGHMFBMVKLSQF->append(ZXXOOLNVLAYGUO_execbr);
ZXXOOLNVLAYGUO->append_copy(l_e, r_e, context); 
context->pushExecuteCall(ZXXOOLNVLAYGUO_execbr); // Length_
return chain_VEGHMFBMVKLSQF;
}
sentence_after_1: 

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
/*JMP*/	goto label_KQDAUPTYVJAFZZ_firststep;
label_KQDAUPTYVJAFZZ: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_1;
label_KQDAUPTYVJAFZZ_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor KQTAXJLRBRUKKK;
/*SET*/	KQTAXJLRBRUKKK = r_1;
/*INC*/	if (!INC(KQTAXJLRBRUKKK, arg_to)) goto label_KQDAUPTYVJAFZZ;
	static DataChain *VPEZPBWSHVPCKL = text_to_chain("12");
	static DataCursor VPEZPBWSHVPCKL_l = VPEZPBWSHVPCKL->at_before_first();
	static DataCursor VPEZPBWSHVPCKL_r = VPEZPBWSHVPCKL->at_last();
 if (!SLIDE(KQTAXJLRBRUKKK, arg_to, VPEZPBWSHVPCKL_l, VPEZPBWSHVPCKL_r)) goto label_KQDAUPTYVJAFZZ;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = KQTAXJLRBRUKKK;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_DQGIVLQPIRQVWQ = context->putChain(); 
DataChain* QUYXPIXQIREUQA = new DataChain(); 
DataContainer* QUYXPIXQIREUQA_execbr = newRefExecBrackets(DivS, QUYXPIXQIREUQA, "DivS");
chain_DQGIVLQPIRQVWQ->append(QUYXPIXQIREUQA_execbr);
DataChain* MFFSVVNTGUXESI = new DataChain(); 
DataContainer* MFFSVVNTGUXESI_execbr = newRefExecBrackets(First1, MFFSVVNTGUXESI, "First1");
QUYXPIXQIREUQA->append(MFFSVVNTGUXESI_execbr);
DataChain* DRNWWTQKDOZFPK = new DataChain(); 
DataContainer* DRNWWTQKDOZFPK_execbr = newRefExecBrackets(Lenw, DRNWWTQKDOZFPK, "Lenw");
MFFSVVNTGUXESI->append(DRNWWTQKDOZFPK_execbr);
DRNWWTQKDOZFPK->append_copy(l_1, r_1, context); 
DRNWWTQKDOZFPK->append(newRefText("1", __LINE__)); 
context->pushExecuteCall(DRNWWTQKDOZFPK_execbr); // Lenw
context->pushExecuteCall(MFFSVVNTGUXESI_execbr); // First1
DataChain* DUULIFZDPOHCGU = new DataChain(); 
DataContainer* DUULIFZDPOHCGU_execbr = newRefExecBrackets(First1, DUULIFZDPOHCGU, "First1");
QUYXPIXQIREUQA->append(DUULIFZDPOHCGU_execbr);
DataChain* BKUREHRQBBXAJE = new DataChain(); 
DataContainer* BKUREHRQBBXAJE_execbr = newRefExecBrackets(Lenw, BKUREHRQBBXAJE, "Lenw");
DUULIFZDPOHCGU->append(BKUREHRQBBXAJE_execbr);
BKUREHRQBBXAJE->append(newRefText("2", __LINE__)); 
BKUREHRQBBXAJE->append_copy(l_2, r_2, context); 
context->pushExecuteCall(BKUREHRQBBXAJE_execbr); // Lenw
context->pushExecuteCall(DUULIFZDPOHCGU_execbr); // First1
context->pushExecuteCall(QUYXPIXQIREUQA_execbr); // DivS
return chain_DQGIVLQPIRQVWQ;
}
sentence_after_1: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_FBFHKZBPKAPBSZ_firststep;
label_FBFHKZBPKAPBSZ: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_2;
label_FBFHKZBPKAPBSZ_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor YSPDAAOXRAOJOT;
/*SET*/	YSPDAAOXRAOJOT = r_1;
/*INC*/	if (!INC(YSPDAAOXRAOJOT, arg_to)) goto label_FBFHKZBPKAPBSZ;
	if (YSPDAAOXRAOJOT.container->type != text || *(YSPDAAOXRAOJOT.container->value.text + YSPDAAOXRAOJOT.index) != '1') goto label_FBFHKZBPKAPBSZ;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = YSPDAAOXRAOJOT;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_TSGRZUIGUSNWLY = context->putChain(); 
chain_TSGRZUIGUSNWLY->append(newRefText("1=", __LINE__)); 
chain_TSGRZUIGUSNWLY->append(newRefInteger(2000000)); 
return chain_TSGRZUIGUSNWLY;
}
sentence_after_2: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_RVFNKKMSDBUHVH_firststep;
label_RVFNKKMSDBUHVH: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_3;
label_RVFNKKMSDBUHVH_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor FQTDVTNLEWFQUU;
/*SET*/	FQTDVTNLEWFQUU = r_1;
/*INC*/	if (!INC(FQTDVTNLEWFQUU, arg_to)) goto label_RVFNKKMSDBUHVH;
	if (FQTDVTNLEWFQUU.container->type != text || *(FQTDVTNLEWFQUU.container->value.text + FQTDVTNLEWFQUU.index) != '2') goto label_RVFNKKMSDBUHVH;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = FQTDVTNLEWFQUU;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_BKDBMVHBSNJBTV = context->putChain(); 
chain_BKDBMVHBSNJBTV->append(newRefText("2=", __LINE__)); 
chain_BKDBMVHBSNJBTV->append(newRefInteger(2000000)); 
return chain_BKDBMVHBSNJBTV;
}
sentence_after_3: 

{
// сопоставление 
//// [ empty ] 
/*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_4;

// подстановка 
// new chain 
DataChain *chain_JTQNBCHIWFUQLZ = context->putChain(); 
chain_JTQNBCHIWFUQLZ->append(newRefText("1=", __LINE__)); 
chain_JTQNBCHIWFUQLZ->append(newRefInteger(1)); 
return chain_JTQNBCHIWFUQLZ;
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
DataChain *chain_SMXVFJTVQUITIV = context->putChain(); 
DataChain* YHZPXCDJWIKFAT = new DataChain(); 
DataContainer* YHZPXCDJWIKFAT_execbr = newRefExecBrackets(Prout, YHZPXCDJWIKFAT, "Prout");
chain_SMXVFJTVQUITIV->append(YHZPXCDJWIKFAT_execbr);
YHZPXCDJWIKFAT->append(newRefText("Length error symbols!!! : ", __LINE__)); 
context->pushExecuteCall(YHZPXCDJWIKFAT_execbr); // Prout
DataChain* CANCHXSSJLUHLY = new DataChain(); 
DataContainer* CANCHXSSJLUHLY_execbr = newRefExecBrackets(Print, CANCHXSSJLUHLY, "Print");
chain_SMXVFJTVQUITIV->append(CANCHXSSJLUHLY_execbr);
CANCHXSSJLUHLY->append_copy(l_1, r_1, context); 
context->pushExecuteCall(CANCHXSSJLUHLY_execbr); // Print
return chain_SMXVFJTVQUITIV;
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
/*DEF*/	DataCursor OEBCGNSQFZXXWG;
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	OEBCGNSQFZXXWG = arg_from;
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
DataChain *chain_RPKEGEQPVLHXEE = context->putChain(); 
DataChain* OCMERJMZIUDTSQ = new DataChain(); 
DataContainer* OCMERJMZIUDTSQ_execbr = newRefExecBrackets(IfDiv, OCMERJMZIUDTSQ, "IfDiv");
chain_RPKEGEQPVLHXEE->append(OCMERJMZIUDTSQ_execbr);
DataChain* QOZVEJNRTIBVNJ = new DataChain(); 
DataContainer* QOZVEJNRTIBVNJ_execbr = newRefExecBrackets(Compare, QOZVEJNRTIBVNJ, "Compare");
OCMERJMZIUDTSQ->append(QOZVEJNRTIBVNJ_execbr);
QOZVEJNRTIBVNJ->append_copy(l_1, r_1, context); 
QOZVEJNRTIBVNJ->append_copy(l_2, r_2, context); 
context->pushExecuteCall(QOZVEJNRTIBVNJ_execbr); // Compare
OCMERJMZIUDTSQ->append_copy(l_1, r_1, context); 
OCMERJMZIUDTSQ->append_copy(l_2, r_2, context); 
context->pushExecuteCall(OCMERJMZIUDTSQ_execbr); // IfDiv
return chain_RPKEGEQPVLHXEE;
}
sentence_after_1: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* IfDiv_(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = arg_from;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_EPFQDSMVSTMMWW = context->putChain(); 
DataChain* WQKNNRMQMJCCPA = new DataChain(); 
DataContainer* WQKNNRMQMJCCPA_execbr = newRefExecBrackets(Prout, WQKNNRMQMJCCPA, "Prout");
chain_EPFQDSMVSTMMWW->append(WQKNNRMQMJCCPA_execbr);
WQKNNRMQMJCCPA->append(newRefText("IfDiv: ", __LINE__)); 
WQKNNRMQMJCCPA->append_copy(l_e, r_e, context); 
context->pushExecuteCall(WQKNNRMQMJCCPA_execbr); // Prout
DataChain* OWAZFEURGPBFRY = new DataChain(); 
DataContainer* OWAZFEURGPBFRY_execbr = newRefExecBrackets(IfDiv_, OWAZFEURGPBFRY, "IfDiv_");
chain_EPFQDSMVSTMMWW->append(OWAZFEURGPBFRY_execbr);
OWAZFEURGPBFRY->append_copy(l_e, r_e, context); 
context->pushExecuteCall(OWAZFEURGPBFRY_execbr); // IfDiv_
return chain_EPFQDSMVSTMMWW;
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
/*DEF*/	DataCursor EDQJRLTMYMHYSO;
/*SET*/	EDQJRLTMYMHYSO = arg_from;
/*INC*/	if (!INC(EDQJRLTMYMHYSO, arg_to)) goto sentence_after_1;
	if (EDQJRLTMYMHYSO.container->type != text || *(EDQJRLTMYMHYSO.container->value.text + EDQJRLTMYMHYSO.index) != '+') goto sentence_after_1;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor ICWUOHFEREBEAC;
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = EDQJRLTMYMHYSO;
/*SET*/	ICWUOHFEREBEAC = EDQJRLTMYMHYSO;
/*INC*/	if (!INC(ICWUOHFEREBEAC, arg_to)) goto sentence_after_1;
	if (! isSymbolType(ICWUOHFEREBEAC.container->type)) goto sentence_after_1;
/*SET*/	r_1 = ICWUOHFEREBEAC;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor AZUVJOXYIPMSGU;
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = r_1;
/*SET*/	AZUVJOXYIPMSGU = r_1;
/*INC*/	if (!INC(AZUVJOXYIPMSGU, arg_to)) goto sentence_after_1;
	if (! isSymbolType(AZUVJOXYIPMSGU.container->type)) goto sentence_after_1;
/*SET*/	r_2 = AZUVJOXYIPMSGU;
//// [ empty ] 
/*ISEMPTY*/	if (r_2!=0 && arg_to != r_2) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_QDHXWJHIUDGHYX = context->putChain(); 
chain_QDHXWJHIUDGHYX->append(newRefText("1=", __LINE__)); 
DataChain* YOXBSCEFTDRQEL = new DataChain(); 
DataContainer* YOXBSCEFTDRQEL_execbr = newRefExecBrackets(Div, YOXBSCEFTDRQEL, "Div");
chain_QDHXWJHIUDGHYX->append(YOXBSCEFTDRQEL_execbr);
YOXBSCEFTDRQEL->append_copy(l_1, r_1, context); 
YOXBSCEFTDRQEL->append_copy(l_2, r_2, context); 
context->pushExecuteCall(YOXBSCEFTDRQEL_execbr); // Div
return chain_QDHXWJHIUDGHYX;
}
sentence_after_1: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor XFVCFBBJJYFSVK;
/*DEF*/	DataCursor l_zn;
/*DEF*/	DataCursor r_zn;
/*SET*/	l_zn = arg_from;
/*SET*/	XFVCFBBJJYFSVK = arg_from;
/*INC*/	if (!INC(XFVCFBBJJYFSVK, arg_to)) goto sentence_after_2;
	if (! isSymbolType(XFVCFBBJJYFSVK.container->type)) goto sentence_after_2;
/*SET*/	r_zn = XFVCFBBJJYFSVK;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor VSAPDSHAKGDVHC;
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = r_zn;
/*SET*/	VSAPDSHAKGDVHC = r_zn;
/*INC*/	if (!INC(VSAPDSHAKGDVHC, arg_to)) goto sentence_after_2;
	if (! isSymbolType(VSAPDSHAKGDVHC.container->type)) goto sentence_after_2;
/*SET*/	r_1 = VSAPDSHAKGDVHC;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor FMCEZTGJCMHXLH;
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = r_1;
/*SET*/	FMCEZTGJCMHXLH = r_1;
/*INC*/	if (!INC(FMCEZTGJCMHXLH, arg_to)) goto sentence_after_2;
	if (! isSymbolType(FMCEZTGJCMHXLH.container->type)) goto sentence_after_2;
/*SET*/	r_2 = FMCEZTGJCMHXLH;
//// [ empty ] 
/*ISEMPTY*/	if (r_2!=0 && arg_to != r_2) goto sentence_after_2;

// подстановка 
// new chain 
DataChain *chain_ASQKAUQLNFHGGT = context->putChain(); 
chain_ASQKAUQLNFHGGT->append(newRefText("1=", __LINE__)); 
DataChain* AGRNFFMNPINWLE = new DataChain(); 
DataContainer* AGRNFFMNPINWLE_execbr = newRefExecBrackets(Div, AGRNFFMNPINWLE, "Div");
chain_ASQKAUQLNFHGGT->append(AGRNFFMNPINWLE_execbr);
AGRNFFMNPINWLE->append_copy(l_2, r_2, context); 
AGRNFFMNPINWLE->append_copy(l_1, r_1, context); 
context->pushExecuteCall(AGRNFFMNPINWLE_execbr); // Div
return chain_ASQKAUQLNFHGGT;
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
/*DEF*/	DataCursor XRQXISBFNHJZQV;
/*SET*/	XRQXISBFNHJZQV = arg_from;
/*INC*/	if (!INC(XRQXISBFNHJZQV, arg_to)) goto sentence_after_1;
	if (XRQXISBFNHJZQV.container->type != text || *(XRQXISBFNHJZQV.container->value.text + XRQXISBFNHJZQV.index) != '1') goto sentence_after_1;
//// [ empty ] 
/*ISEMPTY*/	if (XRQXISBFNHJZQV!=0 && arg_to != XRQXISBFNHJZQV) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_BACPJZSNACLMNU = context->putChain(); 
chain_BACPJZSNACLMNU->append(newRefText("2", __LINE__)); 
return chain_BACPJZSNACLMNU;
}
sentence_after_1: 

{
// сопоставление 
//// [ `a` <any> ] 
/*DEF*/	DataCursor QNBDIFZLUJQVNF;
/*SET*/	QNBDIFZLUJQVNF = arg_from;
/*INC*/	if (!INC(QNBDIFZLUJQVNF, arg_to)) goto sentence_after_2;
	if (QNBDIFZLUJQVNF.container->type != text || *(QNBDIFZLUJQVNF.container->value.text + QNBDIFZLUJQVNF.index) != '2') goto sentence_after_2;
//// [ empty ] 
/*ISEMPTY*/	if (QNBDIFZLUJQVNF!=0 && arg_to != QNBDIFZLUJQVNF) goto sentence_after_2;

// подстановка 
// new chain 
DataChain *chain_AQPOHYGJSJTAKZ = context->putChain(); 
chain_AQPOHYGJSJTAKZ->append(newRefText("1", __LINE__)); 
return chain_AQPOHYGJSJTAKZ;
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
DataChain *chain_RSOSYQHQUHKJCJ = context->putChain(); 
DataChain* YUGTEDOGFURKXI = new DataChain(); 
DataContainer* YUGTEDOGFURKXI_execbr = newRefExecBrackets(Print, YUGTEDOGFURKXI, "Print");
chain_RSOSYQHQUHKJCJ->append(YUGTEDOGFURKXI_execbr);
YUGTEDOGFURKXI->append(newRefText("NextPl uncn.: ", __LINE__)); 
YUGTEDOGFURKXI->append_copy(l_e, r_e, context); 
context->pushExecuteCall(YUGTEDOGFURKXI_execbr); // Print
return chain_RSOSYQHQUHKJCJ;
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
DataChain *chain_YQUFOTIAJMWHYI = context->putChain(); 
DataChain* LTHMOEVLWLRXPW = new DataChain(); 
DataContainer* LTHMOEVLWLRXPW_execbr = newRefExecBrackets(Optima211, LTHMOEVLWLRXPW, "Optima211");
chain_YQUFOTIAJMWHYI->append(LTHMOEVLWLRXPW_execbr);
LTHMOEVLWLRXPW->append_copy(l_e, r_e, context); 
context->pushExecuteCall(LTHMOEVLWLRXPW_execbr); // Optima211
return chain_YQUFOTIAJMWHYI;
}
sentence_after_1: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Optima211_(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = arg_from;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_PZHSVBFZVTVHWY = context->putChain(); 
DataChain* CFZNMAOMAFSYVY = new DataChain(); 
DataContainer* CFZNMAOMAFSYVY_execbr = newRefExecBrackets(Prout, CFZNMAOMAFSYVY, "Prout");
chain_PZHSVBFZVTVHWY->append(CFZNMAOMAFSYVY_execbr);
CFZNMAOMAFSYVY->append(newRefText("Optima211: ", __LINE__)); 
CFZNMAOMAFSYVY->append_copy(l_e, r_e, context); 
context->pushExecuteCall(CFZNMAOMAFSYVY_execbr); // Prout
DataChain* RQPIZTEUOXGTHF = new DataChain(); 
DataContainer* RQPIZTEUOXGTHF_execbr = newRefExecBrackets(Optima211_, RQPIZTEUOXGTHF, "Optima211_");
chain_PZHSVBFZVTVHWY->append(RQPIZTEUOXGTHF_execbr);
RQPIZTEUOXGTHF->append_copy(l_e, r_e, context); 
context->pushExecuteCall(RQPIZTEUOXGTHF_execbr); // Optima211_
return chain_PZHSVBFZVTVHWY;
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
/*JMP*/	goto label_XSMXJRWPSURSGW_firststep;
label_XSMXJRWPSURSGW: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_1;
label_XSMXJRWPSURSGW_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor THHILGDHZFZAXA;
/*SET*/	THHILGDHZFZAXA = r_1;
/*INC*/	if (!INC(THHILGDHZFZAXA, arg_to)) goto label_XSMXJRWPSURSGW;
	if (THHILGDHZFZAXA.container->type != text || *(THHILGDHZFZAXA.container->value.text + THHILGDHZFZAXA.index) != '1') goto label_XSMXJRWPSURSGW;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = THHILGDHZFZAXA;
/*SET*/	r_2 = THHILGDHZFZAXA;
/*JMP*/	goto label_DTKLHYHQZFDIMS_firststep;
label_DTKLHYHQZFDIMS: 
/*INC*/	if (!INC(r_2, arg_to)) goto label_XSMXJRWPSURSGW;
label_DTKLHYHQZFDIMS_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor RUEECXKQKRUDLM;
/*SET*/	RUEECXKQKRUDLM = r_2;
/*INC*/	if (!INC(RUEECXKQKRUDLM, arg_to)) goto label_DTKLHYHQZFDIMS;
	if (RUEECXKQKRUDLM.container->type != text || *(RUEECXKQKRUDLM.container->value.text + RUEECXKQKRUDLM.index) != '1') goto label_DTKLHYHQZFDIMS;
//// [ e.1 ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = RUEECXKQKRUDLM;
/*SET*/	r_3 = arg_to;

// подстановка 
// new chain 
DataChain *chain_THIDZYQAZFNOVK = context->putChain(); 
chain_THIDZYQAZFNOVK->append(newRefText("11", __LINE__)); 
DataChain* TQCOTCHCOLINEI = new DataChain(); 
DataContainer* TQCOTCHCOLINEI_execbr = newRefExecBrackets(Optima211, TQCOTCHCOLINEI, "Optima211");
chain_THIDZYQAZFNOVK->append(TQCOTCHCOLINEI_execbr);
TQCOTCHCOLINEI->append_copy(l_1, r_1, context); 
TQCOTCHCOLINEI->append_copy(l_3, r_3, context); 
context->pushExecuteCall(TQCOTCHCOLINEI_execbr); // Optima211
chain_THIDZYQAZFNOVK->append_copy(l_2, r_2, context); 
return chain_THIDZYQAZFNOVK;
}
sentence_after_1: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_YTYMRJSCYOEIVD_firststep;
label_YTYMRJSCYOEIVD: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_2;
label_YTYMRJSCYOEIVD_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor YHPHLJZHEZOHMI;
/*SET*/	YHPHLJZHEZOHMI = r_1;
/*INC*/	if (!INC(YHPHLJZHEZOHMI, arg_to)) goto label_YTYMRJSCYOEIVD;
	if (YHPHLJZHEZOHMI.container->type != text || *(YHPHLJZHEZOHMI.container->value.text + YHPHLJZHEZOHMI.index) != '1') goto label_YTYMRJSCYOEIVD;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = YHPHLJZHEZOHMI;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_GTAOQMEMJLHGOX = context->putChain(); 
chain_GTAOQMEMJLHGOX->append(newRefText("1", __LINE__)); 
DataChain* PRURTYMKKTDBNO = new DataChain(); 
DataContainer* PRURTYMKKTDBNO_execbr = newRefExecBrackets(Optima211, PRURTYMKKTDBNO, "Optima211");
chain_GTAOQMEMJLHGOX->append(PRURTYMKKTDBNO_execbr);
PRURTYMKKTDBNO->append_copy(l_1, r_1, context); 
PRURTYMKKTDBNO->append_copy(l_2, r_2, context); 
context->pushExecuteCall(PRURTYMKKTDBNO_execbr); // Optima211
return chain_GTAOQMEMJLHGOX;
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
DataChain *chain_XWTTGEEQIMLHCZ = context->putChain(); 
chain_XWTTGEEQIMLHCZ->append_copy(l_1, r_1, context); 
return chain_XWTTGEEQIMLHCZ;
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
DataChain *chain_TCTYPHMEQDSUYV = context->putChain(); 
return chain_TCTYPHMEQDSUYV;
}
sentence_after_1: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_KKJOPLMZDCAKPJ_firststep;
label_KKJOPLMZDCAKPJ: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_2;
label_KKJOPLMZDCAKPJ_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor VOZIMHXXQHDUIQ;
/*SET*/	VOZIMHXXQHDUIQ = r_1;
/*INC*/	if (!INC(VOZIMHXXQHDUIQ, arg_to)) goto label_KKJOPLMZDCAKPJ;
	if (VOZIMHXXQHDUIQ.container->type != text || *(VOZIMHXXQHDUIQ.container->value.text + VOZIMHXXQHDUIQ.index) != '1') goto label_KKJOPLMZDCAKPJ;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = VOZIMHXXQHDUIQ;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_DKSDGPMHHDAQBS = context->putChain(); 
chain_DKSDGPMHHDAQBS->append(newRefText("147", __LINE__)); 
DataChain* QRFPDRSYKHBUTS = new DataChain(); 
DataContainer* QRFPDRSYKHBUTS_execbr = newRefExecBrackets(Strategy, QRFPDRSYKHBUTS, "Strategy");
chain_DKSDGPMHHDAQBS->append(QRFPDRSYKHBUTS_execbr);
QRFPDRSYKHBUTS->append_copy(l_1, r_1, context); 
QRFPDRSYKHBUTS->append_copy(l_2, r_2, context); 
context->pushExecuteCall(QRFPDRSYKHBUTS_execbr); // Strategy
return chain_DKSDGPMHHDAQBS;
}
sentence_after_2: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_NUWJPPGDEEBJGS_firststep;
label_NUWJPPGDEEBJGS: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_3;
label_NUWJPPGDEEBJGS_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor DYFOECQQNLEMKI;
/*SET*/	DYFOECQQNLEMKI = r_1;
/*INC*/	if (!INC(DYFOECQQNLEMKI, arg_to)) goto label_NUWJPPGDEEBJGS;
	if (DYFOECQQNLEMKI.container->type != text || *(DYFOECQQNLEMKI.container->value.text + DYFOECQQNLEMKI.index) != '2') goto label_NUWJPPGDEEBJGS;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = DYFOECQQNLEMKI;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_KDXYMECLSSHVKM = context->putChain(); 
chain_KDXYMECLSSHVKM->append(newRefText("15", __LINE__)); 
DataChain* YWJXESHOIHMLGV = new DataChain(); 
DataContainer* YWJXESHOIHMLGV_execbr = newRefExecBrackets(Strategy, YWJXESHOIHMLGV, "Strategy");
chain_KDXYMECLSSHVKM->append(YWJXESHOIHMLGV_execbr);
YWJXESHOIHMLGV->append_copy(l_1, r_1, context); 
YWJXESHOIHMLGV->append_copy(l_2, r_2, context); 
context->pushExecuteCall(YWJXESHOIHMLGV_execbr); // Strategy
return chain_KDXYMECLSSHVKM;
}
sentence_after_3: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_XILJVWLLFPNJZY_firststep;
label_XILJVWLLFPNJZY: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_4;
label_XILJVWLLFPNJZY_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor WCPAMEVWTYGFPH;
/*SET*/	WCPAMEVWTYGFPH = r_1;
/*INC*/	if (!INC(WCPAMEVWTYGFPH, arg_to)) goto label_XILJVWLLFPNJZY;
	if (WCPAMEVWTYGFPH.container->type != text || *(WCPAMEVWTYGFPH.container->value.text + WCPAMEVWTYGFPH.index) != '3') goto label_XILJVWLLFPNJZY;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = WCPAMEVWTYGFPH;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_TWODCLRJPRSEQW = context->putChain(); 
chain_TWODCLRJPRSEQW->append(newRefText("168", __LINE__)); 
DataChain* RDWSVYNCGFRAZZ = new DataChain(); 
DataContainer* RDWSVYNCGFRAZZ_execbr = newRefExecBrackets(Strategy, RDWSVYNCGFRAZZ, "Strategy");
chain_TWODCLRJPRSEQW->append(RDWSVYNCGFRAZZ_execbr);
RDWSVYNCGFRAZZ->append_copy(l_1, r_1, context); 
RDWSVYNCGFRAZZ->append_copy(l_2, r_2, context); 
context->pushExecuteCall(RDWSVYNCGFRAZZ_execbr); // Strategy
return chain_TWODCLRJPRSEQW;
}
sentence_after_4: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_AODGGXWWBTJQUJ_firststep;
label_AODGGXWWBTJQUJ: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_5;
label_AODGGXWWBTJQUJ_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor RMCDPOMJRYLEDH;
/*SET*/	RMCDPOMJRYLEDH = r_1;
/*INC*/	if (!INC(RMCDPOMJRYLEDH, arg_to)) goto label_AODGGXWWBTJQUJ;
	if (RMCDPOMJRYLEDH.container->type != text || *(RMCDPOMJRYLEDH.container->value.text + RMCDPOMJRYLEDH.index) != '4') goto label_AODGGXWWBTJQUJ;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = RMCDPOMJRYLEDH;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_JPMMGVXJCNJGZU = context->putChain(); 
chain_JPMMGVXJCNJGZU->append(newRefText("24", __LINE__)); 
DataChain* HWQQSLDZCSFOJS = new DataChain(); 
DataContainer* HWQQSLDZCSFOJS_execbr = newRefExecBrackets(Strategy, HWQQSLDZCSFOJS, "Strategy");
chain_JPMMGVXJCNJGZU->append(HWQQSLDZCSFOJS_execbr);
HWQQSLDZCSFOJS->append_copy(l_1, r_1, context); 
HWQQSLDZCSFOJS->append_copy(l_2, r_2, context); 
context->pushExecuteCall(HWQQSLDZCSFOJS_execbr); // Strategy
return chain_JPMMGVXJCNJGZU;
}
sentence_after_5: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_WRQCNBQYXAAGIB_firststep;
label_WRQCNBQYXAAGIB: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_6;
label_WRQCNBQYXAAGIB_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor PVTXDONPEASHNR;
/*SET*/	PVTXDONPEASHNR = r_1;
/*INC*/	if (!INC(PVTXDONPEASHNR, arg_to)) goto label_WRQCNBQYXAAGIB;
	if (PVTXDONPEASHNR.container->type != text || *(PVTXDONPEASHNR.container->value.text + PVTXDONPEASHNR.index) != '5') goto label_WRQCNBQYXAAGIB;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = PVTXDONPEASHNR;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_GSOQDJFQTEXYRW = context->putChain(); 
chain_GSOQDJFQTEXYRW->append(newRefText("2578", __LINE__)); 
DataChain* IZZOEOWAQEZDLM = new DataChain(); 
DataContainer* IZZOEOWAQEZDLM_execbr = newRefExecBrackets(Strategy, IZZOEOWAQEZDLM, "Strategy");
chain_GSOQDJFQTEXYRW->append(IZZOEOWAQEZDLM_execbr);
IZZOEOWAQEZDLM->append_copy(l_1, r_1, context); 
IZZOEOWAQEZDLM->append_copy(l_2, r_2, context); 
context->pushExecuteCall(IZZOEOWAQEZDLM_execbr); // Strategy
return chain_GSOQDJFQTEXYRW;
}
sentence_after_6: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_WAFCOZVQCIEWGK_firststep;
label_WAFCOZVQCIEWGK: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_7;
label_WAFCOZVQCIEWGK_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor EKFGRCYVZSAHPS;
/*SET*/	EKFGRCYVZSAHPS = r_1;
/*INC*/	if (!INC(EKFGRCYVZSAHPS, arg_to)) goto label_WAFCOZVQCIEWGK;
	if (EKFGRCYVZSAHPS.container->type != text || *(EKFGRCYVZSAHPS.container->value.text + EKFGRCYVZSAHPS.index) != '6') goto label_WAFCOZVQCIEWGK;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = EKFGRCYVZSAHPS;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_LJTKVNBIMPDKYE = context->putChain(); 
chain_LJTKVNBIMPDKYE->append(newRefText("26", __LINE__)); 
DataChain* BCWLFKFFRLZZMK = new DataChain(); 
DataContainer* BCWLFKFFRLZZMK_execbr = newRefExecBrackets(Strategy, BCWLFKFFRLZZMK, "Strategy");
chain_LJTKVNBIMPDKYE->append(BCWLFKFFRLZZMK_execbr);
BCWLFKFFRLZZMK->append_copy(l_1, r_1, context); 
BCWLFKFFRLZZMK->append_copy(l_2, r_2, context); 
context->pushExecuteCall(BCWLFKFFRLZZMK_execbr); // Strategy
return chain_LJTKVNBIMPDKYE;
}
sentence_after_7: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_VMHNLCIVWHWZTZ_firststep;
label_VMHNLCIVWHWZTZ: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_8;
label_VMHNLCIVWHWZTZ_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor RBXJCRTUVTXFKI;
/*SET*/	RBXJCRTUVTXFKI = r_1;
/*INC*/	if (!INC(RBXJCRTUVTXFKI, arg_to)) goto label_VMHNLCIVWHWZTZ;
	if (RBXJCRTUVTXFKI.container->type != text || *(RBXJCRTUVTXFKI.container->value.text + RBXJCRTUVTXFKI.index) != '7') goto label_VMHNLCIVWHWZTZ;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = RBXJCRTUVTXFKI;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_OZSQORQMQLESIX = context->putChain(); 
chain_OZSQORQMQLESIX->append(newRefText("348", __LINE__)); 
DataChain* RNERZOOWRVWPMI = new DataChain(); 
DataContainer* RNERZOOWRVWPMI_execbr = newRefExecBrackets(Strategy, RNERZOOWRVWPMI, "Strategy");
chain_OZSQORQMQLESIX->append(RNERZOOWRVWPMI_execbr);
RNERZOOWRVWPMI->append_copy(l_1, r_1, context); 
RNERZOOWRVWPMI->append_copy(l_2, r_2, context); 
context->pushExecuteCall(RNERZOOWRVWPMI_execbr); // Strategy
return chain_OZSQORQMQLESIX;
}
sentence_after_8: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_BHHYFFUVKOUKDW_firststep;
label_BHHYFFUVKOUKDW: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_9;
label_BHHYFFUVKOUKDW_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor JCVXQGLSCHJAGQ;
/*SET*/	JCVXQGLSCHJAGQ = r_1;
/*INC*/	if (!INC(JCVXQGLSCHJAGQ, arg_to)) goto label_BHHYFFUVKOUKDW;
	if (JCVXQGLSCHJAGQ.container->type != text || *(JCVXQGLSCHJAGQ.container->value.text + JCVXQGLSCHJAGQ.index) != '8') goto label_BHHYFFUVKOUKDW;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = JCVXQGLSCHJAGQ;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_LUDHRBEFJJFYTK = context->putChain(); 
chain_LUDHRBEFJJFYTK->append(newRefText("35", __LINE__)); 
DataChain* XLBNVMDWSYXHGS = new DataChain(); 
DataContainer* XLBNVMDWSYXHGS_execbr = newRefExecBrackets(Strategy, XLBNVMDWSYXHGS, "Strategy");
chain_LUDHRBEFJJFYTK->append(XLBNVMDWSYXHGS_execbr);
XLBNVMDWSYXHGS->append_copy(l_1, r_1, context); 
XLBNVMDWSYXHGS->append_copy(l_2, r_2, context); 
context->pushExecuteCall(XLBNVMDWSYXHGS_execbr); // Strategy
return chain_LUDHRBEFJJFYTK;
}
sentence_after_9: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = arg_from;
/*SET*/	r_1 = arg_from;
/*JMP*/	goto label_CZHYJGDFGNWFPD_firststep;
label_CZHYJGDFGNWFPD: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_10;
label_CZHYJGDFGNWFPD_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor TLKHPEKHJNCYLC;
/*SET*/	TLKHPEKHJNCYLC = r_1;
/*INC*/	if (!INC(TLKHPEKHJNCYLC, arg_to)) goto label_CZHYJGDFGNWFPD;
	if (TLKHPEKHJNCYLC.container->type != text || *(TLKHPEKHJNCYLC.container->value.text + TLKHPEKHJNCYLC.index) != '9') goto label_CZHYJGDFGNWFPD;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = TLKHPEKHJNCYLC;
/*SET*/	r_2 = arg_to;

// подстановка 
// new chain 
DataChain *chain_KZMHIYDLXDJOHN = context->putChain(); 
chain_KZMHIYDLXDJOHN->append(newRefText("367", __LINE__)); 
DataChain* SCGHBTUSWZUMSQ = new DataChain(); 
DataContainer* SCGHBTUSWZUMSQ_execbr = newRefExecBrackets(Strategy, SCGHBTUSWZUMSQ, "Strategy");
chain_KZMHIYDLXDJOHN->append(SCGHBTUSWZUMSQ_execbr);
SCGHBTUSWZUMSQ->append_copy(l_1, r_1, context); 
SCGHBTUSWZUMSQ->append_copy(l_2, r_2, context); 
context->pushExecuteCall(SCGHBTUSWZUMSQ_execbr); // Strategy
return chain_KZMHIYDLXDJOHN;
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
DataChain *chain_OYKIIDFWFXYAAA = context->putChain(); 
chain_OYKIIDFWFXYAAA->append_copy(l_1, r_1, context); 
return chain_OYKIIDFWFXYAAA;
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
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = AWGEURBRNBERAZ;
/*SET*/	r_1 = SXTKAQUEHJFCEW;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor CTBFJTPQDLJHEH;
/*DEF*/	DataCursor JOBMARGUQWSOKL;
/*DEF*/	DataCursor DZSCSFACXFZXFJ;
/*SET*/	CTBFJTPQDLJHEH = YMOIVFHJLRWYAX;
/*INC*/	if (!INC(CTBFJTPQDLJHEH, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (CTBFJTPQDLJHEH.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	JOBMARGUQWSOKL = CTBFJTPQDLJHEH.container->value.bracket_data.chain->at_before_first();
	DZSCSFACXFZXFJ   = CTBFJTPQDLJHEH.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = JOBMARGUQWSOKL;
/*SET*/	r_2 = DZSCSFACXFZXFJ;
//// [ empty ] 
/*ISEMPTY*/	if (CTBFJTPQDLJHEH!=0 && arg_to != CTBFJTPQDLJHEH) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_QOVERSCJZBKMZD = context->putChain(); 
DataChain* NDOSIYHTYAVOXH = new DataChain(); 
DataContainer* NDOSIYHTYAVOXH_execbr = newRefExecBrackets(Ifwin1, NDOSIYHTYAVOXH, "Ifwin1");
chain_QOVERSCJZBKMZD->append(NDOSIYHTYAVOXH_execbr);
DataChain* TAPYEKTUATPRWS = new DataChain(); 
NDOSIYHTYAVOXH->append(newRefStructBrackets(TAPYEKTUATPRWS)); 
DataChain* KXZCZNFDIUEHUW = new DataChain(); 
DataContainer* KXZCZNFDIUEHUW_execbr = newRefExecBrackets(Strategy, KXZCZNFDIUEHUW, "Strategy");
TAPYEKTUATPRWS->append(KXZCZNFDIUEHUW_execbr);
KXZCZNFDIUEHUW->append_copy(l_1, r_1, context); 
context->pushExecuteCall(KXZCZNFDIUEHUW_execbr); // Strategy
DataChain* YMTXDRNKLSMDUS = new DataChain(); 
NDOSIYHTYAVOXH->append(newRefStructBrackets(YMTXDRNKLSMDUS)); 
DataChain* KVUTKFIUBZYBLW = new DataChain(); 
DataContainer* KVUTKFIUBZYBLW_execbr = newRefExecBrackets(Strategy, KVUTKFIUBZYBLW, "Strategy");
YMTXDRNKLSMDUS->append(KVUTKFIUBZYBLW_execbr);
KVUTKFIUBZYBLW->append_copy(l_2, r_2, context); 
context->pushExecuteCall(KVUTKFIUBZYBLW_execbr); // Strategy
context->pushExecuteCall(NDOSIYHTYAVOXH_execbr); // Ifwin1
return chain_QOVERSCJZBKMZD;
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
/*DEF*/	DataCursor MPARMJDSPXYWXE;
/*DEF*/	DataCursor RFTZLKORIEBSUP;
/*DEF*/	DataCursor CPXCJWKUVEEREN;
/*SET*/	MPARMJDSPXYWXE = arg_from;
/*INC*/	if (!INC(MPARMJDSPXYWXE, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (MPARMJDSPXYWXE.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	RFTZLKORIEBSUP = MPARMJDSPXYWXE.container->value.bracket_data.chain->at_before_first();
	CPXCJWKUVEEREN   = MPARMJDSPXYWXE.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = RFTZLKORIEBSUP;
/*SET*/	r_1 = RFTZLKORIEBSUP;
/*JMP*/	goto label_LAITVYCICYZALW_firststep;
label_LAITVYCICYZALW: 
/*INC*/	if (!INC(r_1, CPXCJWKUVEEREN)) goto sentence_after_1;
label_LAITVYCICYZALW_firststep: 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor UIUZTEYCTMUIFE;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_1;
/*SET*/	UIUZTEYCTMUIFE = r_1;
/*INC*/	if (!INC(UIUZTEYCTMUIFE, CPXCJWKUVEEREN)) goto label_LAITVYCICYZALW;
	if (! isSymbolType(UIUZTEYCTMUIFE.container->type)) goto label_LAITVYCICYZALW;
/*SET*/	r_A = UIUZTEYCTMUIFE;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = r_A;
/*SET*/	r_2 = r_A;
/*JMP*/	goto label_FYGAIAIOIIEDBY_firststep;
label_FYGAIAIOIIEDBY: 
/*INC*/	if (!INC(r_2, CPXCJWKUVEEREN)) goto label_LAITVYCICYZALW;
label_FYGAIAIOIIEDBY_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor WRGRTDXVDKOCSA;
/*SET*/	WRGRTDXVDKOCSA = r_2;
 if (!SLIDE(WRGRTDXVDKOCSA, CPXCJWKUVEEREN, l_A, r_A)) goto label_FYGAIAIOIIEDBY;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = WRGRTDXVDKOCSA;
/*SET*/	r_3 = WRGRTDXVDKOCSA;
/*JMP*/	goto label_EHFCILQJOEVAJN_firststep;
label_EHFCILQJOEVAJN: 
/*INC*/	if (!INC(r_3, CPXCJWKUVEEREN)) goto label_FYGAIAIOIIEDBY;
label_EHFCILQJOEVAJN_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor JTTKNRSPRTKRLK;
/*SET*/	JTTKNRSPRTKRLK = r_3;
 if (!SLIDE(JTTKNRSPRTKRLK, CPXCJWKUVEEREN, l_A, r_A)) goto label_EHFCILQJOEVAJN;
//// [ e.1 ] 
/*DEF*/	DataCursor l_4;
/*DEF*/	DataCursor r_4;
/*SET*/	l_4 = JTTKNRSPRTKRLK;
/*SET*/	r_4 = CPXCJWKUVEEREN;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor JAPYMUZRPHZLCE;
/*DEF*/	DataCursor PAYTFAVEOPSZRN;
/*DEF*/	DataCursor KVNEHRJSTZFLVY;
/*SET*/	JAPYMUZRPHZLCE = MPARMJDSPXYWXE;
/*INC*/	if (!INC(JAPYMUZRPHZLCE, arg_to)) goto label_EHFCILQJOEVAJN;
//// ISBRACKET 
	if (JAPYMUZRPHZLCE.container->type != struct_bracket) goto label_EHFCILQJOEVAJN;
//// JMP_BRACKET 
	PAYTFAVEOPSZRN = JAPYMUZRPHZLCE.container->value.bracket_data.chain->at_before_first();
	KVNEHRJSTZFLVY   = JAPYMUZRPHZLCE.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = PAYTFAVEOPSZRN;
/*SET*/	r_e = KVNEHRJSTZFLVY;
//// [ empty ] 
/*ISEMPTY*/	if (JAPYMUZRPHZLCE!=0 && arg_to != JAPYMUZRPHZLCE) goto label_EHFCILQJOEVAJN;

// подстановка 
// new chain 
DataChain *chain_AHORKTKMGYCOUI = context->putChain(); 
chain_AHORKTKMGYCOUI->append(newRefText("1", __LINE__)); 
return chain_AHORKTKMGYCOUI;
}
sentence_after_1: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor ERTLPBJCSXQLGY;
/*DEF*/	DataCursor GLMVLYQXIXIPVW;
/*DEF*/	DataCursor OQLNKAEQMARVXU;
/*SET*/	ERTLPBJCSXQLGY = arg_from;
/*INC*/	if (!INC(ERTLPBJCSXQLGY, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (ERTLPBJCSXQLGY.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	GLMVLYQXIXIPVW = ERTLPBJCSXQLGY.container->value.bracket_data.chain->at_before_first();
	OQLNKAEQMARVXU   = ERTLPBJCSXQLGY.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = GLMVLYQXIXIPVW;
/*SET*/	r_e = OQLNKAEQMARVXU;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor MKRNJCOKVFKTQJ;
/*DEF*/	DataCursor DCUGBIDVBXRNSA;
/*DEF*/	DataCursor QWXTBFTQSNPAVY;
/*SET*/	MKRNJCOKVFKTQJ = ERTLPBJCSXQLGY;
/*INC*/	if (!INC(MKRNJCOKVFKTQJ, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (MKRNJCOKVFKTQJ.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	DCUGBIDVBXRNSA = MKRNJCOKVFKTQJ.container->value.bracket_data.chain->at_before_first();
	QWXTBFTQSNPAVY   = MKRNJCOKVFKTQJ.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = DCUGBIDVBXRNSA;
/*SET*/	r_1 = DCUGBIDVBXRNSA;
/*JMP*/	goto label_TODPJDPVYQXKSU_firststep;
label_TODPJDPVYQXKSU: 
/*INC*/	if (!INC(r_1, QWXTBFTQSNPAVY)) goto sentence_after_2;
label_TODPJDPVYQXKSU_firststep: 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor VZWZTJRWOVTTLN;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_1;
/*SET*/	VZWZTJRWOVTTLN = r_1;
/*INC*/	if (!INC(VZWZTJRWOVTTLN, QWXTBFTQSNPAVY)) goto label_TODPJDPVYQXKSU;
	if (! isSymbolType(VZWZTJRWOVTTLN.container->type)) goto label_TODPJDPVYQXKSU;
/*SET*/	r_A = VZWZTJRWOVTTLN;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = r_A;
/*SET*/	r_2 = r_A;
/*JMP*/	goto label_KZNQDQIAUAPWKC_firststep;
label_KZNQDQIAUAPWKC: 
/*INC*/	if (!INC(r_2, QWXTBFTQSNPAVY)) goto label_TODPJDPVYQXKSU;
label_KZNQDQIAUAPWKC_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor ZXRXOPENEUXFLG;
/*SET*/	ZXRXOPENEUXFLG = r_2;
 if (!SLIDE(ZXRXOPENEUXFLG, QWXTBFTQSNPAVY, l_A, r_A)) goto label_KZNQDQIAUAPWKC;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = ZXRXOPENEUXFLG;
/*SET*/	r_3 = ZXRXOPENEUXFLG;
/*JMP*/	goto label_BDWJMHJGUZPEUD_firststep;
label_BDWJMHJGUZPEUD: 
/*INC*/	if (!INC(r_3, QWXTBFTQSNPAVY)) goto label_KZNQDQIAUAPWKC;
label_BDWJMHJGUZPEUD_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor DFEIMOZYFRQMFO;
/*SET*/	DFEIMOZYFRQMFO = r_3;
 if (!SLIDE(DFEIMOZYFRQMFO, QWXTBFTQSNPAVY, l_A, r_A)) goto label_BDWJMHJGUZPEUD;
//// [ e.1 ] 
/*DEF*/	DataCursor l_4;
/*DEF*/	DataCursor r_4;
/*SET*/	l_4 = DFEIMOZYFRQMFO;
/*SET*/	r_4 = QWXTBFTQSNPAVY;
//// [ empty ] 
/*ISEMPTY*/	if (MKRNJCOKVFKTQJ!=0 && arg_to != MKRNJCOKVFKTQJ) goto label_BDWJMHJGUZPEUD;

// подстановка 
// new chain 
DataChain *chain_ZISSCCRIFWQBHX = context->putChain(); 
chain_ZISSCCRIFWQBHX->append(newRefText("2", __LINE__)); 
return chain_ZISSCCRIFWQBHX;
}
sentence_after_2: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor YEHKTUSDGZXLAE;
/*DEF*/	DataCursor YKEXQGQOEVJTFR;
/*DEF*/	DataCursor AMUQGBDNRSMBXR;
/*SET*/	YEHKTUSDGZXLAE = arg_from;
/*INC*/	if (!INC(YEHKTUSDGZXLAE, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (YEHKTUSDGZXLAE.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	YKEXQGQOEVJTFR = YEHKTUSDGZXLAE.container->value.bracket_data.chain->at_before_first();
	AMUQGBDNRSMBXR   = YEHKTUSDGZXLAE.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = YKEXQGQOEVJTFR;
/*SET*/	r_1 = AMUQGBDNRSMBXR;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor VBTFGLOWFFCTUJ;
/*DEF*/	DataCursor TZQWZGGTLBHROP;
/*DEF*/	DataCursor KWKBBWVNAKWVVD;
/*SET*/	VBTFGLOWFFCTUJ = YEHKTUSDGZXLAE;
/*INC*/	if (!INC(VBTFGLOWFFCTUJ, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (VBTFGLOWFFCTUJ.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	TZQWZGGTLBHROP = VBTFGLOWFFCTUJ.container->value.bracket_data.chain->at_before_first();
	KWKBBWVNAKWVVD   = VBTFGLOWFFCTUJ.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = TZQWZGGTLBHROP;
/*SET*/	r_2 = KWKBBWVNAKWVVD;
//// [ empty ] 
/*ISEMPTY*/	if (VBTFGLOWFFCTUJ!=0 && arg_to != VBTFGLOWFFCTUJ) goto sentence_after_3;

// подстановка 
// new chain 
DataChain *chain_YCXCZOZQIWORVP = context->putChain(); 
chain_YCXCZOZQIWORVP->append(newRefText("0", __LINE__)); 
return chain_YCXCZOZQIWORVP;
}
sentence_after_3: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Analiz_(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = arg_from;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_WKOQMQHCALYZVQ = context->putChain(); 
DataChain* NKCXEKJQZVUESW = new DataChain(); 
DataContainer* NKCXEKJQZVUESW_execbr = newRefExecBrackets(Prout, NKCXEKJQZVUESW, "Prout");
chain_WKOQMQHCALYZVQ->append(NKCXEKJQZVUESW_execbr);
NKCXEKJQZVUESW->append(newRefText("Analiz : ", __LINE__)); 
NKCXEKJQZVUESW->append_copy(l_e, r_e, context); 
context->pushExecuteCall(NKCXEKJQZVUESW_execbr); // Prout
DataChain* QKNZPYVYSDKHSO = new DataChain(); 
DataContainer* QKNZPYVYSDKHSO_execbr = newRefExecBrackets(Analiz_, QKNZPYVYSDKHSO, "Analiz_");
chain_WKOQMQHCALYZVQ->append(QKNZPYVYSDKHSO_execbr);
QKNZPYVYSDKHSO->append_copy(l_e, r_e, context); 
context->pushExecuteCall(QKNZPYVYSDKHSO_execbr); // Analiz_
return chain_WKOQMQHCALYZVQ;
}
sentence_after_1: 

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
/*JMP*/	goto label_ICMHCZOHEFNASL_firststep;
label_ICMHCZOHEFNASL: 
/*INC*/	if (!INC(r_1, arg_to)) goto sentence_after_1;
label_ICMHCZOHEFNASL_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor XWXLLXLEWTZUWB;
/*DEF*/	DataCursor SUVSENEIQWHNEZ;
/*DEF*/	DataCursor OJKXHORYESUGDH;
/*SET*/	XWXLLXLEWTZUWB = r_1;
/*INC*/	if (!INC(XWXLLXLEWTZUWB, arg_to)) goto label_ICMHCZOHEFNASL;
//// ISBRACKET 
	if (XWXLLXLEWTZUWB.container->type != struct_bracket) goto label_ICMHCZOHEFNASL;
//// JMP_BRACKET 
	SUVSENEIQWHNEZ = XWXLLXLEWTZUWB.container->value.bracket_data.chain->at_before_first();
	OJKXHORYESUGDH   = XWXLLXLEWTZUWB.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = SUVSENEIQWHNEZ;
/*SET*/	r_3 = SUVSENEIQWHNEZ;
/*JMP*/	goto label_TJCKQJDFGNRDOI_firststep;
label_TJCKQJDFGNRDOI: 
/*INC*/	if (!INC(r_3, OJKXHORYESUGDH)) goto label_ICMHCZOHEFNASL;
label_TJCKQJDFGNRDOI_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor ZPYFMDLQLWQIOD;
/*SET*/	ZPYFMDLQLWQIOD = r_3;
/*INC*/	if (!INC(ZPYFMDLQLWQIOD, OJKXHORYESUGDH)) goto label_TJCKQJDFGNRDOI;
	if (ZPYFMDLQLWQIOD.container->type != text || *(ZPYFMDLQLWQIOD.container->value.text + ZPYFMDLQLWQIOD.index) != '>') goto label_TJCKQJDFGNRDOI;
//// [ empty ] 
/*ISEMPTY*/	if (ZPYFMDLQLWQIOD!=0 && OJKXHORYESUGDH != ZPYFMDLQLWQIOD) goto label_TJCKQJDFGNRDOI;
//// [ empty ] 
/*ISEMPTY*/	if (XWXLLXLEWTZUWB!=0 && arg_to != XWXLLXLEWTZUWB) goto label_TJCKQJDFGNRDOI;

// подстановка 
// new chain 
DataChain *chain_ZYHCEJCJOJONHG = context->putChain(); 
return chain_ZYHCEJCJOJONHG;
}
sentence_after_1: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor USTQJFNECOLOCM;
/*DEF*/	DataCursor FHPZXTGFPMUSCR;
/*DEF*/	DataCursor LDURENNLQKWHHY;
/*SET*/	USTQJFNECOLOCM = arg_from;
/*INC*/	if (!INC(USTQJFNECOLOCM, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (USTQJFNECOLOCM.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	FHPZXTGFPMUSCR = USTQJFNECOLOCM.container->value.bracket_data.chain->at_before_first();
	LDURENNLQKWHHY   = USTQJFNECOLOCM.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor IPQZEVBYKTBVTP;
/*SET*/	IPQZEVBYKTBVTP = FHPZXTGFPMUSCR;
/*INC*/	if (!INC(IPQZEVBYKTBVTP, LDURENNLQKWHHY)) goto sentence_after_2;
	if (IPQZEVBYKTBVTP.container->type != text || *(IPQZEVBYKTBVTP.container->value.text + IPQZEVBYKTBVTP.index) != '1') goto sentence_after_2;
//// [ empty ] 
/*ISEMPTY*/	if (IPQZEVBYKTBVTP!=0 && LDURENNLQKWHHY != IPQZEVBYKTBVTP) goto sentence_after_2;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor IZFSOAYXZILJZE;
/*DEF*/	DataCursor GBLCATMVEFQRZX;
/*DEF*/	DataCursor WKTNDPBBZDRWLP;
/*SET*/	IZFSOAYXZILJZE = USTQJFNECOLOCM;
/*INC*/	if (!INC(IZFSOAYXZILJZE, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (IZFSOAYXZILJZE.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	GBLCATMVEFQRZX = IZFSOAYXZILJZE.container->value.bracket_data.chain->at_before_first();
	WKTNDPBBZDRWLP   = IZFSOAYXZILJZE.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = GBLCATMVEFQRZX;
/*SET*/	r_1 = WKTNDPBBZDRWLP;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor HLGDYWDOFNZXQL;
/*DEF*/	DataCursor XVKHDJYALHVVPA;
/*DEF*/	DataCursor ANGODNLXHLSXSH;
/*SET*/	HLGDYWDOFNZXQL = IZFSOAYXZILJZE;
/*INC*/	if (!INC(HLGDYWDOFNZXQL, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (HLGDYWDOFNZXQL.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	XVKHDJYALHVVPA = HLGDYWDOFNZXQL.container->value.bracket_data.chain->at_before_first();
	ANGODNLXHLSXSH   = HLGDYWDOFNZXQL.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = XVKHDJYALHVVPA;
/*SET*/	r_2 = ANGODNLXHLSXSH;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor HTIFXICKOBIXBB;
/*DEF*/	DataCursor DUZVNGQIAGGCXF;
/*DEF*/	DataCursor GRJMARWUPAYBNQ;
/*SET*/	HTIFXICKOBIXBB = HLGDYWDOFNZXQL;
/*INC*/	if (!INC(HTIFXICKOBIXBB, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (HTIFXICKOBIXBB.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	DUZVNGQIAGGCXF = HTIFXICKOBIXBB.container->value.bracket_data.chain->at_before_first();
	GRJMARWUPAYBNQ   = HTIFXICKOBIXBB.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = DUZVNGQIAGGCXF;
/*SET*/	r_3 = DUZVNGQIAGGCXF;
/*JMP*/	goto label_GUDBEWKGWGTOCB_firststep;
label_GUDBEWKGWGTOCB: 
/*INC*/	if (!INC(r_3, GRJMARWUPAYBNQ)) goto sentence_after_2;
label_GUDBEWKGWGTOCB_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor LXJECCGQHBCZIB;
/*SET*/	LXJECCGQHBCZIB = r_3;
/*INC*/	if (!INC(LXJECCGQHBCZIB, GRJMARWUPAYBNQ)) goto label_GUDBEWKGWGTOCB;
	if (LXJECCGQHBCZIB.container->type != text || *(LXJECCGQHBCZIB.container->value.text + LXJECCGQHBCZIB.index) != '>') goto label_GUDBEWKGWGTOCB;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor HQUFQQXVLLVMTZ;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = LXJECCGQHBCZIB;
/*SET*/	HQUFQQXVLLVMTZ = LXJECCGQHBCZIB;
/*INC*/	if (!INC(HQUFQQXVLLVMTZ, GRJMARWUPAYBNQ)) goto label_GUDBEWKGWGTOCB;
	if (! isSymbolType(HQUFQQXVLLVMTZ.container->type)) goto label_GUDBEWKGWGTOCB;
/*SET*/	r_A = HQUFQQXVLLVMTZ;
//// [ e.1 ] 
/*DEF*/	DataCursor l_4;
/*DEF*/	DataCursor r_4;
/*SET*/	l_4 = r_A;
/*SET*/	r_4 = GRJMARWUPAYBNQ;
//// [ empty ] 
/*ISEMPTY*/	if (HTIFXICKOBIXBB!=0 && arg_to != HTIFXICKOBIXBB) goto label_GUDBEWKGWGTOCB;

// подстановка 
// new chain 
DataChain *chain_MVAFQYXJYEXDSS = context->putChain(); 
DataChain* WBJIOUYMHLZCLT = new DataChain(); 
DataContainer* WBJIOUYMHLZCLT_execbr = newRefExecBrackets(PolnAnaliz, WBJIOUYMHLZCLT, "PolnAnaliz");
chain_MVAFQYXJYEXDSS->append(WBJIOUYMHLZCLT_execbr);
DataChain* JUDOBFUOIWUBGE = new DataChain(); 
WBJIOUYMHLZCLT->append(newRefStructBrackets(JUDOBFUOIWUBGE)); 
JUDOBFUOIWUBGE->append(newRefText("2", __LINE__)); 
DataChain* IDPMVKHOZHKDUC = new DataChain(); 
WBJIOUYMHLZCLT->append(newRefStructBrackets(IDPMVKHOZHKDUC)); 
IDPMVKHOZHKDUC->append_copy(l_1, r_1, context); 
IDPMVKHOZHKDUC->append_copy(l_A, r_A, context); 
DataChain* OMLGLTLVEINNCA = new DataChain(); 
WBJIOUYMHLZCLT->append(newRefStructBrackets(OMLGLTLVEINNCA)); 
OMLGLTLVEINNCA->append_copy(l_2, r_2, context); 
DataChain* IKNSUGJQCCASDX = new DataChain(); 
WBJIOUYMHLZCLT->append(newRefStructBrackets(IKNSUGJQCCASDX)); 
IKNSUGJQCCASDX->append_copy(l_3, r_3, context); 
IKNSUGJQCCASDX->append_copy(l_4, r_4, context); 
context->pushExecuteCall(WBJIOUYMHLZCLT_execbr); // PolnAnaliz
return chain_MVAFQYXJYEXDSS;
}
sentence_after_2: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor DAZCRTVLLKFVTE;
/*DEF*/	DataCursor ZAZZCSCTLEGENL;
/*DEF*/	DataCursor LTVKZDQOWGOLJP;
/*SET*/	DAZCRTVLLKFVTE = arg_from;
/*INC*/	if (!INC(DAZCRTVLLKFVTE, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (DAZCRTVLLKFVTE.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	ZAZZCSCTLEGENL = DAZCRTVLLKFVTE.container->value.bracket_data.chain->at_before_first();
	LTVKZDQOWGOLJP   = DAZCRTVLLKFVTE.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor DSYQNCSDJSDCXX;
/*SET*/	DSYQNCSDJSDCXX = ZAZZCSCTLEGENL;
/*INC*/	if (!INC(DSYQNCSDJSDCXX, LTVKZDQOWGOLJP)) goto sentence_after_3;
	if (DSYQNCSDJSDCXX.container->type != text || *(DSYQNCSDJSDCXX.container->value.text + DSYQNCSDJSDCXX.index) != '2') goto sentence_after_3;
//// [ empty ] 
/*ISEMPTY*/	if (DSYQNCSDJSDCXX!=0 && LTVKZDQOWGOLJP != DSYQNCSDJSDCXX) goto sentence_after_3;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor DXPDPQUNVKWXRY;
/*DEF*/	DataCursor KXTLXYPPFMAJFH;
/*DEF*/	DataCursor QYUDWTIGBJTMQM;
/*SET*/	DXPDPQUNVKWXRY = DAZCRTVLLKFVTE;
/*INC*/	if (!INC(DXPDPQUNVKWXRY, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (DXPDPQUNVKWXRY.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	KXTLXYPPFMAJFH = DXPDPQUNVKWXRY.container->value.bracket_data.chain->at_before_first();
	QYUDWTIGBJTMQM   = DXPDPQUNVKWXRY.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = KXTLXYPPFMAJFH;
/*SET*/	r_1 = QYUDWTIGBJTMQM;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor DLTCQZGCAIWSWF;
/*DEF*/	DataCursor YRYHCWWIARUHII;
/*DEF*/	DataCursor BUJOPGRQNPIUGK;
/*SET*/	DLTCQZGCAIWSWF = DXPDPQUNVKWXRY;
/*INC*/	if (!INC(DLTCQZGCAIWSWF, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (DLTCQZGCAIWSWF.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	YRYHCWWIARUHII = DLTCQZGCAIWSWF.container->value.bracket_data.chain->at_before_first();
	BUJOPGRQNPIUGK   = DLTCQZGCAIWSWF.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = YRYHCWWIARUHII;
/*SET*/	r_2 = BUJOPGRQNPIUGK;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor DQTESOJACQHNWD;
/*DEF*/	DataCursor AGNVXESFRFIEFA;
/*DEF*/	DataCursor ABRADQEELKPKEC;
/*SET*/	DQTESOJACQHNWD = DLTCQZGCAIWSWF;
/*INC*/	if (!INC(DQTESOJACQHNWD, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (DQTESOJACQHNWD.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	AGNVXESFRFIEFA = DQTESOJACQHNWD.container->value.bracket_data.chain->at_before_first();
	ABRADQEELKPKEC   = DQTESOJACQHNWD.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = AGNVXESFRFIEFA;
/*SET*/	r_3 = AGNVXESFRFIEFA;
/*JMP*/	goto label_VPSDWELPDJMMBP_firststep;
label_VPSDWELPDJMMBP: 
/*INC*/	if (!INC(r_3, ABRADQEELKPKEC)) goto sentence_after_3;
label_VPSDWELPDJMMBP_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor DUPZVTVJXYDKDN;
/*SET*/	DUPZVTVJXYDKDN = r_3;
/*INC*/	if (!INC(DUPZVTVJXYDKDN, ABRADQEELKPKEC)) goto label_VPSDWELPDJMMBP;
	if (DUPZVTVJXYDKDN.container->type != text || *(DUPZVTVJXYDKDN.container->value.text + DUPZVTVJXYDKDN.index) != '>') goto label_VPSDWELPDJMMBP;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor CUGGHONUCWEGVF;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = DUPZVTVJXYDKDN;
/*SET*/	CUGGHONUCWEGVF = DUPZVTVJXYDKDN;
/*INC*/	if (!INC(CUGGHONUCWEGVF, ABRADQEELKPKEC)) goto label_VPSDWELPDJMMBP;
	if (! isSymbolType(CUGGHONUCWEGVF.container->type)) goto label_VPSDWELPDJMMBP;
/*SET*/	r_A = CUGGHONUCWEGVF;
//// [ e.1 ] 
/*DEF*/	DataCursor l_4;
/*DEF*/	DataCursor r_4;
/*SET*/	l_4 = r_A;
/*SET*/	r_4 = ABRADQEELKPKEC;
//// [ empty ] 
/*ISEMPTY*/	if (DQTESOJACQHNWD!=0 && arg_to != DQTESOJACQHNWD) goto label_VPSDWELPDJMMBP;

// подстановка 
// new chain 
DataChain *chain_BTJVTOQOTHGGTD = context->putChain(); 
DataChain* RDOLGJMFUBZZPN = new DataChain(); 
DataContainer* RDOLGJMFUBZZPN_execbr = newRefExecBrackets(PolnAnaliz, RDOLGJMFUBZZPN, "PolnAnaliz");
chain_BTJVTOQOTHGGTD->append(RDOLGJMFUBZZPN_execbr);
DataChain* HJAQWOTZQBLHMR = new DataChain(); 
RDOLGJMFUBZZPN->append(newRefStructBrackets(HJAQWOTZQBLHMR)); 
HJAQWOTZQBLHMR->append(newRefText("1", __LINE__)); 
DataChain* FZFGYKZMUCWWPD = new DataChain(); 
RDOLGJMFUBZZPN->append(newRefStructBrackets(FZFGYKZMUCWWPD)); 
FZFGYKZMUCWWPD->append_copy(l_1, r_1, context); 
DataChain* YJVCTVFAMCGLTM = new DataChain(); 
RDOLGJMFUBZZPN->append(newRefStructBrackets(YJVCTVFAMCGLTM)); 
YJVCTVFAMCGLTM->append_copy(l_2, r_2, context); 
YJVCTVFAMCGLTM->append_copy(l_A, r_A, context); 
DataChain* JTMRCJIVHSYTNW = new DataChain(); 
RDOLGJMFUBZZPN->append(newRefStructBrackets(JTMRCJIVHSYTNW)); 
JTMRCJIVHSYTNW->append_copy(l_3, r_3, context); 
JTMRCJIVHSYTNW->append_copy(l_4, r_4, context); 
context->pushExecuteCall(RDOLGJMFUBZZPN_execbr); // PolnAnaliz
return chain_BTJVTOQOTHGGTD;
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
DataChain *chain_MQQJVMOHFYESQX = context->putChain(); 
DataChain* DVRJGFVGYMHLWD = new DataChain(); 
DataContainer* DVRJGFVGYMHLWD_execbr = newRefExecBrackets(Prout, DVRJGFVGYMHLWD, "Prout");
chain_MQQJVMOHFYESQX->append(DVRJGFVGYMHLWD_execbr);
DVRJGFVGYMHLWD->append(newRefText("No point: ", __LINE__)); 
DVRJGFVGYMHLWD->append_copy(l_e, r_e, context); 
context->pushExecuteCall(DVRJGFVGYMHLWD_execbr); // Prout
return chain_MQQJVMOHFYESQX;
}
sentence_after_4: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* PolnAnaliz_(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = arg_from;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_XLOZMCQMVHTCEX = context->putChain(); 
DataChain* AMEYKVIXDAQVSS = new DataChain(); 
DataContainer* AMEYKVIXDAQVSS_execbr = newRefExecBrackets(Prout, AMEYKVIXDAQVSS, "Prout");
chain_XLOZMCQMVHTCEX->append(AMEYKVIXDAQVSS_execbr);
AMEYKVIXDAQVSS->append(newRefText("PolnAnaliz: ", __LINE__)); 
AMEYKVIXDAQVSS->append_copy(l_e, r_e, context); 
context->pushExecuteCall(AMEYKVIXDAQVSS_execbr); // Prout
DataChain* DWWOEDKLQENAFB = new DataChain(); 
DataContainer* DWWOEDKLQENAFB_execbr = newRefExecBrackets(PolnAnaliz_, DWWOEDKLQENAFB, "PolnAnaliz_");
chain_XLOZMCQMVHTCEX->append(DWWOEDKLQENAFB_execbr);
DWWOEDKLQENAFB->append_copy(l_e, r_e, context); 
context->pushExecuteCall(DWWOEDKLQENAFB_execbr); // PolnAnaliz_
return chain_XLOZMCQMVHTCEX;
}
sentence_after_1: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* PolnAnaliz(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor CFNHWRHDKJCSXO;
/*DEF*/	DataCursor HDVRBNLBLSEEND;
/*DEF*/	DataCursor UBKXAORTEJLRCM;
/*SET*/	CFNHWRHDKJCSXO = arg_from;
/*INC*/	if (!INC(CFNHWRHDKJCSXO, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (CFNHWRHDKJCSXO.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	HDVRBNLBLSEEND = CFNHWRHDKJCSXO.container->value.bracket_data.chain->at_before_first();
	UBKXAORTEJLRCM   = CFNHWRHDKJCSXO.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor CVOVRSQRCOPNNP;
/*DEF*/	DataCursor l_g;
/*DEF*/	DataCursor r_g;
/*SET*/	l_g = HDVRBNLBLSEEND;
/*SET*/	CVOVRSQRCOPNNP = HDVRBNLBLSEEND;
/*INC*/	if (!INC(CVOVRSQRCOPNNP, UBKXAORTEJLRCM)) goto sentence_after_1;
	if (! isSymbolType(CVOVRSQRCOPNNP.container->type)) goto sentence_after_1;
/*SET*/	r_g = CVOVRSQRCOPNNP;
//// [ empty ] 
/*ISEMPTY*/	if (r_g!=0 && UBKXAORTEJLRCM != r_g) goto sentence_after_1;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor KUNKKCPOENVPKV;
/*DEF*/	DataCursor YGUNPABOUJVIRE;
/*DEF*/	DataCursor LEHLGECTNAZVQP;
/*SET*/	KUNKKCPOENVPKV = CFNHWRHDKJCSXO;
/*INC*/	if (!INC(KUNKKCPOENVPKV, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (KUNKKCPOENVPKV.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	YGUNPABOUJVIRE = KUNKKCPOENVPKV.container->value.bracket_data.chain->at_before_first();
	LEHLGECTNAZVQP   = KUNKKCPOENVPKV.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = YGUNPABOUJVIRE;
/*SET*/	r_1 = LEHLGECTNAZVQP;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor SOUUBCPYFIKGQT;
/*DEF*/	DataCursor UFVQQEVCPCJPMJ;
/*DEF*/	DataCursor HPUACSIASPTSKQ;
/*SET*/	SOUUBCPYFIKGQT = KUNKKCPOENVPKV;
/*INC*/	if (!INC(SOUUBCPYFIKGQT, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (SOUUBCPYFIKGQT.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	UFVQQEVCPCJPMJ = SOUUBCPYFIKGQT.container->value.bracket_data.chain->at_before_first();
	HPUACSIASPTSKQ   = SOUUBCPYFIKGQT.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = UFVQQEVCPCJPMJ;
/*SET*/	r_2 = HPUACSIASPTSKQ;
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
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = KUKAHMLIVZAPRO;
/*SET*/	r_n = TLQDIUOEEYKIQZ;
//// [ empty ] 
/*ISEMPTY*/	if (YHITAUZFABLPQL!=0 && arg_to != YHITAUZFABLPQL) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_AHFAVZZRFRZZEM = context->putChain(); 
DataChain* IYZVOBXUOJORAW = new DataChain(); 
DataContainer* IYZVOBXUOJORAW_execbr = newRefExecBrackets(Ifmust, IYZVOBXUOJORAW, "Ifmust");
chain_AHFAVZZRFRZZEM->append(IYZVOBXUOJORAW_execbr);
DataChain* URHJOPPNNCTEHR = new DataChain(); 
IYZVOBXUOJORAW->append(newRefStructBrackets(URHJOPPNNCTEHR)); 
DataChain* ULPGKOZUYWMOBC = new DataChain(); 
DataContainer* ULPGKOZUYWMOBC_execbr = newRefExecBrackets(Strategy, ULPGKOZUYWMOBC, "Strategy");
URHJOPPNNCTEHR->append(ULPGKOZUYWMOBC_execbr);
ULPGKOZUYWMOBC->append_copy(l_1, r_1, context); 
context->pushExecuteCall(ULPGKOZUYWMOBC_execbr); // Strategy
DataChain* DLBOFBJEJAZSRU = new DataChain(); 
IYZVOBXUOJORAW->append(newRefStructBrackets(DLBOFBJEJAZSRU)); 
DataChain* LVQTAMMEMHQPYI = new DataChain(); 
DataContainer* LVQTAMMEMHQPYI_execbr = newRefExecBrackets(Strategy, LVQTAMMEMHQPYI, "Strategy");
DLBOFBJEJAZSRU->append(LVQTAMMEMHQPYI_execbr);
LVQTAMMEMHQPYI->append_copy(l_2, r_2, context); 
context->pushExecuteCall(LVQTAMMEMHQPYI_execbr); // Strategy
DataChain* OWMNLQAEFZSIOT = new DataChain(); 
IYZVOBXUOJORAW->append(newRefStructBrackets(OWMNLQAEFZSIOT)); 
DataChain* PXJWOCJEUMCJDQ = new DataChain(); 
DataContainer* PXJWOCJEUMCJDQ_execbr = newRefExecBrackets(Strategy, PXJWOCJEUMCJDQ, "Strategy");
OWMNLQAEFZSIOT->append(PXJWOCJEUMCJDQ_execbr);
PXJWOCJEUMCJDQ->append_copy(l_n, r_n, context); 
context->pushExecuteCall(PXJWOCJEUMCJDQ_execbr); // Strategy
DataChain* SZRRRUGIMNJBJA = new DataChain(); 
IYZVOBXUOJORAW->append(newRefStructBrackets(SZRRRUGIMNJBJA)); 
SZRRRUGIMNJBJA->append_copy(l_g, r_g, context); 
DataChain* LQLRCEZJFXCHWD = new DataChain(); 
IYZVOBXUOJORAW->append(newRefStructBrackets(LQLRCEZJFXCHWD)); 
LQLRCEZJFXCHWD->append_copy(l_1, r_1, context); 
DataChain* DXONZMNJVLRJXR = new DataChain(); 
IYZVOBXUOJORAW->append(newRefStructBrackets(DXONZMNJVLRJXR)); 
DXONZMNJVLRJXR->append_copy(l_2, r_2, context); 
DataChain* XWKDUOOERCTEEQ = new DataChain(); 
IYZVOBXUOJORAW->append(newRefStructBrackets(XWKDUOOERCTEEQ)); 
XWKDUOOERCTEEQ->append_copy(l_n, r_n, context); 
context->pushExecuteCall(IYZVOBXUOJORAW_execbr); // Ifmust
return chain_AHFAVZZRFRZZEM;
}
sentence_after_1: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* Ifmust_(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = arg_from;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_DVDLRWAMNKYXJS = context->putChain(); 
DataChain* XPFDLZEHBGKVYP = new DataChain(); 
DataContainer* XPFDLZEHBGKVYP_execbr = newRefExecBrackets(Prout, XPFDLZEHBGKVYP, "Prout");
chain_DVDLRWAMNKYXJS->append(XPFDLZEHBGKVYP_execbr);
XPFDLZEHBGKVYP->append(newRefText("Ifmust: ", __LINE__)); 
XPFDLZEHBGKVYP->append_copy(l_e, r_e, context); 
context->pushExecuteCall(XPFDLZEHBGKVYP_execbr); // Prout
DataChain* XFSMQHIBNGJTGR = new DataChain(); 
DataContainer* XFSMQHIBNGJTGR_execbr = newRefExecBrackets(Ifmust_, XFSMQHIBNGJTGR, "Ifmust_");
chain_DVDLRWAMNKYXJS->append(XFSMQHIBNGJTGR_execbr);
XFSMQHIBNGJTGR->append_copy(l_e, r_e, context); 
context->pushExecuteCall(XFSMQHIBNGJTGR_execbr); // Ifmust_
return chain_DVDLRWAMNKYXJS;
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
/*DEF*/	DataCursor KPFERAYXDZNPGK;
/*DEF*/	DataCursor SDFPDJOBICQFQM;
/*DEF*/	DataCursor FSTQHPFMCPMFDC;
/*SET*/	KPFERAYXDZNPGK = arg_from;
/*INC*/	if (!INC(KPFERAYXDZNPGK, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (KPFERAYXDZNPGK.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	SDFPDJOBICQFQM = KPFERAYXDZNPGK.container->value.bracket_data.chain->at_before_first();
	FSTQHPFMCPMFDC   = KPFERAYXDZNPGK.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_e1;
/*DEF*/	DataCursor r_e1;
/*SET*/	l_e1 = SDFPDJOBICQFQM;
/*SET*/	r_e1 = FSTQHPFMCPMFDC;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor DCCMODLQJQGWJO;
/*DEF*/	DataCursor FNUQNPMHDVKZEB;
/*DEF*/	DataCursor NLIGKJFSWCXWCU;
/*SET*/	DCCMODLQJQGWJO = KPFERAYXDZNPGK;
/*INC*/	if (!INC(DCCMODLQJQGWJO, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (DCCMODLQJQGWJO.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	FNUQNPMHDVKZEB = DCCMODLQJQGWJO.container->value.bracket_data.chain->at_before_first();
	NLIGKJFSWCXWCU   = DCCMODLQJQGWJO.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e21;
/*DEF*/	DataCursor r_e21;
/*SET*/	l_e21 = FNUQNPMHDVKZEB;
/*SET*/	r_e21 = FNUQNPMHDVKZEB;
/*JMP*/	goto label_JWHEPDBSGTFFKB_firststep;
label_JWHEPDBSGTFFKB: 
/*INC*/	if (!INC(r_e21, NLIGKJFSWCXWCU)) goto sentence_after_1;
label_JWHEPDBSGTFFKB_firststep: 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor YKEUHNFZNGKPMV;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_e21;
/*SET*/	YKEUHNFZNGKPMV = r_e21;
/*INC*/	if (!INC(YKEUHNFZNGKPMV, NLIGKJFSWCXWCU)) goto label_JWHEPDBSGTFFKB;
	if (! isSymbolType(YKEUHNFZNGKPMV.container->type)) goto label_JWHEPDBSGTFFKB;
/*SET*/	r_A = YKEUHNFZNGKPMV;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e22;
/*DEF*/	DataCursor r_e22;
/*SET*/	l_e22 = r_A;
/*SET*/	r_e22 = r_A;
/*JMP*/	goto label_QTHEJJRBZHRCGG_firststep;
label_QTHEJJRBZHRCGG: 
/*INC*/	if (!INC(r_e22, NLIGKJFSWCXWCU)) goto label_JWHEPDBSGTFFKB;
label_QTHEJJRBZHRCGG_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor OEWVRXBWYSZBLQ;
/*SET*/	OEWVRXBWYSZBLQ = r_e22;
 if (!SLIDE(OEWVRXBWYSZBLQ, NLIGKJFSWCXWCU, l_A, r_A)) goto label_QTHEJJRBZHRCGG;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e23;
/*DEF*/	DataCursor r_e23;
/*SET*/	l_e23 = OEWVRXBWYSZBLQ;
/*SET*/	r_e23 = NLIGKJFSWCXWCU;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor GPWJPLTJFRQCOC;
/*DEF*/	DataCursor QXYLUTTLWHTZAS;
/*DEF*/	DataCursor NQEOYJBXKIQMAJ;
/*SET*/	GPWJPLTJFRQCOC = DCCMODLQJQGWJO;
/*INC*/	if (!INC(GPWJPLTJFRQCOC, arg_to)) goto label_QTHEJJRBZHRCGG;
//// ISBRACKET 
	if (GPWJPLTJFRQCOC.container->type != struct_bracket) goto label_QTHEJJRBZHRCGG;
//// JMP_BRACKET 
	QXYLUTTLWHTZAS = GPWJPLTJFRQCOC.container->value.bracket_data.chain->at_before_first();
	NQEOYJBXKIQMAJ   = GPWJPLTJFRQCOC.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_nn1;
/*DEF*/	DataCursor r_nn1;
/*SET*/	l_nn1 = QXYLUTTLWHTZAS;
/*SET*/	r_nn1 = QXYLUTTLWHTZAS;
/*JMP*/	goto label_AGFHZZFBDVFUYU_firststep;
label_AGFHZZFBDVFUYU: 
/*INC*/	if (!INC(r_nn1, NQEOYJBXKIQMAJ)) goto label_QTHEJJRBZHRCGG;
label_AGFHZZFBDVFUYU_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor RLVURNWRAMCADU;
/*SET*/	RLVURNWRAMCADU = r_nn1;
 if (!SLIDE(RLVURNWRAMCADU, NQEOYJBXKIQMAJ, l_A, r_A)) goto label_AGFHZZFBDVFUYU;
//// [ e.1 ] 
/*DEF*/	DataCursor l_nn2;
/*DEF*/	DataCursor r_nn2;
/*SET*/	l_nn2 = RLVURNWRAMCADU;
/*SET*/	r_nn2 = NQEOYJBXKIQMAJ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor NWUGTUESHXMGZV;
/*DEF*/	DataCursor SRMCIFBVRASUCU;
/*DEF*/	DataCursor VIVOWLZIVLIICZ;
/*SET*/	NWUGTUESHXMGZV = GPWJPLTJFRQCOC;
/*INC*/	if (!INC(NWUGTUESHXMGZV, arg_to)) goto label_AGFHZZFBDVFUYU;
//// ISBRACKET 
	if (NWUGTUESHXMGZV.container->type != struct_bracket) goto label_AGFHZZFBDVFUYU;
//// JMP_BRACKET 
	SRMCIFBVRASUCU = NWUGTUESHXMGZV.container->value.bracket_data.chain->at_before_first();
	VIVOWLZIVLIICZ   = NWUGTUESHXMGZV.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor PUSSWAFKENWEMO;
/*SET*/	PUSSWAFKENWEMO = SRMCIFBVRASUCU;
/*INC*/	if (!INC(PUSSWAFKENWEMO, VIVOWLZIVLIICZ)) goto label_AGFHZZFBDVFUYU;
	if (PUSSWAFKENWEMO.container->type != text || *(PUSSWAFKENWEMO.container->value.text + PUSSWAFKENWEMO.index) != '2') goto label_AGFHZZFBDVFUYU;
//// [ empty ] 
/*ISEMPTY*/	if (PUSSWAFKENWEMO!=0 && VIVOWLZIVLIICZ != PUSSWAFKENWEMO) goto label_AGFHZZFBDVFUYU;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e1e2;
/*DEF*/	DataCursor r_e1e2;
/*SET*/	l_e1e2 = NWUGTUESHXMGZV;
/*SET*/	r_e1e2 = NWUGTUESHXMGZV;
/*JMP*/	goto label_GFMUABIZMYQPTH_firststep;
label_GFMUABIZMYQPTH: 
/*INC*/	if (!INC(r_e1e2, arg_to)) goto label_AGFHZZFBDVFUYU;
label_GFMUABIZMYQPTH_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor DMZEIEGQCJTSJH;
/*DEF*/	DataCursor QKMVWZEDALKJDV;
/*DEF*/	DataCursor MZGRXOKCHGOALG;
/*SET*/	DMZEIEGQCJTSJH = r_e1e2;
/*INC*/	if (!INC(DMZEIEGQCJTSJH, arg_to)) goto label_GFMUABIZMYQPTH;
//// ISBRACKET 
	if (DMZEIEGQCJTSJH.container->type != struct_bracket) goto label_GFMUABIZMYQPTH;
//// JMP_BRACKET 
	QKMVWZEDALKJDV = DMZEIEGQCJTSJH.container->value.bracket_data.chain->at_before_first();
	MZGRXOKCHGOALG   = DMZEIEGQCJTSJH.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = QKMVWZEDALKJDV;
/*SET*/	r_n = MZGRXOKCHGOALG;
//// [ empty ] 
/*ISEMPTY*/	if (DMZEIEGQCJTSJH!=0 && arg_to != DMZEIEGQCJTSJH) goto label_GFMUABIZMYQPTH;

// подстановка 
// new chain 
DataChain *chain_UQCNQYROKQMJSZ = context->putChain(); 
chain_UQCNQYROKQMJSZ->append(newRefText("2", __LINE__)); 
return chain_UQCNQYROKQMJSZ;
}
sentence_after_1: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor JWSDGCOFGLCQGD;
/*DEF*/	DataCursor NDBYPQQIDCLZXS;
/*DEF*/	DataCursor QBJWIPLOXDERKL;
/*SET*/	JWSDGCOFGLCQGD = arg_from;
/*INC*/	if (!INC(JWSDGCOFGLCQGD, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (JWSDGCOFGLCQGD.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	NDBYPQQIDCLZXS = JWSDGCOFGLCQGD.container->value.bracket_data.chain->at_before_first();
	QBJWIPLOXDERKL   = JWSDGCOFGLCQGD.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e21;
/*DEF*/	DataCursor r_e21;
/*SET*/	l_e21 = NDBYPQQIDCLZXS;
/*SET*/	r_e21 = NDBYPQQIDCLZXS;
/*JMP*/	goto label_GBXGOGNWYUNRNU_firststep;
label_GBXGOGNWYUNRNU: 
/*INC*/	if (!INC(r_e21, QBJWIPLOXDERKL)) goto sentence_after_2;
label_GBXGOGNWYUNRNU_firststep: 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor MFOLBALEZROKNK;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_e21;
/*SET*/	MFOLBALEZROKNK = r_e21;
/*INC*/	if (!INC(MFOLBALEZROKNK, QBJWIPLOXDERKL)) goto label_GBXGOGNWYUNRNU;
	if (! isSymbolType(MFOLBALEZROKNK.container->type)) goto label_GBXGOGNWYUNRNU;
/*SET*/	r_A = MFOLBALEZROKNK;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e22;
/*DEF*/	DataCursor r_e22;
/*SET*/	l_e22 = r_A;
/*SET*/	r_e22 = r_A;
/*JMP*/	goto label_JNWRWEBGELZBGI_firststep;
label_JNWRWEBGELZBGI: 
/*INC*/	if (!INC(r_e22, QBJWIPLOXDERKL)) goto label_GBXGOGNWYUNRNU;
label_JNWRWEBGELZBGI_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor QDSCWTSBXXZKGH;
/*SET*/	QDSCWTSBXXZKGH = r_e22;
 if (!SLIDE(QDSCWTSBXXZKGH, QBJWIPLOXDERKL, l_A, r_A)) goto label_JNWRWEBGELZBGI;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e23;
/*DEF*/	DataCursor r_e23;
/*SET*/	l_e23 = QDSCWTSBXXZKGH;
/*SET*/	r_e23 = QBJWIPLOXDERKL;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor SKGEXLEVGXNYDQ;
/*DEF*/	DataCursor VTYJSLLQKEHTLI;
/*DEF*/	DataCursor AUYICCQDMFIEJR;
/*SET*/	SKGEXLEVGXNYDQ = JWSDGCOFGLCQGD;
/*INC*/	if (!INC(SKGEXLEVGXNYDQ, arg_to)) goto label_JNWRWEBGELZBGI;
//// ISBRACKET 
	if (SKGEXLEVGXNYDQ.container->type != struct_bracket) goto label_JNWRWEBGELZBGI;
//// JMP_BRACKET 
	VTYJSLLQKEHTLI = SKGEXLEVGXNYDQ.container->value.bracket_data.chain->at_before_first();
	AUYICCQDMFIEJR   = SKGEXLEVGXNYDQ.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_e1;
/*DEF*/	DataCursor r_e1;
/*SET*/	l_e1 = VTYJSLLQKEHTLI;
/*SET*/	r_e1 = AUYICCQDMFIEJR;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor QNRNAZCRFHPBJM;
/*DEF*/	DataCursor RFBYQMHDABALHT;
/*DEF*/	DataCursor IGPQMWFONTEPRC;
/*SET*/	QNRNAZCRFHPBJM = SKGEXLEVGXNYDQ;
/*INC*/	if (!INC(QNRNAZCRFHPBJM, arg_to)) goto label_JNWRWEBGELZBGI;
//// ISBRACKET 
	if (QNRNAZCRFHPBJM.container->type != struct_bracket) goto label_JNWRWEBGELZBGI;
//// JMP_BRACKET 
	RFBYQMHDABALHT = QNRNAZCRFHPBJM.container->value.bracket_data.chain->at_before_first();
	IGPQMWFONTEPRC   = QNRNAZCRFHPBJM.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_nn1;
/*DEF*/	DataCursor r_nn1;
/*SET*/	l_nn1 = RFBYQMHDABALHT;
/*SET*/	r_nn1 = RFBYQMHDABALHT;
/*JMP*/	goto label_HDDWEQDOHSPJDG_firststep;
label_HDDWEQDOHSPJDG: 
/*INC*/	if (!INC(r_nn1, IGPQMWFONTEPRC)) goto label_JNWRWEBGELZBGI;
label_HDDWEQDOHSPJDG_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor VLZMJBMWEOILEJ;
/*SET*/	VLZMJBMWEOILEJ = r_nn1;
 if (!SLIDE(VLZMJBMWEOILEJ, IGPQMWFONTEPRC, l_A, r_A)) goto label_HDDWEQDOHSPJDG;
//// [ e.1 ] 
/*DEF*/	DataCursor l_nn2;
/*DEF*/	DataCursor r_nn2;
/*SET*/	l_nn2 = VLZMJBMWEOILEJ;
/*SET*/	r_nn2 = IGPQMWFONTEPRC;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor RPKSBXEESTGPSM;
/*DEF*/	DataCursor NMALPUSWIBUBAQ;
/*DEF*/	DataCursor VOTCAYTBTUZDTW;
/*SET*/	RPKSBXEESTGPSM = QNRNAZCRFHPBJM;
/*INC*/	if (!INC(RPKSBXEESTGPSM, arg_to)) goto label_HDDWEQDOHSPJDG;
//// ISBRACKET 
	if (RPKSBXEESTGPSM.container->type != struct_bracket) goto label_HDDWEQDOHSPJDG;
//// JMP_BRACKET 
	NMALPUSWIBUBAQ = RPKSBXEESTGPSM.container->value.bracket_data.chain->at_before_first();
	VOTCAYTBTUZDTW   = RPKSBXEESTGPSM.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor SYSJRVRWGIXZHX;
/*SET*/	SYSJRVRWGIXZHX = NMALPUSWIBUBAQ;
/*INC*/	if (!INC(SYSJRVRWGIXZHX, VOTCAYTBTUZDTW)) goto label_HDDWEQDOHSPJDG;
	if (SYSJRVRWGIXZHX.container->type != text || *(SYSJRVRWGIXZHX.container->value.text + SYSJRVRWGIXZHX.index) != '1') goto label_HDDWEQDOHSPJDG;
//// [ empty ] 
/*ISEMPTY*/	if (SYSJRVRWGIXZHX!=0 && VOTCAYTBTUZDTW != SYSJRVRWGIXZHX) goto label_HDDWEQDOHSPJDG;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e1e2;
/*DEF*/	DataCursor r_e1e2;
/*SET*/	l_e1e2 = RPKSBXEESTGPSM;
/*SET*/	r_e1e2 = RPKSBXEESTGPSM;
/*JMP*/	goto label_YHHTXMJFMQLFWZ_firststep;
label_YHHTXMJFMQLFWZ: 
/*INC*/	if (!INC(r_e1e2, arg_to)) goto label_HDDWEQDOHSPJDG;
label_YHHTXMJFMQLFWZ_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor JFQVBENLERLKYA;
/*DEF*/	DataCursor WOLVBTYZGEWXCC;
/*DEF*/	DataCursor HSWMWGHBBANCUE;
/*SET*/	JFQVBENLERLKYA = r_e1e2;
/*INC*/	if (!INC(JFQVBENLERLKYA, arg_to)) goto label_YHHTXMJFMQLFWZ;
//// ISBRACKET 
	if (JFQVBENLERLKYA.container->type != struct_bracket) goto label_YHHTXMJFMQLFWZ;
//// JMP_BRACKET 
	WOLVBTYZGEWXCC = JFQVBENLERLKYA.container->value.bracket_data.chain->at_before_first();
	HSWMWGHBBANCUE   = JFQVBENLERLKYA.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = WOLVBTYZGEWXCC;
/*SET*/	r_n = HSWMWGHBBANCUE;
//// [ empty ] 
/*ISEMPTY*/	if (JFQVBENLERLKYA!=0 && arg_to != JFQVBENLERLKYA) goto label_YHHTXMJFMQLFWZ;

// подстановка 
// new chain 
DataChain *chain_JVMWGSFFVOWDLR = context->putChain(); 
chain_JVMWGSFFVOWDLR->append(newRefText("1", __LINE__)); 
return chain_JVMWGSFFVOWDLR;
}
sentence_after_2: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor YINXFIWFHTLDYT;
/*DEF*/	DataCursor YGQKXRWDVRKCOY;
/*DEF*/	DataCursor TXKCWEAGYDMHRP;
/*SET*/	YINXFIWFHTLDYT = arg_from;
/*INC*/	if (!INC(YINXFIWFHTLDYT, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (YINXFIWFHTLDYT.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	YGQKXRWDVRKCOY = YINXFIWFHTLDYT.container->value.bracket_data.chain->at_before_first();
	TXKCWEAGYDMHRP   = YINXFIWFHTLDYT.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_e1;
/*DEF*/	DataCursor r_e1;
/*SET*/	l_e1 = YGQKXRWDVRKCOY;
/*SET*/	r_e1 = TXKCWEAGYDMHRP;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor YQUIMWRBVEZZVV;
/*DEF*/	DataCursor JPGIHCYFQZVADT;
/*DEF*/	DataCursor DFYEMFQVYNBDLR;
/*SET*/	YQUIMWRBVEZZVV = YINXFIWFHTLDYT;
/*INC*/	if (!INC(YQUIMWRBVEZZVV, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (YQUIMWRBVEZZVV.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	JPGIHCYFQZVADT = YQUIMWRBVEZZVV.container->value.bracket_data.chain->at_before_first();
	DFYEMFQVYNBDLR   = YQUIMWRBVEZZVV.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e21;
/*DEF*/	DataCursor r_e21;
/*SET*/	l_e21 = JPGIHCYFQZVADT;
/*SET*/	r_e21 = JPGIHCYFQZVADT;
/*JMP*/	goto label_QHVAPGYSGGXDOR_firststep;
label_QHVAPGYSGGXDOR: 
/*INC*/	if (!INC(r_e21, DFYEMFQVYNBDLR)) goto sentence_after_3;
label_QHVAPGYSGGXDOR_firststep: 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor KVMVQEXPJFGVPI;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_e21;
/*SET*/	KVMVQEXPJFGVPI = r_e21;
/*INC*/	if (!INC(KVMVQEXPJFGVPI, DFYEMFQVYNBDLR)) goto label_QHVAPGYSGGXDOR;
	if (! isSymbolType(KVMVQEXPJFGVPI.container->type)) goto label_QHVAPGYSGGXDOR;
/*SET*/	r_A = KVMVQEXPJFGVPI;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e22;
/*DEF*/	DataCursor r_e22;
/*SET*/	l_e22 = r_A;
/*SET*/	r_e22 = r_A;
/*JMP*/	goto label_FYIDTTGGSDYJBV_firststep;
label_FYIDTTGGSDYJBV: 
/*INC*/	if (!INC(r_e22, DFYEMFQVYNBDLR)) goto label_QHVAPGYSGGXDOR;
label_FYIDTTGGSDYJBV_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor OLBMCGBRRVKUPT;
/*SET*/	OLBMCGBRRVKUPT = r_e22;
 if (!SLIDE(OLBMCGBRRVKUPT, DFYEMFQVYNBDLR, l_A, r_A)) goto label_FYIDTTGGSDYJBV;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e23;
/*DEF*/	DataCursor r_e23;
/*SET*/	l_e23 = OLBMCGBRRVKUPT;
/*SET*/	r_e23 = DFYEMFQVYNBDLR;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor ANLZOSCTFNYSZK;
/*DEF*/	DataCursor LRNZRKUXYJPWWM;
/*DEF*/	DataCursor INHPLXGXWULGXH;
/*SET*/	ANLZOSCTFNYSZK = YQUIMWRBVEZZVV;
/*INC*/	if (!INC(ANLZOSCTFNYSZK, arg_to)) goto label_FYIDTTGGSDYJBV;
//// ISBRACKET 
	if (ANLZOSCTFNYSZK.container->type != struct_bracket) goto label_FYIDTTGGSDYJBV;
//// JMP_BRACKET 
	LRNZRKUXYJPWWM = ANLZOSCTFNYSZK.container->value.bracket_data.chain->at_before_first();
	INHPLXGXWULGXH   = ANLZOSCTFNYSZK.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_nn1;
/*DEF*/	DataCursor r_nn1;
/*SET*/	l_nn1 = LRNZRKUXYJPWWM;
/*SET*/	r_nn1 = LRNZRKUXYJPWWM;
/*JMP*/	goto label_LMSBZRQUAJUAXP_firststep;
label_LMSBZRQUAJUAXP: 
/*INC*/	if (!INC(r_nn1, INHPLXGXWULGXH)) goto label_FYIDTTGGSDYJBV;
label_LMSBZRQUAJUAXP_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor DPSMWIWXXDVIPO;
/*SET*/	DPSMWIWXXDVIPO = r_nn1;
 if (!SLIDE(DPSMWIWXXDVIPO, INHPLXGXWULGXH, l_A, r_A)) goto label_LMSBZRQUAJUAXP;
//// [ e.1 ] 
/*DEF*/	DataCursor l_nn2;
/*DEF*/	DataCursor r_nn2;
/*SET*/	l_nn2 = DPSMWIWXXDVIPO;
/*SET*/	r_nn2 = INHPLXGXWULGXH;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor UXTLKQWWOWRQEA;
/*DEF*/	DataCursor TQBMMILPOXBIPW;
/*DEF*/	DataCursor WEGHTFIQJQKBNJ;
/*SET*/	UXTLKQWWOWRQEA = ANLZOSCTFNYSZK;
/*INC*/	if (!INC(UXTLKQWWOWRQEA, arg_to)) goto label_LMSBZRQUAJUAXP;
//// ISBRACKET 
	if (UXTLKQWWOWRQEA.container->type != struct_bracket) goto label_LMSBZRQUAJUAXP;
//// JMP_BRACKET 
	TQBMMILPOXBIPW = UXTLKQWWOWRQEA.container->value.bracket_data.chain->at_before_first();
	WEGHTFIQJQKBNJ   = UXTLKQWWOWRQEA.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor HXDKUNEBQGRIZK;
/*SET*/	HXDKUNEBQGRIZK = TQBMMILPOXBIPW;
/*INC*/	if (!INC(HXDKUNEBQGRIZK, WEGHTFIQJQKBNJ)) goto label_LMSBZRQUAJUAXP;
	if (HXDKUNEBQGRIZK.container->type != text || *(HXDKUNEBQGRIZK.container->value.text + HXDKUNEBQGRIZK.index) != '1') goto label_LMSBZRQUAJUAXP;
//// [ empty ] 
/*ISEMPTY*/	if (HXDKUNEBQGRIZK!=0 && WEGHTFIQJQKBNJ != HXDKUNEBQGRIZK) goto label_LMSBZRQUAJUAXP;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e1e2;
/*DEF*/	DataCursor r_e1e2;
/*SET*/	l_e1e2 = UXTLKQWWOWRQEA;
/*SET*/	r_e1e2 = UXTLKQWWOWRQEA;
/*JMP*/	goto label_YKMVAYQBNKSTMD_firststep;
label_YKMVAYQBNKSTMD: 
/*INC*/	if (!INC(r_e1e2, arg_to)) goto label_LMSBZRQUAJUAXP;
label_YKMVAYQBNKSTMD_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor EFRMTWKYLNONCH;
/*DEF*/	DataCursor IGMTFBOURZHMFF;
/*DEF*/	DataCursor FSRCBDZDFBEOST;
/*SET*/	EFRMTWKYLNONCH = r_e1e2;
/*INC*/	if (!INC(EFRMTWKYLNONCH, arg_to)) goto label_YKMVAYQBNKSTMD;
//// ISBRACKET 
	if (EFRMTWKYLNONCH.container->type != struct_bracket) goto label_YKMVAYQBNKSTMD;
//// JMP_BRACKET 
	IGMTFBOURZHMFF = EFRMTWKYLNONCH.container->value.bracket_data.chain->at_before_first();
	FSRCBDZDFBEOST   = EFRMTWKYLNONCH.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = IGMTFBOURZHMFF;
/*SET*/	r_n = FSRCBDZDFBEOST;
//// [ empty ] 
/*ISEMPTY*/	if (EFRMTWKYLNONCH!=0 && arg_to != EFRMTWKYLNONCH) goto label_YKMVAYQBNKSTMD;

// подстановка 
// new chain 
DataChain *chain_FVSKREBTLJHZKR = context->putChain(); 
DataChain* GHTSGBBDHLSICU = new DataChain(); 
DataContainer* GHTSGBBDHLSICU_execbr = newRefExecBrackets(StepShag, GHTSGBBDHLSICU, "StepShag");
chain_FVSKREBTLJHZKR->append(GHTSGBBDHLSICU_execbr);
DataChain* TFMMJOUTFVEXDC = new DataChain(); 
DataContainer* TFMMJOUTFVEXDC_execbr = newRefExecBrackets(Lins, TFMMJOUTFVEXDC, "Lins");
GHTSGBBDHLSICU->append(TFMMJOUTFVEXDC_execbr);
DataChain* ZSCHYTBCRKLIWC = new DataChain(); 
TFMMJOUTFVEXDC->append(newRefStructBrackets(ZSCHYTBCRKLIWC)); 
ZSCHYTBCRKLIWC->append_copy(l_n, r_n, context); 
DataChain* XKGOQVUFYOGVFR = new DataChain(); 
DataContainer* XKGOQVUFYOGVFR_execbr = newRefExecBrackets(AntiStrategy, XKGOQVUFYOGVFR, "AntiStrategy");
TFMMJOUTFVEXDC->append(XKGOQVUFYOGVFR_execbr);
XKGOQVUFYOGVFR->append_copy(l_A, r_A, context); 
context->pushExecuteCall(XKGOQVUFYOGVFR_execbr); // AntiStrategy
context->pushExecuteCall(TFMMJOUTFVEXDC_execbr); // Lins
DataChain* NYMOPFWPNFUZEI = new DataChain(); 
GHTSGBBDHLSICU->append(newRefStructBrackets(NYMOPFWPNFUZEI)); 
NYMOPFWPNFUZEI->append(newRefText("1", __LINE__)); 
GHTSGBBDHLSICU->append_copy(l_e1e2, r_e1e2, context); 
DataChain* HXYXANSPRGGWDY = new DataChain(); 
GHTSGBBDHLSICU->append(newRefStructBrackets(HXYXANSPRGGWDY)); 
HXYXANSPRGGWDY->append_copy(l_n, r_n, context); 
context->pushExecuteCall(GHTSGBBDHLSICU_execbr); // StepShag
return chain_FVSKREBTLJHZKR;
}
sentence_after_3: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor AFAWQGQBTDGFFC;
/*DEF*/	DataCursor EGTPCYBQVRQUSQ;
/*DEF*/	DataCursor SYDYMVPEIBGXFF;
/*SET*/	AFAWQGQBTDGFFC = arg_from;
/*INC*/	if (!INC(AFAWQGQBTDGFFC, arg_to)) goto sentence_after_4;
//// ISBRACKET 
	if (AFAWQGQBTDGFFC.container->type != struct_bracket) goto sentence_after_4;
//// JMP_BRACKET 
	EGTPCYBQVRQUSQ = AFAWQGQBTDGFFC.container->value.bracket_data.chain->at_before_first();
	SYDYMVPEIBGXFF   = AFAWQGQBTDGFFC.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e21;
/*DEF*/	DataCursor r_e21;
/*SET*/	l_e21 = EGTPCYBQVRQUSQ;
/*SET*/	r_e21 = EGTPCYBQVRQUSQ;
/*JMP*/	goto label_NOPFYMRMQHUCGO_firststep;
label_NOPFYMRMQHUCGO: 
/*INC*/	if (!INC(r_e21, SYDYMVPEIBGXFF)) goto sentence_after_4;
label_NOPFYMRMQHUCGO_firststep: 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor MDIUXEMXBZYSLV;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = r_e21;
/*SET*/	MDIUXEMXBZYSLV = r_e21;
/*INC*/	if (!INC(MDIUXEMXBZYSLV, SYDYMVPEIBGXFF)) goto label_NOPFYMRMQHUCGO;
	if (! isSymbolType(MDIUXEMXBZYSLV.container->type)) goto label_NOPFYMRMQHUCGO;
/*SET*/	r_A = MDIUXEMXBZYSLV;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e22;
/*DEF*/	DataCursor r_e22;
/*SET*/	l_e22 = r_A;
/*SET*/	r_e22 = r_A;
/*JMP*/	goto label_LITWUBNSPBMEWW_firststep;
label_LITWUBNSPBMEWW: 
/*INC*/	if (!INC(r_e22, SYDYMVPEIBGXFF)) goto label_NOPFYMRMQHUCGO;
label_LITWUBNSPBMEWW_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor HGPMPRKCYFDXKM;
/*SET*/	HGPMPRKCYFDXKM = r_e22;
 if (!SLIDE(HGPMPRKCYFDXKM, SYDYMVPEIBGXFF, l_A, r_A)) goto label_LITWUBNSPBMEWW;
//// [ e.1 ] 
/*DEF*/	DataCursor l_e23;
/*DEF*/	DataCursor r_e23;
/*SET*/	l_e23 = HGPMPRKCYFDXKM;
/*SET*/	r_e23 = SYDYMVPEIBGXFF;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor TUHEVOIXRWLMXW;
/*DEF*/	DataCursor GCNOYZMMYOVRTE;
/*DEF*/	DataCursor PQTIBDVTHMPOAQ;
/*SET*/	TUHEVOIXRWLMXW = AFAWQGQBTDGFFC;
/*INC*/	if (!INC(TUHEVOIXRWLMXW, arg_to)) goto label_LITWUBNSPBMEWW;
//// ISBRACKET 
	if (TUHEVOIXRWLMXW.container->type != struct_bracket) goto label_LITWUBNSPBMEWW;
//// JMP_BRACKET 
	GCNOYZMMYOVRTE = TUHEVOIXRWLMXW.container->value.bracket_data.chain->at_before_first();
	PQTIBDVTHMPOAQ   = TUHEVOIXRWLMXW.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_e1;
/*DEF*/	DataCursor r_e1;
/*SET*/	l_e1 = GCNOYZMMYOVRTE;
/*SET*/	r_e1 = PQTIBDVTHMPOAQ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor YDDQRXNVKIYADV;
/*DEF*/	DataCursor LOYEMCYCFCPYUW;
/*DEF*/	DataCursor KZEBCJAEDSBVQQ;
/*SET*/	YDDQRXNVKIYADV = TUHEVOIXRWLMXW;
/*INC*/	if (!INC(YDDQRXNVKIYADV, arg_to)) goto label_LITWUBNSPBMEWW;
//// ISBRACKET 
	if (YDDQRXNVKIYADV.container->type != struct_bracket) goto label_LITWUBNSPBMEWW;
//// JMP_BRACKET 
	LOYEMCYCFCPYUW = YDDQRXNVKIYADV.container->value.bracket_data.chain->at_before_first();
	KZEBCJAEDSBVQQ   = YDDQRXNVKIYADV.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_nn1;
/*DEF*/	DataCursor r_nn1;
/*SET*/	l_nn1 = LOYEMCYCFCPYUW;
/*SET*/	r_nn1 = LOYEMCYCFCPYUW;
/*JMP*/	goto label_IJQLGJYCJPKPXF_firststep;
label_IJQLGJYCJPKPXF: 
/*INC*/	if (!INC(r_nn1, KZEBCJAEDSBVQQ)) goto label_LITWUBNSPBMEWW;
label_IJQLGJYCJPKPXF_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor LCEONIYVQVURDI;
/*SET*/	LCEONIYVQVURDI = r_nn1;
 if (!SLIDE(LCEONIYVQVURDI, KZEBCJAEDSBVQQ, l_A, r_A)) goto label_IJQLGJYCJPKPXF;
//// [ e.1 ] 
/*DEF*/	DataCursor l_nn2;
/*DEF*/	DataCursor r_nn2;
/*SET*/	l_nn2 = LCEONIYVQVURDI;
/*SET*/	r_nn2 = KZEBCJAEDSBVQQ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor AQMSRTFGWTPEPU;
/*DEF*/	DataCursor NUGEAJDGZSJEWS;
/*DEF*/	DataCursor QRMJZSSBXJVOTJ;
/*SET*/	AQMSRTFGWTPEPU = YDDQRXNVKIYADV;
/*INC*/	if (!INC(AQMSRTFGWTPEPU, arg_to)) goto label_IJQLGJYCJPKPXF;
//// ISBRACKET 
	if (AQMSRTFGWTPEPU.container->type != struct_bracket) goto label_IJQLGJYCJPKPXF;
//// JMP_BRACKET 
	NUGEAJDGZSJEWS = AQMSRTFGWTPEPU.container->value.bracket_data.chain->at_before_first();
	QRMJZSSBXJVOTJ   = AQMSRTFGWTPEPU.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor VJQCFQPTBZGKET;
/*SET*/	VJQCFQPTBZGKET = NUGEAJDGZSJEWS;
/*INC*/	if (!INC(VJQCFQPTBZGKET, QRMJZSSBXJVOTJ)) goto label_IJQLGJYCJPKPXF;
	if (VJQCFQPTBZGKET.container->type != text || *(VJQCFQPTBZGKET.container->value.text + VJQCFQPTBZGKET.index) != '2') goto label_IJQLGJYCJPKPXF;
//// [ empty ] 
/*ISEMPTY*/	if (VJQCFQPTBZGKET!=0 && QRMJZSSBXJVOTJ != VJQCFQPTBZGKET) goto label_IJQLGJYCJPKPXF;
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_e1e2;
/*DEF*/	DataCursor r_e1e2;
/*SET*/	l_e1e2 = AQMSRTFGWTPEPU;
/*SET*/	r_e1e2 = AQMSRTFGWTPEPU;
/*JMP*/	goto label_EKRCIHHXJEIGUT_firststep;
label_EKRCIHHXJEIGUT: 
/*INC*/	if (!INC(r_e1e2, arg_to)) goto label_IJQLGJYCJPKPXF;
label_EKRCIHHXJEIGUT_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor WIGDBBDXRBWMBR;
/*DEF*/	DataCursor MBVGAOWLVDJYDD;
/*DEF*/	DataCursor YCTCOCKMGZVARP;
/*SET*/	WIGDBBDXRBWMBR = r_e1e2;
/*INC*/	if (!INC(WIGDBBDXRBWMBR, arg_to)) goto label_EKRCIHHXJEIGUT;
//// ISBRACKET 
	if (WIGDBBDXRBWMBR.container->type != struct_bracket) goto label_EKRCIHHXJEIGUT;
//// JMP_BRACKET 
	MBVGAOWLVDJYDD = WIGDBBDXRBWMBR.container->value.bracket_data.chain->at_before_first();
	YCTCOCKMGZVARP   = WIGDBBDXRBWMBR.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_n;
/*DEF*/	DataCursor r_n;
/*SET*/	l_n = MBVGAOWLVDJYDD;
/*SET*/	r_n = YCTCOCKMGZVARP;
//// [ empty ] 
/*ISEMPTY*/	if (WIGDBBDXRBWMBR!=0 && arg_to != WIGDBBDXRBWMBR) goto label_EKRCIHHXJEIGUT;

// подстановка 
// new chain 
DataChain *chain_FOBGMHPAOJOIQP = context->putChain(); 
DataChain* QTXTUCRORYSMGT = new DataChain(); 
DataContainer* QTXTUCRORYSMGT_execbr = newRefExecBrackets(StepShag, QTXTUCRORYSMGT, "StepShag");
chain_FOBGMHPAOJOIQP->append(QTXTUCRORYSMGT_execbr);
DataChain* XCFZLBJBIPFIMU = new DataChain(); 
DataContainer* XCFZLBJBIPFIMU_execbr = newRefExecBrackets(Lins, XCFZLBJBIPFIMU, "Lins");
QTXTUCRORYSMGT->append(XCFZLBJBIPFIMU_execbr);
DataChain* NEZPQAQJASIXVW = new DataChain(); 
XCFZLBJBIPFIMU->append(newRefStructBrackets(NEZPQAQJASIXVW)); 
NEZPQAQJASIXVW->append_copy(l_n, r_n, context); 
DataChain* OQYJVXKHCQPQIA = new DataChain(); 
DataContainer* OQYJVXKHCQPQIA_execbr = newRefExecBrackets(AntiStrategy, OQYJVXKHCQPQIA, "AntiStrategy");
XCFZLBJBIPFIMU->append(OQYJVXKHCQPQIA_execbr);
OQYJVXKHCQPQIA->append_copy(l_A, r_A, context); 
context->pushExecuteCall(OQYJVXKHCQPQIA_execbr); // AntiStrategy
context->pushExecuteCall(XCFZLBJBIPFIMU_execbr); // Lins
DataChain* BUBQQDOFEHHJTZ = new DataChain(); 
QTXTUCRORYSMGT->append(newRefStructBrackets(BUBQQDOFEHHJTZ)); 
BUBQQDOFEHHJTZ->append(newRefText("2", __LINE__)); 
QTXTUCRORYSMGT->append_copy(l_e1e2, r_e1e2, context); 
DataChain* YQKTDMKAPSPBMY = new DataChain(); 
QTXTUCRORYSMGT->append(newRefStructBrackets(YQKTDMKAPSPBMY)); 
YQKTDMKAPSPBMY->append_copy(l_n, r_n, context); 
context->pushExecuteCall(QTXTUCRORYSMGT_execbr); // StepShag
return chain_FOBGMHPAOJOIQP;
}
sentence_after_4: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor KOYLPNZOIPZWDM;
/*DEF*/	DataCursor KRBHDNTDKVPDEL;
/*DEF*/	DataCursor ORQCJKQZZPINOQ;
/*SET*/	KOYLPNZOIPZWDM = arg_from;
/*INC*/	if (!INC(KOYLPNZOIPZWDM, arg_to)) goto sentence_after_5;
//// ISBRACKET 
	if (KOYLPNZOIPZWDM.container->type != struct_bracket) goto sentence_after_5;
//// JMP_BRACKET 
	KRBHDNTDKVPDEL = KOYLPNZOIPZWDM.container->value.bracket_data.chain->at_before_first();
	ORQCJKQZZPINOQ   = KOYLPNZOIPZWDM.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_e1;
/*DEF*/	DataCursor r_e1;
/*SET*/	l_e1 = KRBHDNTDKVPDEL;
/*SET*/	r_e1 = ORQCJKQZZPINOQ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor LUIBJGNQQLFEWI;
/*DEF*/	DataCursor OAMGMRCEMOAXVU;
/*DEF*/	DataCursor FYQYPCHHGFMIZR;
/*SET*/	LUIBJGNQQLFEWI = KOYLPNZOIPZWDM;
/*INC*/	if (!INC(LUIBJGNQQLFEWI, arg_to)) goto sentence_after_5;
//// ISBRACKET 
	if (LUIBJGNQQLFEWI.container->type != struct_bracket) goto sentence_after_5;
//// JMP_BRACKET 
	OAMGMRCEMOAXVU = LUIBJGNQQLFEWI.container->value.bracket_data.chain->at_before_first();
	FYQYPCHHGFMIZR   = LUIBJGNQQLFEWI.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_e2;
/*DEF*/	DataCursor r_e2;
/*SET*/	l_e2 = OAMGMRCEMOAXVU;
/*SET*/	r_e2 = FYQYPCHHGFMIZR;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor CKLYHBPJJZRRUG;
/*DEF*/	DataCursor OFLUIOIVOVXMRA;
/*DEF*/	DataCursor WZSWPFNCNFYTMC;
/*SET*/	CKLYHBPJJZRRUG = LUIBJGNQQLFEWI;
/*INC*/	if (!INC(CKLYHBPJJZRRUG, arg_to)) goto sentence_after_5;
//// ISBRACKET 
	if (CKLYHBPJJZRRUG.container->type != struct_bracket) goto sentence_after_5;
//// JMP_BRACKET 
	OFLUIOIVOVXMRA = CKLYHBPJJZRRUG.container->value.bracket_data.chain->at_before_first();
	WZSWPFNCNFYTMC   = CKLYHBPJJZRRUG.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_nn;
/*DEF*/	DataCursor r_nn;
/*SET*/	l_nn = OFLUIOIVOVXMRA;
/*SET*/	r_nn = WZSWPFNCNFYTMC;
//// [ e.1 ] 
/*DEF*/	DataCursor l_hn;
/*DEF*/	DataCursor r_hn;
/*SET*/	l_hn = CKLYHBPJJZRRUG;
/*SET*/	r_hn = arg_to;

// подстановка 
// new chain 
DataChain *chain_FVWNRMFZGPZPOL = context->putChain(); 
DataChain* TVNBMVWTHJSVHB = new DataChain(); 
DataContainer* TVNBMVWTHJSVHB_execbr = newRefExecBrackets(PolnAnalizAny, TVNBMVWTHJSVHB, "PolnAnalizAny");
chain_FVWNRMFZGPZPOL->append(TVNBMVWTHJSVHB_execbr);
TVNBMVWTHJSVHB->append_copy(l_hn, r_hn, context); 
context->pushExecuteCall(TVNBMVWTHJSVHB_execbr); // PolnAnalizAny
return chain_FVWNRMFZGPZPOL;
}
sentence_after_5: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* StepShag_(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = arg_from;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_XSEWQYCKWEXZPM = context->putChain(); 
DataChain* IEXGRJXJMDWBQY = new DataChain(); 
DataContainer* IEXGRJXJMDWBQY_execbr = newRefExecBrackets(Prout, IEXGRJXJMDWBQY, "Prout");
chain_XSEWQYCKWEXZPM->append(IEXGRJXJMDWBQY_execbr);
IEXGRJXJMDWBQY->append(newRefText("StepShag: ", __LINE__)); 
IEXGRJXJMDWBQY->append_copy(l_e, r_e, context); 
context->pushExecuteCall(IEXGRJXJMDWBQY_execbr); // Prout
DataChain* UIPXARRBPHNZWK = new DataChain(); 
DataContainer* UIPXARRBPHNZWK_execbr = newRefExecBrackets(StepShag_, UIPXARRBPHNZWK, "StepShag_");
chain_XSEWQYCKWEXZPM->append(UIPXARRBPHNZWK_execbr);
UIPXARRBPHNZWK->append_copy(l_e, r_e, context); 
context->pushExecuteCall(UIPXARRBPHNZWK_execbr); // StepShag_
return chain_XSEWQYCKWEXZPM;
}
sentence_after_1: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* StepShag(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor BCLGBVOCYUZUTZ;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = arg_from;
/*SET*/	BCLGBVOCYUZUTZ = arg_from;
/*INC*/	if (!INC(BCLGBVOCYUZUTZ, arg_to)) goto sentence_after_1;
	if (! isSymbolType(BCLGBVOCYUZUTZ.container->type)) goto sentence_after_1;
/*SET*/	r_A = BCLGBVOCYUZUTZ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor YPIROCYYUCCLQZ;
/*DEF*/	DataCursor CXTAWHXKHALPUK;
/*DEF*/	DataCursor JRMGSXOCKDRAAU;
/*SET*/	YPIROCYYUCCLQZ = r_A;
/*INC*/	if (!INC(YPIROCYYUCCLQZ, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (YPIROCYYUCCLQZ.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	CXTAWHXKHALPUK = YPIROCYYUCCLQZ.container->value.bracket_data.chain->at_before_first();
	JRMGSXOCKDRAAU   = YPIROCYYUCCLQZ.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor ACXKPMRFLSPDLQ;
/*SET*/	ACXKPMRFLSPDLQ = CXTAWHXKHALPUK;
/*INC*/	if (!INC(ACXKPMRFLSPDLQ, JRMGSXOCKDRAAU)) goto sentence_after_1;
	if (ACXKPMRFLSPDLQ.container->type != text || *(ACXKPMRFLSPDLQ.container->value.text + ACXKPMRFLSPDLQ.index) != '1') goto sentence_after_1;
//// [ empty ] 
/*ISEMPTY*/	if (ACXKPMRFLSPDLQ!=0 && JRMGSXOCKDRAAU != ACXKPMRFLSPDLQ) goto sentence_after_1;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor OHKQNKTTIQFYRH;
/*DEF*/	DataCursor DSGEUEIVKRNEZU;
/*DEF*/	DataCursor MCIRZFQXOZFCUH;
/*SET*/	OHKQNKTTIQFYRH = YPIROCYYUCCLQZ;
/*INC*/	if (!INC(OHKQNKTTIQFYRH, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (OHKQNKTTIQFYRH.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	DSGEUEIVKRNEZU = OHKQNKTTIQFYRH.container->value.bracket_data.chain->at_before_first();
	MCIRZFQXOZFCUH   = OHKQNKTTIQFYRH.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = DSGEUEIVKRNEZU;
/*SET*/	r_1 = MCIRZFQXOZFCUH;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor CNSCQKCJBCHVRS;
/*DEF*/	DataCursor PZOTKDBIDWWYGO;
/*DEF*/	DataCursor WWQHNZFJQHFGIM;
/*SET*/	CNSCQKCJBCHVRS = OHKQNKTTIQFYRH;
/*INC*/	if (!INC(CNSCQKCJBCHVRS, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (CNSCQKCJBCHVRS.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	PZOTKDBIDWWYGO = CNSCQKCJBCHVRS.container->value.bracket_data.chain->at_before_first();
	WWQHNZFJQHFGIM   = CNSCQKCJBCHVRS.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = PZOTKDBIDWWYGO;
/*SET*/	r_2 = WWQHNZFJQHFGIM;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor WJGRJVQSPOOSLA;
/*DEF*/	DataCursor QKXZEHZEGKWUTI;
/*DEF*/	DataCursor YPZVVZTDURGODX;
/*SET*/	WJGRJVQSPOOSLA = CNSCQKCJBCHVRS;
/*INC*/	if (!INC(WJGRJVQSPOOSLA, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (WJGRJVQSPOOSLA.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	QKXZEHZEGKWUTI = WJGRJVQSPOOSLA.container->value.bracket_data.chain->at_before_first();
	YPZVVZTDURGODX   = WJGRJVQSPOOSLA.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_n1;
/*DEF*/	DataCursor r_n1;
/*SET*/	l_n1 = QKXZEHZEGKWUTI;
/*SET*/	r_n1 = QKXZEHZEGKWUTI;
/*JMP*/	goto label_VAAHGUIGPSGLHA_firststep;
label_VAAHGUIGPSGLHA: 
/*INC*/	if (!INC(r_n1, YPZVVZTDURGODX)) goto sentence_after_1;
label_VAAHGUIGPSGLHA_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor BNQBWTQMBDSMBF;
/*SET*/	BNQBWTQMBDSMBF = r_n1;
 if (!SLIDE(BNQBWTQMBDSMBF, YPZVVZTDURGODX, l_A, r_A)) goto label_VAAHGUIGPSGLHA;
//// [ e.1 ] 
/*DEF*/	DataCursor l_n2;
/*DEF*/	DataCursor r_n2;
/*SET*/	l_n2 = BNQBWTQMBDSMBF;
/*SET*/	r_n2 = YPZVVZTDURGODX;
//// [ empty ] 
/*ISEMPTY*/	if (WJGRJVQSPOOSLA!=0 && arg_to != WJGRJVQSPOOSLA) goto label_VAAHGUIGPSGLHA;

// подстановка 
// new chain 
DataChain *chain_ZTHYUMQUOWLDNO = context->putChain(); 
DataChain* VUCOIMMQSZMSRZ = new DataChain(); 
DataContainer* VUCOIMMQSZMSRZ_execbr = newRefExecBrackets(PolnAnaliz, VUCOIMMQSZMSRZ, "PolnAnaliz");
chain_ZTHYUMQUOWLDNO->append(VUCOIMMQSZMSRZ_execbr);
DataChain* QPMADDCVHINJJD = new DataChain(); 
VUCOIMMQSZMSRZ->append(newRefStructBrackets(QPMADDCVHINJJD)); 
QPMADDCVHINJJD->append(newRefText("2", __LINE__)); 
DataChain* FYWRWSDAGMVYQH = new DataChain(); 
VUCOIMMQSZMSRZ->append(newRefStructBrackets(FYWRWSDAGMVYQH)); 
FYWRWSDAGMVYQH->append_copy(l_1, r_1, context); 
FYWRWSDAGMVYQH->append_copy(l_A, r_A, context); 
DataChain* TQWFYIAISTVHBZ = new DataChain(); 
VUCOIMMQSZMSRZ->append(newRefStructBrackets(TQWFYIAISTVHBZ)); 
TQWFYIAISTVHBZ->append_copy(l_2, r_2, context); 
DataChain* VROOVJFTEGSKJR = new DataChain(); 
VUCOIMMQSZMSRZ->append(newRefStructBrackets(VROOVJFTEGSKJR)); 
VROOVJFTEGSKJR->append_copy(l_n1, r_n1, context); 
VROOVJFTEGSKJR->append_copy(l_n2, r_n2, context); 
context->pushExecuteCall(VUCOIMMQSZMSRZ_execbr); // PolnAnaliz
return chain_ZTHYUMQUOWLDNO;
}
sentence_after_1: 

{
// сопоставление 
//// [ s.1 <any> ] 
/*DEF*/	DataCursor JYNGLSSHITXZGF;
/*DEF*/	DataCursor l_A;
/*DEF*/	DataCursor r_A;
/*SET*/	l_A = arg_from;
/*SET*/	JYNGLSSHITXZGF = arg_from;
/*INC*/	if (!INC(JYNGLSSHITXZGF, arg_to)) goto sentence_after_2;
	if (! isSymbolType(JYNGLSSHITXZGF.container->type)) goto sentence_after_2;
/*SET*/	r_A = JYNGLSSHITXZGF;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor WAWLYZGKXYSPEK;
/*DEF*/	DataCursor DARMEQDKXJFLKJ;
/*DEF*/	DataCursor WNWWFZINWTXSCJ;
/*SET*/	WAWLYZGKXYSPEK = r_A;
/*INC*/	if (!INC(WAWLYZGKXYSPEK, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (WAWLYZGKXYSPEK.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	DARMEQDKXJFLKJ = WAWLYZGKXYSPEK.container->value.bracket_data.chain->at_before_first();
	WNWWFZINWTXSCJ   = WAWLYZGKXYSPEK.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ] 
/*DEF*/	DataCursor BPAWNHBSKILHSD;
/*SET*/	BPAWNHBSKILHSD = DARMEQDKXJFLKJ;
/*INC*/	if (!INC(BPAWNHBSKILHSD, WNWWFZINWTXSCJ)) goto sentence_after_2;
	if (BPAWNHBSKILHSD.container->type != text || *(BPAWNHBSKILHSD.container->value.text + BPAWNHBSKILHSD.index) != '2') goto sentence_after_2;
//// [ empty ] 
/*ISEMPTY*/	if (BPAWNHBSKILHSD!=0 && WNWWFZINWTXSCJ != BPAWNHBSKILHSD) goto sentence_after_2;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor BFGCQYXEJHGAHX;
/*DEF*/	DataCursor WJMSKGAPLCJJLT;
/*DEF*/	DataCursor QTROZAMUINYSTP;
/*SET*/	BFGCQYXEJHGAHX = WAWLYZGKXYSPEK;
/*INC*/	if (!INC(BFGCQYXEJHGAHX, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (BFGCQYXEJHGAHX.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	WJMSKGAPLCJJLT = BFGCQYXEJHGAHX.container->value.bracket_data.chain->at_before_first();
	QTROZAMUINYSTP   = BFGCQYXEJHGAHX.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = WJMSKGAPLCJJLT;
/*SET*/	r_1 = QTROZAMUINYSTP;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor KLZLIVFHVSJTKZ;
/*DEF*/	DataCursor MNKABBALEIZTJP;
/*DEF*/	DataCursor ZHZTQHVNSJBJUL;
/*SET*/	KLZLIVFHVSJTKZ = BFGCQYXEJHGAHX;
/*INC*/	if (!INC(KLZLIVFHVSJTKZ, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (KLZLIVFHVSJTKZ.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	MNKABBALEIZTJP = KLZLIVFHVSJTKZ.container->value.bracket_data.chain->at_before_first();
	ZHZTQHVNSJBJUL   = KLZLIVFHVSJTKZ.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = MNKABBALEIZTJP;
/*SET*/	r_2 = ZHZTQHVNSJBJUL;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor USJTYYNQGPYSVA;
/*DEF*/	DataCursor LZDFEDGAUFCHGK;
/*DEF*/	DataCursor GXAPVWBNUHYMEA;
/*SET*/	USJTYYNQGPYSVA = KLZLIVFHVSJTKZ;
/*INC*/	if (!INC(USJTYYNQGPYSVA, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (USJTYYNQGPYSVA.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	LZDFEDGAUFCHGK = USJTYYNQGPYSVA.container->value.bracket_data.chain->at_before_first();
	GXAPVWBNUHYMEA   = USJTYYNQGPYSVA.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_n1;
/*DEF*/	DataCursor r_n1;
/*SET*/	l_n1 = LZDFEDGAUFCHGK;
/*SET*/	r_n1 = LZDFEDGAUFCHGK;
/*JMP*/	goto label_HSCSNSIIMBMTJS_firststep;
label_HSCSNSIIMBMTJS: 
/*INC*/	if (!INC(r_n1, GXAPVWBNUHYMEA)) goto sentence_after_2;
label_HSCSNSIIMBMTJS_firststep: 
//// [ &.name <any> ] 
/*DEF*/	DataCursor TPVRJUFSIKDVWY;
/*SET*/	TPVRJUFSIKDVWY = r_n1;
 if (!SLIDE(TPVRJUFSIKDVWY, GXAPVWBNUHYMEA, l_A, r_A)) goto label_HSCSNSIIMBMTJS;
//// [ e.1 ] 
/*DEF*/	DataCursor l_n2;
/*DEF*/	DataCursor r_n2;
/*SET*/	l_n2 = TPVRJUFSIKDVWY;
/*SET*/	r_n2 = GXAPVWBNUHYMEA;
//// [ empty ] 
/*ISEMPTY*/	if (USJTYYNQGPYSVA!=0 && arg_to != USJTYYNQGPYSVA) goto label_HSCSNSIIMBMTJS;

// подстановка 
// new chain 
DataChain *chain_RIZUBLBBGWADBF = context->putChain(); 
DataChain* ZRWMOHSCFWYGAV = new DataChain(); 
DataContainer* ZRWMOHSCFWYGAV_execbr = newRefExecBrackets(PolnAnaliz, ZRWMOHSCFWYGAV, "PolnAnaliz");
chain_RIZUBLBBGWADBF->append(ZRWMOHSCFWYGAV_execbr);
DataChain* ZJAOXRDILPOMOI = new DataChain(); 
ZRWMOHSCFWYGAV->append(newRefStructBrackets(ZJAOXRDILPOMOI)); 
ZJAOXRDILPOMOI->append(newRefText("1", __LINE__)); 
DataChain* SJJSWFDYYNVLQR = new DataChain(); 
ZRWMOHSCFWYGAV->append(newRefStructBrackets(SJJSWFDYYNVLQR)); 
SJJSWFDYYNVLQR->append_copy(l_1, r_1, context); 
DataChain* MHJCSZFRZPSFCC = new DataChain(); 
ZRWMOHSCFWYGAV->append(newRefStructBrackets(MHJCSZFRZPSFCC)); 
MHJCSZFRZPSFCC->append_copy(l_2, r_2, context); 
MHJCSZFRZPSFCC->append_copy(l_A, r_A, context); 
DataChain* TAYVFICQBEBAZK = new DataChain(); 
ZRWMOHSCFWYGAV->append(newRefStructBrackets(TAYVFICQBEBAZK)); 
TAYVFICQBEBAZK->append_copy(l_n1, r_n1, context); 
TAYVFICQBEBAZK->append_copy(l_n2, r_n2, context); 
context->pushExecuteCall(ZRWMOHSCFWYGAV_execbr); // PolnAnaliz
return chain_RIZUBLBBGWADBF;
}
sentence_after_2: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* PolnAnalizAny_(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ e.1 ] 
/*DEF*/	DataCursor l_e;
/*DEF*/	DataCursor r_e;
/*SET*/	l_e = arg_from;
/*SET*/	r_e = arg_to;

// подстановка 
// new chain 
DataChain *chain_LEEWJYNEZRXDMF = context->putChain(); 
DataChain* QYWOHWHRGVTZCD = new DataChain(); 
DataContainer* QYWOHWHRGVTZCD_execbr = newRefExecBrackets(Prout, QYWOHWHRGVTZCD, "Prout");
chain_LEEWJYNEZRXDMF->append(QYWOHWHRGVTZCD_execbr);
QYWOHWHRGVTZCD->append(newRefText("PolnAnalizAny: ", __LINE__)); 
QYWOHWHRGVTZCD->append_copy(l_e, r_e, context); 
context->pushExecuteCall(QYWOHWHRGVTZCD_execbr); // Prout
DataChain* VSFDVHPVSNLCWN = new DataChain(); 
DataContainer* VSFDVHPVSNLCWN_execbr = newRefExecBrackets(PolnAnalizAny_, VSFDVHPVSNLCWN, "PolnAnalizAny_");
chain_LEEWJYNEZRXDMF->append(VSFDVHPVSNLCWN_execbr);
VSFDVHPVSNLCWN->append_copy(l_e, r_e, context); 
context->pushExecuteCall(VSFDVHPVSNLCWN_execbr); // PolnAnalizAny_
return chain_LEEWJYNEZRXDMF;
}
sentence_after_1: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}

DataChain* PolnAnalizAny(DataCursor arg_from, DataCursor arg_to, ExecContext *context){

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor NDAEFGENZGLNXH;
/*DEF*/	DataCursor OMKSIGNQHQGXAT;
/*DEF*/	DataCursor PXWLDSXUFANNEB;
/*SET*/	NDAEFGENZGLNXH = arg_from;
/*INC*/	if (!INC(NDAEFGENZGLNXH, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (NDAEFGENZGLNXH.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	OMKSIGNQHQGXAT = NDAEFGENZGLNXH.container->value.bracket_data.chain->at_before_first();
	PXWLDSXUFANNEB   = NDAEFGENZGLNXH.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor AVSPETVUCZJMUT;
/*DEF*/	DataCursor l_s;
/*DEF*/	DataCursor r_s;
/*SET*/	l_s = OMKSIGNQHQGXAT;
/*SET*/	AVSPETVUCZJMUT = OMKSIGNQHQGXAT;
/*INC*/	if (!INC(AVSPETVUCZJMUT, PXWLDSXUFANNEB)) goto sentence_after_1;
	if (! isSymbolType(AVSPETVUCZJMUT.container->type)) goto sentence_after_1;
/*SET*/	r_s = AVSPETVUCZJMUT;
//// [ empty ] 
/*ISEMPTY*/	if (r_s!=0 && PXWLDSXUFANNEB != r_s) goto sentence_after_1;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor KXZYBNIEHUESBL;
/*DEF*/	DataCursor HLPXNPOYMJEEBH;
/*DEF*/	DataCursor DJHTJQFJKHAWWT;
/*SET*/	KXZYBNIEHUESBL = NDAEFGENZGLNXH;
/*INC*/	if (!INC(KXZYBNIEHUESBL, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (KXZYBNIEHUESBL.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	HLPXNPOYMJEEBH = KXZYBNIEHUESBL.container->value.bracket_data.chain->at_before_first();
	DJHTJQFJKHAWWT   = KXZYBNIEHUESBL.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = HLPXNPOYMJEEBH;
/*SET*/	r_1 = DJHTJQFJKHAWWT;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor KGUWTZEFPXPBDR;
/*DEF*/	DataCursor XFUTVBUUFJVGZP;
/*DEF*/	DataCursor DFSCRZSWPQDBDZ;
/*SET*/	KGUWTZEFPXPBDR = KXZYBNIEHUESBL;
/*INC*/	if (!INC(KGUWTZEFPXPBDR, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (KGUWTZEFPXPBDR.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	XFUTVBUUFJVGZP = KGUWTZEFPXPBDR.container->value.bracket_data.chain->at_before_first();
	DFSCRZSWPQDBDZ   = KGUWTZEFPXPBDR.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = XFUTVBUUFJVGZP;
/*SET*/	r_2 = DFSCRZSWPQDBDZ;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor VNJDAKGVQXHGKA;
/*DEF*/	DataCursor SGYRKPCZGBHHEV;
/*DEF*/	DataCursor OOKFPDEQKOHKTE;
/*SET*/	VNJDAKGVQXHGKA = KGUWTZEFPXPBDR;
/*INC*/	if (!INC(VNJDAKGVQXHGKA, arg_to)) goto sentence_after_1;
//// ISBRACKET 
	if (VNJDAKGVQXHGKA.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET 
	SGYRKPCZGBHHEV = VNJDAKGVQXHGKA.container->value.bracket_data.chain->at_before_first();
	OOKFPDEQKOHKTE   = VNJDAKGVQXHGKA.container->value.bracket_data.chain->at_last();
//// [ empty ] 
/*ISEMPTY*/	if (SGYRKPCZGBHHEV!=0 && OOKFPDEQKOHKTE != SGYRKPCZGBHHEV) goto sentence_after_1;
//// [ empty ] 
/*ISEMPTY*/	if (VNJDAKGVQXHGKA!=0 && arg_to != VNJDAKGVQXHGKA) goto sentence_after_1;

// подстановка 
// new chain 
DataChain *chain_VFNORJBEZAWPYZ = context->putChain(); 
return chain_VFNORJBEZAWPYZ;
}
sentence_after_1: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor AUDWUXQLDJWJRI;
/*DEF*/	DataCursor QAQSJRQJGOAXIU;
/*DEF*/	DataCursor SXHARYEVOZNQGQ;
/*SET*/	AUDWUXQLDJWJRI = arg_from;
/*INC*/	if (!INC(AUDWUXQLDJWJRI, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (AUDWUXQLDJWJRI.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	QAQSJRQJGOAXIU = AUDWUXQLDJWJRI.container->value.bracket_data.chain->at_before_first();
	SXHARYEVOZNQGQ   = AUDWUXQLDJWJRI.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor BTEQMPPCIIDGZF;
/*DEF*/	DataCursor l_s;
/*DEF*/	DataCursor r_s;
/*SET*/	l_s = QAQSJRQJGOAXIU;
/*SET*/	BTEQMPPCIIDGZF = QAQSJRQJGOAXIU;
/*INC*/	if (!INC(BTEQMPPCIIDGZF, SXHARYEVOZNQGQ)) goto sentence_after_2;
	if (! isSymbolType(BTEQMPPCIIDGZF.container->type)) goto sentence_after_2;
/*SET*/	r_s = BTEQMPPCIIDGZF;
//// [ empty ] 
/*ISEMPTY*/	if (r_s!=0 && SXHARYEVOZNQGQ != r_s) goto sentence_after_2;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor VGQVZEEMWWAZST;
/*DEF*/	DataCursor QOCWVNTDNAQYBC;
/*DEF*/	DataCursor FRMNZRSLRDEXUP;
/*SET*/	VGQVZEEMWWAZST = AUDWUXQLDJWJRI;
/*INC*/	if (!INC(VGQVZEEMWWAZST, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (VGQVZEEMWWAZST.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	QOCWVNTDNAQYBC = VGQVZEEMWWAZST.container->value.bracket_data.chain->at_before_first();
	FRMNZRSLRDEXUP   = VGQVZEEMWWAZST.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = QOCWVNTDNAQYBC;
/*SET*/	r_1 = FRMNZRSLRDEXUP;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor SXUHACPTTDYFAQ;
/*DEF*/	DataCursor WCGPWVNKRVKCOF;
/*DEF*/	DataCursor DGBBGPDOXJUUYY;
/*SET*/	SXUHACPTTDYFAQ = VGQVZEEMWWAZST;
/*INC*/	if (!INC(SXUHACPTTDYFAQ, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (SXUHACPTTDYFAQ.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	WCGPWVNKRVKCOF = SXUHACPTTDYFAQ.container->value.bracket_data.chain->at_before_first();
	DGBBGPDOXJUUYY   = SXUHACPTTDYFAQ.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = WCGPWVNKRVKCOF;
/*SET*/	r_2 = DGBBGPDOXJUUYY;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor CKITFDRCLZMSHG;
/*DEF*/	DataCursor HTLFSPJHCGFASD;
/*DEF*/	DataCursor VWJGPLBQZJBBLL;
/*SET*/	CKITFDRCLZMSHG = SXUHACPTTDYFAQ;
/*INC*/	if (!INC(CKITFDRCLZMSHG, arg_to)) goto sentence_after_2;
//// ISBRACKET 
	if (CKITFDRCLZMSHG.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET 
	HTLFSPJHCGFASD = CKITFDRCLZMSHG.container->value.bracket_data.chain->at_before_first();
	VWJGPLBQZJBBLL   = CKITFDRCLZMSHG.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_3;
/*DEF*/	DataCursor r_3;
/*SET*/	l_3 = HTLFSPJHCGFASD;
/*SET*/	r_3 = HTLFSPJHCGFASD;
/*JMP*/	goto label_FHNHECBJSNTZZI_firststep;
label_FHNHECBJSNTZZI: 
/*INC*/	if (!INC(r_3, VWJGPLBQZJBBLL)) goto sentence_after_2;
label_FHNHECBJSNTZZI_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor OXAUWZKJZHZDFW;
/*SET*/	OXAUWZKJZHZDFW = r_3;
/*INC*/	if (!INC(OXAUWZKJZHZDFW, VWJGPLBQZJBBLL)) goto label_FHNHECBJSNTZZI;
	if (OXAUWZKJZHZDFW.container->type != text || *(OXAUWZKJZHZDFW.container->value.text + OXAUWZKJZHZDFW.index) != '>') goto label_FHNHECBJSNTZZI;
//// [ empty ] 
/*ISEMPTY*/	if (OXAUWZKJZHZDFW!=0 && VWJGPLBQZJBBLL != OXAUWZKJZHZDFW) goto label_FHNHECBJSNTZZI;
//// [ empty ] 
/*ISEMPTY*/	if (CKITFDRCLZMSHG!=0 && arg_to != CKITFDRCLZMSHG) goto label_FHNHECBJSNTZZI;

// подстановка 
// new chain 
DataChain *chain_NKIJCAPBYQUXVE = context->putChain(); 
return chain_NKIJCAPBYQUXVE;
}
sentence_after_2: 

{
// сопоставление 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor JECIZVVIZTCBDO;
/*DEF*/	DataCursor QJHVEIGVEKKFKZ;
/*DEF*/	DataCursor NCNKYVOGUWPIIK;
/*SET*/	JECIZVVIZTCBDO = arg_from;
/*INC*/	if (!INC(JECIZVVIZTCBDO, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (JECIZVVIZTCBDO.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	QJHVEIGVEKKFKZ = JECIZVVIZTCBDO.container->value.bracket_data.chain->at_before_first();
	NCNKYVOGUWPIIK   = JECIZVVIZTCBDO.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ] 
/*DEF*/	DataCursor TAJDJNTSGIECRP;
/*DEF*/	DataCursor l_s;
/*DEF*/	DataCursor r_s;
/*SET*/	l_s = QJHVEIGVEKKFKZ;
/*SET*/	TAJDJNTSGIECRP = QJHVEIGVEKKFKZ;
/*INC*/	if (!INC(TAJDJNTSGIECRP, NCNKYVOGUWPIIK)) goto sentence_after_3;
	if (! isSymbolType(TAJDJNTSGIECRP.container->type)) goto sentence_after_3;
/*SET*/	r_s = TAJDJNTSGIECRP;
//// [ empty ] 
/*ISEMPTY*/	if (r_s!=0 && NCNKYVOGUWPIIK != r_s) goto sentence_after_3;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor WINBUMVKTIZKXN;
/*DEF*/	DataCursor RSDKQBVAPLUDLB;
/*DEF*/	DataCursor EGDRHPTKWPIGFR;
/*SET*/	WINBUMVKTIZKXN = JECIZVVIZTCBDO;
/*INC*/	if (!INC(WINBUMVKTIZKXN, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (WINBUMVKTIZKXN.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	RSDKQBVAPLUDLB = WINBUMVKTIZKXN.container->value.bracket_data.chain->at_before_first();
	EGDRHPTKWPIGFR   = WINBUMVKTIZKXN.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_I;
/*DEF*/	DataCursor r_I;
/*SET*/	l_I = RSDKQBVAPLUDLB;
/*SET*/	r_I = EGDRHPTKWPIGFR;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor CDMGZJEIBTERRW;
/*DEF*/	DataCursor DLCECZOTVIWLPF;
/*DEF*/	DataCursor IBYANRAAHOAWOM;
/*SET*/	CDMGZJEIBTERRW = WINBUMVKTIZKXN;
/*INC*/	if (!INC(CDMGZJEIBTERRW, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (CDMGZJEIBTERRW.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	DLCECZOTVIWLPF = CDMGZJEIBTERRW.container->value.bracket_data.chain->at_before_first();
	IBYANRAAHOAWOM   = CDMGZJEIBTERRW.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_Y;
/*DEF*/	DataCursor r_Y;
/*SET*/	l_Y = DLCECZOTVIWLPF;
/*SET*/	r_Y = IBYANRAAHOAWOM;
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor XZORZGVKTIAZLZ;
/*DEF*/	DataCursor YNKMWBCRUJPDZQ;
/*DEF*/	DataCursor SGQLAOMTKVBHGF;
/*SET*/	XZORZGVKTIAZLZ = CDMGZJEIBTERRW;
/*INC*/	if (!INC(XZORZGVKTIAZLZ, arg_to)) goto sentence_after_3;
//// ISBRACKET 
	if (XZORZGVKTIAZLZ.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET 
	YNKMWBCRUJPDZQ = XZORZGVKTIAZLZ.container->value.bracket_data.chain->at_before_first();
	SGQLAOMTKVBHGF   = XZORZGVKTIAZLZ.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = YNKMWBCRUJPDZQ;
/*SET*/	r_1 = YNKMWBCRUJPDZQ;
/*JMP*/	goto label_SEIEXVJVWWKASY_firststep;
label_SEIEXVJVWWKASY: 
/*INC*/	if (!INC(r_1, SGQLAOMTKVBHGF)) goto sentence_after_3;
label_SEIEXVJVWWKASY_firststep: 
//// [ `a` <any> ] 
/*DEF*/	DataCursor MWIAMMKEMPNJQC;
/*SET*/	MWIAMMKEMPNJQC = r_1;
/*INC*/	if (!INC(MWIAMMKEMPNJQC, SGQLAOMTKVBHGF)) goto label_SEIEXVJVWWKASY;
	if (MWIAMMKEMPNJQC.container->type != text || *(MWIAMMKEMPNJQC.container->value.text + MWIAMMKEMPNJQC.index) != '>') goto label_SEIEXVJVWWKASY;
//// [ s.1 <any> ] 
/*DEF*/	DataCursor AELFYYVPYMRGUJ;
/*DEF*/	DataCursor l_sss;
/*DEF*/	DataCursor r_sss;
/*SET*/	l_sss = MWIAMMKEMPNJQC;
/*SET*/	AELFYYVPYMRGUJ = MWIAMMKEMPNJQC;
/*INC*/	if (!INC(AELFYYVPYMRGUJ, SGQLAOMTKVBHGF)) goto label_SEIEXVJVWWKASY;
	if (! isSymbolType(AELFYYVPYMRGUJ.container->type)) goto label_SEIEXVJVWWKASY;
/*SET*/	r_sss = AELFYYVPYMRGUJ;
//// [ e.1 ] 
/*DEF*/	DataCursor l_2;
/*DEF*/	DataCursor r_2;
/*SET*/	l_2 = r_sss;
/*SET*/	r_2 = SGQLAOMTKVBHGF;
//// [ empty ] 
/*ISEMPTY*/	if (XZORZGVKTIAZLZ!=0 && arg_to != XZORZGVKTIAZLZ) goto label_SEIEXVJVWWKASY;

// подстановка 
// new chain 
DataChain *chain_DFWYIJFZSHTEPE = context->putChain(); 
DataChain* JVTZNHVPFHATIC = new DataChain(); 
DataContainer* JVTZNHVPFHATIC_execbr = newRefExecBrackets(Analiz, JVTZNHVPFHATIC, "Analiz");
chain_DFWYIJFZSHTEPE->append(JVTZNHVPFHATIC_execbr);
DataChain* QJESFYHNIDZHVM = new DataChain(); 
JVTZNHVPFHATIC->append(newRefStructBrackets(QJESFYHNIDZHVM)); 
QJESFYHNIDZHVM->append_copy(l_s, r_s, context); 
DataChain* UGGAZMNUPBPKMS = new DataChain(); 
JVTZNHVPFHATIC->append(newRefStructBrackets(UGGAZMNUPBPKMS)); 
UGGAZMNUPBPKMS->append_copy(l_I, r_I, context); 
DataChain* ZDBNOFAJLJBROE = new DataChain(); 
JVTZNHVPFHATIC->append(newRefStructBrackets(ZDBNOFAJLJBROE)); 
ZDBNOFAJLJBROE->append_copy(l_Y, r_Y, context); 
DataChain* RTESEFXNIPPEWO = new DataChain(); 
JVTZNHVPFHATIC->append(newRefStructBrackets(RTESEFXNIPPEWO)); 
RTESEFXNIPPEWO->append_copy(l_1, r_1, context); 
RTESEFXNIPPEWO->append(newRefText(">", __LINE__)); 
RTESEFXNIPPEWO->append_copy(l_sss, r_sss, context); 
RTESEFXNIPPEWO->append_copy(l_2, r_2, context); 
context->pushExecuteCall(JVTZNHVPFHATIC_execbr); // Analiz
DataChain* XVKZDNRLUZLWFH = new DataChain(); 
DataContainer* XVKZDNRLUZLWFH_execbr = newRefExecBrackets(PolnAnaliz, XVKZDNRLUZLWFH, "PolnAnaliz");
chain_DFWYIJFZSHTEPE->append(XVKZDNRLUZLWFH_execbr);
DataChain* LMWUMCLZYSTOXJ = new DataChain(); 
XVKZDNRLUZLWFH->append(newRefStructBrackets(LMWUMCLZYSTOXJ)); 
LMWUMCLZYSTOXJ->append_copy(l_s, r_s, context); 
DataChain* RSOQFWLUEHQFRN = new DataChain(); 
XVKZDNRLUZLWFH->append(newRefStructBrackets(RSOQFWLUEHQFRN)); 
RSOQFWLUEHQFRN->append_copy(l_I, r_I, context); 
DataChain* CFKPYSQLHLANRO = new DataChain(); 
XVKZDNRLUZLWFH->append(newRefStructBrackets(CFKPYSQLHLANRO)); 
CFKPYSQLHLANRO->append_copy(l_Y, r_Y, context); 
DataChain* CCWZLIKUMOYYOK = new DataChain(); 
XVKZDNRLUZLWFH->append(newRefStructBrackets(CCWZLIKUMOYYOK)); 
CCWZLIKUMOYYOK->append_copy(l_1, r_1, context); 
CCWZLIKUMOYYOK->append_copy(l_sss, r_sss, context); 
CCWZLIKUMOYYOK->append(newRefText(">", __LINE__)); 
CCWZLIKUMOYYOK->append_copy(l_2, r_2, context); 
context->pushExecuteCall(XVKZDNRLUZLWFH_execbr); // PolnAnaliz
return chain_DFWYIJFZSHTEPE;
}
sentence_after_3: 

{
// сопоставление 
//// [ e.1 <any> ] 
/*DEF*/	DataCursor l_sIY;
/*DEF*/	DataCursor r_sIY;
/*SET*/	l_sIY = arg_from;
/*SET*/	r_sIY = arg_from;
/*JMP*/	goto label_HAOKILPEEMNQYG_firststep;
label_HAOKILPEEMNQYG: 
/*INC*/	if (!INC(r_sIY, arg_to)) goto sentence_after_4;
label_HAOKILPEEMNQYG_firststep: 
//// [ (<any>) <any> ] 
/*DEF*/	DataCursor SFJNYUCTKFZBLT;
/*DEF*/	DataCursor INMZBKJYLQWJIA;
/*DEF*/	DataCursor MFKOFJJJJRJUUU;
/*SET*/	SFJNYUCTKFZBLT = r_sIY;
/*INC*/	if (!INC(SFJNYUCTKFZBLT, arg_to)) goto label_HAOKILPEEMNQYG;
//// ISBRACKET 
	if (SFJNYUCTKFZBLT.container->type != struct_bracket) goto label_HAOKILPEEMNQYG;
//// JMP_BRACKET 
	INMZBKJYLQWJIA = SFJNYUCTKFZBLT.container->value.bracket_data.chain->at_before_first();
	MFKOFJJJJRJUUU   = SFJNYUCTKFZBLT.container->value.bracket_data.chain->at_last();
//// [ e.1 ] 
/*DEF*/	DataCursor l_1;
/*DEF*/	DataCursor r_1;
/*SET*/	l_1 = INMZBKJYLQWJIA;
/*SET*/	r_1 = MFKOFJJJJRJUUU;
//// [ empty ] 
/*ISEMPTY*/	if (SFJNYUCTKFZBLT!=0 && arg_to != SFJNYUCTKFZBLT) goto label_HAOKILPEEMNQYG;

// подстановка 
// new chain 
DataChain *chain_RRYCHYIVIFYAXL = context->putChain(); 
DataChain* HWABBSWJDYSEJW = new DataChain(); 
DataContainer* HWABBSWJDYSEJW_execbr = newRefExecBrackets(PolnAnaliz, HWABBSWJDYSEJW, "PolnAnaliz");
chain_RRYCHYIVIFYAXL->append(HWABBSWJDYSEJW_execbr);
HWABBSWJDYSEJW->append_copy(l_sIY, r_sIY, context); 
DataChain* SWZSLXVYILCLPG = new DataChain(); 
HWABBSWJDYSEJW->append(newRefStructBrackets(SWZSLXVYILCLPG)); 
SWZSLXVYILCLPG->append(newRefText(">", __LINE__)); 
SWZSLXVYILCLPG->append_copy(l_1, r_1, context); 
context->pushExecuteCall(HWABBSWJDYSEJW_execbr); // PolnAnaliz
return chain_RRYCHYIVIFYAXL;
}
sentence_after_4: 

fail: 
// подготовка к возвращению неуспеха
std::cout << "fail!" << __LINE__ << "\n";
return 0;

}
