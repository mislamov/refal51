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
		ExecContext context_QPEVIKEFFMZNIM; 
		// new chain 
		DataChain *chain_NRVYSTMWCYSYYC = context->putChain(); 
		DataChain* KKASVWSRENZKYC = new DataChain(); 
		DataContainer* KKASVWSRENZKYC_execbr = newRefExecBrackets(Question, KKASVWSRENZKYC, "Question");
		chain_NRVYSTMWCYSYYC->append(KKASVWSRENZKYC_execbr);
		DataChain* XFXTLSGYPSFADP = new DataChain(); 
		KKASVWSRENZKYC->append(newRefStructBrackets(XFXTLSGYPSFADP)); 
		XFXTLSGYPSFADP->append(newRefText("plohie")); 
		context_QPEVIKEFFMZNIM.pushExecuteCall(KKASVWSRENZKYC_execbr);
		DataChain* OOEFXZBCOEJUVP = new DataChain(); 
		DataContainer* OOEFXZBCOEJUVP_execbr = newRefExecBrackets(Go, OOEFXZBCOEJUVP, "Go");
		chain_NRVYSTMWCYSYYC->append(OOEFXZBCOEJUVP_execbr);
		context_QPEVIKEFFMZNIM.pushExecuteCall(OOEFXZBCOEJUVP_execbr);
		// exeute
		execute(context_QPEVIKEFFMZNIM, chain_NRVYSTMWCYSYYC);
		/*DEF*/	DataCursor PHQGHUMEAYLNLF;
		/*DEF*/	DataCursor DXFIRCVSCXGGBW;
		// SET_CHAIN_CURSORS 
		PHQGHUMEAYLNLF = chain_NRVYSTMWCYSYYC->at_before_first(); 
		DXFIRCVSCXGGBW = chain_NRVYSTMWCYSYYC->at_last(); 
		/*JMP*/	goto label_nodel_SRTKJPREPGGXRP;
label_del_KFNQDUXWFNFOZV: 
		// FREE_CHAIN chain_NRVYSTMWCYSYYC
		context->popChain(); 
		/*JMP*/	goto fail;
label_nodel_SRTKJPREPGGXRP: 
		return chain_NRVYSTMWCYSYYC;
	}
sentence_after_1: 

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
		ExecContext context_KNLYJYHFIXJSWN; 
		// new chain 
		DataChain *chain_BXCOKSFZKVATXD = context->putChain(); 
		DataChain* KKUFNUXXZRZBMN = new DataChain(); 
		chain_BXCOKSFZKVATXD->append(newRefStructBrackets(KKUFNUXXZRZBMN)); 
		DataChain* MGQOOKETLYHNKO = new DataChain(); 
		KKUFNUXXZRZBMN->append(newRefStructBrackets(MGQOOKETLYHNKO)); 
		MGQOOKETLYHNKO->append(newRefText("sel")); 
		KKUFNUXXZRZBMN->append(newRefText("sest")); 
		DataChain* AUGZQRCDDIUTEI = new DataChain(); 
		chain_BXCOKSFZKVATXD->append(newRefStructBrackets(AUGZQRCDDIUTEI)); 
		DataChain* OJWAYYZPVSCMPS = new DataChain(); 
		AUGZQRCDDIUTEI->append(newRefStructBrackets(OJWAYYZPVSCMPS)); 
		OJWAYYZPVSCMPS->append(newRefText("rek")); 
		AUGZQRCDDIUTEI->append(newRefText("reka")); 
		// exeute
		execute(context_KNLYJYHFIXJSWN, chain_BXCOKSFZKVATXD);
		/*DEF*/	DataCursor VABOYGPOEYLFPB;
		/*DEF*/	DataCursor NPLJVRVIPYAMYE;
		// SET_CHAIN_CURSORS 
		VABOYGPOEYLFPB = chain_BXCOKSFZKVATXD->at_before_first(); 
		NPLJVRVIPYAMYE = chain_BXCOKSFZKVATXD->at_last(); 
		/*JMP*/	goto label_nodel_OOVAOWUXWHMSNC;
label_del_HWQNQRQPMXUJJL: 
		// FREE_CHAIN chain_BXCOKSFZKVATXD
		context->popChain(); 
		/*JMP*/	goto fail;
label_nodel_OOVAOWUXWHMSNC: 
		return chain_BXCOKSFZKVATXD;
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
		ExecContext context_MBORXTLHCSMPXO; 
		// new chain 
		DataChain *chain_CBLDVGYLWGBUSB = context->putChain(); 
		DataChain* HGMGNKEUFDXOTO = new DataChain(); 
		chain_CBLDVGYLWGBUSB->append(newRefStructBrackets(HGMGNKEUFDXOTO)); 
		DataChain* GBGXPEYANFETCU = new DataChain(); 
		HGMGNKEUFDXOTO->append(newRefStructBrackets(GBGXPEYANFETCU)); 
		GBGXPEYANFETCU->append(newRefText("nuli")); 
		HGMGNKEUFDXOTO->append(newRefText("at")); 
		DataChain* KEPZSHKLJUGGGE = new DataChain(); 
		chain_CBLDVGYLWGBUSB->append(newRefStructBrackets(KEPZSHKLJUGGGE)); 
		DataChain* KJDQZJENPEVQGX = new DataChain(); 
		KEPZSHKLJUGGGE->append(newRefStructBrackets(KJDQZJENPEVQGX)); 
		KJDQZJENPEVQGX->append(newRefText("nul")); 
		KEPZSHKLJUGGGE->append(newRefText("at")); 
		DataChain* IEPJSRDZJAZUJL = new DataChain(); 
		chain_CBLDVGYLWGBUSB->append(newRefStructBrackets(IEPJSRDZJAZUJL)); 
		DataChain* LCHHBFQMKIMWZO = new DataChain(); 
		IEPJSRDZJAZUJL->append(newRefStructBrackets(LCHHBFQMKIMWZO)); 
		LCHHBFQMKIMWZO->append(newRefText("aet")); 
		IEPJSRDZJAZUJL->append(newRefText("at")); 
		DataChain* BIWYBXDUUNFSKS = new DataChain(); 
		chain_CBLDVGYLWGBUSB->append(newRefStructBrackets(BIWYBXDUUNFSKS)); 
		DataChain* RSRTEKMQDCYZJE = new DataChain(); 
		BIWYBXDUUNFSKS->append(newRefStructBrackets(RSRTEKMQDCYZJE)); 
		RSRTEKMQDCYZJE->append(newRefText("et")); 
		BIWYBXDUUNFSKS->append(newRefText("at")); 
		DataChain* EUHMSRQCOZIJIP = new DataChain(); 
		chain_CBLDVGYLWGBUSB->append(newRefStructBrackets(EUHMSRQCOZIJIP)); 
		DataChain* FIONEEDDPSZRNA = new DataChain(); 
		EUHMSRQCOZIJIP->append(newRefStructBrackets(FIONEEDDPSZRNA)); 
		FIONEEDDPSZRNA->append(newRefText("ech")); 
		EUHMSRQCOZIJIP->append(newRefText("at")); 
		DataChain* VYMMTATBDZQSOE = new DataChain(); 
		chain_CBLDVGYLWGBUSB->append(newRefStructBrackets(VYMMTATBDZQSOE)); 
		DataChain* MUVNPPPSUACBAZ = new DataChain(); 
		VYMMTATBDZQSOE->append(newRefStructBrackets(MUVNPPPSUACBAZ)); 
		MUVNPPPSUACBAZ->append(newRefText("al")); 
		VYMMTATBDZQSOE->append(newRefText("at")); 
		DataChain* UXMHECTHLEGRPU = new DataChain(); 
		chain_CBLDVGYLWGBUSB->append(newRefStructBrackets(UXMHECTHLEGRPU)); 
		DataChain* NKDMBPPWEQTGJO = new DataChain(); 
		UXMHECTHLEGRPU->append(newRefStructBrackets(NKDMBPPWEQTGJO)); 
		NKDMBPPWEQTGJO->append(newRefText("el")); 
		UXMHECTHLEGRPU->append(newRefText("at")); 
		DataChain* PARMOWZDQYOXYT = new DataChain(); 
		chain_CBLDVGYLWGBUSB->append(newRefStructBrackets(PARMOWZDQYOXYT)); 
		DataChain* JBBHAWDYDCPRJB = new DataChain(); 
		PARMOWZDQYOXYT->append(newRefStructBrackets(JBBHAWDYDCPRJB)); 
		JBBHAWDYDCPRJB->append(newRefText("vie")); 
		PARMOWZDQYOXYT->append(newRefText("vij")); 
		DataChain* XPHOOHPKWQYUHR = new DataChain(); 
		chain_CBLDVGYLWGBUSB->append(newRefStructBrackets(XPHOOHPKWQYUHR)); 
		DataChain* QZHNBNFUVQNQQL = new DataChain(); 
		XPHOOHPKWQYUHR->append(newRefStructBrackets(QZHNBNFUVQNQQL)); 
		QZHNBNFUVQNQQL->append(newRefText("vaya")); 
		XPHOOHPKWQYUHR->append(newRefText("vij")); 
		DataChain* RZJPXIOGVLIEXD = new DataChain(); 
		chain_CBLDVGYLWGBUSB->append(newRefStructBrackets(RZJPXIOGVLIEXD)); 
		DataChain* ZUZOSRKRUSVOJB = new DataChain(); 
		RZJPXIOGVLIEXD->append(newRefStructBrackets(ZUZOSRKRUSVOJB)); 
		ZUZOSRKRUSVOJB->append(newRefText("aja")); 
		RZJPXIOGVLIEXD->append(newRefText("oj")); 
		DataChain* RZMWZPOWKJILEF = new DataChain(); 
		chain_CBLDVGYLWGBUSB->append(newRefStructBrackets(RZMWZPOWKJILEF)); 
		DataChain* RAAMDIGPNPUUHG = new DataChain(); 
		RZMWZPOWKJILEF->append(newRefStructBrackets(RAAMDIGPNPUUHG)); 
		RAAMDIGPNPUUHG->append(newRefText("ie")); 
		RZMWZPOWKJILEF->append(newRefText("oj")); 
		DataChain* XPQNJWJMWAXXMN = new DataChain(); 
		chain_CBLDVGYLWGBUSB->append(newRefStructBrackets(XPQNJWJMWAXXMN)); 
		DataChain* SNHHLQQRZUDLTF = new DataChain(); 
		XPQNJWJMWAXXMN->append(newRefStructBrackets(SNHHLQQRZUDLTF)); 
		SNHHLQQRZUDLTF->append(newRefText("uyu")); 
		XPQNJWJMWAXXMN->append(newRefText("oj")); 
		// exeute
		execute(context_MBORXTLHCSMPXO, chain_CBLDVGYLWGBUSB);
		/*DEF*/	DataCursor AJLFVGUBFAAOVL;
		/*DEF*/	DataCursor ZYLNTRKDCPWSRT;
		// SET_CHAIN_CURSORS 
		AJLFVGUBFAAOVL = chain_CBLDVGYLWGBUSB->at_before_first(); 
		ZYLNTRKDCPWSRT = chain_CBLDVGYLWGBUSB->at_last(); 
		/*JMP*/	goto label_nodel_FWLQIJTVDWVXHR;
label_del_ESJWHDIZCOBZCN: 
		// FREE_CHAIN chain_CBLDVGYLWGBUSB
		context->popChain(); 
		/*JMP*/	goto fail;
label_nodel_FWLQIJTVDWVXHR: 
		return chain_CBLDVGYLWGBUSB;
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
		/*DEF*/	DataCursor ZOTCJTNZXUGLSD;
		/*DEF*/	DataCursor SMZCNOCKVFAJFR;
		/*DEF*/	DataCursor MXOTHOWKBJZWUC;
		/*SET*/	ZOTCJTNZXUGLSD = arg_from;
		/*INC*/	if (!INC(ZOTCJTNZXUGLSD, arg_to)) goto sentence_after_1;
		//// ISBRACKET 
		if (ZOTCJTNZXUGLSD.container->type != struct_bracket) goto sentence_after_1;
		//// JMP_BRACKET 
		SMZCNOCKVFAJFR = ZOTCJTNZXUGLSD.container->value.bracket_data.chain->at_before_first();
		MXOTHOWKBJZWUC   = ZOTCJTNZXUGLSD.container->value.bracket_data.chain->at_last();
		//// [ e.1 ] 
		/*DEF*/	DataCursor l_Word;
		/*DEF*/	DataCursor r_Word;
		/*SET*/	l_Word = SMZCNOCKVFAJFR;
		/*SET*/	r_Word = MXOTHOWKBJZWUC;
		//// [ empty ] 
		/*ISEMPTY*/	if (ZOTCJTNZXUGLSD!=0 && arg_to != ZOTCJTNZXUGLSD) goto sentence_after_1;
		// substitute rigth part 
		ExecContext context_UBMJRMBSZTSSHF; 
		// new chain 
		DataChain *chain_CGKCFQCKCOTZGK = context->putChain(); 
		DataChain* ROEFWSJRXJHGUZ = new DataChain(); 
		DataContainer* ROEFWSJRXJHGUZ_execbr = newRefExecBrackets(WordsMissTable, ROEFWSJRXJHGUZ, "WordsMissTable");
		chain_CGKCFQCKCOTZGK->append(ROEFWSJRXJHGUZ_execbr);
		context_UBMJRMBSZTSSHF.pushExecuteCall(ROEFWSJRXJHGUZ_execbr);
		// exeute
		execute(context_UBMJRMBSZTSSHF, chain_CGKCFQCKCOTZGK);
		/*DEF*/	DataCursor WLJFRIMPMYHCHZ;
		/*DEF*/	DataCursor RIWKBARXBGFCBC;
		// SET_CHAIN_CURSORS 
		WLJFRIMPMYHCHZ = chain_CGKCFQCKCOTZGK->at_before_first(); 
		RIWKBARXBGFCBC = chain_CGKCFQCKCOTZGK->at_last(); 
		/*JMP*/	goto label_nodel_EHBBCPXIFBXVFB;
label_del_EYHJUGIXWTBVTR: 
		// FREE_CHAIN chain_CGKCFQCKCOTZGK
		context->popChain(); 
		/*JMP*/	goto sentence_after_1;
label_nodel_EHBBCPXIFBXVFB: 
		// left part 
		//// [ e.1 <any> ] 
		/*DEF*/	DataCursor l_L;
		/*DEF*/	DataCursor r_L;
		/*SET*/	l_L = WLJFRIMPMYHCHZ;
		/*SET*/	r_L = WLJFRIMPMYHCHZ;
		/*JMP*/	goto label_YUPZWWEIQURPIX_firststep;
label_YUPZWWEIQURPIX: 
		/*INC*/	if (!INC(r_L, RIWKBARXBGFCBC)) goto label_del_EYHJUGIXWTBVTR;
label_YUPZWWEIQURPIX_firststep: 
		//// [ (<any>) <any> ] 
		/*DEF*/	DataCursor IQFLDUUVEOOWQC;
		/*DEF*/	DataCursor UDHNEFNJHAIMUC;
		/*DEF*/	DataCursor ZFSKUIDUBURISW;
		/*SET*/	IQFLDUUVEOOWQC = r_L;
		/*INC*/	if (!INC(IQFLDUUVEOOWQC, RIWKBARXBGFCBC)) goto label_YUPZWWEIQURPIX;
		//// ISBRACKET 
		if (IQFLDUUVEOOWQC.container->type != struct_bracket) goto label_YUPZWWEIQURPIX;
		//// JMP_BRACKET 
		UDHNEFNJHAIMUC = IQFLDUUVEOOWQC.container->value.bracket_data.chain->at_before_first();
		ZFSKUIDUBURISW   = IQFLDUUVEOOWQC.container->value.bracket_data.chain->at_last();
		//// [ (<any>) <any> ] 
		/*DEF*/	DataCursor TBRECUYKABFCVK;
		/*DEF*/	DataCursor DZEZTOIDUKUHJZ;
		/*DEF*/	DataCursor EFCZZZBFKQDPQZ;
		/*SET*/	TBRECUYKABFCVK = UDHNEFNJHAIMUC;
		/*INC*/	if (!INC(TBRECUYKABFCVK, ZFSKUIDUBURISW)) goto label_YUPZWWEIQURPIX;
		//// ISBRACKET 
		if (TBRECUYKABFCVK.container->type != struct_bracket) goto label_YUPZWWEIQURPIX;
		//// JMP_BRACKET 
		DZEZTOIDUKUHJZ = TBRECUYKABFCVK.container->value.bracket_data.chain->at_before_first();
		EFCZZZBFKQDPQZ   = TBRECUYKABFCVK.container->value.bracket_data.chain->at_last();
		//// [ &.name <any> ] 
		/*DEF*/	DataCursor IKFOBUCDHTHXDJ;
		/*SET*/	IKFOBUCDHTHXDJ = DZEZTOIDUKUHJZ;
		if (!SLIDE(IKFOBUCDHTHXDJ, EFCZZZBFKQDPQZ, l_Word, r_Word)) goto label_YUPZWWEIQURPIX;
		//// [ empty ] 
		/*ISEMPTY*/	if (IKFOBUCDHTHXDJ!=0 && EFCZZZBFKQDPQZ != IKFOBUCDHTHXDJ) goto label_YUPZWWEIQURPIX;
		//// [ e.1 ] 
		/*DEF*/	DataCursor l_Qst;
		/*DEF*/	DataCursor r_Qst;
		/*SET*/	l_Qst = TBRECUYKABFCVK;
		/*SET*/	r_Qst = ZFSKUIDUBURISW;
		//// [ e.1 ] 
		/*DEF*/	DataCursor l_R;
		/*DEF*/	DataCursor r_R;
		/*SET*/	l_R = IQFLDUUVEOOWQC;
		/*SET*/	r_R = RIWKBARXBGFCBC;
		// END TreeToCode_AfterPattern 

		// подстановка 
		ExecContext context_CKOTRWOSPOFGHF; 
		// new chain 
		DataChain *chain_HNGYCDRUDMPHME = context->putChain(); 
		chain_HNGYCDRUDMPHME->append_copy(l_Qst, r_Qst, context); 
		// exeute
		execute(context_CKOTRWOSPOFGHF, chain_HNGYCDRUDMPHME);
		/*DEF*/	DataCursor GKJELRLPAXAMCE;
		/*DEF*/	DataCursor ROSWITDPTPCCLI;
		// SET_CHAIN_CURSORS 
		GKJELRLPAXAMCE = chain_HNGYCDRUDMPHME->at_before_first(); 
		ROSWITDPTPCCLI = chain_HNGYCDRUDMPHME->at_last(); 
		/*JMP*/	goto label_nodel_BNEFXNXVGZEDYY;
label_del_FKELJYTIHRCQAY: 
		// FREE_CHAIN chain_HNGYCDRUDMPHME
		context->popChain(); 
		/*JMP*/	goto fail;
label_nodel_BNEFXNXVGZEDYY: 
		return chain_HNGYCDRUDMPHME;
	}
sentence_after_1: 

	{
		// сопоставление 
		// pattern 
		//// [ (<any>) <any> ] 
		/*DEF*/	DataCursor OZQVLQFXWWKMFX;
		/*DEF*/	DataCursor DYYGMDCASZSGOV;
		/*DEF*/	DataCursor SODKJGHCWMBMXR;
		/*SET*/	OZQVLQFXWWKMFX = arg_from;
		/*INC*/	if (!INC(OZQVLQFXWWKMFX, arg_to)) goto sentence_after_2;
		//// ISBRACKET 
		if (OZQVLQFXWWKMFX.container->type != struct_bracket) goto sentence_after_2;
		//// JMP_BRACKET 
		DYYGMDCASZSGOV = OZQVLQFXWWKMFX.container->value.bracket_data.chain->at_before_first();
		SODKJGHCWMBMXR   = OZQVLQFXWWKMFX.container->value.bracket_data.chain->at_last();
		//// [ e.1 <any> ] 
		/*DEF*/	DataCursor l_x1;
		/*DEF*/	DataCursor r_x1;
		/*SET*/	l_x1 = DYYGMDCASZSGOV;
		/*SET*/	r_x1 = DYYGMDCASZSGOV;
		/*JMP*/	goto label_MHUYFYQGAJQKCK_firststep;
label_MHUYFYQGAJQKCK: 
		/*INC*/	if (!INC(r_x1, SODKJGHCWMBMXR)) goto sentence_after_2;
label_MHUYFYQGAJQKCK_firststep: 
		//// [ e.1 ] 
		/*DEF*/	DataCursor l_End;
		/*DEF*/	DataCursor r_End;
		/*SET*/	l_End = r_x1;
		/*SET*/	r_End = SODKJGHCWMBMXR;
		//// [ empty ] 
		/*ISEMPTY*/	if (OZQVLQFXWWKMFX!=0 && arg_to != OZQVLQFXWWKMFX) goto label_MHUYFYQGAJQKCK;
		// substitute rigth part 
		ExecContext context_TQDIHERSIGBHZJ; 
		// new chain 
		DataChain *chain_AMVAFYRARXSVKH = context->putChain(); 
		DataChain* ZUJXMMYSPNARAE = new DataChain(); 
		DataContainer* ZUJXMMYSPNARAE_execbr = newRefExecBrackets(CompletionTable, ZUJXMMYSPNARAE, "CompletionTable");
		chain_AMVAFYRARXSVKH->append(ZUJXMMYSPNARAE_execbr);
		context_TQDIHERSIGBHZJ.pushExecuteCall(ZUJXMMYSPNARAE_execbr);
		// exeute
		execute(context_TQDIHERSIGBHZJ, chain_AMVAFYRARXSVKH);
		/*DEF*/	DataCursor LZNAYXQKQOYZWM;
		/*DEF*/	DataCursor YUBZAZCPKHKTKY;
		// SET_CHAIN_CURSORS 
		LZNAYXQKQOYZWM = chain_AMVAFYRARXSVKH->at_before_first(); 
		YUBZAZCPKHKTKY = chain_AMVAFYRARXSVKH->at_last(); 
		/*JMP*/	goto label_nodel_SGEKYRGZVXDHPO;
label_del_DZIVCUYPURFMBI: 
		// FREE_CHAIN chain_AMVAFYRARXSVKH
		context->popChain(); 
		/*JMP*/	goto label_MHUYFYQGAJQKCK;
label_nodel_SGEKYRGZVXDHPO: 
		// left part 
		//// [ e.1 <any> ] 
		/*DEF*/	DataCursor l_L;
		/*DEF*/	DataCursor r_L;
		/*SET*/	l_L = LZNAYXQKQOYZWM;
		/*SET*/	r_L = LZNAYXQKQOYZWM;
		/*JMP*/	goto label_WKEGJCCVHHRJVB_firststep;
label_WKEGJCCVHHRJVB: 
		/*INC*/	if (!INC(r_L, YUBZAZCPKHKTKY)) goto label_del_DZIVCUYPURFMBI;
label_WKEGJCCVHHRJVB_firststep: 
		//// [ (<any>) <any> ] 
		/*DEF*/	DataCursor JTSQDJOOTGPKNF;
		/*DEF*/	DataCursor PFYCGFIEOWQRWW;
		/*DEF*/	DataCursor WPZSQMETOGEPSP;
		/*SET*/	JTSQDJOOTGPKNF = r_L;
		/*INC*/	if (!INC(JTSQDJOOTGPKNF, YUBZAZCPKHKTKY)) goto label_WKEGJCCVHHRJVB;
		//// ISBRACKET 
		if (JTSQDJOOTGPKNF.container->type != struct_bracket) goto label_WKEGJCCVHHRJVB;
		//// JMP_BRACKET 
		PFYCGFIEOWQRWW = JTSQDJOOTGPKNF.container->value.bracket_data.chain->at_before_first();
		WPZSQMETOGEPSP   = JTSQDJOOTGPKNF.container->value.bracket_data.chain->at_last();
		//// [ (<any>) <any> ] 
		/*DEF*/	DataCursor XNVJIUPALYYNMK;
		/*DEF*/	DataCursor MNUVKLHSECDWRA;
		/*DEF*/	DataCursor CGFMZKGIPDFODK;
		/*SET*/	XNVJIUPALYYNMK = PFYCGFIEOWQRWW;
		/*INC*/	if (!INC(XNVJIUPALYYNMK, WPZSQMETOGEPSP)) goto label_WKEGJCCVHHRJVB;
		//// ISBRACKET 
		if (XNVJIUPALYYNMK.container->type != struct_bracket) goto label_WKEGJCCVHHRJVB;
		//// JMP_BRACKET 
		MNUVKLHSECDWRA = XNVJIUPALYYNMK.container->value.bracket_data.chain->at_before_first();
		CGFMZKGIPDFODK   = XNVJIUPALYYNMK.container->value.bracket_data.chain->at_last();
		//// [ &.name <any> ] 
		/*DEF*/	DataCursor JMJQWIQPUOQHIM;
		/*SET*/	JMJQWIQPUOQHIM = MNUVKLHSECDWRA;
		if (!SLIDE(JMJQWIQPUOQHIM, CGFMZKGIPDFODK, l_End, r_End)) goto label_WKEGJCCVHHRJVB;
		//// [ empty ] 
		/*ISEMPTY*/	if (JMJQWIQPUOQHIM!=0 && CGFMZKGIPDFODK != JMJQWIQPUOQHIM) goto label_WKEGJCCVHHRJVB;
		//// [ e.1 ] 
		/*DEF*/	DataCursor l_Qst;
		/*DEF*/	DataCursor r_Qst;
		/*SET*/	l_Qst = XNVJIUPALYYNMK;
		/*SET*/	r_Qst = WPZSQMETOGEPSP;
		//// [ e.1 ] 
		/*DEF*/	DataCursor l_R;
		/*DEF*/	DataCursor r_R;
		/*SET*/	l_R = JTSQDJOOTGPKNF;
		/*SET*/	r_R = YUBZAZCPKHKTKY;
		// END TreeToCode_AfterPattern 

		// подстановка 
		ExecContext context_LGRSMEAEARWTVJ; 
		// new chain 
		DataChain *chain_RHTNEGYIWXGCJW = context->putChain(); 
		chain_RHTNEGYIWXGCJW->append_copy(l_x1, r_x1, context); 
		chain_RHTNEGYIWXGCJW->append_copy(l_Qst, r_Qst, context); 
		// exeute
		execute(context_LGRSMEAEARWTVJ, chain_RHTNEGYIWXGCJW);
		/*DEF*/	DataCursor VFVUZWYVIJGFUL;
		/*DEF*/	DataCursor LKJDUHSJAFBTLK;
		// SET_CHAIN_CURSORS 
		VFVUZWYVIJGFUL = chain_RHTNEGYIWXGCJW->at_before_first(); 
		LKJDUHSJAFBTLK = chain_RHTNEGYIWXGCJW->at_last(); 
		/*JMP*/	goto label_nodel_QCTYDTEAMDCJBP;
label_del_MFQRMYJFJNHHSS: 
		// FREE_CHAIN chain_RHTNEGYIWXGCJW
		context->popChain(); 
		/*JMP*/	goto fail;
label_nodel_QCTYDTEAMDCJBP: 
		return chain_RHTNEGYIWXGCJW;
	}
sentence_after_2: 

	{
		// сопоставление 
		//// [ (<any>) <any> ] 
		/*DEF*/	DataCursor SJBAOIOJLWHYPN;
		/*DEF*/	DataCursor VRUIHOSWKIFYGT;
		/*DEF*/	DataCursor YDHACWYHSGEWZM;
		/*SET*/	SJBAOIOJLWHYPN = arg_from;
		/*INC*/	if (!INC(SJBAOIOJLWHYPN, arg_to)) goto sentence_after_3;
		//// ISBRACKET 
		if (SJBAOIOJLWHYPN.container->type != struct_bracket) goto sentence_after_3;
		//// JMP_BRACKET 
		VRUIHOSWKIFYGT = SJBAOIOJLWHYPN.container->value.bracket_data.chain->at_before_first();
		YDHACWYHSGEWZM   = SJBAOIOJLWHYPN.container->value.bracket_data.chain->at_last();
		//// [ e.1 ] 
		/*DEF*/	DataCursor l_1;
		/*DEF*/	DataCursor r_1;
		/*SET*/	l_1 = VRUIHOSWKIFYGT;
		/*SET*/	r_1 = YDHACWYHSGEWZM;
		//// [ empty ] 
		/*ISEMPTY*/	if (SJBAOIOJLWHYPN!=0 && arg_to != SJBAOIOJLWHYPN) goto sentence_after_3;

		// подстановка 
		ExecContext context_RQDREDAKUBNFGU; 
		// new chain 
		DataChain *chain_UYEEGFIVDRCYGU = context->putChain(); 
		chain_UYEEGFIVDRCYGU->append_copy(l_1, r_1, context); 
		// exeute
		execute(context_RQDREDAKUBNFGU, chain_UYEEGFIVDRCYGU);
		/*DEF*/	DataCursor TGONZLTJHGAUHN;
		/*DEF*/	DataCursor IHREQGJFWKJSMT;
		// SET_CHAIN_CURSORS 
		TGONZLTJHGAUHN = chain_UYEEGFIVDRCYGU->at_before_first(); 
		IHREQGJFWKJSMT = chain_UYEEGFIVDRCYGU->at_last(); 
		/*JMP*/	goto label_nodel_CHJCCDYRFVVRIV;
label_del_PJHAEFQZAAULDR: 
		// FREE_CHAIN chain_UYEEGFIVDRCYGU
		context->popChain(); 
		/*JMP*/	goto fail;
label_nodel_CHJCCDYRFVVRIV: 
		return chain_UYEEGFIVDRCYGU;
	}
sentence_after_3: 

fail: 
	// подготовка к возвращению неуспеха
	std::cout << "fail!" << __LINE__ << "\n";
	return 0;

}
