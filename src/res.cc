#include "direfal.h"
#include "commands.h"
#include "system.h"
#include "res.h"

DataChain* Go(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ empty ]
        /*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_1;

// подстановка
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

DataChain* Begin(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ empty ]
        /*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_1;

// подстановка
        DataChain* DXFIRCVSCXGGBW = new DataChain();
        DataContainer* DXFIRCVSCXGGBW_execbr = newRefExecBrackets(Prout, DXFIRCVSCXGGBW, "Prout");
        result->append(DXFIRCVSCXGGBW_execbr);
        DXFIRCVSCXGGBW->append(newRefText("Who is first? (1 - pc  2 - you)"));
        context->pushExecuteCall(DXFIRCVSCXGGBW_execbr);
        DataChain* KFNQDUXWFNFOZV = new DataChain();
        DataContainer* KFNQDUXWFNFOZV_execbr = newRefExecBrackets(FirG, KFNQDUXWFNFOZV, "FirG");
        result->append(KFNQDUXWFNFOZV_execbr);
        DataChain* SRTKJPREPGGXRP = new DataChain();
        DataContainer* SRTKJPREPGGXRP_execbr = newRefExecBrackets(Card, SRTKJPREPGGXRP, "Card");
        KFNQDUXWFNFOZV->append(SRTKJPREPGGXRP_execbr);
        context->pushExecuteCall(SRTKJPREPGGXRP_execbr);
        context->pushExecuteCall(KFNQDUXWFNFOZV_execbr);
        return result;
    }
sentence_after_1:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* FirG(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor NRVYSTMWCYSYYC;
        /*SET*/
        NRVYSTMWCYSYYC = arg_from;
        /*INC*/
        if (!INC(NRVYSTMWCYSYYC, arg_to)) goto sentence_after_1;
        if (NRVYSTMWCYSYYC.container->type != text || *(NRVYSTMWCYSYYC.container->value.text + NRVYSTMWCYSYYC.index) != '1') goto sentence_after_1;
//// [ empty ]
        /*ISEMPTY*/
        if (NRVYSTMWCYSYYC!=0 && arg_to != NRVYSTMWCYSYYC) goto sentence_after_1;

// подстановка
        DataChain* KKASVWSRENZKYC = new DataChain();
        DataContainer* KKASVWSRENZKYC_execbr = newRefExecBrackets(Game, KKASVWSRENZKYC, "Game");
        result->append(KKASVWSRENZKYC_execbr);
        DataChain* XFXTLSGYPSFADP = new DataChain();
        KKASVWSRENZKYC->append(newRefStructBrackets(XFXTLSGYPSFADP));
        XFXTLSGYPSFADP->append(newRefText("2"));
        DataChain* OOEFXZBCOEJUVP = new DataChain();
        KKASVWSRENZKYC->append(newRefStructBrackets(OOEFXZBCOEJUVP));
        OOEFXZBCOEJUVP->append(newRefText("1"));
        DataChain* VABOYGPOEYLFPB = new DataChain();
        KKASVWSRENZKYC->append(newRefStructBrackets(VABOYGPOEYLFPB));
        VABOYGPOEYLFPB->append(newRefText(""));
        DataChain* NPLJVRVIPYAMYE = new DataChain();
        KKASVWSRENZKYC->append(newRefStructBrackets(NPLJVRVIPYAMYE));
        NPLJVRVIPYAMYE->append(newRefText("23456789"));
        context->pushExecuteCall(KKASVWSRENZKYC_execbr);
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor HWQNQRQPMXUJJL;
        /*SET*/
        HWQNQRQPMXUJJL = arg_from;
        /*INC*/
        if (!INC(HWQNQRQPMXUJJL, arg_to)) goto sentence_after_2;
        if (HWQNQRQPMXUJJL.container->type != text || *(HWQNQRQPMXUJJL.container->value.text + HWQNQRQPMXUJJL.index) != '2') goto sentence_after_2;
//// [ empty ]
        /*ISEMPTY*/
        if (HWQNQRQPMXUJJL!=0 && arg_to != HWQNQRQPMXUJJL) goto sentence_after_2;

// подстановка
        DataChain* BXCOKSFZKVATXD = new DataChain();
        DataContainer* BXCOKSFZKVATXD_execbr = newRefExecBrackets(Game, BXCOKSFZKVATXD, "Game");
        result->append(BXCOKSFZKVATXD_execbr);
        DataChain* KNLYJYHFIXJSWN = new DataChain();
        BXCOKSFZKVATXD->append(newRefStructBrackets(KNLYJYHFIXJSWN));
        KNLYJYHFIXJSWN->append(newRefText("2"));
        DataChain* KKUFNUXXZRZBMN = new DataChain();
        BXCOKSFZKVATXD->append(newRefStructBrackets(KKUFNUXXZRZBMN));
        KKUFNUXXZRZBMN->append(newRefText(""));
        DataChain* MGQOOKETLYHNKO = new DataChain();
        BXCOKSFZKVATXD->append(newRefStructBrackets(MGQOOKETLYHNKO));
        MGQOOKETLYHNKO->append(newRefText(""));
        DataChain* AUGZQRCDDIUTEI = new DataChain();
        BXCOKSFZKVATXD->append(newRefStructBrackets(AUGZQRCDDIUTEI));
        AUGZQRCDDIUTEI->append(newRefText("123456789"));
        context->pushExecuteCall(BXCOKSFZKVATXD_execbr);
        return result;
    }
sentence_after_2:

    {
// сопоставление
//// [ e.1 ]
        /*DEF*/	DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = arg_from;
        /*SET*/
        r_e = arg_to;

// подстановка
        return result;
    }
sentence_after_3:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* Game(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor OJWAYYZPVSCMPS;
        /*DEF*/
        DataCursor AJLFVGUBFAAOVL;
        /*DEF*/
        DataCursor ZYLNTRKDCPWSRT;
        /*SET*/
        OJWAYYZPVSCMPS = arg_from;
        /*INC*/
        if (!INC(OJWAYYZPVSCMPS, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (OJWAYYZPVSCMPS.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        AJLFVGUBFAAOVL = OJWAYYZPVSCMPS.container->value.bracket_data.chain->at_before_first();
        ZYLNTRKDCPWSRT   = OJWAYYZPVSCMPS.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor ESJWHDIZCOBZCN;
        /*DEF*/
        DataCursor l_g;
        /*DEF*/
        DataCursor r_g;
        /*SET*/
        l_g = AJLFVGUBFAAOVL;
        /*SET*/
        ESJWHDIZCOBZCN = AJLFVGUBFAAOVL;
        /*INC*/
        if (!INC(ESJWHDIZCOBZCN, ZYLNTRKDCPWSRT)) goto sentence_after_1;
        if (! isSymbolType(ESJWHDIZCOBZCN.container->type)) goto sentence_after_1;
        /*SET*/
        r_g = ESJWHDIZCOBZCN;
//// [ empty ]
        /*ISEMPTY*/
        if (r_g!=0 && ZYLNTRKDCPWSRT != r_g) goto sentence_after_1;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor FWLQIJTVDWVXHR;
        /*DEF*/
        DataCursor CBLDVGYLWGBUSB;
        /*DEF*/
        DataCursor MBORXTLHCSMPXO;
        /*SET*/
        FWLQIJTVDWVXHR = OJWAYYZPVSCMPS;
        /*INC*/
        if (!INC(FWLQIJTVDWVXHR, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (FWLQIJTVDWVXHR.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        CBLDVGYLWGBUSB = FWLQIJTVDWVXHR.container->value.bracket_data.chain->at_before_first();
        MBORXTLHCSMPXO   = FWLQIJTVDWVXHR.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = CBLDVGYLWGBUSB;
        /*SET*/
        r_1 = MBORXTLHCSMPXO;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor HGMGNKEUFDXOTO;
        /*DEF*/
        DataCursor GBGXPEYANFETCU;
        /*DEF*/
        DataCursor KEPZSHKLJUGGGE;
        /*SET*/
        HGMGNKEUFDXOTO = FWLQIJTVDWVXHR;
        /*INC*/
        if (!INC(HGMGNKEUFDXOTO, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (HGMGNKEUFDXOTO.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        GBGXPEYANFETCU = HGMGNKEUFDXOTO.container->value.bracket_data.chain->at_before_first();
        KEPZSHKLJUGGGE   = HGMGNKEUFDXOTO.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = GBGXPEYANFETCU;
        /*SET*/
        r_2 = KEPZSHKLJUGGGE;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor KJDQZJENPEVQGX;
        /*DEF*/
        DataCursor IEPJSRDZJAZUJL;
        /*DEF*/
        DataCursor LCHHBFQMKIMWZO;
        /*SET*/
        KJDQZJENPEVQGX = HGMGNKEUFDXOTO;
        /*INC*/
        if (!INC(KJDQZJENPEVQGX, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (KJDQZJENPEVQGX.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        IEPJSRDZJAZUJL = KJDQZJENPEVQGX.container->value.bracket_data.chain->at_before_first();
        LCHHBFQMKIMWZO   = KJDQZJENPEVQGX.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_n;
        /*DEF*/
        DataCursor r_n;
        /*SET*/
        l_n = IEPJSRDZJAZUJL;
        /*SET*/
        r_n = LCHHBFQMKIMWZO;
//// [ empty ]
        /*ISEMPTY*/
        if (KJDQZJENPEVQGX!=0 && arg_to != KJDQZJENPEVQGX) goto sentence_after_1;

// подстановка
        DataChain* BIWYBXDUUNFSKS = new DataChain();
        DataContainer* BIWYBXDUUNFSKS_execbr = newRefExecBrackets(Ekran, BIWYBXDUUNFSKS, "Ekran");
        result->append(BIWYBXDUUNFSKS_execbr);
        DataChain* RSRTEKMQDCYZJE = new DataChain();
        BIWYBXDUUNFSKS->append(newRefStructBrackets(RSRTEKMQDCYZJE));
        RSRTEKMQDCYZJE->append_copy(l_1, r_1);
        DataChain* EUHMSRQCOZIJIP = new DataChain();
        BIWYBXDUUNFSKS->append(newRefStructBrackets(EUHMSRQCOZIJIP));
        EUHMSRQCOZIJIP->append_copy(l_2, r_2);
        context->pushExecuteCall(BIWYBXDUUNFSKS_execbr);
        DataChain* FIONEEDDPSZRNA = new DataChain();
        DataContainer* FIONEEDDPSZRNA_execbr = newRefExecBrackets(GameIfWin, FIONEEDDPSZRNA, "GameIfWin");
        result->append(FIONEEDDPSZRNA_execbr);
        DataChain* VYMMTATBDZQSOE = new DataChain();
        DataContainer* VYMMTATBDZQSOE_execbr = newRefExecBrackets(Ifwin, VYMMTATBDZQSOE, "Ifwin");
        FIONEEDDPSZRNA->append(VYMMTATBDZQSOE_execbr);
        DataChain* MUVNPPPSUACBAZ = new DataChain();
        VYMMTATBDZQSOE->append(newRefStructBrackets(MUVNPPPSUACBAZ));
        MUVNPPPSUACBAZ->append_copy(l_1, r_1);
        DataChain* UXMHECTHLEGRPU = new DataChain();
        VYMMTATBDZQSOE->append(newRefStructBrackets(UXMHECTHLEGRPU));
        UXMHECTHLEGRPU->append_copy(l_2, r_2);
        context->pushExecuteCall(VYMMTATBDZQSOE_execbr);
        DataChain* NKDMBPPWEQTGJO = new DataChain();
        FIONEEDDPSZRNA->append(newRefStructBrackets(NKDMBPPWEQTGJO));
        NKDMBPPWEQTGJO->append_copy(l_g, r_g);
        DataChain* PARMOWZDQYOXYT = new DataChain();
        FIONEEDDPSZRNA->append(newRefStructBrackets(PARMOWZDQYOXYT));
        PARMOWZDQYOXYT->append_copy(l_1, r_1);
        DataChain* JBBHAWDYDCPRJB = new DataChain();
        FIONEEDDPSZRNA->append(newRefStructBrackets(JBBHAWDYDCPRJB));
        JBBHAWDYDCPRJB->append_copy(l_2, r_2);
        DataChain* XPHOOHPKWQYUHR = new DataChain();
        FIONEEDDPSZRNA->append(newRefStructBrackets(XPHOOHPKWQYUHR));
        XPHOOHPKWQYUHR->append_copy(l_n, r_n);
        context->pushExecuteCall(FIONEEDDPSZRNA_execbr);
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ e.1 ]
        /*DEF*/	DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = arg_from;
        /*SET*/
        r_e = arg_to;

// подстановка
        return result;
    }
sentence_after_2:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* GameIfWin(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor QZHNBNFUVQNQQL;
        /*SET*/
        QZHNBNFUVQNQQL = arg_from;
        /*INC*/
        if (!INC(QZHNBNFUVQNQQL, arg_to)) goto sentence_after_1;
        if (QZHNBNFUVQNQQL.container->type != text || *(QZHNBNFUVQNQQL.container->value.text + QZHNBNFUVQNQQL.index) != '0') goto sentence_after_1;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = QZHNBNFUVQNQQL;
        /*SET*/
        r_e = QZHNBNFUVQNQQL;
        /*JMP*/
        goto label_RZJPXIOGVLIEXD_firststep;
label_RZJPXIOGVLIEXD:
        /*INC*/
        if (!INC(r_e, arg_to)) goto sentence_after_1;
label_RZJPXIOGVLIEXD_firststep:
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor ZUZOSRKRUSVOJB;
        /*DEF*/
        DataCursor RZMWZPOWKJILEF;
        /*DEF*/
        DataCursor RAAMDIGPNPUUHG;
        /*SET*/
        ZUZOSRKRUSVOJB = r_e;
        /*INC*/
        if (!INC(ZUZOSRKRUSVOJB, arg_to)) goto label_RZJPXIOGVLIEXD;
//// ISBRACKET
        if (ZUZOSRKRUSVOJB.container->type != struct_bracket) goto label_RZJPXIOGVLIEXD;
//// JMP_BRACKET
        RZMWZPOWKJILEF = ZUZOSRKRUSVOJB.container->value.bracket_data.chain->at_before_first();
        RAAMDIGPNPUUHG   = ZUZOSRKRUSVOJB.container->value.bracket_data.chain->at_last();
//// [ empty ]
        /*ISEMPTY*/
        if (RZMWZPOWKJILEF!=0 && RAAMDIGPNPUUHG != RZMWZPOWKJILEF) goto label_RZJPXIOGVLIEXD;
//// [ empty ]
        /*ISEMPTY*/
        if (ZUZOSRKRUSVOJB!=0 && arg_to != ZUZOSRKRUSVOJB) goto label_RZJPXIOGVLIEXD;

// подстановка
        DataChain* SNHHLQQRZUDLTF = new DataChain();
        DataContainer* SNHHLQQRZUDLTF_execbr = newRefExecBrackets(Prout, SNHHLQQRZUDLTF, "Prout");
        result->append(SNHHLQQRZUDLTF_execbr);
        SNHHLQQRZUDLTF->append(newRefText("Nobody !!!."));
        context->pushExecuteCall(SNHHLQQRZUDLTF_execbr);
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor ZOTCJTNZXUGLSD;
        /*SET*/
        ZOTCJTNZXUGLSD = arg_from;
        /*INC*/
        if (!INC(ZOTCJTNZXUGLSD, arg_to)) goto sentence_after_2;
        if (ZOTCJTNZXUGLSD.container->type != text || *(ZOTCJTNZXUGLSD.container->value.text + ZOTCJTNZXUGLSD.index) != '1') goto sentence_after_2;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = ZOTCJTNZXUGLSD;
        /*SET*/
        r_e = arg_to;

// подстановка
        DataChain* MXOTHOWKBJZWUC = new DataChain();
        DataContainer* MXOTHOWKBJZWUC_execbr = newRefExecBrackets(Prout, MXOTHOWKBJZWUC, "Prout");
        result->append(MXOTHOWKBJZWUC_execbr);
        MXOTHOWKBJZWUC->append(newRefText("Winner X"));
        context->pushExecuteCall(MXOTHOWKBJZWUC_execbr);
        return result;
    }
sentence_after_2:

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor WLJFRIMPMYHCHZ;
        /*SET*/
        WLJFRIMPMYHCHZ = arg_from;
        /*INC*/
        if (!INC(WLJFRIMPMYHCHZ, arg_to)) goto sentence_after_3;
        if (WLJFRIMPMYHCHZ.container->type != text || *(WLJFRIMPMYHCHZ.container->value.text + WLJFRIMPMYHCHZ.index) != '2') goto sentence_after_3;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = WLJFRIMPMYHCHZ;
        /*SET*/
        r_e = arg_to;

// подстановка
        DataChain* EYHJUGIXWTBVTR = new DataChain();
        DataContainer* EYHJUGIXWTBVTR_execbr = newRefExecBrackets(Prout, EYHJUGIXWTBVTR, "Prout");
        result->append(EYHJUGIXWTBVTR_execbr);
        EYHJUGIXWTBVTR->append(newRefText("Winner O"));
        context->pushExecuteCall(EYHJUGIXWTBVTR_execbr);
        return result;
    }
sentence_after_3:

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor EHBBCPXIFBXVFB;
        /*SET*/
        EHBBCPXIFBXVFB = arg_from;
        /*INC*/
        if (!INC(EHBBCPXIFBXVFB, arg_to)) goto sentence_after_4;
        if (EHBBCPXIFBXVFB.container->type != text || *(EHBBCPXIFBXVFB.container->value.text + EHBBCPXIFBXVFB.index) != '0') goto sentence_after_4;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = EHBBCPXIFBXVFB;
        /*SET*/
        r_e = arg_to;

// подстановка
        DataChain* UBMJRMBSZTSSHF = new DataChain();
        DataContainer* UBMJRMBSZTSSHF_execbr = newRefExecBrackets(Game1, UBMJRMBSZTSSHF, "Game1");
        result->append(UBMJRMBSZTSSHF_execbr);
        UBMJRMBSZTSSHF->append_copy(l_e, r_e);
        context->pushExecuteCall(UBMJRMBSZTSSHF_execbr);
        return result;
    }
sentence_after_4:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* Game1(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor ROEFWSJRXJHGUZ;
        /*DEF*/
        DataCursor YUPZWWEIQURPIX;
        /*DEF*/
        DataCursor IQFLDUUVEOOWQC;
        /*SET*/
        ROEFWSJRXJHGUZ = arg_from;
        /*INC*/
        if (!INC(ROEFWSJRXJHGUZ, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (ROEFWSJRXJHGUZ.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        YUPZWWEIQURPIX = ROEFWSJRXJHGUZ.container->value.bracket_data.chain->at_before_first();
        IQFLDUUVEOOWQC   = ROEFWSJRXJHGUZ.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ]
        /*DEF*/
        DataCursor UDHNEFNJHAIMUC;
        /*SET*/
        UDHNEFNJHAIMUC = YUPZWWEIQURPIX;
        /*INC*/
        if (!INC(UDHNEFNJHAIMUC, IQFLDUUVEOOWQC)) goto sentence_after_1;
        if (UDHNEFNJHAIMUC.container->type != text || *(UDHNEFNJHAIMUC.container->value.text + UDHNEFNJHAIMUC.index) != '1') goto sentence_after_1;
//// [ empty ]
        /*ISEMPTY*/
        if (UDHNEFNJHAIMUC!=0 && IQFLDUUVEOOWQC != UDHNEFNJHAIMUC) goto sentence_after_1;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_12;
        /*DEF*/
        DataCursor r_12;
        /*SET*/
        l_12 = ROEFWSJRXJHGUZ;
        /*SET*/
        r_12 = ROEFWSJRXJHGUZ;
        /*JMP*/
        goto label_TBRECUYKABFCVK_firststep;
label_TBRECUYKABFCVK:
        /*INC*/
        if (!INC(r_12, arg_to)) goto sentence_after_1;
label_TBRECUYKABFCVK_firststep:
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor DZEZTOIDUKUHJZ;
        /*DEF*/
        DataCursor EFCZZZBFKQDPQZ;
        /*DEF*/
        DataCursor IKFOBUCDHTHXDJ;
        /*SET*/
        DZEZTOIDUKUHJZ = r_12;
        /*INC*/
        if (!INC(DZEZTOIDUKUHJZ, arg_to)) goto label_TBRECUYKABFCVK;
//// ISBRACKET
        if (DZEZTOIDUKUHJZ.container->type != struct_bracket) goto label_TBRECUYKABFCVK;
//// JMP_BRACKET
        EFCZZZBFKQDPQZ = DZEZTOIDUKUHJZ.container->value.bracket_data.chain->at_before_first();
        IKFOBUCDHTHXDJ   = DZEZTOIDUKUHJZ.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_n;
        /*DEF*/
        DataCursor r_n;
        /*SET*/
        l_n = EFCZZZBFKQDPQZ;
        /*SET*/
        r_n = IKFOBUCDHTHXDJ;
//// [ empty ]
        /*ISEMPTY*/
        if (DZEZTOIDUKUHJZ!=0 && arg_to != DZEZTOIDUKUHJZ) goto label_TBRECUYKABFCVK;

// подстановка
        DataChain* GKJELRLPAXAMCE = new DataChain();
        DataContainer* GKJELRLPAXAMCE_execbr = newRefExecBrackets(Prout, GKJELRLPAXAMCE, "Prout");
        result->append(GKJELRLPAXAMCE_execbr);
        GKJELRLPAXAMCE->append(newRefText("hmm ..."));
        context->pushExecuteCall(GKJELRLPAXAMCE_execbr);
        DataChain* ROSWITDPTPCCLI = new DataChain();
        DataContainer* ROSWITDPTPCCLI_execbr = newRefExecBrackets(Game, ROSWITDPTPCCLI, "Game");
        result->append(ROSWITDPTPCCLI_execbr);
        DataChain* FKELJYTIHRCQAY = new DataChain();
        ROSWITDPTPCCLI->append(newRefStructBrackets(FKELJYTIHRCQAY));
        FKELJYTIHRCQAY->append(newRefText("2"));
        DataChain* BNEFXNXVGZEDYY = new DataChain();
        DataContainer* BNEFXNXVGZEDYY_execbr = newRefExecBrackets(PlayerHod, BNEFXNXVGZEDYY, "PlayerHod");
        ROSWITDPTPCCLI->append(BNEFXNXVGZEDYY_execbr);
        BNEFXNXVGZEDYY->append(newRefText("1"));
        DataChain* HNGYCDRUDMPHME = new DataChain();
        DataContainer* HNGYCDRUDMPHME_execbr = newRefExecBrackets(GetHod, HNGYCDRUDMPHME, "GetHod");
        BNEFXNXVGZEDYY->append(HNGYCDRUDMPHME_execbr);
        HNGYCDRUDMPHME->append(newRefText("1"));
        DataChain* CKOTRWOSPOFGHF = new DataChain();
        HNGYCDRUDMPHME->append(newRefStructBrackets(CKOTRWOSPOFGHF));
        CKOTRWOSPOFGHF->append(newRefText("1"));
        HNGYCDRUDMPHME->append_copy(l_12, r_12);
        DataChain* OZQVLQFXWWKMFX = new DataChain();
        HNGYCDRUDMPHME->append(newRefStructBrackets(OZQVLQFXWWKMFX));
        OZQVLQFXWWKMFX->append_copy(l_n, r_n);
        context->pushExecuteCall(HNGYCDRUDMPHME_execbr);
        BNEFXNXVGZEDYY->append_copy(l_12, r_12);
        DataChain* DYYGMDCASZSGOV = new DataChain();
        BNEFXNXVGZEDYY->append(newRefStructBrackets(DYYGMDCASZSGOV));
        DYYGMDCASZSGOV->append_copy(l_n, r_n);
        context->pushExecuteCall(BNEFXNXVGZEDYY_execbr);
        context->pushExecuteCall(ROSWITDPTPCCLI_execbr);
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor SODKJGHCWMBMXR;
        /*DEF*/
        DataCursor MHUYFYQGAJQKCK;
        /*DEF*/
        DataCursor LZNAYXQKQOYZWM;
        /*SET*/
        SODKJGHCWMBMXR = arg_from;
        /*INC*/
        if (!INC(SODKJGHCWMBMXR, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (SODKJGHCWMBMXR.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        MHUYFYQGAJQKCK = SODKJGHCWMBMXR.container->value.bracket_data.chain->at_before_first();
        LZNAYXQKQOYZWM   = SODKJGHCWMBMXR.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ]
        /*DEF*/
        DataCursor YUBZAZCPKHKTKY;
        /*SET*/
        YUBZAZCPKHKTKY = MHUYFYQGAJQKCK;
        /*INC*/
        if (!INC(YUBZAZCPKHKTKY, LZNAYXQKQOYZWM)) goto sentence_after_2;
        if (YUBZAZCPKHKTKY.container->type != text || *(YUBZAZCPKHKTKY.container->value.text + YUBZAZCPKHKTKY.index) != '2') goto sentence_after_2;
//// [ empty ]
        /*ISEMPTY*/
        if (YUBZAZCPKHKTKY!=0 && LZNAYXQKQOYZWM != YUBZAZCPKHKTKY) goto sentence_after_2;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_12;
        /*DEF*/
        DataCursor r_12;
        /*SET*/
        l_12 = SODKJGHCWMBMXR;
        /*SET*/
        r_12 = SODKJGHCWMBMXR;
        /*JMP*/
        goto label_SGEKYRGZVXDHPO_firststep;
label_SGEKYRGZVXDHPO:
        /*INC*/
        if (!INC(r_12, arg_to)) goto sentence_after_2;
label_SGEKYRGZVXDHPO_firststep:
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor AMVAFYRARXSVKH;
        /*DEF*/
        DataCursor TQDIHERSIGBHZJ;
        /*DEF*/
        DataCursor ZUJXMMYSPNARAE;
        /*SET*/
        AMVAFYRARXSVKH = r_12;
        /*INC*/
        if (!INC(AMVAFYRARXSVKH, arg_to)) goto label_SGEKYRGZVXDHPO;
//// ISBRACKET
        if (AMVAFYRARXSVKH.container->type != struct_bracket) goto label_SGEKYRGZVXDHPO;
//// JMP_BRACKET
        TQDIHERSIGBHZJ = AMVAFYRARXSVKH.container->value.bracket_data.chain->at_before_first();
        ZUJXMMYSPNARAE   = AMVAFYRARXSVKH.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_n;
        /*DEF*/
        DataCursor r_n;
        /*SET*/
        l_n = TQDIHERSIGBHZJ;
        /*SET*/
        r_n = ZUJXMMYSPNARAE;
//// [ empty ]
        /*ISEMPTY*/
        if (AMVAFYRARXSVKH!=0 && arg_to != AMVAFYRARXSVKH) goto label_SGEKYRGZVXDHPO;

// подстановка
        DataChain* WKEGJCCVHHRJVB = new DataChain();
        DataContainer* WKEGJCCVHHRJVB_execbr = newRefExecBrackets(Game, WKEGJCCVHHRJVB, "Game");
        result->append(WKEGJCCVHHRJVB_execbr);
        DataChain* JTSQDJOOTGPKNF = new DataChain();
        WKEGJCCVHHRJVB->append(newRefStructBrackets(JTSQDJOOTGPKNF));
        JTSQDJOOTGPKNF->append(newRefText("1"));
        DataChain* PFYCGFIEOWQRWW = new DataChain();
        DataContainer* PFYCGFIEOWQRWW_execbr = newRefExecBrackets(PlayerHod, PFYCGFIEOWQRWW, "PlayerHod");
        WKEGJCCVHHRJVB->append(PFYCGFIEOWQRWW_execbr);
        PFYCGFIEOWQRWW->append(newRefText("2"));
        DataChain* WPZSQMETOGEPSP = new DataChain();
        DataContainer* WPZSQMETOGEPSP_execbr = newRefExecBrackets(Prout, WPZSQMETOGEPSP, "Prout");
        PFYCGFIEOWQRWW->append(WPZSQMETOGEPSP_execbr);
        WPZSQMETOGEPSP->append(newRefText("Select number for 0:"));
        context->pushExecuteCall(WPZSQMETOGEPSP_execbr);
        DataChain* XNVJIUPALYYNMK = new DataChain();
        DataContainer* XNVJIUPALYYNMK_execbr = newRefExecBrackets(Card, XNVJIUPALYYNMK, "Card");
        PFYCGFIEOWQRWW->append(XNVJIUPALYYNMK_execbr);
        context->pushExecuteCall(XNVJIUPALYYNMK_execbr);
        PFYCGFIEOWQRWW->append_copy(l_12, r_12);
        DataChain* MNUVKLHSECDWRA = new DataChain();
        PFYCGFIEOWQRWW->append(newRefStructBrackets(MNUVKLHSECDWRA));
        MNUVKLHSECDWRA->append_copy(l_n, r_n);
        context->pushExecuteCall(PFYCGFIEOWQRWW_execbr);
        context->pushExecuteCall(WKEGJCCVHHRJVB_execbr);
        return result;
    }
sentence_after_2:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* PlayerHod(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor CGFMZKGIPDFODK;
        /*SET*/
        CGFMZKGIPDFODK = arg_from;
        /*INC*/
        if (!INC(CGFMZKGIPDFODK, arg_to)) goto sentence_after_1;
        if (CGFMZKGIPDFODK.container->type != text || *(CGFMZKGIPDFODK.container->value.text + CGFMZKGIPDFODK.index) != '1') goto sentence_after_1;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor JMJQWIQPUOQHIM;
        /*DEF*/
        DataCursor l_h;
        /*DEF*/
        DataCursor r_h;
        /*SET*/
        l_h = CGFMZKGIPDFODK;
        /*SET*/
        JMJQWIQPUOQHIM = CGFMZKGIPDFODK;
        /*INC*/
        if (!INC(JMJQWIQPUOQHIM, arg_to)) goto sentence_after_1;
        if (! isSymbolType(JMJQWIQPUOQHIM.container->type)) goto sentence_after_1;
        /*SET*/
        r_h = JMJQWIQPUOQHIM;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor VFVUZWYVIJGFUL;
        /*DEF*/
        DataCursor LKJDUHSJAFBTLK;
        /*DEF*/
        DataCursor MFQRMYJFJNHHSS;
        /*SET*/
        VFVUZWYVIJGFUL = r_h;
        /*INC*/
        if (!INC(VFVUZWYVIJGFUL, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (VFVUZWYVIJGFUL.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        LKJDUHSJAFBTLK = VFVUZWYVIJGFUL.container->value.bracket_data.chain->at_before_first();
        MFQRMYJFJNHHSS   = VFVUZWYVIJGFUL.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = LKJDUHSJAFBTLK;
        /*SET*/
        r_1 = MFQRMYJFJNHHSS;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor QCTYDTEAMDCJBP;
        /*DEF*/
        DataCursor RHTNEGYIWXGCJW;
        /*DEF*/
        DataCursor LGRSMEAEARWTVJ;
        /*SET*/
        QCTYDTEAMDCJBP = VFVUZWYVIJGFUL;
        /*INC*/
        if (!INC(QCTYDTEAMDCJBP, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (QCTYDTEAMDCJBP.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        RHTNEGYIWXGCJW = QCTYDTEAMDCJBP.container->value.bracket_data.chain->at_before_first();
        LGRSMEAEARWTVJ   = QCTYDTEAMDCJBP.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = RHTNEGYIWXGCJW;
        /*SET*/
        r_2 = LGRSMEAEARWTVJ;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor SJBAOIOJLWHYPN;
        /*DEF*/
        DataCursor VRUIHOSWKIFYGT;
        /*DEF*/
        DataCursor YDHACWYHSGEWZM;
        /*SET*/
        SJBAOIOJLWHYPN = QCTYDTEAMDCJBP;
        /*INC*/
        if (!INC(SJBAOIOJLWHYPN, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (SJBAOIOJLWHYPN.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        VRUIHOSWKIFYGT = SJBAOIOJLWHYPN.container->value.bracket_data.chain->at_before_first();
        YDHACWYHSGEWZM   = SJBAOIOJLWHYPN.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_n1;
        /*DEF*/
        DataCursor r_n1;
        /*SET*/
        l_n1 = VRUIHOSWKIFYGT;
        /*SET*/
        r_n1 = VRUIHOSWKIFYGT;
        /*JMP*/
        goto label_TGONZLTJHGAUHN_firststep;
label_TGONZLTJHGAUHN:
        /*INC*/
        if (!INC(r_n1, YDHACWYHSGEWZM)) goto sentence_after_1;
label_TGONZLTJHGAUHN_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor IHREQGJFWKJSMT;
        /*SET*/
        IHREQGJFWKJSMT = r_n1;
        if (!SLIDE(IHREQGJFWKJSMT, YDHACWYHSGEWZM, l_h, r_h)) goto label_TGONZLTJHGAUHN;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_n2;
        /*DEF*/
        DataCursor r_n2;
        /*SET*/
        l_n2 = IHREQGJFWKJSMT;
        /*SET*/
        r_n2 = YDHACWYHSGEWZM;
//// [ empty ]
        /*ISEMPTY*/
        if (SJBAOIOJLWHYPN!=0 && arg_to != SJBAOIOJLWHYPN) goto label_TGONZLTJHGAUHN;

// подстановка
        DataChain* CHJCCDYRFVVRIV = new DataChain();
        DataContainer* CHJCCDYRFVVRIV_execbr = newRefExecBrackets(Prout, CHJCCDYRFVVRIV, "Prout");
        result->append(CHJCCDYRFVVRIV_execbr);
        CHJCCDYRFVVRIV->append(newRefText("step:"));
        CHJCCDYRFVVRIV->append_copy(l_h, r_h);
        context->pushExecuteCall(CHJCCDYRFVVRIV_execbr);
        DataChain* UYEEGFIVDRCYGU = new DataChain();
        result->append(newRefStructBrackets(UYEEGFIVDRCYGU));
        UYEEGFIVDRCYGU->append_copy(l_1, r_1);
        UYEEGFIVDRCYGU->append_copy(l_h, r_h);
        DataChain* RQDREDAKUBNFGU = new DataChain();
        result->append(newRefStructBrackets(RQDREDAKUBNFGU));
        RQDREDAKUBNFGU->append_copy(l_2, r_2);
        DataChain* PROQYLOBCWQXKZ = new DataChain();
        result->append(newRefStructBrackets(PROQYLOBCWQXKZ));
        PROQYLOBCWQXKZ->append_copy(l_n1, r_n1);
        PROQYLOBCWQXKZ->append_copy(l_n2, r_n2);
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor MAUSJGMHCMHGDN;
        /*SET*/
        MAUSJGMHCMHGDN = arg_from;
        /*INC*/
        if (!INC(MAUSJGMHCMHGDN, arg_to)) goto sentence_after_2;
        if (MAUSJGMHCMHGDN.container->type != text || *(MAUSJGMHCMHGDN.container->value.text + MAUSJGMHCMHGDN.index) != '2') goto sentence_after_2;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor MPHNQKAMHURKTR;
        /*DEF*/
        DataCursor l_h;
        /*DEF*/
        DataCursor r_h;
        /*SET*/
        l_h = MAUSJGMHCMHGDN;
        /*SET*/
        MPHNQKAMHURKTR = MAUSJGMHCMHGDN;
        /*INC*/
        if (!INC(MPHNQKAMHURKTR, arg_to)) goto sentence_after_2;
        if (! isSymbolType(MPHNQKAMHURKTR.container->type)) goto sentence_after_2;
        /*SET*/
        r_h = MPHNQKAMHURKTR;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor FFACLVGRZKKLDA;
        /*DEF*/
        DataCursor CLLTEOJOMONXRQ;
        /*DEF*/
        DataCursor YJZGINRNNZWACX;
        /*SET*/
        FFACLVGRZKKLDA = r_h;
        /*INC*/
        if (!INC(FFACLVGRZKKLDA, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (FFACLVGRZKKLDA.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        CLLTEOJOMONXRQ = FFACLVGRZKKLDA.container->value.bracket_data.chain->at_before_first();
        YJZGINRNNZWACX   = FFACLVGRZKKLDA.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = CLLTEOJOMONXRQ;
        /*SET*/
        r_1 = YJZGINRNNZWACX;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor XAEDRWUDXZRFUS;
        /*DEF*/
        DataCursor EWJTBOXVYNFHKS;
        /*DEF*/
        DataCursor TCENAUMNDDXFDM;
        /*SET*/
        XAEDRWUDXZRFUS = FFACLVGRZKKLDA;
        /*INC*/
        if (!INC(XAEDRWUDXZRFUS, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (XAEDRWUDXZRFUS.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        EWJTBOXVYNFHKS = XAEDRWUDXZRFUS.container->value.bracket_data.chain->at_before_first();
        TCENAUMNDDXFDM   = XAEDRWUDXZRFUS.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = EWJTBOXVYNFHKS;
        /*SET*/
        r_2 = TCENAUMNDDXFDM;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor VZCAUTDCCKXAAY;
        /*DEF*/
        DataCursor DZSXTTOBBGQNGV;
        /*DEF*/
        DataCursor VPJGOJOGLMKXGB;
        /*SET*/
        VZCAUTDCCKXAAY = XAEDRWUDXZRFUS;
        /*INC*/
        if (!INC(VZCAUTDCCKXAAY, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (VZCAUTDCCKXAAY.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        DZSXTTOBBGQNGV = VZCAUTDCCKXAAY.container->value.bracket_data.chain->at_before_first();
        VPJGOJOGLMKXGB   = VZCAUTDCCKXAAY.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_n1;
        /*DEF*/
        DataCursor r_n1;
        /*SET*/
        l_n1 = DZSXTTOBBGQNGV;
        /*SET*/
        r_n1 = DZSXTTOBBGQNGV;
        /*JMP*/
        goto label_FCPYPCKQCHBDDZ_firststep;
label_FCPYPCKQCHBDDZ:
        /*INC*/
        if (!INC(r_n1, VPJGOJOGLMKXGB)) goto sentence_after_2;
label_FCPYPCKQCHBDDZ_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor WRXBZMQRLXVOBT;
        /*SET*/
        WRXBZMQRLXVOBT = r_n1;
        if (!SLIDE(WRXBZMQRLXVOBT, VPJGOJOGLMKXGB, l_h, r_h)) goto label_FCPYPCKQCHBDDZ;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_n2;
        /*DEF*/
        DataCursor r_n2;
        /*SET*/
        l_n2 = WRXBZMQRLXVOBT;
        /*SET*/
        r_n2 = VPJGOJOGLMKXGB;
//// [ empty ]
        /*ISEMPTY*/
        if (VZCAUTDCCKXAAY!=0 && arg_to != VZCAUTDCCKXAAY) goto label_FCPYPCKQCHBDDZ;

// подстановка
        DataChain* ZNMJUGWWBSQFCI = new DataChain();
        DataContainer* ZNMJUGWWBSQFCI_execbr = newRefExecBrackets(Prout, ZNMJUGWWBSQFCI, "Prout");
        result->append(ZNMJUGWWBSQFCI_execbr);
        ZNMJUGWWBSQFCI->append(newRefText("step:"));
        ZNMJUGWWBSQFCI->append_copy(l_h, r_h);
        context->pushExecuteCall(ZNMJUGWWBSQFCI_execbr);
        DataChain* HUBSJOLLMSQSGH = new DataChain();
        result->append(newRefStructBrackets(HUBSJOLLMSQSGH));
        HUBSJOLLMSQSGH->append_copy(l_1, r_1);
        DataChain* MCPHELSOTFLBGS = new DataChain();
        result->append(newRefStructBrackets(MCPHELSOTFLBGS));
        MCPHELSOTFLBGS->append_copy(l_2, r_2);
        MCPHELSOTFLBGS->append_copy(l_h, r_h);
        DataChain* FNPCUZSRUPCHYN = new DataChain();
        result->append(newRefStructBrackets(FNPCUZSRUPCHYN));
        FNPCUZSRUPCHYN->append_copy(l_n1, r_n1);
        FNPCUZSRUPCHYN->append_copy(l_n2, r_n2);
        return result;
    }
sentence_after_2:

    {
// сопоставление
//// [ e.1 ]
        /*DEF*/	DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = arg_from;
        /*SET*/
        r_e = arg_to;

// подстановка
        return result;
    }
sentence_after_3:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* GetHod(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ s.1 <any> ]
        /*DEF*/	DataCursor VZHCPQUGRIWNIQ;
        /*DEF*/
        DataCursor l_v;
        /*DEF*/
        DataCursor r_v;
        /*SET*/
        l_v = arg_from;
        /*SET*/
        VZHCPQUGRIWNIQ = arg_from;
        /*INC*/
        if (!INC(VZHCPQUGRIWNIQ, arg_to)) goto sentence_after_1;
        if (! isSymbolType(VZHCPQUGRIWNIQ.container->type)) goto sentence_after_1;
        /*SET*/
        r_v = VZHCPQUGRIWNIQ;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = r_v;
        /*SET*/
        r_e = r_v;
        /*JMP*/
        goto label_XDFJPWPXFBLKPN_firststep;
label_XDFJPWPXFBLKPN:
        /*INC*/
        if (!INC(r_e, arg_to)) goto sentence_after_1;
label_XDFJPWPXFBLKPN_firststep:
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor PEELFJMTKUQPZO;
        /*DEF*/
        DataCursor MWNLMBUPMKTLPT;
        /*DEF*/
        DataCursor NDMPDSYDSGVFPE;
        /*SET*/
        PEELFJMTKUQPZO = r_e;
        /*INC*/
        if (!INC(PEELFJMTKUQPZO, arg_to)) goto label_XDFJPWPXFBLKPN;
//// ISBRACKET
        if (PEELFJMTKUQPZO.container->type != struct_bracket) goto label_XDFJPWPXFBLKPN;
//// JMP_BRACKET
        MWNLMBUPMKTLPT = PEELFJMTKUQPZO.container->value.bracket_data.chain->at_before_first();
        NDMPDSYDSGVFPE   = PEELFJMTKUQPZO.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_not;
        /*DEF*/
        DataCursor r_not;
        /*SET*/
        l_not = MWNLMBUPMKTLPT;
        /*SET*/
        r_not = NDMPDSYDSGVFPE;
//// [ empty ]
        /*ISEMPTY*/
        if (PEELFJMTKUQPZO!=0 && arg_to != PEELFJMTKUQPZO) goto label_XDFJPWPXFBLKPN;

// подстановка
        DataChain* NEMWBORIFSUQHC = new DataChain();
        DataContainer* NEMWBORIFSUQHC_execbr = newRefExecBrackets(UseHod, NEMWBORIFSUQHC, "UseHod");
        result->append(NEMWBORIFSUQHC_execbr);
        NEMWBORIFSUQHC->append_copy(l_v, r_v);
        NEMWBORIFSUQHC->append_copy(l_e, r_e);
        DataChain* ESKMKHSSMVNONW = new DataChain();
        NEMWBORIFSUQHC->append(newRefStructBrackets(ESKMKHSSMVNONW));
        ESKMKHSSMVNONW->append_copy(l_not, r_not);
        DataChain* AFXWHGBIBABVQO = new DataChain();
        NEMWBORIFSUQHC->append(newRefStructBrackets(AFXWHGBIBABVQO));
        DataChain* PQFOVIUSSQFQWE = new DataChain();
        DataContainer* PQFOVIUSSQFQWE_execbr = newRefExecBrackets(WriteXO, PQFOVIUSSQFQWE, "WriteXO");
        AFXWHGBIBABVQO->append(PQFOVIUSSQFQWE_execbr);
        PQFOVIUSSQFQWE->append_copy(l_e, r_e);
        DataChain* HTXDZUJTLNTXMR = new DataChain();
        PQFOVIUSSQFQWE->append(newRefStructBrackets(HTXDZUJTLNTXMR));
        HTXDZUJTLNTXMR->append(newRefText(">"));
        HTXDZUJTLNTXMR->append_copy(l_not, r_not);
        context->pushExecuteCall(PQFOVIUSSQFQWE_execbr);
        context->pushExecuteCall(NEMWBORIFSUQHC_execbr);
        return result;
    }
sentence_after_1:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* UseHod(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ e.1 <any> ]
        /*DEF*/	DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = arg_from;
        /*SET*/
        r_e = arg_from;
        /*JMP*/
        goto label_JXXWTLGGKYTBIO_firststep;
label_JXXWTLGGKYTBIO:
        /*INC*/
        if (!INC(r_e, arg_to)) goto sentence_after_1;
label_JXXWTLGGKYTBIO_firststep:
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor LYDNILQADOJSKK;
        /*DEF*/
        DataCursor VFXAHHJMBOCLJA;
        /*DEF*/
        DataCursor RINTDWCLDVDXRO;
        /*SET*/
        LYDNILQADOJSKK = r_e;
        /*INC*/
        if (!INC(LYDNILQADOJSKK, arg_to)) goto label_JXXWTLGGKYTBIO;
//// ISBRACKET
        if (LYDNILQADOJSKK.container->type != struct_bracket) goto label_JXXWTLGGKYTBIO;
//// JMP_BRACKET
        VFXAHHJMBOCLJA = LYDNILQADOJSKK.container->value.bracket_data.chain->at_before_first();
        RINTDWCLDVDXRO   = LYDNILQADOJSKK.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ]
        /*DEF*/
        DataCursor PBYJZWYYOJUOTH;
        /*SET*/
        PBYJZWYYOJUOTH = VFXAHHJMBOCLJA;
        /*INC*/
        if (!INC(PBYJZWYYOJUOTH, RINTDWCLDVDXRO)) goto label_JXXWTLGGKYTBIO;
        if (PBYJZWYYOJUOTH.container->type != text || *(PBYJZWYYOJUOTH.container->value.text + PBYJZWYYOJUOTH.index) != '#') goto label_JXXWTLGGKYTBIO;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor WMLVRGLFZDZDBT;
        /*DEF*/
        DataCursor l_s;
        /*DEF*/
        DataCursor r_s;
        /*SET*/
        l_s = PBYJZWYYOJUOTH;
        /*SET*/
        WMLVRGLFZDZDBT = PBYJZWYYOJUOTH;
        /*INC*/
        if (!INC(WMLVRGLFZDZDBT, RINTDWCLDVDXRO)) goto label_JXXWTLGGKYTBIO;
        if (! isSymbolType(WMLVRGLFZDZDBT.container->type)) goto label_JXXWTLGGKYTBIO;
        /*SET*/
        r_s = WMLVRGLFZDZDBT;
//// [ empty ]
        /*ISEMPTY*/
        if (r_s!=0 && RINTDWCLDVDXRO != r_s) goto label_JXXWTLGGKYTBIO;
//// [ empty ]
        /*ISEMPTY*/
        if (LYDNILQADOJSKK!=0 && arg_to != LYDNILQADOJSKK) goto label_JXXWTLGGKYTBIO;

// подстановка
        result->append_copy(l_s, r_s);
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ s.1 <any> ]
        /*DEF*/	DataCursor AZNMOIJOIVVGOB;
        /*DEF*/
        DataCursor l_v;
        /*DEF*/
        DataCursor r_v;
        /*SET*/
        l_v = arg_from;
        /*SET*/
        AZNMOIJOIVVGOB = arg_from;
        /*INC*/
        if (!INC(AZNMOIJOIVVGOB, arg_to)) goto sentence_after_2;
        if (! isSymbolType(AZNMOIJOIVVGOB.container->type)) goto sentence_after_2;
        /*SET*/
        r_v = AZNMOIJOIVVGOB;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = r_v;
        /*SET*/
        r_e = r_v;
        /*JMP*/
        goto label_QPNCKWVNHKEBMT_firststep;
label_QPNCKWVNHKEBMT:
        /*INC*/
        if (!INC(r_e, arg_to)) goto sentence_after_2;
label_QPNCKWVNHKEBMT_firststep:
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor DHVYGKJISUXHAT;
        /*DEF*/
        DataCursor MUUDQBHMKNHFXA;
        /*DEF*/
        DataCursor XQXKJLZZQTSJFA;
        /*SET*/
        DHVYGKJISUXHAT = r_e;
        /*INC*/
        if (!INC(DHVYGKJISUXHAT, arg_to)) goto label_QPNCKWVNHKEBMT;
//// ISBRACKET
        if (DHVYGKJISUXHAT.container->type != struct_bracket) goto label_QPNCKWVNHKEBMT;
//// JMP_BRACKET
        MUUDQBHMKNHFXA = DHVYGKJISUXHAT.container->value.bracket_data.chain->at_before_first();
        XQXKJLZZQTSJFA   = DHVYGKJISUXHAT.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_not;
        /*DEF*/
        DataCursor r_not;
        /*SET*/
        l_not = MUUDQBHMKNHFXA;
        /*SET*/
        r_not = XQXKJLZZQTSJFA;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor EEDFUUJKOLXJOQ;
        /*DEF*/
        DataCursor KDVFEPVLHVHRWT;
        /*DEF*/
        DataCursor FDUKXFFJPSSWYX;
        /*SET*/
        EEDFUUJKOLXJOQ = DHVYGKJISUXHAT;
        /*INC*/
        if (!INC(EEDFUUJKOLXJOQ, arg_to)) goto label_QPNCKWVNHKEBMT;
//// ISBRACKET
        if (EEDFUUJKOLXJOQ.container->type != struct_bracket) goto label_QPNCKWVNHKEBMT;
//// JMP_BRACKET
        KDVFEPVLHVHRWT = EEDFUUJKOLXJOQ.container->value.bracket_data.chain->at_before_first();
        FDUKXFFJPSSWYX   = EEDFUUJKOLXJOQ.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_Wr;
        /*DEF*/
        DataCursor r_Wr;
        /*SET*/
        l_Wr = KDVFEPVLHVHRWT;
        /*SET*/
        r_Wr = FDUKXFFJPSSWYX;
//// [ empty ]
        /*ISEMPTY*/
        if (EEDFUUJKOLXJOQ!=0 && arg_to != EEDFUUJKOLXJOQ) goto label_QPNCKWVNHKEBMT;

// подстановка
        DataChain* LIJJHEVRYXOZBA = new DataChain();
        DataContainer* LIJJHEVRYXOZBA_execbr = newRefExecBrackets(UHod, LIJJHEVRYXOZBA, "UHod");
        result->append(LIJJHEVRYXOZBA_execbr);
        DataChain* FPFMOWGRGONUAT = new DataChain();
        LIJJHEVRYXOZBA->append(newRefStructBrackets(FPFMOWGRGONUAT));
        DataChain* DQLAHYGGYLJDDJ = new DataChain();
        DataContainer* DQLAHYGGYLJDDJ_execbr = newRefExecBrackets(Switch, DQLAHYGGYLJDDJ, "Switch");
        FPFMOWGRGONUAT->append(DQLAHYGGYLJDDJ_execbr);
        DQLAHYGGYLJDDJ->append_copy(l_v, r_v);
        DQLAHYGGYLJDDJ->append_copy(l_Wr, r_Wr);
        context->pushExecuteCall(DQLAHYGGYLJDDJ_execbr);
        DataChain* HMLTEDZLODSRKE = new DataChain();
        LIJJHEVRYXOZBA->append(newRefStructBrackets(HMLTEDZLODSRKE));
        HMLTEDZLODSRKE->append_copy(l_Wr, r_Wr);
        DataChain* UTGTNKNTARJKPX = new DataChain();
        LIJJHEVRYXOZBA->append(newRefStructBrackets(UTGTNKNTARJKPX));
        UTGTNKNTARJKPX->append_copy(l_not, r_not);
        context->pushExecuteCall(LIJJHEVRYXOZBA_execbr);
        return result;
    }
sentence_after_2:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* UHod(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor INOVGZDTHUNWOO;
        /*DEF*/
        DataCursor XVJJMPSVKNHKWJ;
        /*DEF*/
        DataCursor OPMMLEBKSUCVZQ;
        /*SET*/
        INOVGZDTHUNWOO = arg_from;
        /*INC*/
        if (!INC(INOVGZDTHUNWOO, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (INOVGZDTHUNWOO.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        XVJJMPSVKNHKWJ = INOVGZDTHUNWOO.container->value.bracket_data.chain->at_before_first();
        OPMMLEBKSUCVZQ   = INOVGZDTHUNWOO.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_Sw;
        /*DEF*/
        DataCursor r_Sw;
        /*SET*/
        l_Sw = XVJJMPSVKNHKWJ;
        /*SET*/
        r_Sw = OPMMLEBKSUCVZQ;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor LYQNWCMBVBHRML;
        /*DEF*/
        DataCursor OWPJBWYVWTGTOQ;
        /*DEF*/
        DataCursor NMICXAPZARKNNX;
        /*SET*/
        LYQNWCMBVBHRML = INOVGZDTHUNWOO;
        /*INC*/
        if (!INC(LYQNWCMBVBHRML, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (LYQNWCMBVBHRML.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        OWPJBWYVWTGTOQ = LYQNWCMBVBHRML.container->value.bracket_data.chain->at_before_first();
        NMICXAPZARKNNX   = LYQNWCMBVBHRML.container->value.bracket_data.chain->at_last();
//// [ &.name <any> ]
        /*DEF*/
        DataCursor TUUFARZROSDQWS;
        /*SET*/
        TUUFARZROSDQWS = OWPJBWYVWTGTOQ;
        if (!SLIDE(TUUFARZROSDQWS, NMICXAPZARKNNX, l_Sw, r_Sw)) goto sentence_after_1;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_Wr;
        /*DEF*/
        DataCursor r_Wr;
        /*SET*/
        l_Wr = TUUFARZROSDQWS;
        /*SET*/
        r_Wr = NMICXAPZARKNNX;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor MTCJGHECQUDOSR;
        /*DEF*/
        DataCursor TJXYAAYKQRXYCR;
        /*DEF*/
        DataCursor XUWJXNPQJNBKCP;
        /*SET*/
        MTCJGHECQUDOSR = LYQNWCMBVBHRML;
        /*INC*/
        if (!INC(MTCJGHECQUDOSR, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (MTCJGHECQUDOSR.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        TJXYAAYKQRXYCR = MTCJGHECQUDOSR.container->value.bracket_data.chain->at_before_first();
        XUWJXNPQJNBKCP   = MTCJGHECQUDOSR.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor DMOKALXAPEMVBQ;
        /*DEF*/
        DataCursor l_s;
        /*DEF*/
        DataCursor r_s;
        /*SET*/
        l_s = TJXYAAYKQRXYCR;
        /*SET*/
        DMOKALXAPEMVBQ = TJXYAAYKQRXYCR;
        /*INC*/
        if (!INC(DMOKALXAPEMVBQ, XUWJXNPQJNBKCP)) goto sentence_after_1;
        if (! isSymbolType(DMOKALXAPEMVBQ.container->type)) goto sentence_after_1;
        /*SET*/
        r_s = DMOKALXAPEMVBQ;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_n;
        /*DEF*/
        DataCursor r_n;
        /*SET*/
        l_n = r_s;
        /*SET*/
        r_n = XUWJXNPQJNBKCP;
//// [ empty ]
        /*ISEMPTY*/
        if (MTCJGHECQUDOSR!=0 && arg_to != MTCJGHECQUDOSR) goto sentence_after_1;

// подстановка
        result->append_copy(l_s, r_s);
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor LZSVXZKUTAPPWG;
        /*DEF*/
        DataCursor ZPDPYZKZCVBNTC;
        /*DEF*/
        DataCursor VFXSXPJAOXTFHV;
        /*SET*/
        LZSVXZKUTAPPWG = arg_from;
        /*INC*/
        if (!INC(LZSVXZKUTAPPWG, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (LZSVXZKUTAPPWG.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        ZPDPYZKZCVBNTC = LZSVXZKUTAPPWG.container->value.bracket_data.chain->at_before_first();
        VFXSXPJAOXTFHV   = LZSVXZKUTAPPWG.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_Sw;
        /*DEF*/
        DataCursor r_Sw;
        /*SET*/
        l_Sw = ZPDPYZKZCVBNTC;
        /*SET*/
        r_Sw = VFXSXPJAOXTFHV;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor XXYTGOKRCXAETA;
        /*DEF*/
        DataCursor UQGNDMPHWZYIAY;
        /*DEF*/
        DataCursor ABJRQGEPPXYJST;
        /*SET*/
        XXYTGOKRCXAETA = LZSVXZKUTAPPWG;
        /*INC*/
        if (!INC(XXYTGOKRCXAETA, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (XXYTGOKRCXAETA.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        UQGNDMPHWZYIAY = XXYTGOKRCXAETA.container->value.bracket_data.chain->at_before_first();
        ABJRQGEPPXYJST   = XXYTGOKRCXAETA.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor TYZUVLDVYBSUXK;
        /*DEF*/
        DataCursor l_s1;
        /*DEF*/
        DataCursor r_s1;
        /*SET*/
        l_s1 = UQGNDMPHWZYIAY;
        /*SET*/
        TYZUVLDVYBSUXK = UQGNDMPHWZYIAY;
        /*INC*/
        if (!INC(TYZUVLDVYBSUXK, ABJRQGEPPXYJST)) goto sentence_after_2;
        if (! isSymbolType(TYZUVLDVYBSUXK.container->type)) goto sentence_after_2;
        /*SET*/
        r_s1 = TYZUVLDVYBSUXK;
//// [ `a` <any> ]
        /*DEF*/
        DataCursor BMFZVRTNOVIDZN;
        /*SET*/
        BMFZVRTNOVIDZN = r_s1;
        /*INC*/
        if (!INC(BMFZVRTNOVIDZN, ABJRQGEPPXYJST)) goto sentence_after_2;
        if (BMFZVRTNOVIDZN.container->type != text || *(BMFZVRTNOVIDZN.container->value.text + BMFZVRTNOVIDZN.index) != '=') goto sentence_after_2;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor PGHOZVAFMSNSNQ;
        /*DEF*/
        DataCursor l_s2;
        /*DEF*/
        DataCursor r_s2;
        /*SET*/
        l_s2 = BMFZVRTNOVIDZN;
        /*SET*/
        PGHOZVAFMSNSNQ = BMFZVRTNOVIDZN;
        /*INC*/
        if (!INC(PGHOZVAFMSNSNQ, ABJRQGEPPXYJST)) goto sentence_after_2;
        if (! isSymbolType(PGHOZVAFMSNSNQ.container->type)) goto sentence_after_2;
        /*SET*/
        r_s2 = PGHOZVAFMSNSNQ;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = r_s2;
        /*SET*/
        r_e = r_s2;
        /*JMP*/
        goto label_IVMVUBCWTFSRQT_firststep;
label_IVMVUBCWTFSRQT:
        /*INC*/
        if (!INC(r_e, ABJRQGEPPXYJST)) goto sentence_after_2;
label_IVMVUBCWTFSRQT_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor MKNEPBHOWEJAZH;
        /*SET*/
        MKNEPBHOWEJAZH = r_e;
        if (!SLIDE(MKNEPBHOWEJAZH, ABJRQGEPPXYJST, l_Sw, r_Sw)) goto label_IVMVUBCWTFSRQT;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_Wr;
        /*DEF*/
        DataCursor r_Wr;
        /*SET*/
        l_Wr = MKNEPBHOWEJAZH;
        /*SET*/
        r_Wr = ABJRQGEPPXYJST;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor YSXTWWTAIDYAXY;
        /*DEF*/
        DataCursor QLEPRXIBEXXYFV;
        /*DEF*/
        DataCursor SDDYGTHCUYYFWP;
        /*SET*/
        YSXTWWTAIDYAXY = XXYTGOKRCXAETA;
        /*INC*/
        if (!INC(YSXTWWTAIDYAXY, arg_to)) goto label_IVMVUBCWTFSRQT;
//// ISBRACKET
        if (YSXTWWTAIDYAXY.container->type != struct_bracket) goto label_IVMVUBCWTFSRQT;
//// JMP_BRACKET
        QLEPRXIBEXXYFV = YSXTWWTAIDYAXY.container->value.bracket_data.chain->at_before_first();
        SDDYGTHCUYYFWP   = YSXTWWTAIDYAXY.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor JSFYBGLGZMBINT;
        /*DEF*/
        DataCursor l_s;
        /*DEF*/
        DataCursor r_s;
        /*SET*/
        l_s = QLEPRXIBEXXYFV;
        /*SET*/
        JSFYBGLGZMBINT = QLEPRXIBEXXYFV;
        /*INC*/
        if (!INC(JSFYBGLGZMBINT, SDDYGTHCUYYFWP)) goto label_IVMVUBCWTFSRQT;
        if (! isSymbolType(JSFYBGLGZMBINT.container->type)) goto label_IVMVUBCWTFSRQT;
        /*SET*/
        r_s = JSFYBGLGZMBINT;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_n;
        /*DEF*/
        DataCursor r_n;
        /*SET*/
        l_n = r_s;
        /*SET*/
        r_n = SDDYGTHCUYYFWP;
//// [ empty ]
        /*ISEMPTY*/
        if (YSXTWWTAIDYAXY!=0 && arg_to != YSXTWWTAIDYAXY) goto label_IVMVUBCWTFSRQT;

// подстановка
        DataChain* ATTNHODTONPYZW = new DataChain();
        DataContainer* ATTNHODTONPYZW_execbr = newRefExecBrackets(UHod, ATTNHODTONPYZW, "UHod");
        result->append(ATTNHODTONPYZW_execbr);
        DataChain* OTKGNGUPHPKXEA = new DataChain();
        ATTNHODTONPYZW->append(newRefStructBrackets(OTKGNGUPHPKXEA));
        OTKGNGUPHPKXEA->append_copy(l_Sw, r_Sw);
        DataChain* TOWZABSDNVQHKF = new DataChain();
        ATTNHODTONPYZW->append(newRefStructBrackets(TOWZABSDNVQHKF));
        TOWZABSDNVQHKF->append_copy(l_e, r_e);
        TOWZABSDNVQHKF->append_copy(l_Sw, r_Sw);
        TOWZABSDNVQHKF->append_copy(l_Wr, r_Wr);
        DataChain* CMOFISFRFQGVPM = new DataChain();
        ATTNHODTONPYZW->append(newRefStructBrackets(CMOFISFRFQGVPM));
        CMOFISFRFQGVPM->append_copy(l_n, r_n);
        context->pushExecuteCall(ATTNHODTONPYZW_execbr);
        return result;
    }
sentence_after_2:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* Ekran(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ e.1 ]
        /*DEF*/	DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        r_1 = arg_to;

// подстановка
        DataChain* VORPJFZSLZMPJJ = new DataChain();
        DataContainer* VORPJFZSLZMPJJ_execbr = newRefExecBrackets(Prout, VORPJFZSLZMPJJ, "Prout");
        result->append(VORPJFZSLZMPJJ_execbr);
        VORPJFZSLZMPJJ->append(newRefText("*===T===T===*"));
        context->pushExecuteCall(VORPJFZSLZMPJJ_execbr);
        DataChain* NEHRYKXJZUBUAC = new DataChain();
        DataContainer* NEHRYKXJZUBUAC_execbr = newRefExecBrackets(Prout, NEHRYKXJZUBUAC, "Prout");
        result->append(NEHRYKXJZUBUAC_execbr);
        NEHRYKXJZUBUAC->append(newRefText("|"));
        DataChain* CLFKCYZOBGHTUO = new DataChain();
        DataContainer* CLFKCYZOBGHTUO_execbr = newRefExecBrackets(XO, CLFKCYZOBGHTUO, "XO");
        NEHRYKXJZUBUAC->append(CLFKCYZOBGHTUO_execbr);
        CLFKCYZOBGHTUO->append(newRefText("1"));
        CLFKCYZOBGHTUO->append_copy(l_1, r_1);
        context->pushExecuteCall(CLFKCYZOBGHTUO_execbr);
        NEHRYKXJZUBUAC->append(newRefText("|"));
        DataChain* XRAJVPRECWGXXP = new DataChain();
        DataContainer* XRAJVPRECWGXXP_execbr = newRefExecBrackets(XO, XRAJVPRECWGXXP, "XO");
        NEHRYKXJZUBUAC->append(XRAJVPRECWGXXP_execbr);
        XRAJVPRECWGXXP->append(newRefText("2"));
        XRAJVPRECWGXXP->append_copy(l_1, r_1);
        context->pushExecuteCall(XRAJVPRECWGXXP_execbr);
        NEHRYKXJZUBUAC->append(newRefText("|"));
        DataChain* SWCGMMVEDEWDMF = new DataChain();
        DataContainer* SWCGMMVEDEWDMF_execbr = newRefExecBrackets(XO, SWCGMMVEDEWDMF, "XO");
        NEHRYKXJZUBUAC->append(SWCGMMVEDEWDMF_execbr);
        SWCGMMVEDEWDMF->append(newRefText("3"));
        SWCGMMVEDEWDMF->append_copy(l_1, r_1);
        context->pushExecuteCall(SWCGMMVEDEWDMF_execbr);
        NEHRYKXJZUBUAC->append(newRefText("|"));
        context->pushExecuteCall(NEHRYKXJZUBUAC_execbr);
        DataChain* NQWCUQDSCILIQE = new DataChain();
        DataContainer* NQWCUQDSCILIQE_execbr = newRefExecBrackets(Prout, NQWCUQDSCILIQE, "Prout");
        result->append(NQWCUQDSCILIQE_execbr);
        NQWCUQDSCILIQE->append(newRefText("*===I===I===*"));
        context->pushExecuteCall(NQWCUQDSCILIQE_execbr);
        DataChain* CIHLUILGMFCSWT = new DataChain();
        DataContainer* CIHLUILGMFCSWT_execbr = newRefExecBrackets(Prout, CIHLUILGMFCSWT, "Prout");
        result->append(CIHLUILGMFCSWT_execbr);
        CIHLUILGMFCSWT->append(newRefText("|"));
        DataChain* WKKXLCBHQKVCSW = new DataChain();
        DataContainer* WKKXLCBHQKVCSW_execbr = newRefExecBrackets(XO, WKKXLCBHQKVCSW, "XO");
        CIHLUILGMFCSWT->append(WKKXLCBHQKVCSW_execbr);
        WKKXLCBHQKVCSW->append(newRefText("4"));
        WKKXLCBHQKVCSW->append_copy(l_1, r_1);
        context->pushExecuteCall(WKKXLCBHQKVCSW_execbr);
        CIHLUILGMFCSWT->append(newRefText("|"));
        DataChain* JEBKRJLPGFGRAT = new DataChain();
        DataContainer* JEBKRJLPGFGRAT_execbr = newRefExecBrackets(XO, JEBKRJLPGFGRAT, "XO");
        CIHLUILGMFCSWT->append(JEBKRJLPGFGRAT_execbr);
        JEBKRJLPGFGRAT->append(newRefText("5"));
        JEBKRJLPGFGRAT->append_copy(l_1, r_1);
        context->pushExecuteCall(JEBKRJLPGFGRAT_execbr);
        CIHLUILGMFCSWT->append(newRefText("|"));
        DataChain* ZBSGUVZIFNHYXW = new DataChain();
        DataContainer* ZBSGUVZIFNHYXW_execbr = newRefExecBrackets(XO, ZBSGUVZIFNHYXW, "XO");
        CIHLUILGMFCSWT->append(ZBSGUVZIFNHYXW_execbr);
        ZBSGUVZIFNHYXW->append(newRefText("6"));
        ZBSGUVZIFNHYXW->append_copy(l_1, r_1);
        context->pushExecuteCall(ZBSGUVZIFNHYXW_execbr);
        CIHLUILGMFCSWT->append(newRefText("|"));
        context->pushExecuteCall(CIHLUILGMFCSWT_execbr);
        DataChain* JSJAVWAUXPANNA = new DataChain();
        DataContainer* JSJAVWAUXPANNA_execbr = newRefExecBrackets(Prout, JSJAVWAUXPANNA, "Prout");
        result->append(JSJAVWAUXPANNA_execbr);
        JSJAVWAUXPANNA->append(newRefText("*===I===I===*"));
        context->pushExecuteCall(JSJAVWAUXPANNA_execbr);
        DataChain* MXJDVZUHNACZYH = new DataChain();
        DataContainer* MXJDVZUHNACZYH_execbr = newRefExecBrackets(Prout, MXJDVZUHNACZYH, "Prout");
        result->append(MXJDVZUHNACZYH_execbr);
        MXJDVZUHNACZYH->append(newRefText("|"));
        DataChain* EPWZOLHUSLRKVW = new DataChain();
        DataContainer* EPWZOLHUSLRKVW_execbr = newRefExecBrackets(XO, EPWZOLHUSLRKVW, "XO");
        MXJDVZUHNACZYH->append(EPWZOLHUSLRKVW_execbr);
        EPWZOLHUSLRKVW->append(newRefText("7"));
        EPWZOLHUSLRKVW->append_copy(l_1, r_1);
        context->pushExecuteCall(EPWZOLHUSLRKVW_execbr);
        MXJDVZUHNACZYH->append(newRefText("|"));
        DataChain* PNVGZMIIZWUDWD = new DataChain();
        DataContainer* PNVGZMIIZWUDWD_execbr = newRefExecBrackets(XO, PNVGZMIIZWUDWD, "XO");
        MXJDVZUHNACZYH->append(PNVGZMIIZWUDWD_execbr);
        PNVGZMIIZWUDWD->append(newRefText("8"));
        PNVGZMIIZWUDWD->append_copy(l_1, r_1);
        context->pushExecuteCall(PNVGZMIIZWUDWD_execbr);
        MXJDVZUHNACZYH->append(newRefText("|"));
        DataChain* FZLKTBQDXGYYIU = new DataChain();
        DataContainer* FZLKTBQDXGYYIU_execbr = newRefExecBrackets(XO, FZLKTBQDXGYYIU, "XO");
        MXJDVZUHNACZYH->append(FZLKTBQDXGYYIU_execbr);
        FZLKTBQDXGYYIU->append(newRefText("9"));
        FZLKTBQDXGYYIU->append_copy(l_1, r_1);
        context->pushExecuteCall(FZLKTBQDXGYYIU_execbr);
        MXJDVZUHNACZYH->append(newRefText("|"));
        context->pushExecuteCall(MXJDVZUHNACZYH_execbr);
        DataChain* DSJVEZKMESBJLK = new DataChain();
        DataContainer* DSJVEZKMESBJLK_execbr = newRefExecBrackets(Prout, DSJVEZKMESBJLK, "Prout");
        result->append(DSJVEZKMESBJLK_execbr);
        DSJVEZKMESBJLK->append(newRefText("*===I===I===*"));
        context->pushExecuteCall(DSJVEZKMESBJLK_execbr);
        return result;
    }
sentence_after_1:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* XO(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ s.1 <any> ]
        /*DEF*/	DataCursor YERTAHNEXHUQMJ;
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        YERTAHNEXHUQMJ = arg_from;
        /*INC*/
        if (!INC(YERTAHNEXHUQMJ, arg_to)) goto sentence_after_1;
        if (! isSymbolType(YERTAHNEXHUQMJ.container->type)) goto sentence_after_1;
        /*SET*/
        r_1 = YERTAHNEXHUQMJ;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor ICBMUSQDKLASOL;
        /*DEF*/
        DataCursor WJXPTXXEUMZFWY;
        /*DEF*/
        DataCursor UCPABQSEFFUNQP;
        /*SET*/
        ICBMUSQDKLASOL = r_1;
        /*INC*/
        if (!INC(ICBMUSQDKLASOL, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (ICBMUSQDKLASOL.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        WJXPTXXEUMZFWY = ICBMUSQDKLASOL.container->value.bracket_data.chain->at_before_first();
        UCPABQSEFFUNQP   = ICBMUSQDKLASOL.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_21;
        /*DEF*/
        DataCursor r_21;
        /*SET*/
        l_21 = WJXPTXXEUMZFWY;
        /*SET*/
        r_21 = WJXPTXXEUMZFWY;
        /*JMP*/
        goto label_KFNNBECBBCJPDY_firststep;
label_KFNNBECBBCJPDY:
        /*INC*/
        if (!INC(r_21, UCPABQSEFFUNQP)) goto sentence_after_1;
label_KFNNBECBBCJPDY_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor JLIBITLLPLXELR;
        /*SET*/
        JLIBITLLPLXELR = r_21;
        if (!SLIDE(JLIBITLLPLXELR, UCPABQSEFFUNQP, l_1, r_1)) goto label_KFNNBECBBCJPDY;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_22;
        /*DEF*/
        DataCursor r_22;
        /*SET*/
        l_22 = JLIBITLLPLXELR;
        /*SET*/
        r_22 = UCPABQSEFFUNQP;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor DKEXDTQUVPTTEY;
        /*DEF*/
        DataCursor HTLQLBBBVOQOZK;
        /*DEF*/
        DataCursor YNAYYRBAQMYJHZ;
        /*SET*/
        DKEXDTQUVPTTEY = ICBMUSQDKLASOL;
        /*INC*/
        if (!INC(DKEXDTQUVPTTEY, arg_to)) goto label_KFNNBECBBCJPDY;
//// ISBRACKET
        if (DKEXDTQUVPTTEY.container->type != struct_bracket) goto label_KFNNBECBBCJPDY;
//// JMP_BRACKET
        HTLQLBBBVOQOZK = DKEXDTQUVPTTEY.container->value.bracket_data.chain->at_before_first();
        YNAYYRBAQMYJHZ   = DKEXDTQUVPTTEY.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_3;
        /*DEF*/
        DataCursor r_3;
        /*SET*/
        l_3 = HTLQLBBBVOQOZK;
        /*SET*/
        r_3 = YNAYYRBAQMYJHZ;
//// [ empty ]
        /*ISEMPTY*/
        if (DKEXDTQUVPTTEY!=0 && arg_to != DKEXDTQUVPTTEY) goto label_KFNNBECBBCJPDY;

// подстановка
        result->append(newRefText("-X-"));
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ s.1 <any> ]
        /*DEF*/	DataCursor XNDSIYFSEXWBIO;
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        XNDSIYFSEXWBIO = arg_from;
        /*INC*/
        if (!INC(XNDSIYFSEXWBIO, arg_to)) goto sentence_after_2;
        if (! isSymbolType(XNDSIYFSEXWBIO.container->type)) goto sentence_after_2;
        /*SET*/
        r_1 = XNDSIYFSEXWBIO;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor EWQVQRTCDLPQMV;
        /*DEF*/
        DataCursor JIFVGYMKGOTZJM;
        /*DEF*/
        DataCursor NZQTMRPNDEVNMT;
        /*SET*/
        EWQVQRTCDLPQMV = r_1;
        /*INC*/
        if (!INC(EWQVQRTCDLPQMV, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (EWQVQRTCDLPQMV.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        JIFVGYMKGOTZJM = EWQVQRTCDLPQMV.container->value.bracket_data.chain->at_before_first();
        NZQTMRPNDEVNMT   = EWQVQRTCDLPQMV.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = JIFVGYMKGOTZJM;
        /*SET*/
        r_2 = NZQTMRPNDEVNMT;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor HJITSSPAQNJRDO;
        /*DEF*/
        DataCursor YJWPYATMLEYQSV;
        /*DEF*/
        DataCursor KPAMSVBMVXRLLI;
        /*SET*/
        HJITSSPAQNJRDO = EWQVQRTCDLPQMV;
        /*INC*/
        if (!INC(HJITSSPAQNJRDO, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (HJITSSPAQNJRDO.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        YJWPYATMLEYQSV = HJITSSPAQNJRDO.container->value.bracket_data.chain->at_before_first();
        KPAMSVBMVXRLLI   = HJITSSPAQNJRDO.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_31;
        /*DEF*/
        DataCursor r_31;
        /*SET*/
        l_31 = YJWPYATMLEYQSV;
        /*SET*/
        r_31 = YJWPYATMLEYQSV;
        /*JMP*/
        goto label_VFEDKJIGAVYXJV_firststep;
label_VFEDKJIGAVYXJV:
        /*INC*/
        if (!INC(r_31, KPAMSVBMVXRLLI)) goto sentence_after_2;
label_VFEDKJIGAVYXJV_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor EQVRBACUIGAIPY;
        /*SET*/
        EQVRBACUIGAIPY = r_31;
        if (!SLIDE(EQVRBACUIGAIPY, KPAMSVBMVXRLLI, l_1, r_1)) goto label_VFEDKJIGAVYXJV;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_32;
        /*DEF*/
        DataCursor r_32;
        /*SET*/
        l_32 = EQVRBACUIGAIPY;
        /*SET*/
        r_32 = KPAMSVBMVXRLLI;
//// [ empty ]
        /*ISEMPTY*/
        if (HJITSSPAQNJRDO!=0 && arg_to != HJITSSPAQNJRDO) goto label_VFEDKJIGAVYXJV;

// подстановка
        result->append(newRefText("-O-"));
        return result;
    }
sentence_after_2:

    {
// сопоставление
//// [ s.1 <any> ]
        /*DEF*/	DataCursor HBBXIPBZNCWHRB;
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        HBBXIPBZNCWHRB = arg_from;
        /*INC*/
        if (!INC(HBBXIPBZNCWHRB, arg_to)) goto sentence_after_3;
        if (! isSymbolType(HBBXIPBZNCWHRB.container->type)) goto sentence_after_3;
        /*SET*/
        r_1 = HBBXIPBZNCWHRB;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor LIRIZXOQPTQQWE;
        /*DEF*/
        DataCursor AAFJEQIOZPYFAU;
        /*DEF*/
        DataCursor UQMVHXKMNXMSYA;
        /*SET*/
        LIRIZXOQPTQQWE = r_1;
        /*INC*/
        if (!INC(LIRIZXOQPTQQWE, arg_to)) goto sentence_after_3;
//// ISBRACKET
        if (LIRIZXOQPTQQWE.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET
        AAFJEQIOZPYFAU = LIRIZXOQPTQQWE.container->value.bracket_data.chain->at_before_first();
        UQMVHXKMNXMSYA   = LIRIZXOQPTQQWE.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = AAFJEQIOZPYFAU;
        /*SET*/
        r_2 = UQMVHXKMNXMSYA;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor MPTLZANOTLSLWU;
        /*DEF*/
        DataCursor HTFQJRRWBWHMQH;
        /*DEF*/
        DataCursor ZKHDKCRFVBEIYI;
        /*SET*/
        MPTLZANOTLSLWU = LIRIZXOQPTQQWE;
        /*INC*/
        if (!INC(MPTLZANOTLSLWU, arg_to)) goto sentence_after_3;
//// ISBRACKET
        if (MPTLZANOTLSLWU.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET
        HTFQJRRWBWHMQH = MPTLZANOTLSLWU.container->value.bracket_data.chain->at_before_first();
        ZKHDKCRFVBEIYI   = MPTLZANOTLSLWU.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_3;
        /*DEF*/
        DataCursor r_3;
        /*SET*/
        l_3 = HTFQJRRWBWHMQH;
        /*SET*/
        r_3 = ZKHDKCRFVBEIYI;
//// [ empty ]
        /*ISEMPTY*/
        if (MPTLZANOTLSLWU!=0 && arg_to != MPTLZANOTLSLWU) goto sentence_after_3;

// подстановка
        result->append_copy(l_1, r_1);
        result->append(newRefText("  "));
        return result;
    }
sentence_after_3:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* Switch(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor PVFVPZHYUJABTQ;
        /*SET*/
        PVFVPZHYUJABTQ = arg_from;
        /*INC*/
        if (!INC(PVFVPZHYUJABTQ, arg_to)) goto sentence_after_1;
        if (PVFVPZHYUJABTQ.container->type != integer || PVFVPZHYUJABTQ.container->value.num != 0) goto sentence_after_1;
//// [ empty ]
        /*ISEMPTY*/
        if (PVFVPZHYUJABTQ!=0 && arg_to != PVFVPZHYUJABTQ) goto sentence_after_1;

// подстановка
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ s.1 <any> ]
        /*DEF*/	DataCursor WWTBKDOGKEMHIB;
        /*DEF*/
        DataCursor l_G;
        /*DEF*/
        DataCursor r_G;
        /*SET*/
        l_G = arg_from;
        /*SET*/
        WWTBKDOGKEMHIB = arg_from;
        /*INC*/
        if (!INC(WWTBKDOGKEMHIB, arg_to)) goto sentence_after_2;
        if (! isSymbolType(WWTBKDOGKEMHIB.container->type)) goto sentence_after_2;
        /*SET*/
        r_G = WWTBKDOGKEMHIB;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor YXRNXSXRZLETBQ;
        /*DEF*/
        DataCursor l_A;
        /*DEF*/
        DataCursor r_A;
        /*SET*/
        l_A = r_G;
        /*SET*/
        YXRNXSXRZLETBQ = r_G;
        /*INC*/
        if (!INC(YXRNXSXRZLETBQ, arg_to)) goto sentence_after_2;
        if (! isSymbolType(YXRNXSXRZLETBQ.container->type)) goto sentence_after_2;
        /*SET*/
        r_A = YXRNXSXRZLETBQ;
//// [ `a` <any> ]
        /*DEF*/
        DataCursor EXKRQOIERNAPLQ;
        /*SET*/
        EXKRQOIERNAPLQ = r_A;
        /*INC*/
        if (!INC(EXKRQOIERNAPLQ, arg_to)) goto sentence_after_2;
        if (EXKRQOIERNAPLQ.container->type != text || *(EXKRQOIERNAPLQ.container->value.text + EXKRQOIERNAPLQ.index) != '=') goto sentence_after_2;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor YJPQOUBVJSEBAL;
        /*DEF*/
        DataCursor l_AA;
        /*DEF*/
        DataCursor r_AA;
        /*SET*/
        l_AA = EXKRQOIERNAPLQ;
        /*SET*/
        YJPQOUBVJSEBAL = EXKRQOIERNAPLQ;
        /*INC*/
        if (!INC(YJPQOUBVJSEBAL, arg_to)) goto sentence_after_2;
        if (! isSymbolType(YJPQOUBVJSEBAL.container->type)) goto sentence_after_2;
        /*SET*/
        r_AA = YJPQOUBVJSEBAL;
//// [ empty ]
        /*ISEMPTY*/
        if (r_AA!=0 && arg_to != r_AA) goto sentence_after_2;

// подстановка
        result->append_copy(l_A, r_A);
        result->append(newRefText("="));
        result->append_copy(l_AA, r_AA);
        return result;
    }
sentence_after_2:

    {
// сопоставление
//// [ s.1 <any> ]
        /*DEF*/	DataCursor WYCZTWZZVEWXOT;
        /*DEF*/
        DataCursor l_G;
        /*DEF*/
        DataCursor r_G;
        /*SET*/
        l_G = arg_from;
        /*SET*/
        WYCZTWZZVEWXOT = arg_from;
        /*INC*/
        if (!INC(WYCZTWZZVEWXOT, arg_to)) goto sentence_after_3;
        if (! isSymbolType(WYCZTWZZVEWXOT.container->type)) goto sentence_after_3;
        /*SET*/
        r_G = WYCZTWZZVEWXOT;
//// [ &.name <any> ]
        /*DEF*/
        DataCursor AKUDKPEDUPKCZL;
        /*SET*/
        AKUDKPEDUPKCZL = r_G;
        if (!SLIDE(AKUDKPEDUPKCZL, arg_to, l_G, r_G)) goto sentence_after_3;
//// [ `a` <any> ]
        /*DEF*/
        DataCursor HWUSKDNEVDCPLB;
        /*SET*/
        HWUSKDNEVDCPLB = AKUDKPEDUPKCZL;
        /*INC*/
        if (!INC(HWUSKDNEVDCPLB, arg_to)) goto sentence_after_3;
        if (HWUSKDNEVDCPLB.container->type != text || *(HWUSKDNEVDCPLB.container->value.text + HWUSKDNEVDCPLB.index) != '=') goto sentence_after_3;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor KLPJMPFDCYQTRC;
        /*DEF*/
        DataCursor l_AA;
        /*DEF*/
        DataCursor r_AA;
        /*SET*/
        l_AA = HWUSKDNEVDCPLB;
        /*SET*/
        KLPJMPFDCYQTRC = HWUSKDNEVDCPLB;
        /*INC*/
        if (!INC(KLPJMPFDCYQTRC, arg_to)) goto sentence_after_3;
        if (! isSymbolType(KLPJMPFDCYQTRC.container->type)) goto sentence_after_3;
        /*SET*/
        r_AA = KLPJMPFDCYQTRC;
//// [ &.name <any> ]
        /*DEF*/
        DataCursor VVVTRFFVPEKKQM;
        /*SET*/
        VVVTRFFVPEKKQM = r_AA;
        if (!SLIDE(VVVTRFFVPEKKQM, arg_to, l_G, r_G)) goto sentence_after_3;
//// [ `a` <any> ]
        /*DEF*/
        DataCursor CUPRYJAUTEUVCZ;
        /*SET*/
        CUPRYJAUTEUVCZ = VVVTRFFVPEKKQM;
        /*INC*/
        if (!INC(CUPRYJAUTEUVCZ, arg_to)) goto sentence_after_3;
        if (CUPRYJAUTEUVCZ.container->type != text || *(CUPRYJAUTEUVCZ.container->value.text + CUPRYJAUTEUVCZ.index) != '=') goto sentence_after_3;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor VICTHRXSXCLPRG;
        /*DEF*/
        DataCursor l_BB;
        /*DEF*/
        DataCursor r_BB;
        /*SET*/
        l_BB = CUPRYJAUTEUVCZ;
        /*SET*/
        VICTHRXSXCLPRG = CUPRYJAUTEUVCZ;
        /*INC*/
        if (!INC(VICTHRXSXCLPRG, arg_to)) goto sentence_after_3;
        if (! isSymbolType(VICTHRXSXCLPRG.container->type)) goto sentence_after_3;
        /*SET*/
        r_BB = VICTHRXSXCLPRG;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = r_BB;
        /*SET*/
        r_e = arg_to;

// подстановка
        DataChain* DIRXXGVZQMEYRO = new DataChain();
        DataContainer* DIRXXGVZQMEYRO_execbr = newRefExecBrackets(Switch, DIRXXGVZQMEYRO, "Switch");
        result->append(DIRXXGVZQMEYRO_execbr);
        DIRXXGVZQMEYRO->append_copy(l_G, r_G);
        DIRXXGVZQMEYRO->append_copy(l_G, r_G);
        DIRXXGVZQMEYRO->append(newRefText("="));
        DataChain* VFICHQNIVFJZAU = new DataChain();
        DataContainer* VFICHQNIVFJZAU_execbr = newRefExecBrackets(Maix, VFICHQNIVFJZAU, "Maix");
        DIRXXGVZQMEYRO->append(VFICHQNIVFJZAU_execbr);
        VFICHQNIVFJZAU->append(newRefText("a"));
        VFICHQNIVFJZAU->append_copy(l_AA, r_AA);
        VFICHQNIVFJZAU->append_copy(l_BB, r_BB);
        DataChain* QFDFTGMOPSRGPU = new DataChain();
        DataContainer* QFDFTGMOPSRGPU_execbr = newRefExecBrackets(Compare, QFDFTGMOPSRGPU, "Compare");
        VFICHQNIVFJZAU->append(QFDFTGMOPSRGPU_execbr);
        QFDFTGMOPSRGPU->append_copy(l_AA, r_AA);
        QFDFTGMOPSRGPU->append_copy(l_BB, r_BB);
        context->pushExecuteCall(QFDFTGMOPSRGPU_execbr);
        context->pushExecuteCall(VFICHQNIVFJZAU_execbr);
        DIRXXGVZQMEYRO->append_copy(l_e, r_e);
        context->pushExecuteCall(DIRXXGVZQMEYRO_execbr);
        return result;
    }
sentence_after_3:

    {
// сопоставление
//// [ s.1 <any> ]
        /*DEF*/	DataCursor GXTUHLCVSPIHAZ;
        /*DEF*/
        DataCursor l_G;
        /*DEF*/
        DataCursor r_G;
        /*SET*/
        l_G = arg_from;
        /*SET*/
        GXTUHLCVSPIHAZ = arg_from;
        /*INC*/
        if (!INC(GXTUHLCVSPIHAZ, arg_to)) goto sentence_after_4;
        if (! isSymbolType(GXTUHLCVSPIHAZ.container->type)) goto sentence_after_4;
        /*SET*/
        r_G = GXTUHLCVSPIHAZ;
//// [ &.name <any> ]
        /*DEF*/
        DataCursor RSSFSZWXBQMURW;
        /*SET*/
        RSSFSZWXBQMURW = r_G;
        if (!SLIDE(RSSFSZWXBQMURW, arg_to, l_G, r_G)) goto sentence_after_4;
//// [ `a` <any> ]
        /*DEF*/
        DataCursor MXCDBHUMRGJQMV;
        /*SET*/
        MXCDBHUMRGJQMV = RSSFSZWXBQMURW;
        /*INC*/
        if (!INC(MXCDBHUMRGJQMV, arg_to)) goto sentence_after_4;
        if (MXCDBHUMRGJQMV.container->type != text || *(MXCDBHUMRGJQMV.container->value.text + MXCDBHUMRGJQMV.index) != '=') goto sentence_after_4;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor NKYRTNSJVWZXSS;
        /*DEF*/
        DataCursor l_AA;
        /*DEF*/
        DataCursor r_AA;
        /*SET*/
        l_AA = MXCDBHUMRGJQMV;
        /*SET*/
        NKYRTNSJVWZXSS = MXCDBHUMRGJQMV;
        /*INC*/
        if (!INC(NKYRTNSJVWZXSS, arg_to)) goto sentence_after_4;
        if (! isSymbolType(NKYRTNSJVWZXSS.container->type)) goto sentence_after_4;
        /*SET*/
        r_AA = NKYRTNSJVWZXSS;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor QXNJOMUYJNJUWR;
        /*DEF*/
        DataCursor l_s;
        /*DEF*/
        DataCursor r_s;
        /*SET*/
        l_s = r_AA;
        /*SET*/
        QXNJOMUYJNJUWR = r_AA;
        /*INC*/
        if (!INC(QXNJOMUYJNJUWR, arg_to)) goto sentence_after_4;
        if (! isSymbolType(QXNJOMUYJNJUWR.container->type)) goto sentence_after_4;
        /*SET*/
        r_s = QXNJOMUYJNJUWR;
//// [ `a` <any> ]
        /*DEF*/
        DataCursor SYXWQYYXCSZPOK;
        /*SET*/
        SYXWQYYXCSZPOK = r_s;
        /*INC*/
        if (!INC(SYXWQYYXCSZPOK, arg_to)) goto sentence_after_4;
        if (SYXWQYYXCSZPOK.container->type != text || *(SYXWQYYXCSZPOK.container->value.text + SYXWQYYXCSZPOK.index) != '=') goto sentence_after_4;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor LWJDRLTBSCIEDP;
        /*DEF*/
        DataCursor l_BB;
        /*DEF*/
        DataCursor r_BB;
        /*SET*/
        l_BB = SYXWQYYXCSZPOK;
        /*SET*/
        LWJDRLTBSCIEDP = SYXWQYYXCSZPOK;
        /*INC*/
        if (!INC(LWJDRLTBSCIEDP, arg_to)) goto sentence_after_4;
        if (! isSymbolType(LWJDRLTBSCIEDP.container->type)) goto sentence_after_4;
        /*SET*/
        r_BB = LWJDRLTBSCIEDP;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = r_BB;
        /*SET*/
        r_e = arg_to;

// подстановка
        DataChain* WAKZTGJHXAUNFQ = new DataChain();
        DataContainer* WAKZTGJHXAUNFQ_execbr = newRefExecBrackets(Switch, WAKZTGJHXAUNFQ, "Switch");
        result->append(WAKZTGJHXAUNFQ_execbr);
        WAKZTGJHXAUNFQ->append_copy(l_G, r_G);
        WAKZTGJHXAUNFQ->append_copy(l_G, r_G);
        WAKZTGJHXAUNFQ->append(newRefText("="));
        WAKZTGJHXAUNFQ->append_copy(l_AA, r_AA);
        WAKZTGJHXAUNFQ->append_copy(l_e, r_e);
        context->pushExecuteCall(WAKZTGJHXAUNFQ_execbr);
        return result;
    }
sentence_after_4:

    {
// сопоставление
//// [ s.1 <any> ]
        /*DEF*/	DataCursor JVXIOHNJQRJSHY;
        /*DEF*/
        DataCursor l_G;
        /*DEF*/
        DataCursor r_G;
        /*SET*/
        l_G = arg_from;
        /*SET*/
        JVXIOHNJQRJSHY = arg_from;
        /*INC*/
        if (!INC(JVXIOHNJQRJSHY, arg_to)) goto sentence_after_5;
        if (! isSymbolType(JVXIOHNJQRJSHY.container->type)) goto sentence_after_5;
        /*SET*/
        r_G = JVXIOHNJQRJSHY;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor MDOVWGEFHJESVH;
        /*DEF*/
        DataCursor l_s;
        /*DEF*/
        DataCursor r_s;
        /*SET*/
        l_s = r_G;
        /*SET*/
        MDOVWGEFHJESVH = r_G;
        /*INC*/
        if (!INC(MDOVWGEFHJESVH, arg_to)) goto sentence_after_5;
        if (! isSymbolType(MDOVWGEFHJESVH.container->type)) goto sentence_after_5;
        /*SET*/
        r_s = MDOVWGEFHJESVH;
//// [ `a` <any> ]
        /*DEF*/
        DataCursor TIZIOJLJDPMOXB;
        /*SET*/
        TIZIOJLJDPMOXB = r_s;
        /*INC*/
        if (!INC(TIZIOJLJDPMOXB, arg_to)) goto sentence_after_5;
        if (TIZIOJLJDPMOXB.container->type != text || *(TIZIOJLJDPMOXB.container->value.text + TIZIOJLJDPMOXB.index) != '=') goto sentence_after_5;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor YUYOPQJKZTVJGK;
        /*DEF*/
        DataCursor l_AA;
        /*DEF*/
        DataCursor r_AA;
        /*SET*/
        l_AA = TIZIOJLJDPMOXB;
        /*SET*/
        YUYOPQJKZTVJGK = TIZIOJLJDPMOXB;
        /*INC*/
        if (!INC(YUYOPQJKZTVJGK, arg_to)) goto sentence_after_5;
        if (! isSymbolType(YUYOPQJKZTVJGK.container->type)) goto sentence_after_5;
        /*SET*/
        r_AA = YUYOPQJKZTVJGK;
//// [ &.name <any> ]
        /*DEF*/
        DataCursor WXKEWPZHBJSUTH;
        /*SET*/
        WXKEWPZHBJSUTH = r_AA;
        if (!SLIDE(WXKEWPZHBJSUTH, arg_to, l_G, r_G)) goto sentence_after_5;
//// [ `a` <any> ]
        /*DEF*/
        DataCursor SYOEFJGWWYEOZL;
        /*SET*/
        SYOEFJGWWYEOZL = WXKEWPZHBJSUTH;
        /*INC*/
        if (!INC(SYOEFJGWWYEOZL, arg_to)) goto sentence_after_5;
        if (SYOEFJGWWYEOZL.container->type != text || *(SYOEFJGWWYEOZL.container->value.text + SYOEFJGWWYEOZL.index) != '=') goto sentence_after_5;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor UHMGABBSQRHCRT;
        /*DEF*/
        DataCursor l_BB;
        /*DEF*/
        DataCursor r_BB;
        /*SET*/
        l_BB = SYOEFJGWWYEOZL;
        /*SET*/
        UHMGABBSQRHCRT = SYOEFJGWWYEOZL;
        /*INC*/
        if (!INC(UHMGABBSQRHCRT, arg_to)) goto sentence_after_5;
        if (! isSymbolType(UHMGABBSQRHCRT.container->type)) goto sentence_after_5;
        /*SET*/
        r_BB = UHMGABBSQRHCRT;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = r_BB;
        /*SET*/
        r_e = arg_to;

// подстановка
        DataChain* QHTYDWPBSZXSBZ = new DataChain();
        DataContainer* QHTYDWPBSZXSBZ_execbr = newRefExecBrackets(Switch, QHTYDWPBSZXSBZ, "Switch");
        result->append(QHTYDWPBSZXSBZ_execbr);
        QHTYDWPBSZXSBZ->append_copy(l_G, r_G);
        QHTYDWPBSZXSBZ->append_copy(l_G, r_G);
        QHTYDWPBSZXSBZ->append(newRefText("="));
        QHTYDWPBSZXSBZ->append_copy(l_BB, r_BB);
        QHTYDWPBSZXSBZ->append_copy(l_e, r_e);
        context->pushExecuteCall(QHTYDWPBSZXSBZ_execbr);
        return result;
    }
sentence_after_5:

    {
// сопоставление
//// [ s.1 <any> ]
        /*DEF*/	DataCursor IYRVGQMLUNWSCP;
        /*DEF*/
        DataCursor l_G;
        /*DEF*/
        DataCursor r_G;
        /*SET*/
        l_G = arg_from;
        /*SET*/
        IYRVGQMLUNWSCP = arg_from;
        /*INC*/
        if (!INC(IYRVGQMLUNWSCP, arg_to)) goto sentence_after_6;
        if (! isSymbolType(IYRVGQMLUNWSCP.container->type)) goto sentence_after_6;
        /*SET*/
        r_G = IYRVGQMLUNWSCP;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor IRZFCBTSEPLKGW;
        /*DEF*/
        DataCursor l_s;
        /*DEF*/
        DataCursor r_s;
        /*SET*/
        l_s = r_G;
        /*SET*/
        IRZFCBTSEPLKGW = r_G;
        /*INC*/
        if (!INC(IRZFCBTSEPLKGW, arg_to)) goto sentence_after_6;
        if (! isSymbolType(IRZFCBTSEPLKGW.container->type)) goto sentence_after_6;
        /*SET*/
        r_s = IRZFCBTSEPLKGW;
//// [ `a` <any> ]
        /*DEF*/
        DataCursor FKHROUOYSRWMQO;
        /*SET*/
        FKHROUOYSRWMQO = r_s;
        /*INC*/
        if (!INC(FKHROUOYSRWMQO, arg_to)) goto sentence_after_6;
        if (FKHROUOYSRWMQO.container->type != text || *(FKHROUOYSRWMQO.container->value.text + FKHROUOYSRWMQO.index) != '=') goto sentence_after_6;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor JAHYQMFEVSDCOM;
        /*DEF*/
        DataCursor l_AA;
        /*DEF*/
        DataCursor r_AA;
        /*SET*/
        l_AA = FKHROUOYSRWMQO;
        /*SET*/
        JAHYQMFEVSDCOM = FKHROUOYSRWMQO;
        /*INC*/
        if (!INC(JAHYQMFEVSDCOM, arg_to)) goto sentence_after_6;
        if (! isSymbolType(JAHYQMFEVSDCOM.container->type)) goto sentence_after_6;
        /*SET*/
        r_AA = JAHYQMFEVSDCOM;
//// [ &.name <any> ]
        /*DEF*/
        DataCursor RYHGDMLXUKWYZC;
        /*SET*/
        RYHGDMLXUKWYZC = r_AA;
        if (!SLIDE(RYHGDMLXUKWYZC, arg_to, l_s, r_s)) goto sentence_after_6;
//// [ `a` <any> ]
        /*DEF*/
        DataCursor PRSKWGXULSUCKB;
        /*SET*/
        PRSKWGXULSUCKB = RYHGDMLXUKWYZC;
        /*INC*/
        if (!INC(PRSKWGXULSUCKB, arg_to)) goto sentence_after_6;
        if (PRSKWGXULSUCKB.container->type != text || *(PRSKWGXULSUCKB.container->value.text + PRSKWGXULSUCKB.index) != '=') goto sentence_after_6;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor SEPJEISZSGCEZW;
        /*DEF*/
        DataCursor l_BB;
        /*DEF*/
        DataCursor r_BB;
        /*SET*/
        l_BB = PRSKWGXULSUCKB;
        /*SET*/
        SEPJEISZSGCEZW = PRSKWGXULSUCKB;
        /*INC*/
        if (!INC(SEPJEISZSGCEZW, arg_to)) goto sentence_after_6;
        if (! isSymbolType(SEPJEISZSGCEZW.container->type)) goto sentence_after_6;
        /*SET*/
        r_BB = SEPJEISZSGCEZW;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = r_BB;
        /*SET*/
        r_e = arg_to;

// подстановка
        DataChain* GZRIOQRQETKZFB = new DataChain();
        DataContainer* GZRIOQRQETKZFB_execbr = newRefExecBrackets(Switch, GZRIOQRQETKZFB, "Switch");
        result->append(GZRIOQRQETKZFB_execbr);
        GZRIOQRQETKZFB->append_copy(l_G, r_G);
        GZRIOQRQETKZFB->append_copy(l_s, r_s);
        GZRIOQRQETKZFB->append(newRefText("="));
        DataChain* LDJIEMSFZBHZFN = new DataChain();
        DataContainer* LDJIEMSFZBHZFN_execbr = newRefExecBrackets(Maix, LDJIEMSFZBHZFN, "Maix");
        GZRIOQRQETKZFB->append(LDJIEMSFZBHZFN_execbr);
        LDJIEMSFZBHZFN->append(newRefText("i"));
        LDJIEMSFZBHZFN->append_copy(l_AA, r_AA);
        LDJIEMSFZBHZFN->append_copy(l_BB, r_BB);
        DataChain* WYWMXXGDPYLRAX = new DataChain();
        DataContainer* WYWMXXGDPYLRAX_execbr = newRefExecBrackets(Compare, WYWMXXGDPYLRAX, "Compare");
        LDJIEMSFZBHZFN->append(WYWMXXGDPYLRAX_execbr);
        WYWMXXGDPYLRAX->append_copy(l_AA, r_AA);
        WYWMXXGDPYLRAX->append_copy(l_BB, r_BB);
        context->pushExecuteCall(WYWMXXGDPYLRAX_execbr);
        context->pushExecuteCall(LDJIEMSFZBHZFN_execbr);
        GZRIOQRQETKZFB->append_copy(l_e, r_e);
        context->pushExecuteCall(GZRIOQRQETKZFB_execbr);
        return result;
    }
sentence_after_6:

    {
// сопоставление
//// [ e.1 ]
        /*DEF*/	DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = arg_from;
        /*SET*/
        r_e = arg_to;

// подстановка
        DataChain* GLMTBIYLBHCWHL = new DataChain();
        DataContainer* GLMTBIYLBHCWHL_execbr = newRefExecBrackets(Prout, GLMTBIYLBHCWHL, "Prout");
        result->append(GLMTBIYLBHCWHL_execbr);
        GLMTBIYLBHCWHL->append(newRefText("Sw unk: "));
        GLMTBIYLBHCWHL->append_copy(l_e, r_e);
        context->pushExecuteCall(GLMTBIYLBHCWHL_execbr);
        return result;
    }
sentence_after_7:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* Maix(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor SYOYHGMGOPPRZA;
        /*SET*/
        SYOYHGMGOPPRZA = arg_from;
        /*INC*/
        if (!INC(SYOYHGMGOPPRZA, arg_to)) goto sentence_after_1;
        if (SYOYHGMGOPPRZA.container->type != text || *(SYOYHGMGOPPRZA.container->value.text + SYOYHGMGOPPRZA.index) != 'a') goto sentence_after_1;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor XQMOMSYHGAGIUP;
        /*DEF*/
        DataCursor l_A;
        /*DEF*/
        DataCursor r_A;
        /*SET*/
        l_A = SYOYHGMGOPPRZA;
        /*SET*/
        XQMOMSYHGAGIUP = SYOYHGMGOPPRZA;
        /*INC*/
        if (!INC(XQMOMSYHGAGIUP, arg_to)) goto sentence_after_1;
        if (! isSymbolType(XQMOMSYHGAGIUP.container->type)) goto sentence_after_1;
        /*SET*/
        r_A = XQMOMSYHGAGIUP;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor JQBZXTHTOPOTMI;
        /*DEF*/
        DataCursor l_B;
        /*DEF*/
        DataCursor r_B;
        /*SET*/
        l_B = r_A;
        /*SET*/
        JQBZXTHTOPOTMI = r_A;
        /*INC*/
        if (!INC(JQBZXTHTOPOTMI, arg_to)) goto sentence_after_1;
        if (! isSymbolType(JQBZXTHTOPOTMI.container->type)) goto sentence_after_1;
        /*SET*/
        r_B = JQBZXTHTOPOTMI;
//// [ `a` <any> ]
        /*DEF*/
        DataCursor TNQWTOETONXWZG;
        /*SET*/
        TNQWTOETONXWZG = r_B;
        /*INC*/
        if (!INC(TNQWTOETONXWZG, arg_to)) goto sentence_after_1;
        if (TNQWTOETONXWZG.container->type != text || *(TNQWTOETONXWZG.container->value.text + TNQWTOETONXWZG.index) != '-') goto sentence_after_1;
//// [ empty ]
        /*ISEMPTY*/
        if (TNQWTOETONXWZG!=0 && arg_to != TNQWTOETONXWZG) goto sentence_after_1;

// подстановка
        result->append_copy(l_B, r_B);
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor TMSCKMAALKICSN;
        /*SET*/
        TMSCKMAALKICSN = arg_from;
        /*INC*/
        if (!INC(TMSCKMAALKICSN, arg_to)) goto sentence_after_2;
        if (TMSCKMAALKICSN.container->type != text || *(TMSCKMAALKICSN.container->value.text + TMSCKMAALKICSN.index) != 'a') goto sentence_after_2;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor XUCOVTYKRXAWZA;
        /*DEF*/
        DataCursor l_A;
        /*DEF*/
        DataCursor r_A;
        /*SET*/
        l_A = TMSCKMAALKICSN;
        /*SET*/
        XUCOVTYKRXAWZA = TMSCKMAALKICSN;
        /*INC*/
        if (!INC(XUCOVTYKRXAWZA, arg_to)) goto sentence_after_2;
        if (! isSymbolType(XUCOVTYKRXAWZA.container->type)) goto sentence_after_2;
        /*SET*/
        r_A = XUCOVTYKRXAWZA;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor DJXWXQMNDHLDTT;
        /*DEF*/
        DataCursor l_B;
        /*DEF*/
        DataCursor r_B;
        /*SET*/
        l_B = r_A;
        /*SET*/
        DJXWXQMNDHLDTT = r_A;
        /*INC*/
        if (!INC(DJXWXQMNDHLDTT, arg_to)) goto sentence_after_2;
        if (! isSymbolType(DJXWXQMNDHLDTT.container->type)) goto sentence_after_2;
        /*SET*/
        r_B = DJXWXQMNDHLDTT;
//// [ `a` <any> ]
        /*DEF*/
        DataCursor XSKNXTEZNJSQTF;
        /*SET*/
        XSKNXTEZNJSQTF = r_B;
        /*INC*/
        if (!INC(XSKNXTEZNJSQTF, arg_to)) goto sentence_after_2;
        if (XSKNXTEZNJSQTF.container->type != text || *(XSKNXTEZNJSQTF.container->value.text + XSKNXTEZNJSQTF.index) != '+') goto sentence_after_2;
//// [ empty ]
        /*ISEMPTY*/
        if (XSKNXTEZNJSQTF!=0 && arg_to != XSKNXTEZNJSQTF) goto sentence_after_2;

// подстановка
        result->append_copy(l_A, r_A);
        return result;
    }
sentence_after_2:

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor KWYWTTJZPPKWLB;
        /*SET*/
        KWYWTTJZPPKWLB = arg_from;
        /*INC*/
        if (!INC(KWYWTTJZPPKWLB, arg_to)) goto sentence_after_3;
        if (KWYWTTJZPPKWLB.container->type != text || *(KWYWTTJZPPKWLB.container->value.text + KWYWTTJZPPKWLB.index) != 'i') goto sentence_after_3;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor MJAHTPUTIEBPBB;
        /*DEF*/
        DataCursor l_B;
        /*DEF*/
        DataCursor r_B;
        /*SET*/
        l_B = KWYWTTJZPPKWLB;
        /*SET*/
        MJAHTPUTIEBPBB = KWYWTTJZPPKWLB;
        /*INC*/
        if (!INC(MJAHTPUTIEBPBB, arg_to)) goto sentence_after_3;
        if (! isSymbolType(MJAHTPUTIEBPBB.container->type)) goto sentence_after_3;
        /*SET*/
        r_B = MJAHTPUTIEBPBB;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor MUEGYRHLTHXWGJ;
        /*DEF*/
        DataCursor l_A;
        /*DEF*/
        DataCursor r_A;
        /*SET*/
        l_A = r_B;
        /*SET*/
        MUEGYRHLTHXWGJ = r_B;
        /*INC*/
        if (!INC(MUEGYRHLTHXWGJ, arg_to)) goto sentence_after_3;
        if (! isSymbolType(MUEGYRHLTHXWGJ.container->type)) goto sentence_after_3;
        /*SET*/
        r_A = MUEGYRHLTHXWGJ;
//// [ `a` <any> ]
        /*DEF*/
        DataCursor PRWVHSHZYAVQYE;
        /*SET*/
        PRWVHSHZYAVQYE = r_A;
        /*INC*/
        if (!INC(PRWVHSHZYAVQYE, arg_to)) goto sentence_after_3;
        if (PRWVHSHZYAVQYE.container->type != text || *(PRWVHSHZYAVQYE.container->value.text + PRWVHSHZYAVQYE.index) != '-') goto sentence_after_3;
//// [ empty ]
        /*ISEMPTY*/
        if (PRWVHSHZYAVQYE!=0 && arg_to != PRWVHSHZYAVQYE) goto sentence_after_3;

// подстановка
        result->append_copy(l_B, r_B);
        return result;
    }
sentence_after_3:

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor OIUOZXQTIHWAUR;
        /*SET*/
        OIUOZXQTIHWAUR = arg_from;
        /*INC*/
        if (!INC(OIUOZXQTIHWAUR, arg_to)) goto sentence_after_4;
        if (OIUOZXQTIHWAUR.container->type != text || *(OIUOZXQTIHWAUR.container->value.text + OIUOZXQTIHWAUR.index) != 'i') goto sentence_after_4;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor OQRDQWCVLXZIPO;
        /*DEF*/
        DataCursor l_B;
        /*DEF*/
        DataCursor r_B;
        /*SET*/
        l_B = OIUOZXQTIHWAUR;
        /*SET*/
        OQRDQWCVLXZIPO = OIUOZXQTIHWAUR;
        /*INC*/
        if (!INC(OQRDQWCVLXZIPO, arg_to)) goto sentence_after_4;
        if (! isSymbolType(OQRDQWCVLXZIPO.container->type)) goto sentence_after_4;
        /*SET*/
        r_B = OQRDQWCVLXZIPO;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor DIISPQNZOMCWVA;
        /*DEF*/
        DataCursor l_A;
        /*DEF*/
        DataCursor r_A;
        /*SET*/
        l_A = r_B;
        /*SET*/
        DIISPQNZOMCWVA = r_B;
        /*INC*/
        if (!INC(DIISPQNZOMCWVA, arg_to)) goto sentence_after_4;
        if (! isSymbolType(DIISPQNZOMCWVA.container->type)) goto sentence_after_4;
        /*SET*/
        r_A = DIISPQNZOMCWVA;
//// [ `a` <any> ]
        /*DEF*/
        DataCursor PTGRGDFNYYTKWW;
        /*SET*/
        PTGRGDFNYYTKWW = r_A;
        /*INC*/
        if (!INC(PTGRGDFNYYTKWW, arg_to)) goto sentence_after_4;
        if (PTGRGDFNYYTKWW.container->type != text || *(PTGRGDFNYYTKWW.container->value.text + PTGRGDFNYYTKWW.index) != '+') goto sentence_after_4;
//// [ empty ]
        /*ISEMPTY*/
        if (PTGRGDFNYYTKWW!=0 && arg_to != PTGRGDFNYYTKWW) goto sentence_after_4;

// подстановка
        result->append_copy(l_A, r_A);
        return result;
    }
sentence_after_4:

    {
// сопоставление
//// [ e.1 <any> ]
        /*DEF*/	DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = arg_from;
        /*SET*/
        r_e = arg_from;
        /*JMP*/
        goto label_GLFCIEBDUTOEUN_firststep;
label_GLFCIEBDUTOEUN:
        /*INC*/
        if (!INC(r_e, arg_to)) goto sentence_after_5;
label_GLFCIEBDUTOEUN_firststep:
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor FHDAXPHBSYWZTP;
        /*DEF*/
        DataCursor l_A;
        /*DEF*/
        DataCursor r_A;
        /*SET*/
        l_A = r_e;
        /*SET*/
        FHDAXPHBSYWZTP = r_e;
        /*INC*/
        if (!INC(FHDAXPHBSYWZTP, arg_to)) goto label_GLFCIEBDUTOEUN;
        if (! isSymbolType(FHDAXPHBSYWZTP.container->type)) goto label_GLFCIEBDUTOEUN;
        /*SET*/
        r_A = FHDAXPHBSYWZTP;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor WJNGJNCPXRJVBV;
        /*DEF*/
        DataCursor l_zn;
        /*DEF*/
        DataCursor r_zn;
        /*SET*/
        l_zn = r_A;
        /*SET*/
        WJNGJNCPXRJVBV = r_A;
        /*INC*/
        if (!INC(WJNGJNCPXRJVBV, arg_to)) goto label_GLFCIEBDUTOEUN;
        if (! isSymbolType(WJNGJNCPXRJVBV.container->type)) goto label_GLFCIEBDUTOEUN;
        /*SET*/
        r_zn = WJNGJNCPXRJVBV;
//// [ empty ]
        /*ISEMPTY*/
        if (r_zn!=0 && arg_to != r_zn) goto label_GLFCIEBDUTOEUN;

// подстановка
        result->append_copy(l_A, r_A);
        return result;
    }
sentence_after_5:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* WriteXO(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ empty ]
        /*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_1;

// подстановка
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor CCEFKBEMGSDYMZ;
        /*DEF*/
        DataCursor MMKWDEHFKRUQBY;
        /*DEF*/
        DataCursor VECMPESROMDXLL;
        /*SET*/
        CCEFKBEMGSDYMZ = arg_from;
        /*INC*/
        if (!INC(CCEFKBEMGSDYMZ, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (CCEFKBEMGSDYMZ.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        MMKWDEHFKRUQBY = CCEFKBEMGSDYMZ.container->value.bracket_data.chain->at_before_first();
        VECMPESROMDXLL   = CCEFKBEMGSDYMZ.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor UBRYYESHQLZMRE;
        /*DEF*/
        DataCursor l_g;
        /*DEF*/
        DataCursor r_g;
        /*SET*/
        l_g = MMKWDEHFKRUQBY;
        /*SET*/
        UBRYYESHQLZMRE = MMKWDEHFKRUQBY;
        /*INC*/
        if (!INC(UBRYYESHQLZMRE, VECMPESROMDXLL)) goto sentence_after_2;
        if (! isSymbolType(UBRYYESHQLZMRE.container->type)) goto sentence_after_2;
        /*SET*/
        r_g = UBRYYESHQLZMRE;
//// [ empty ]
        /*ISEMPTY*/
        if (r_g!=0 && VECMPESROMDXLL != r_g) goto sentence_after_2;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor WQNKQITXGIIGQU;
        /*DEF*/
        DataCursor SKWTCZNLTERXBL;
        /*DEF*/
        DataCursor TZYDYZVAHNKIXJ;
        /*SET*/
        WQNKQITXGIIGQU = CCEFKBEMGSDYMZ;
        /*INC*/
        if (!INC(WQNKQITXGIIGQU, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (WQNKQITXGIIGQU.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        SKWTCZNLTERXBL = WQNKQITXGIIGQU.container->value.bracket_data.chain->at_before_first();
        TZYDYZVAHNKIXJ   = WQNKQITXGIIGQU.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = SKWTCZNLTERXBL;
        /*SET*/
        r_1 = TZYDYZVAHNKIXJ;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor WZZTDJPQSUOWKV;
        /*DEF*/
        DataCursor FCCOCKVRJBFRJP;
        /*DEF*/
        DataCursor CGDJDRWDNPOSRJ;
        /*SET*/
        WZZTDJPQSUOWKV = WQNKQITXGIIGQU;
        /*INC*/
        if (!INC(WZZTDJPQSUOWKV, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (WZZTDJPQSUOWKV.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        FCCOCKVRJBFRJP = WZZTDJPQSUOWKV.container->value.bracket_data.chain->at_before_first();
        CGDJDRWDNPOSRJ   = WZZTDJPQSUOWKV.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = FCCOCKVRJBFRJP;
        /*SET*/
        r_2 = CGDJDRWDNPOSRJ;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor GDRQRVQTVPPAZH;
        /*DEF*/
        DataCursor LTJQVCCLPEZTSJ;
        /*DEF*/
        DataCursor PYNZFROTQPOXMW;
        /*SET*/
        GDRQRVQTVPPAZH = WZZTDJPQSUOWKV;
        /*INC*/
        if (!INC(GDRQRVQTVPPAZH, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (GDRQRVQTVPPAZH.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        LTJQVCCLPEZTSJ = GDRQRVQTVPPAZH.container->value.bracket_data.chain->at_before_first();
        PYNZFROTQPOXMW   = GDRQRVQTVPPAZH.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_n;
        /*DEF*/
        DataCursor r_n;
        /*SET*/
        l_n = LTJQVCCLPEZTSJ;
        /*SET*/
        r_n = PYNZFROTQPOXMW;
//// [ empty ]
        /*ISEMPTY*/
        if (GDRQRVQTVPPAZH!=0 && arg_to != GDRQRVQTVPPAZH) goto sentence_after_2;

// подстановка
        DataChain* HHWEWNVCBVDKUZ = new DataChain();
        DataContainer* HHWEWNVCBVDKUZ_execbr = newRefExecBrackets(WXOif, HHWEWNVCBVDKUZ, "WXOif");
        result->append(HHWEWNVCBVDKUZ_execbr);
        DataChain* IFIFRTWQQEOJUE = new DataChain();
        HHWEWNVCBVDKUZ->append(newRefStructBrackets(IFIFRTWQQEOJUE));
        IFIFRTWQQEOJUE->append_copy(l_g, r_g);
        DataChain* QBNSKWZEEWZKAO = new DataChain();
        HHWEWNVCBVDKUZ->append(newRefStructBrackets(QBNSKWZEEWZKAO));
        DataChain* JURSQGSCZVHHUJ = new DataChain();
        DataContainer* JURSQGSCZVHHUJ_execbr = newRefExecBrackets(Strategy, JURSQGSCZVHHUJ, "Strategy");
        QBNSKWZEEWZKAO->append(JURSQGSCZVHHUJ_execbr);
        JURSQGSCZVHHUJ->append_copy(l_1, r_1);
        context->pushExecuteCall(JURSQGSCZVHHUJ_execbr);
        DataChain* ZUMIGOFHWBKKFL = new DataChain();
        HHWEWNVCBVDKUZ->append(newRefStructBrackets(ZUMIGOFHWBKKFL));
        DataChain* UWZKCTKAGXKSMF = new DataChain();
        DataContainer* UWZKCTKAGXKSMF_execbr = newRefExecBrackets(Strategy, UWZKCTKAGXKSMF, "Strategy");
        ZUMIGOFHWBKKFL->append(UWZKCTKAGXKSMF_execbr);
        UWZKCTKAGXKSMF->append_copy(l_2, r_2);
        context->pushExecuteCall(UWZKCTKAGXKSMF_execbr);
        DataChain* AUWINSJLSOJTRX = new DataChain();
        HHWEWNVCBVDKUZ->append(newRefStructBrackets(AUWINSJLSOJTRX));
        DataChain* HWMHLVBYPECJEI = new DataChain();
        DataContainer* HWMHLVBYPECJEI_execbr = newRefExecBrackets(Strategy, HWMHLVBYPECJEI, "Strategy");
        AUWINSJLSOJTRX->append(HWMHLVBYPECJEI_execbr);
        HWMHLVBYPECJEI->append_copy(l_n, r_n);
        context->pushExecuteCall(HWMHLVBYPECJEI_execbr);
        DataChain* WWSTNEUIQUBPGU = new DataChain();
        HHWEWNVCBVDKUZ->append(newRefStructBrackets(WWSTNEUIQUBPGU));
        WWSTNEUIQUBPGU->append_copy(l_1, r_1);
        DataChain* GWGNMIKDWICKDI = new DataChain();
        HHWEWNVCBVDKUZ->append(newRefStructBrackets(GWGNMIKDWICKDI));
        GWGNMIKDWICKDI->append_copy(l_2, r_2);
        DataChain* LSNPDQSVMTERDF = new DataChain();
        HHWEWNVCBVDKUZ->append(newRefStructBrackets(LSNPDQSVMTERDF));
        LSNPDQSVMTERDF->append_copy(l_n, r_n);
        context->pushExecuteCall(HHWEWNVCBVDKUZ_execbr);
        return result;
    }
sentence_after_2:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* WXOif(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor BLHWBAFBGARCSF;
        /*DEF*/
        DataCursor IJYLBIIMOFGXEI;
        /*DEF*/
        DataCursor RPBTYWQZAPKKCA;
        /*SET*/
        BLHWBAFBGARCSF = arg_from;
        /*INC*/
        if (!INC(BLHWBAFBGARCSF, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (BLHWBAFBGARCSF.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        IJYLBIIMOFGXEI = BLHWBAFBGARCSF.container->value.bracket_data.chain->at_before_first();
        RPBTYWQZAPKKCA   = BLHWBAFBGARCSF.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ]
        /*DEF*/
        DataCursor FCOMVNTMDHZXLE;
        /*SET*/
        FCOMVNTMDHZXLE = IJYLBIIMOFGXEI;
        /*INC*/
        if (!INC(FCOMVNTMDHZXLE, RPBTYWQZAPKKCA)) goto sentence_after_1;
        if (FCOMVNTMDHZXLE.container->type != text || *(FCOMVNTMDHZXLE.container->value.text + FCOMVNTMDHZXLE.index) != '1') goto sentence_after_1;
//// [ empty ]
        /*ISEMPTY*/
        if (FCOMVNTMDHZXLE!=0 && RPBTYWQZAPKKCA != FCOMVNTMDHZXLE) goto sentence_after_1;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_eee1;
        /*DEF*/
        DataCursor r_eee1;
        /*SET*/
        l_eee1 = BLHWBAFBGARCSF;
        /*SET*/
        r_eee1 = BLHWBAFBGARCSF;
        /*JMP*/
        goto label_YCWMFYAQQIANNY_firststep;
label_YCWMFYAQQIANNY:
        /*INC*/
        if (!INC(r_eee1, arg_to)) goto sentence_after_1;
label_YCWMFYAQQIANNY_firststep:
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor HQOUIZVEAVGZJW;
        /*DEF*/
        DataCursor OBLSGWNKVJLNIV;
        /*DEF*/
        DataCursor QCWVZXTCTHYNMU;
        /*SET*/
        HQOUIZVEAVGZJW = r_eee1;
        /*INC*/
        if (!INC(HQOUIZVEAVGZJW, arg_to)) goto label_YCWMFYAQQIANNY;
//// ISBRACKET
        if (HQOUIZVEAVGZJW.container->type != struct_bracket) goto label_YCWMFYAQQIANNY;
//// JMP_BRACKET
        OBLSGWNKVJLNIV = HQOUIZVEAVGZJW.container->value.bracket_data.chain->at_before_first();
        QCWVZXTCTHYNMU   = HQOUIZVEAVGZJW.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = OBLSGWNKVJLNIV;
        /*SET*/
        r_1 = OBLSGWNKVJLNIV;
        /*JMP*/
        goto label_XQKWWMTFISGGLG_firststep;
label_XQKWWMTFISGGLG:
        /*INC*/
        if (!INC(r_1, QCWVZXTCTHYNMU)) goto label_YCWMFYAQQIANNY;
label_XQKWWMTFISGGLG_firststep:
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor COXPIPYTDBAMRY;
        /*DEF*/
        DataCursor l_A;
        /*DEF*/
        DataCursor r_A;
        /*SET*/
        l_A = r_1;
        /*SET*/
        COXPIPYTDBAMRY = r_1;
        /*INC*/
        if (!INC(COXPIPYTDBAMRY, QCWVZXTCTHYNMU)) goto label_XQKWWMTFISGGLG;
        if (! isSymbolType(COXPIPYTDBAMRY.container->type)) goto label_XQKWWMTFISGGLG;
        /*SET*/
        r_A = COXPIPYTDBAMRY;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = r_A;
        /*SET*/
        r_2 = r_A;
        /*JMP*/
        goto label_KBOKMWGSDDPQKR_firststep;
label_KBOKMWGSDDPQKR:
        /*INC*/
        if (!INC(r_2, QCWVZXTCTHYNMU)) goto label_XQKWWMTFISGGLG;
label_KBOKMWGSDDPQKR_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor ZYJCHZTMIEPAGW;
        /*SET*/
        ZYJCHZTMIEPAGW = r_2;
        if (!SLIDE(ZYJCHZTMIEPAGW, QCWVZXTCTHYNMU, l_A, r_A)) goto label_KBOKMWGSDDPQKR;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_3;
        /*DEF*/
        DataCursor r_3;
        /*SET*/
        l_3 = ZYJCHZTMIEPAGW;
        /*SET*/
        r_3 = QCWVZXTCTHYNMU;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_eee2;
        /*DEF*/
        DataCursor r_eee2;
        /*SET*/
        l_eee2 = HQOUIZVEAVGZJW;
        /*SET*/
        r_eee2 = HQOUIZVEAVGZJW;
        /*JMP*/
        goto label_HROQKHWUDBCIHP_firststep;
label_HROQKHWUDBCIHP:
        /*INC*/
        if (!INC(r_eee2, arg_to)) goto label_KBOKMWGSDDPQKR;
label_HROQKHWUDBCIHP_firststep:
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor QWAQZXUGKVAKVL;
        /*DEF*/
        DataCursor AVKSWFZSDBVQID;
        /*DEF*/
        DataCursor HTBCDEYTMPPHKU;
        /*SET*/
        QWAQZXUGKVAKVL = r_eee2;
        /*INC*/
        if (!INC(QWAQZXUGKVAKVL, arg_to)) goto label_HROQKHWUDBCIHP;
//// ISBRACKET
        if (QWAQZXUGKVAKVL.container->type != struct_bracket) goto label_HROQKHWUDBCIHP;
//// JMP_BRACKET
        AVKSWFZSDBVQID = QWAQZXUGKVAKVL.container->value.bracket_data.chain->at_before_first();
        HTBCDEYTMPPHKU   = QWAQZXUGKVAKVL.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_n1;
        /*DEF*/
        DataCursor r_n1;
        /*SET*/
        l_n1 = AVKSWFZSDBVQID;
        /*SET*/
        r_n1 = AVKSWFZSDBVQID;
        /*JMP*/
        goto label_HSXORPUFWHJRUT_firststep;
label_HSXORPUFWHJRUT:
        /*INC*/
        if (!INC(r_n1, HTBCDEYTMPPHKU)) goto label_HROQKHWUDBCIHP;
label_HSXORPUFWHJRUT_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor KSSLHLRXLYDXVK;
        /*SET*/
        KSSLHLRXLYDXVK = r_n1;
        if (!SLIDE(KSSLHLRXLYDXVK, HTBCDEYTMPPHKU, l_A, r_A)) goto label_HSXORPUFWHJRUT;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_n2;
        /*DEF*/
        DataCursor r_n2;
        /*SET*/
        l_n2 = KSSLHLRXLYDXVK;
        /*SET*/
        r_n2 = HTBCDEYTMPPHKU;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor OSAGGMPBGZVBAF;
        /*DEF*/
        DataCursor AZJOHQSSWTORCK;
        /*DEF*/
        DataCursor QAXSREHNRLYJIW;
        /*SET*/
        OSAGGMPBGZVBAF = QWAQZXUGKVAKVL;
        /*INC*/
        if (!INC(OSAGGMPBGZVBAF, arg_to)) goto label_HSXORPUFWHJRUT;
//// ISBRACKET
        if (OSAGGMPBGZVBAF.container->type != struct_bracket) goto label_HSXORPUFWHJRUT;
//// JMP_BRACKET
        AZJOHQSSWTORCK = OSAGGMPBGZVBAF.container->value.bracket_data.chain->at_before_first();
        QAXSREHNRLYJIW   = OSAGGMPBGZVBAF.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_e1;
        /*DEF*/
        DataCursor r_e1;
        /*SET*/
        l_e1 = AZJOHQSSWTORCK;
        /*SET*/
        r_e1 = QAXSREHNRLYJIW;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor TMHGLKOZFKMMXT;
        /*DEF*/
        DataCursor YVOXHFKXOPVYBJ;
        /*DEF*/
        DataCursor ZOXHZUBDNTOAMZ;
        /*SET*/
        TMHGLKOZFKMMXT = OSAGGMPBGZVBAF;
        /*INC*/
        if (!INC(TMHGLKOZFKMMXT, arg_to)) goto label_HSXORPUFWHJRUT;
//// ISBRACKET
        if (TMHGLKOZFKMMXT.container->type != struct_bracket) goto label_HSXORPUFWHJRUT;
//// JMP_BRACKET
        YVOXHFKXOPVYBJ = TMHGLKOZFKMMXT.container->value.bracket_data.chain->at_before_first();
        ZOXHZUBDNTOAMZ   = TMHGLKOZFKMMXT.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_e2;
        /*DEF*/
        DataCursor r_e2;
        /*SET*/
        l_e2 = YVOXHFKXOPVYBJ;
        /*SET*/
        r_e2 = ZOXHZUBDNTOAMZ;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor OTTCJTUEGMPQKC;
        /*DEF*/
        DataCursor DBBGCKJQTEBICH;
        /*DEF*/
        DataCursor ZNPPRQISWBDHOY;
        /*SET*/
        OTTCJTUEGMPQKC = TMHGLKOZFKMMXT;
        /*INC*/
        if (!INC(OTTCJTUEGMPQKC, arg_to)) goto label_HSXORPUFWHJRUT;
//// ISBRACKET
        if (OTTCJTUEGMPQKC.container->type != struct_bracket) goto label_HSXORPUFWHJRUT;
//// JMP_BRACKET
        DBBGCKJQTEBICH = OTTCJTUEGMPQKC.container->value.bracket_data.chain->at_before_first();
        ZNPPRQISWBDHOY   = OTTCJTUEGMPQKC.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_n;
        /*DEF*/
        DataCursor r_n;
        /*SET*/
        l_n = DBBGCKJQTEBICH;
        /*SET*/
        r_n = ZNPPRQISWBDHOY;
//// [ empty ]
        /*ISEMPTY*/
        if (OTTCJTUEGMPQKC!=0 && arg_to != OTTCJTUEGMPQKC) goto label_HSXORPUFWHJRUT;

// подстановка
        result->append(newRefText("#"));
        DataChain* NCSAETLGBFVIOC = new DataChain();
        DataContainer* NCSAETLGBFVIOC_execbr = newRefExecBrackets(Lins, NCSAETLGBFVIOC, "Lins");
        result->append(NCSAETLGBFVIOC_execbr);
        DataChain* FWXWDRNLFFBFHV = new DataChain();
        NCSAETLGBFVIOC->append(newRefStructBrackets(FWXWDRNLFFBFHV));
        FWXWDRNLFFBFHV->append_copy(l_n, r_n);
        DataChain* YXZUKJWOCYHZQJ = new DataChain();
        DataContainer* YXZUKJWOCYHZQJ_execbr = newRefExecBrackets(AntiStrategy, YXZUKJWOCYHZQJ, "AntiStrategy");
        NCSAETLGBFVIOC->append(YXZUKJWOCYHZQJ_execbr);
        YXZUKJWOCYHZQJ->append_copy(l_A, r_A);
        context->pushExecuteCall(YXZUKJWOCYHZQJ_execbr);
        context->pushExecuteCall(NCSAETLGBFVIOC_execbr);
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor ZDHTBRRRLLKTCH;
        /*DEF*/
        DataCursor FNCTPIRNAWONYD;
        /*DEF*/
        DataCursor WWVUABUQCIMCNL;
        /*SET*/
        ZDHTBRRRLLKTCH = arg_from;
        /*INC*/
        if (!INC(ZDHTBRRRLLKTCH, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (ZDHTBRRRLLKTCH.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        FNCTPIRNAWONYD = ZDHTBRRRLLKTCH.container->value.bracket_data.chain->at_before_first();
        WWVUABUQCIMCNL   = ZDHTBRRRLLKTCH.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor HQODEMAKMUNMAX;
        /*DEF*/
        DataCursor l_g;
        /*DEF*/
        DataCursor r_g;
        /*SET*/
        l_g = FNCTPIRNAWONYD;
        /*SET*/
        HQODEMAKMUNMAX = FNCTPIRNAWONYD;
        /*INC*/
        if (!INC(HQODEMAKMUNMAX, WWVUABUQCIMCNL)) goto sentence_after_2;
        if (! isSymbolType(HQODEMAKMUNMAX.container->type)) goto sentence_after_2;
        /*SET*/
        r_g = HQODEMAKMUNMAX;
//// [ empty ]
        /*ISEMPTY*/
        if (r_g!=0 && WWVUABUQCIMCNL != r_g) goto sentence_after_2;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = ZDHTBRRRLLKTCH;
        /*SET*/
        r_e = ZDHTBRRRLLKTCH;
        /*JMP*/
        goto label_IOMKEYWCOFQBKD_firststep;
label_IOMKEYWCOFQBKD:
        /*INC*/
        if (!INC(r_e, arg_to)) goto sentence_after_2;
label_IOMKEYWCOFQBKD_firststep:
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor MZOIZGQIPZAYIX;
        /*DEF*/
        DataCursor RYDWSOVHZTKGZS;
        /*DEF*/
        DataCursor KWPTKQCEXRNNXS;
        /*SET*/
        MZOIZGQIPZAYIX = r_e;
        /*INC*/
        if (!INC(MZOIZGQIPZAYIX, arg_to)) goto label_IOMKEYWCOFQBKD;
//// ISBRACKET
        if (MZOIZGQIPZAYIX.container->type != struct_bracket) goto label_IOMKEYWCOFQBKD;
//// JMP_BRACKET
        RYDWSOVHZTKGZS = MZOIZGQIPZAYIX.container->value.bracket_data.chain->at_before_first();
        KWPTKQCEXRNNXS   = MZOIZGQIPZAYIX.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = RYDWSOVHZTKGZS;
        /*SET*/
        r_1 = KWPTKQCEXRNNXS;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor KYWNDQIZLZKLNI;
        /*DEF*/
        DataCursor SSAMQAZHLNDNVI;
        /*DEF*/
        DataCursor LTKOIAFMEICGGU;
        /*SET*/
        KYWNDQIZLZKLNI = MZOIZGQIPZAYIX;
        /*INC*/
        if (!INC(KYWNDQIZLZKLNI, arg_to)) goto label_IOMKEYWCOFQBKD;
//// ISBRACKET
        if (KYWNDQIZLZKLNI.container->type != struct_bracket) goto label_IOMKEYWCOFQBKD;
//// JMP_BRACKET
        SSAMQAZHLNDNVI = KYWNDQIZLZKLNI.container->value.bracket_data.chain->at_before_first();
        LTKOIAFMEICGGU   = KYWNDQIZLZKLNI.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = SSAMQAZHLNDNVI;
        /*SET*/
        r_2 = LTKOIAFMEICGGU;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor ZXHRDJZZHERUSW;
        /*DEF*/
        DataCursor AVNVSLONOASRUD;
        /*DEF*/
        DataCursor RNLDKLDKFZTAGI;
        /*SET*/
        ZXHRDJZZHERUSW = KYWNDQIZLZKLNI;
        /*INC*/
        if (!INC(ZXHRDJZZHERUSW, arg_to)) goto label_IOMKEYWCOFQBKD;
//// ISBRACKET
        if (ZXHRDJZZHERUSW.container->type != struct_bracket) goto label_IOMKEYWCOFQBKD;
//// JMP_BRACKET
        AVNVSLONOASRUD = ZXHRDJZZHERUSW.container->value.bracket_data.chain->at_before_first();
        RNLDKLDKFZTAGI   = ZXHRDJZZHERUSW.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_n;
        /*DEF*/
        DataCursor r_n;
        /*SET*/
        l_n = AVNVSLONOASRUD;
        /*SET*/
        r_n = RNLDKLDKFZTAGI;
//// [ empty ]
        /*ISEMPTY*/
        if (ZXHRDJZZHERUSW!=0 && arg_to != ZXHRDJZZHERUSW) goto label_IOMKEYWCOFQBKD;

// подстановка
        DataChain* ENATJZWXCLKKUL = new DataChain();
        DataContainer* ENATJZWXCLKKUL_execbr = newRefExecBrackets(WriteXO1, ENATJZWXCLKKUL, "WriteXO1");
        result->append(ENATJZWXCLKKUL_execbr);
        DataChain* NCAQPTONEQLNBT = new DataChain();
        ENATJZWXCLKKUL->append(newRefStructBrackets(NCAQPTONEQLNBT));
        NCAQPTONEQLNBT->append_copy(l_g, r_g);
        DataChain* ODDBMIVAZXZMCO = new DataChain();
        ENATJZWXCLKKUL->append(newRefStructBrackets(ODDBMIVAZXZMCO));
        ODDBMIVAZXZMCO->append_copy(l_1, r_1);
        DataChain* JDHISWKAXIAGTU = new DataChain();
        ENATJZWXCLKKUL->append(newRefStructBrackets(JDHISWKAXIAGTU));
        JDHISWKAXIAGTU->append_copy(l_2, r_2);
        DataChain* TAFRSVPPHURAAA = new DataChain();
        ENATJZWXCLKKUL->append(newRefStructBrackets(TAFRSVPPHURAAA));
        TAFRSVPPHURAAA->append_copy(l_n, r_n);
        context->pushExecuteCall(ENATJZWXCLKKUL_execbr);
        return result;
    }
sentence_after_2:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* Lins(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor IXZTWDYRUUMQAD;
        /*DEF*/
        DataCursor JEPVVCVOIDWMTP;
        /*DEF*/
        DataCursor BNMQUIOPIWPUWC;
        /*SET*/
        IXZTWDYRUUMQAD = arg_from;
        /*INC*/
        if (!INC(IXZTWDYRUUMQAD, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (IXZTWDYRUUMQAD.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        JEPVVCVOIDWMTP = IXZTWDYRUUMQAD.container->value.bracket_data.chain->at_before_first();
        BNMQUIOPIWPUWC   = IXZTWDYRUUMQAD.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_n1;
        /*DEF*/
        DataCursor r_n1;
        /*SET*/
        l_n1 = JEPVVCVOIDWMTP;
        /*SET*/
        r_n1 = JEPVVCVOIDWMTP;
        /*JMP*/
        goto label_ZDAPDZGHAVVIYI_firststep;
label_ZDAPDZGHAVVIYI:
        /*INC*/
        if (!INC(r_n1, BNMQUIOPIWPUWC)) goto sentence_after_1;
label_ZDAPDZGHAVVIYI_firststep:
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor ROJNOLSOWRMVVJ;
        /*DEF*/
        DataCursor l_hod;
        /*DEF*/
        DataCursor r_hod;
        /*SET*/
        l_hod = r_n1;
        /*SET*/
        ROJNOLSOWRMVVJ = r_n1;
        /*INC*/
        if (!INC(ROJNOLSOWRMVVJ, BNMQUIOPIWPUWC)) goto label_ZDAPDZGHAVVIYI;
        if (! isSymbolType(ROJNOLSOWRMVVJ.container->type)) goto label_ZDAPDZGHAVVIYI;
        /*SET*/
        r_hod = ROJNOLSOWRMVVJ;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_n2;
        /*DEF*/
        DataCursor r_n2;
        /*SET*/
        l_n2 = r_hod;
        /*SET*/
        r_n2 = BNMQUIOPIWPUWC;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_as1;
        /*DEF*/
        DataCursor r_as1;
        /*SET*/
        l_as1 = IXZTWDYRUUMQAD;
        /*SET*/
        r_as1 = IXZTWDYRUUMQAD;
        /*JMP*/
        goto label_IQSWRICMZSXAVD_firststep;
label_IQSWRICMZSXAVD:
        /*INC*/
        if (!INC(r_as1, arg_to)) goto label_ZDAPDZGHAVVIYI;
label_IQSWRICMZSXAVD_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor QAMNFHWFGEOHSK;
        /*SET*/
        QAMNFHWFGEOHSK = r_as1;
        if (!SLIDE(QAMNFHWFGEOHSK, arg_to, l_hod, r_hod)) goto label_IQSWRICMZSXAVD;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_as2;
        /*DEF*/
        DataCursor r_as2;
        /*SET*/
        l_as2 = QAMNFHWFGEOHSK;
        /*SET*/
        r_as2 = arg_to;

// подстановка
        result->append_copy(l_hod, r_hod);
        return result;
    }
sentence_after_1:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* AntiStrategy(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor KEFUTXXIBHPULN;
        /*SET*/
        KEFUTXXIBHPULN = arg_from;
        /*INC*/
        if (!INC(KEFUTXXIBHPULN, arg_to)) goto sentence_after_1;
        if (KEFUTXXIBHPULN.container->type != text || *(KEFUTXXIBHPULN.container->value.text + KEFUTXXIBHPULN.index) != '1') goto sentence_after_1;
//// [ empty ]
        /*ISEMPTY*/
        if (KEFUTXXIBHPULN!=0 && arg_to != KEFUTXXIBHPULN) goto sentence_after_1;

// подстановка
        result->append(newRefText("123"));
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor WAPBHLPUDOEMNN;
        /*SET*/
        WAPBHLPUDOEMNN = arg_from;
        /*INC*/
        if (!INC(WAPBHLPUDOEMNN, arg_to)) goto sentence_after_2;
        if (WAPBHLPUDOEMNN.container->type != text || *(WAPBHLPUDOEMNN.container->value.text + WAPBHLPUDOEMNN.index) != '2') goto sentence_after_2;
//// [ empty ]
        /*ISEMPTY*/
        if (WAPBHLPUDOEMNN!=0 && arg_to != WAPBHLPUDOEMNN) goto sentence_after_2;

// подстановка
        result->append(newRefText("456"));
        return result;
    }
sentence_after_2:

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor PLTTRIABWUCRJM;
        /*SET*/
        PLTTRIABWUCRJM = arg_from;
        /*INC*/
        if (!INC(PLTTRIABWUCRJM, arg_to)) goto sentence_after_3;
        if (PLTTRIABWUCRJM.container->type != text || *(PLTTRIABWUCRJM.container->value.text + PLTTRIABWUCRJM.index) != '3') goto sentence_after_3;
//// [ empty ]
        /*ISEMPTY*/
        if (PLTTRIABWUCRJM!=0 && arg_to != PLTTRIABWUCRJM) goto sentence_after_3;

// подстановка
        result->append(newRefText("789"));
        return result;
    }
sentence_after_3:

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor QSQCHLHTBOFUIK;
        /*SET*/
        QSQCHLHTBOFUIK = arg_from;
        /*INC*/
        if (!INC(QSQCHLHTBOFUIK, arg_to)) goto sentence_after_4;
        if (QSQCHLHTBOFUIK.container->type != text || *(QSQCHLHTBOFUIK.container->value.text + QSQCHLHTBOFUIK.index) != '4') goto sentence_after_4;
//// [ empty ]
        /*ISEMPTY*/
        if (QSQCHLHTBOFUIK!=0 && arg_to != QSQCHLHTBOFUIK) goto sentence_after_4;

// подстановка
        result->append(newRefText("147"));
        return result;
    }
sentence_after_4:

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor KDEYHOKQUWQVWT;
        /*SET*/
        KDEYHOKQUWQVWT = arg_from;
        /*INC*/
        if (!INC(KDEYHOKQUWQVWT, arg_to)) goto sentence_after_5;
        if (KDEYHOKQUWQVWT.container->type != text || *(KDEYHOKQUWQVWT.container->value.text + KDEYHOKQUWQVWT.index) != '5') goto sentence_after_5;
//// [ empty ]
        /*ISEMPTY*/
        if (KDEYHOKQUWQVWT!=0 && arg_to != KDEYHOKQUWQVWT) goto sentence_after_5;

// подстановка
        result->append(newRefText("258"));
        return result;
    }
sentence_after_5:

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor IPBNCIZOCKAADA;
        /*SET*/
        IPBNCIZOCKAADA = arg_from;
        /*INC*/
        if (!INC(IPBNCIZOCKAADA, arg_to)) goto sentence_after_6;
        if (IPBNCIZOCKAADA.container->type != text || *(IPBNCIZOCKAADA.container->value.text + IPBNCIZOCKAADA.index) != '6') goto sentence_after_6;
//// [ empty ]
        /*ISEMPTY*/
        if (IPBNCIZOCKAADA!=0 && arg_to != IPBNCIZOCKAADA) goto sentence_after_6;

// подстановка
        result->append(newRefText("369"));
        return result;
    }
sentence_after_6:

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor RZLSRWXOCCSLUT;
        /*SET*/
        RZLSRWXOCCSLUT = arg_from;
        /*INC*/
        if (!INC(RZLSRWXOCCSLUT, arg_to)) goto sentence_after_7;
        if (RZLSRWXOCCSLUT.container->type != text || *(RZLSRWXOCCSLUT.container->value.text + RZLSRWXOCCSLUT.index) != '7') goto sentence_after_7;
//// [ empty ]
        /*ISEMPTY*/
        if (RZLSRWXOCCSLUT!=0 && arg_to != RZLSRWXOCCSLUT) goto sentence_after_7;

// подстановка
        result->append(newRefText("159"));
        return result;
    }
sentence_after_7:

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor LRLUKDIAOHQJHR;
        /*SET*/
        LRLUKDIAOHQJHR = arg_from;
        /*INC*/
        if (!INC(LRLUKDIAOHQJHR, arg_to)) goto sentence_after_8;
        if (LRLUKDIAOHQJHR.container->type != text || *(LRLUKDIAOHQJHR.container->value.text + LRLUKDIAOHQJHR.index) != '8') goto sentence_after_8;
//// [ empty ]
        /*ISEMPTY*/
        if (LRLUKDIAOHQJHR!=0 && arg_to != LRLUKDIAOHQJHR) goto sentence_after_8;

// подстановка
        result->append(newRefText("357"));
        return result;
    }
sentence_after_8:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* WriteXO1(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ empty ]
        /*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_1;

// подстановка
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ e.1 <any> ]
        /*DEF*/	DataCursor l_eee;
        /*DEF*/
        DataCursor r_eee;
        /*SET*/
        l_eee = arg_from;
        /*SET*/
        r_eee = arg_from;
        /*JMP*/
        goto label_DRXJSTCWRSXGYW_firststep;
label_DRXJSTCWRSXGYW:
        /*INC*/
        if (!INC(r_eee, arg_to)) goto sentence_after_2;
label_DRXJSTCWRSXGYW_firststep:
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor FNHCBKPMESUPMT;
        /*DEF*/
        DataCursor RVIPFBKTBWZFAH;
        /*DEF*/
        DataCursor OEVNHXBRHHFOBG;
        /*SET*/
        FNHCBKPMESUPMT = r_eee;
        /*INC*/
        if (!INC(FNHCBKPMESUPMT, arg_to)) goto label_DRXJSTCWRSXGYW;
//// ISBRACKET
        if (FNHCBKPMESUPMT.container->type != struct_bracket) goto label_DRXJSTCWRSXGYW;
//// JMP_BRACKET
        RVIPFBKTBWZFAH = FNHCBKPMESUPMT.container->value.bracket_data.chain->at_before_first();
        OEVNHXBRHHFOBG   = FNHCBKPMESUPMT.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_3;
        /*DEF*/
        DataCursor r_3;
        /*SET*/
        l_3 = RVIPFBKTBWZFAH;
        /*SET*/
        r_3 = RVIPFBKTBWZFAH;
        /*JMP*/
        goto label_YWCVHKTDOXQTEK_firststep;
label_YWCVHKTDOXQTEK:
        /*INC*/
        if (!INC(r_3, OEVNHXBRHHFOBG)) goto label_DRXJSTCWRSXGYW;
label_YWCVHKTDOXQTEK_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor IWWURZBLMLDLFI;
        /*SET*/
        IWWURZBLMLDLFI = r_3;
        /*INC*/
        if (!INC(IWWURZBLMLDLFI, OEVNHXBRHHFOBG)) goto label_YWCVHKTDOXQTEK;
        if (IWWURZBLMLDLFI.container->type != text || *(IWWURZBLMLDLFI.container->value.text + IWWURZBLMLDLFI.index) != '>') goto label_YWCVHKTDOXQTEK;
//// [ empty ]
        /*ISEMPTY*/
        if (IWWURZBLMLDLFI!=0 && OEVNHXBRHHFOBG != IWWURZBLMLDLFI) goto label_YWCVHKTDOXQTEK;
//// [ empty ]
        /*ISEMPTY*/
        if (FNHCBKPMESUPMT!=0 && arg_to != FNHCBKPMESUPMT) goto label_YWCVHKTDOXQTEK;

// подстановка
        return result;
    }
sentence_after_2:

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor VVRGKTRERPTISI;
        /*DEF*/
        DataCursor ZXHREVNXQUEZXK;
        /*DEF*/
        DataCursor UGROOHRHUDIDGV;
        /*SET*/
        VVRGKTRERPTISI = arg_from;
        /*INC*/
        if (!INC(VVRGKTRERPTISI, arg_to)) goto sentence_after_3;
//// ISBRACKET
        if (VVRGKTRERPTISI.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET
        ZXHREVNXQUEZXK = VVRGKTRERPTISI.container->value.bracket_data.chain->at_before_first();
        UGROOHRHUDIDGV   = VVRGKTRERPTISI.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor HTJHYEZKYHPFXW;
        /*DEF*/
        DataCursor l_g;
        /*DEF*/
        DataCursor r_g;
        /*SET*/
        l_g = ZXHREVNXQUEZXK;
        /*SET*/
        HTJHYEZKYHPFXW = ZXHREVNXQUEZXK;
        /*INC*/
        if (!INC(HTJHYEZKYHPFXW, UGROOHRHUDIDGV)) goto sentence_after_3;
        if (! isSymbolType(HTJHYEZKYHPFXW.container->type)) goto sentence_after_3;
        /*SET*/
        r_g = HTJHYEZKYHPFXW;
//// [ empty ]
        /*ISEMPTY*/
        if (r_g!=0 && UGROOHRHUDIDGV != r_g) goto sentence_after_3;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_eee;
        /*DEF*/
        DataCursor r_eee;
        /*SET*/
        l_eee = VVRGKTRERPTISI;
        /*SET*/
        r_eee = VVRGKTRERPTISI;
        /*JMP*/
        goto label_GPRPSEACCXKWVI_firststep;
label_GPRPSEACCXKWVI:
        /*INC*/
        if (!INC(r_eee, arg_to)) goto sentence_after_3;
label_GPRPSEACCXKWVI_firststep:
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor XVFHQFAWKFDJPY;
        /*DEF*/
        DataCursor EEVDGGATFIEKIX;
        /*DEF*/
        DataCursor EYRFCPXSCJKCFG;
        /*SET*/
        XVFHQFAWKFDJPY = r_eee;
        /*INC*/
        if (!INC(XVFHQFAWKFDJPY, arg_to)) goto label_GPRPSEACCXKWVI;
//// ISBRACKET
        if (XVFHQFAWKFDJPY.container->type != struct_bracket) goto label_GPRPSEACCXKWVI;
//// JMP_BRACKET
        EEVDGGATFIEKIX = XVFHQFAWKFDJPY.container->value.bracket_data.chain->at_before_first();
        EYRFCPXSCJKCFG   = XVFHQFAWKFDJPY.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_3;
        /*DEF*/
        DataCursor r_3;
        /*SET*/
        l_3 = EEVDGGATFIEKIX;
        /*SET*/
        r_3 = EEVDGGATFIEKIX;
        /*JMP*/
        goto label_QMYHJMJTIMDSPI_firststep;
label_QMYHJMJTIMDSPI:
        /*INC*/
        if (!INC(r_3, EYRFCPXSCJKCFG)) goto label_GPRPSEACCXKWVI;
label_QMYHJMJTIMDSPI_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor ZHWZIZCYUCEGLM;
        /*SET*/
        ZHWZIZCYUCEGLM = r_3;
        /*INC*/
        if (!INC(ZHWZIZCYUCEGLM, EYRFCPXSCJKCFG)) goto label_QMYHJMJTIMDSPI;
        if (ZHWZIZCYUCEGLM.container->type != text || *(ZHWZIZCYUCEGLM.container->value.text + ZHWZIZCYUCEGLM.index) != '>') goto label_QMYHJMJTIMDSPI;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor MBGYGFVTQVZQAT;
        /*DEF*/
        DataCursor l_s;
        /*DEF*/
        DataCursor r_s;
        /*SET*/
        l_s = ZHWZIZCYUCEGLM;
        /*SET*/
        MBGYGFVTQVZQAT = ZHWZIZCYUCEGLM;
        /*INC*/
        if (!INC(MBGYGFVTQVZQAT, EYRFCPXSCJKCFG)) goto label_QMYHJMJTIMDSPI;
        if (! isSymbolType(MBGYGFVTQVZQAT.container->type)) goto label_QMYHJMJTIMDSPI;
        /*SET*/
        r_s = MBGYGFVTQVZQAT;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_4;
        /*DEF*/
        DataCursor r_4;
        /*SET*/
        l_4 = r_s;
        /*SET*/
        r_4 = EYRFCPXSCJKCFG;
//// [ empty ]
        /*ISEMPTY*/
        if (XVFHQFAWKFDJPY!=0 && arg_to != XVFHQFAWKFDJPY) goto label_QMYHJMJTIMDSPI;

// подстановка
        DataChain* BHMKQLWHQNGHLV = new DataChain();
        DataContainer* BHMKQLWHQNGHLV_execbr = newRefExecBrackets(Length, BHMKQLWHQNGHLV, "Length");
        result->append(BHMKQLWHQNGHLV_execbr);
        DataChain* LZGPPXOOEOQXPP = new DataChain();
        DataContainer* LZGPPXOOEOQXPP_execbr = newRefExecBrackets(Optima21, LZGPPXOOEOQXPP, "Optima21");
        BHMKQLWHQNGHLV->append(LZGPPXOOEOQXPP_execbr);
        DataChain* BPMBLXNKEOFMNI = new DataChain();
        DataContainer* BPMBLXNKEOFMNI_execbr = newRefExecBrackets(Analiz, BPMBLXNKEOFMNI, "Analiz");
        LZGPPXOOEOQXPP->append(BPMBLXNKEOFMNI_execbr);
        DataChain* UMJCAFCUYVDCUE = new DataChain();
        BPMBLXNKEOFMNI->append(newRefStructBrackets(UMJCAFCUYVDCUE));
        UMJCAFCUYVDCUE->append_copy(l_g, r_g);
        BPMBLXNKEOFMNI->append_copy(l_eee, r_eee);
        DataChain* TERQPJJWAKNKXT = new DataChain();
        BPMBLXNKEOFMNI->append(newRefStructBrackets(TERQPJJWAKNKXT));
        TERQPJJWAKNKXT->append_copy(l_3, r_3);
        TERQPJJWAKNKXT->append(newRefText(">"));
        TERQPJJWAKNKXT->append_copy(l_s, r_s);
        TERQPJJWAKNKXT->append_copy(l_4, r_4);
        context->pushExecuteCall(BPMBLXNKEOFMNI_execbr);
        context->pushExecuteCall(LZGPPXOOEOQXPP_execbr);
        context->pushExecuteCall(BHMKQLWHQNGHLV_execbr);
        DataChain* LZQFLJNWKXGKFY = new DataChain();
        DataContainer* LZQFLJNWKXGKFY_execbr = newRefExecBrackets(WriteXO, LZQFLJNWKXGKFY, "WriteXO");
        result->append(LZQFLJNWKXGKFY_execbr);
        DataChain* LNUKBIYSPLKHJU = new DataChain();
        LZQFLJNWKXGKFY->append(newRefStructBrackets(LNUKBIYSPLKHJU));
        LNUKBIYSPLKHJU->append_copy(l_g, r_g);
        LZQFLJNWKXGKFY->append_copy(l_eee, r_eee);
        DataChain* CFUWOHZVPHJBJY = new DataChain();
        LZQFLJNWKXGKFY->append(newRefStructBrackets(CFUWOHZVPHJBJY));
        CFUWOHZVPHJBJY->append_copy(l_3, r_3);
        CFUWOHZVPHJBJY->append_copy(l_s, r_s);
        CFUWOHZVPHJBJY->append(newRefText(">"));
        CFUWOHZVPHJBJY->append_copy(l_4, r_4);
        context->pushExecuteCall(LZQFLJNWKXGKFY_execbr);
        return result;
    }
sentence_after_3:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* First1(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ s.1 <any> ]
        /*DEF*/	DataCursor OVDLNBFRKVBEMW;
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        OVDLNBFRKVBEMW = arg_from;
        /*INC*/
        if (!INC(OVDLNBFRKVBEMW, arg_to)) goto sentence_after_1;
        if (! isSymbolType(OVDLNBFRKVBEMW.container->type)) goto sentence_after_1;
        /*SET*/
        r_1 = OVDLNBFRKVBEMW;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = r_1;
        /*SET*/
        r_2 = arg_to;

// подстановка
        result->append_copy(l_1, r_1);
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ e.1 ]
        /*DEF*/	DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        r_1 = arg_to;

// подстановка
        result->append_copy(l_1, r_1);
        return result;
    }
sentence_after_2:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* Length(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ e.1 <any> ]
        /*DEF*/	DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        r_1 = arg_from;
        /*JMP*/
        goto label_YTFJYNQMGZAGBK_firststep;
label_YTFJYNQMGZAGBK:
        /*INC*/
        if (!INC(r_1, arg_to)) goto sentence_after_1;
label_YTFJYNQMGZAGBK_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor WEKKOUXDCYNKHT;
        /*SET*/
        WEKKOUXDCYNKHT = r_1;
        /*INC*/
        if (!INC(WEKKOUXDCYNKHT, arg_to)) goto label_YTFJYNQMGZAGBK;
        static DataChain *FULDVRXLONVKXZ = text_to_chain("12");
        static DataCursor FULDVRXLONVKXZ_l = FULDVRXLONVKXZ->at_before_first();
        static DataCursor FULDVRXLONVKXZ_r = FULDVRXLONVKXZ->at_last();
        if (!SLIDE(WEKKOUXDCYNKHT, arg_to, FULDVRXLONVKXZ_l, FULDVRXLONVKXZ_r)) goto label_YTFJYNQMGZAGBK;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = WEKKOUXDCYNKHT;
        /*SET*/
        r_2 = arg_to;

// подстановка
        DataChain* ECXEPKMZZGXLUA = new DataChain();
        DataContainer* ECXEPKMZZGXLUA_execbr = newRefExecBrackets(DivS, ECXEPKMZZGXLUA, "DivS");
        result->append(ECXEPKMZZGXLUA_execbr);
        DataChain* HMJYECSLDJESDC = new DataChain();
        DataContainer* HMJYECSLDJESDC_execbr = newRefExecBrackets(First1, HMJYECSLDJESDC, "First1");
        ECXEPKMZZGXLUA->append(HMJYECSLDJESDC_execbr);
        DataChain* PJIKVPAUDVKXGL = new DataChain();
        DataContainer* PJIKVPAUDVKXGL_execbr = newRefExecBrackets(Lenw, PJIKVPAUDVKXGL, "Lenw");
        HMJYECSLDJESDC->append(PJIKVPAUDVKXGL_execbr);
        PJIKVPAUDVKXGL->append_copy(l_1, r_1);
        PJIKVPAUDVKXGL->append(newRefText("1"));
        context->pushExecuteCall(PJIKVPAUDVKXGL_execbr);
        context->pushExecuteCall(HMJYECSLDJESDC_execbr);
        DataChain* LISAAMBOVJKDQR = new DataChain();
        DataContainer* LISAAMBOVJKDQR_execbr = newRefExecBrackets(First1, LISAAMBOVJKDQR, "First1");
        ECXEPKMZZGXLUA->append(LISAAMBOVJKDQR_execbr);
        DataChain* KDORJFNYGHHHPT = new DataChain();
        DataContainer* KDORJFNYGHHHPT_execbr = newRefExecBrackets(Lenw, KDORJFNYGHHHPT, "Lenw");
        LISAAMBOVJKDQR->append(KDORJFNYGHHHPT_execbr);
        KDORJFNYGHHHPT->append(newRefText("2"));
        KDORJFNYGHHHPT->append_copy(l_2, r_2);
        context->pushExecuteCall(KDORJFNYGHHHPT_execbr);
        context->pushExecuteCall(LISAAMBOVJKDQR_execbr);
        context->pushExecuteCall(ECXEPKMZZGXLUA_execbr);
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ e.1 <any> ]
        /*DEF*/	DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        r_1 = arg_from;
        /*JMP*/
        goto label_ZIFAWFTZQGEMNH_firststep;
label_ZIFAWFTZQGEMNH:
        /*INC*/
        if (!INC(r_1, arg_to)) goto sentence_after_2;
label_ZIFAWFTZQGEMNH_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor PQYICTMOYFPCVK;
        /*SET*/
        PQYICTMOYFPCVK = r_1;
        /*INC*/
        if (!INC(PQYICTMOYFPCVK, arg_to)) goto label_ZIFAWFTZQGEMNH;
        if (PQYICTMOYFPCVK.container->type != text || *(PQYICTMOYFPCVK.container->value.text + PQYICTMOYFPCVK.index) != '1') goto label_ZIFAWFTZQGEMNH;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = PQYICTMOYFPCVK;
        /*SET*/
        r_2 = arg_to;

// подстановка
        result->append(newRefText("1="));
        result->append(newRefInteger(2000000));
        return result;
    }
sentence_after_2:

    {
// сопоставление
//// [ e.1 <any> ]
        /*DEF*/	DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        r_1 = arg_from;
        /*JMP*/
        goto label_OWDZSFQHKPLFBY_firststep;
label_OWDZSFQHKPLFBY:
        /*INC*/
        if (!INC(r_1, arg_to)) goto sentence_after_3;
label_OWDZSFQHKPLFBY_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor ZMNIMDLXMJYDAX;
        /*SET*/
        ZMNIMDLXMJYDAX = r_1;
        /*INC*/
        if (!INC(ZMNIMDLXMJYDAX, arg_to)) goto label_OWDZSFQHKPLFBY;
        if (ZMNIMDLXMJYDAX.container->type != text || *(ZMNIMDLXMJYDAX.container->value.text + ZMNIMDLXMJYDAX.index) != '2') goto label_OWDZSFQHKPLFBY;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = ZMNIMDLXMJYDAX;
        /*SET*/
        r_2 = arg_to;

// подстановка
        result->append(newRefText("2="));
        result->append(newRefInteger(2000000));
        return result;
    }
sentence_after_3:

    {
// сопоставление
//// [ empty ]
        /*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_4;

// подстановка
        result->append(newRefText("1="));
        result->append(newRefInteger(1));
        return result;
    }
sentence_after_4:

    {
// сопоставление
//// [ e.1 ]
        /*DEF*/	DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        r_1 = arg_to;

// подстановка
        DataChain* VOCDENQMWILXXZ = new DataChain();
        DataContainer* VOCDENQMWILXXZ_execbr = newRefExecBrackets(Prout, VOCDENQMWILXXZ, "Prout");
        result->append(VOCDENQMWILXXZ_execbr);
        VOCDENQMWILXXZ->append(newRefText("Length error symbols!!! : "));
        context->pushExecuteCall(VOCDENQMWILXXZ_execbr);
        DataChain* OQFOTPIKPQUDMO = new DataChain();
        DataContainer* OQFOTPIKPQUDMO_execbr = newRefExecBrackets(Print, OQFOTPIKPQUDMO, "Print");
        result->append(OQFOTPIKPQUDMO_execbr);
        OQFOTPIKPQUDMO->append_copy(l_1, r_1);
        context->pushExecuteCall(OQFOTPIKPQUDMO_execbr);
        return result;
    }
sentence_after_5:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* DivS(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ s.1 <any> ]
        /*DEF*/	DataCursor MIKPPZHDHFQSGB;
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        MIKPPZHDHFQSGB = arg_from;
        /*INC*/
        if (!INC(MIKPPZHDHFQSGB, arg_to)) goto sentence_after_1;
        if (! isSymbolType(MIKPPZHDHFQSGB.container->type)) goto sentence_after_1;
        /*SET*/
        r_1 = MIKPPZHDHFQSGB;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor XIISYZWNHXYFVY;
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = r_1;
        /*SET*/
        XIISYZWNHXYFVY = r_1;
        /*INC*/
        if (!INC(XIISYZWNHXYFVY, arg_to)) goto sentence_after_1;
        if (! isSymbolType(XIISYZWNHXYFVY.container->type)) goto sentence_after_1;
        /*SET*/
        r_2 = XIISYZWNHXYFVY;
//// [ empty ]
        /*ISEMPTY*/
        if (r_2!=0 && arg_to != r_2) goto sentence_after_1;

// подстановка
        DataChain* DFMPDWOMCIUDCN = new DataChain();
        DataContainer* DFMPDWOMCIUDCN_execbr = newRefExecBrackets(IfDiv, DFMPDWOMCIUDCN, "IfDiv");
        result->append(DFMPDWOMCIUDCN_execbr);
        DataChain* YNDGCNFJITPPMY = new DataChain();
        DataContainer* YNDGCNFJITPPMY_execbr = newRefExecBrackets(Compare, YNDGCNFJITPPMY, "Compare");
        DFMPDWOMCIUDCN->append(YNDGCNFJITPPMY_execbr);
        YNDGCNFJITPPMY->append_copy(l_1, r_1);
        YNDGCNFJITPPMY->append_copy(l_2, r_2);
        context->pushExecuteCall(YNDGCNFJITPPMY_execbr);
        DFMPDWOMCIUDCN->append_copy(l_1, r_1);
        DFMPDWOMCIUDCN->append_copy(l_2, r_2);
        context->pushExecuteCall(DFMPDWOMCIUDCN_execbr);
        return result;
    }
sentence_after_1:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* IfDiv(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor MXIISNEBPYWSGQ;
        /*SET*/
        MXIISNEBPYWSGQ = arg_from;
        /*INC*/
        if (!INC(MXIISNEBPYWSGQ, arg_to)) goto sentence_after_1;
        if (MXIISNEBPYWSGQ.container->type != text || *(MXIISNEBPYWSGQ.container->value.text + MXIISNEBPYWSGQ.index) != '+') goto sentence_after_1;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor SXDJPLWZFMJOOP;
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = MXIISNEBPYWSGQ;
        /*SET*/
        SXDJPLWZFMJOOP = MXIISNEBPYWSGQ;
        /*INC*/
        if (!INC(SXDJPLWZFMJOOP, arg_to)) goto sentence_after_1;
        if (! isSymbolType(SXDJPLWZFMJOOP.container->type)) goto sentence_after_1;
        /*SET*/
        r_1 = SXDJPLWZFMJOOP;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor YYIFVKMWWPGPLJ;
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = r_1;
        /*SET*/
        YYIFVKMWWPGPLJ = r_1;
        /*INC*/
        if (!INC(YYIFVKMWWPGPLJ, arg_to)) goto sentence_after_1;
        if (! isSymbolType(YYIFVKMWWPGPLJ.container->type)) goto sentence_after_1;
        /*SET*/
        r_2 = YYIFVKMWWPGPLJ;
//// [ empty ]
        /*ISEMPTY*/
        if (r_2!=0 && arg_to != r_2) goto sentence_after_1;

// подстановка
        result->append(newRefText("1="));
        DataChain* FBRWHPEVCOQRGR = new DataChain();
        DataContainer* FBRWHPEVCOQRGR_execbr = newRefExecBrackets(Div, FBRWHPEVCOQRGR, "/");
        result->append(FBRWHPEVCOQRGR_execbr);
        FBRWHPEVCOQRGR->append_copy(l_1, r_1);
        FBRWHPEVCOQRGR->append_copy(l_2, r_2);
        context->pushExecuteCall(FBRWHPEVCOQRGR_execbr);
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ s.1 <any> ]
        /*DEF*/	DataCursor QWZHIBNORKHZML;
        /*DEF*/
        DataCursor l_zn;
        /*DEF*/
        DataCursor r_zn;
        /*SET*/
        l_zn = arg_from;
        /*SET*/
        QWZHIBNORKHZML = arg_from;
        /*INC*/
        if (!INC(QWZHIBNORKHZML, arg_to)) goto sentence_after_2;
        if (! isSymbolType(QWZHIBNORKHZML.container->type)) goto sentence_after_2;
        /*SET*/
        r_zn = QWZHIBNORKHZML;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor BZFHXUNRKLIBVP;
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = r_zn;
        /*SET*/
        BZFHXUNRKLIBVP = r_zn;
        /*INC*/
        if (!INC(BZFHXUNRKLIBVP, arg_to)) goto sentence_after_2;
        if (! isSymbolType(BZFHXUNRKLIBVP.container->type)) goto sentence_after_2;
        /*SET*/
        r_1 = BZFHXUNRKLIBVP;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor SZZNOPFGAXZGFL;
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = r_1;
        /*SET*/
        SZZNOPFGAXZGFL = r_1;
        /*INC*/
        if (!INC(SZZNOPFGAXZGFL, arg_to)) goto sentence_after_2;
        if (! isSymbolType(SZZNOPFGAXZGFL.container->type)) goto sentence_after_2;
        /*SET*/
        r_2 = SZZNOPFGAXZGFL;
//// [ empty ]
        /*ISEMPTY*/
        if (r_2!=0 && arg_to != r_2) goto sentence_after_2;

// подстановка
        result->append(newRefText("1="));
        DataChain* TLSXBTUMILOCLT = new DataChain();
        DataContainer* TLSXBTUMILOCLT_execbr = newRefExecBrackets(Div, TLSXBTUMILOCLT, "/");
        result->append(TLSXBTUMILOCLT_execbr);
        TLSXBTUMILOCLT->append_copy(l_2, r_2);
        TLSXBTUMILOCLT->append_copy(l_1, r_1);
        context->pushExecuteCall(TLSXBTUMILOCLT_execbr);
        return result;
    }
sentence_after_2:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* NextPl(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor GCOZGTZIUFUZIM;
        /*SET*/
        GCOZGTZIUFUZIM = arg_from;
        /*INC*/
        if (!INC(GCOZGTZIUFUZIM, arg_to)) goto sentence_after_1;
        if (GCOZGTZIUFUZIM.container->type != text || *(GCOZGTZIUFUZIM.container->value.text + GCOZGTZIUFUZIM.index) != '1') goto sentence_after_1;
//// [ empty ]
        /*ISEMPTY*/
        if (GCOZGTZIUFUZIM!=0 && arg_to != GCOZGTZIUFUZIM) goto sentence_after_1;

// подстановка
        result->append(newRefText("2"));
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ `a` <any> ]
        /*DEF*/	DataCursor DIOGCSEOZPSCRH;
        /*SET*/
        DIOGCSEOZPSCRH = arg_from;
        /*INC*/
        if (!INC(DIOGCSEOZPSCRH, arg_to)) goto sentence_after_2;
        if (DIOGCSEOZPSCRH.container->type != text || *(DIOGCSEOZPSCRH.container->value.text + DIOGCSEOZPSCRH.index) != '2') goto sentence_after_2;
//// [ empty ]
        /*ISEMPTY*/
        if (DIOGCSEOZPSCRH!=0 && arg_to != DIOGCSEOZPSCRH) goto sentence_after_2;

// подстановка
        result->append(newRefText("1"));
        return result;
    }
sentence_after_2:

    {
// сопоставление
//// [ e.1 ]
        /*DEF*/	DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = arg_from;
        /*SET*/
        r_e = arg_to;

// подстановка
        DataChain* SVUBPYLONMWAJG = new DataChain();
        DataContainer* SVUBPYLONMWAJG_execbr = newRefExecBrackets(Print, SVUBPYLONMWAJG, "Print");
        result->append(SVUBPYLONMWAJG_execbr);
        SVUBPYLONMWAJG->append(newRefText("NextPl uncn.: "));
        SVUBPYLONMWAJG->append_copy(l_e, r_e);
        context->pushExecuteCall(SVUBPYLONMWAJG_execbr);
        return result;
    }
sentence_after_3:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* Optima21(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ e.1 ]
        /*DEF*/	DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = arg_from;
        /*SET*/
        r_e = arg_to;

// подстановка
        DataChain* XZGYZAOVENFVOC = new DataChain();
        DataContainer* XZGYZAOVENFVOC_execbr = newRefExecBrackets(Optima211, XZGYZAOVENFVOC, "Optima211");
        result->append(XZGYZAOVENFVOC_execbr);
        XZGYZAOVENFVOC->append_copy(l_e, r_e);
        context->pushExecuteCall(XZGYZAOVENFVOC_execbr);
        return result;
    }
sentence_after_1:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* Optima211(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ e.1 <any> ]
        /*DEF*/	DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        r_1 = arg_from;
        /*JMP*/
        goto label_IKQJTXGVENKSPP_firststep;
label_IKQJTXGVENKSPP:
        /*INC*/
        if (!INC(r_1, arg_to)) goto sentence_after_1;
label_IKQJTXGVENKSPP_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor WWPLHXTGYBVMAJ;
        /*SET*/
        WWPLHXTGYBVMAJ = r_1;
        /*INC*/
        if (!INC(WWPLHXTGYBVMAJ, arg_to)) goto label_IKQJTXGVENKSPP;
        if (WWPLHXTGYBVMAJ.container->type != text || *(WWPLHXTGYBVMAJ.container->value.text + WWPLHXTGYBVMAJ.index) != '1') goto label_IKQJTXGVENKSPP;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = WWPLHXTGYBVMAJ;
        /*SET*/
        r_2 = WWPLHXTGYBVMAJ;
        /*JMP*/
        goto label_EYFAXEGSEIJIKC_firststep;
label_EYFAXEGSEIJIKC:
        /*INC*/
        if (!INC(r_2, arg_to)) goto label_IKQJTXGVENKSPP;
label_EYFAXEGSEIJIKC_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor MDUCLAAIOISSIS;
        /*SET*/
        MDUCLAAIOISSIS = r_2;
        /*INC*/
        if (!INC(MDUCLAAIOISSIS, arg_to)) goto label_EYFAXEGSEIJIKC;
        if (MDUCLAAIOISSIS.container->type != text || *(MDUCLAAIOISSIS.container->value.text + MDUCLAAIOISSIS.index) != '1') goto label_EYFAXEGSEIJIKC;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_3;
        /*DEF*/
        DataCursor r_3;
        /*SET*/
        l_3 = MDUCLAAIOISSIS;
        /*SET*/
        r_3 = arg_to;

// подстановка
        result->append(newRefText("11"));
        DataChain* UDNVQZBKATNEFU = new DataChain();
        DataContainer* UDNVQZBKATNEFU_execbr = newRefExecBrackets(Optima211, UDNVQZBKATNEFU, "Optima211");
        result->append(UDNVQZBKATNEFU_execbr);
        UDNVQZBKATNEFU->append_copy(l_1, r_1);
        UDNVQZBKATNEFU->append_copy(l_3, r_3);
        context->pushExecuteCall(UDNVQZBKATNEFU_execbr);
        result->append_copy(l_2, r_2);
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ e.1 <any> ]
        /*DEF*/	DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        r_1 = arg_from;
        /*JMP*/
        goto label_LGEXKTRMHDDAPS_firststep;
label_LGEXKTRMHDDAPS:
        /*INC*/
        if (!INC(r_1, arg_to)) goto sentence_after_2;
label_LGEXKTRMHDDAPS_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor WPTFVOVUJIUWBM;
        /*SET*/
        WPTFVOVUJIUWBM = r_1;
        /*INC*/
        if (!INC(WPTFVOVUJIUWBM, arg_to)) goto label_LGEXKTRMHDDAPS;
        if (WPTFVOVUJIUWBM.container->type != text || *(WPTFVOVUJIUWBM.container->value.text + WPTFVOVUJIUWBM.index) != '1') goto label_LGEXKTRMHDDAPS;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = WPTFVOVUJIUWBM;
        /*SET*/
        r_2 = arg_to;

// подстановка
        result->append(newRefText("1"));
        DataChain* CHJWZWMOZECRZN = new DataChain();
        DataContainer* CHJWZWMOZECRZN_execbr = newRefExecBrackets(Optima211, CHJWZWMOZECRZN, "Optima211");
        result->append(CHJWZWMOZECRZN_execbr);
        CHJWZWMOZECRZN->append_copy(l_1, r_1);
        CHJWZWMOZECRZN->append_copy(l_2, r_2);
        context->pushExecuteCall(CHJWZWMOZECRZN_execbr);
        return result;
    }
sentence_after_2:

    {
// сопоставление
//// [ e.1 ]
        /*DEF*/	DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        r_1 = arg_to;

// подстановка
        result->append_copy(l_1, r_1);
        return result;
    }
sentence_after_3:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* Strategy(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ empty ]
        /*ISEMPTY*/	if (arg_from!=0 && arg_to != arg_from) goto sentence_after_1;

// подстановка
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ e.1 <any> ]
        /*DEF*/	DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        r_1 = arg_from;
        /*JMP*/
        goto label_JKFRVKRMRDWROA_firststep;
label_JKFRVKRMRDWROA:
        /*INC*/
        if (!INC(r_1, arg_to)) goto sentence_after_2;
label_JKFRVKRMRDWROA_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor OCQPKTLMWXWTNU;
        /*SET*/
        OCQPKTLMWXWTNU = r_1;
        /*INC*/
        if (!INC(OCQPKTLMWXWTNU, arg_to)) goto label_JKFRVKRMRDWROA;
        if (OCQPKTLMWXWTNU.container->type != text || *(OCQPKTLMWXWTNU.container->value.text + OCQPKTLMWXWTNU.index) != '1') goto label_JKFRVKRMRDWROA;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = OCQPKTLMWXWTNU;
        /*SET*/
        r_2 = arg_to;

// подстановка
        result->append(newRefText("147"));
        DataChain* NHIIULLTOVBEFL = new DataChain();
        DataContainer* NHIIULLTOVBEFL_execbr = newRefExecBrackets(Strategy, NHIIULLTOVBEFL, "Strategy");
        result->append(NHIIULLTOVBEFL_execbr);
        NHIIULLTOVBEFL->append_copy(l_1, r_1);
        NHIIULLTOVBEFL->append_copy(l_2, r_2);
        context->pushExecuteCall(NHIIULLTOVBEFL_execbr);
        return result;
    }
sentence_after_2:

    {
// сопоставление
//// [ e.1 <any> ]
        /*DEF*/	DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        r_1 = arg_from;
        /*JMP*/
        goto label_WLPBHYFFHBAVHF_firststep;
label_WLPBHYFFHBAVHF:
        /*INC*/
        if (!INC(r_1, arg_to)) goto sentence_after_3;
label_WLPBHYFFHBAVHF_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor UAHLINDJDFPEKX;
        /*SET*/
        UAHLINDJDFPEKX = r_1;
        /*INC*/
        if (!INC(UAHLINDJDFPEKX, arg_to)) goto label_WLPBHYFFHBAVHF;
        if (UAHLINDJDFPEKX.container->type != text || *(UAHLINDJDFPEKX.container->value.text + UAHLINDJDFPEKX.index) != '2') goto label_WLPBHYFFHBAVHF;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = UAHLINDJDFPEKX;
        /*SET*/
        r_2 = arg_to;

// подстановка
        result->append(newRefText("15"));
        DataChain* VWXKYVULCYJEFL = new DataChain();
        DataContainer* VWXKYVULCYJEFL_execbr = newRefExecBrackets(Strategy, VWXKYVULCYJEFL, "Strategy");
        result->append(VWXKYVULCYJEFL_execbr);
        VWXKYVULCYJEFL->append_copy(l_1, r_1);
        VWXKYVULCYJEFL->append_copy(l_2, r_2);
        context->pushExecuteCall(VWXKYVULCYJEFL_execbr);
        return result;
    }
sentence_after_3:

    {
// сопоставление
//// [ e.1 <any> ]
        /*DEF*/	DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        r_1 = arg_from;
        /*JMP*/
        goto label_LOQZHLTMGTUJDC_firststep;
label_LOQZHLTMGTUJDC:
        /*INC*/
        if (!INC(r_1, arg_to)) goto sentence_after_4;
label_LOQZHLTMGTUJDC_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor UUGNROTLOTCPBN;
        /*SET*/
        UUGNROTLOTCPBN = r_1;
        /*INC*/
        if (!INC(UUGNROTLOTCPBN, arg_to)) goto label_LOQZHLTMGTUJDC;
        if (UUGNROTLOTCPBN.container->type != text || *(UUGNROTLOTCPBN.container->value.text + UUGNROTLOTCPBN.index) != '3') goto label_LOQZHLTMGTUJDC;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = UUGNROTLOTCPBN;
        /*SET*/
        r_2 = arg_to;

// подстановка
        result->append(newRefText("168"));
        DataChain* VEGHMFBMVKLSQF = new DataChain();
        DataContainer* VEGHMFBMVKLSQF_execbr = newRefExecBrackets(Strategy, VEGHMFBMVKLSQF, "Strategy");
        result->append(VEGHMFBMVKLSQF_execbr);
        VEGHMFBMVKLSQF->append_copy(l_1, r_1);
        VEGHMFBMVKLSQF->append_copy(l_2, r_2);
        context->pushExecuteCall(VEGHMFBMVKLSQF_execbr);
        return result;
    }
sentence_after_4:

    {
// сопоставление
//// [ e.1 <any> ]
        /*DEF*/	DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        r_1 = arg_from;
        /*JMP*/
        goto label_UBVXCTEPVMLJOH_firststep;
label_UBVXCTEPVMLJOH:
        /*INC*/
        if (!INC(r_1, arg_to)) goto sentence_after_5;
label_UBVXCTEPVMLJOH_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor ZXXOOLNVLAYGUO;
        /*SET*/
        ZXXOOLNVLAYGUO = r_1;
        /*INC*/
        if (!INC(ZXXOOLNVLAYGUO, arg_to)) goto label_UBVXCTEPVMLJOH;
        if (ZXXOOLNVLAYGUO.container->type != text || *(ZXXOOLNVLAYGUO.container->value.text + ZXXOOLNVLAYGUO.index) != '4') goto label_UBVXCTEPVMLJOH;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = ZXXOOLNVLAYGUO;
        /*SET*/
        r_2 = arg_to;

// подстановка
        result->append(newRefText("24"));
        DataChain* KQTAXJLRBRUKKK = new DataChain();
        DataContainer* KQTAXJLRBRUKKK_execbr = newRefExecBrackets(Strategy, KQTAXJLRBRUKKK, "Strategy");
        result->append(KQTAXJLRBRUKKK_execbr);
        KQTAXJLRBRUKKK->append_copy(l_1, r_1);
        KQTAXJLRBRUKKK->append_copy(l_2, r_2);
        context->pushExecuteCall(KQTAXJLRBRUKKK_execbr);
        return result;
    }
sentence_after_5:

    {
// сопоставление
//// [ e.1 <any> ]
        /*DEF*/	DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        r_1 = arg_from;
        /*JMP*/
        goto label_IGJMXQRBAZLPDE_firststep;
label_IGJMXQRBAZLPDE:
        /*INC*/
        if (!INC(r_1, arg_to)) goto sentence_after_6;
label_IGJMXQRBAZLPDE_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor VPEZPBWSHVPCKL;
        /*SET*/
        VPEZPBWSHVPCKL = r_1;
        /*INC*/
        if (!INC(VPEZPBWSHVPCKL, arg_to)) goto label_IGJMXQRBAZLPDE;
        if (VPEZPBWSHVPCKL.container->type != text || *(VPEZPBWSHVPCKL.container->value.text + VPEZPBWSHVPCKL.index) != '5') goto label_IGJMXQRBAZLPDE;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = VPEZPBWSHVPCKL;
        /*SET*/
        r_2 = arg_to;

// подстановка
        result->append(newRefText("2578"));
        DataChain* QUYXPIXQIREUQA = new DataChain();
        DataContainer* QUYXPIXQIREUQA_execbr = newRefExecBrackets(Strategy, QUYXPIXQIREUQA, "Strategy");
        result->append(QUYXPIXQIREUQA_execbr);
        QUYXPIXQIREUQA->append_copy(l_1, r_1);
        QUYXPIXQIREUQA->append_copy(l_2, r_2);
        context->pushExecuteCall(QUYXPIXQIREUQA_execbr);
        return result;
    }
sentence_after_6:

    {
// сопоставление
//// [ e.1 <any> ]
        /*DEF*/	DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        r_1 = arg_from;
        /*JMP*/
        goto label_MFFSVVNTGUXESI_firststep;
label_MFFSVVNTGUXESI:
        /*INC*/
        if (!INC(r_1, arg_to)) goto sentence_after_7;
label_MFFSVVNTGUXESI_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor DRNWWTQKDOZFPK;
        /*SET*/
        DRNWWTQKDOZFPK = r_1;
        /*INC*/
        if (!INC(DRNWWTQKDOZFPK, arg_to)) goto label_MFFSVVNTGUXESI;
        if (DRNWWTQKDOZFPK.container->type != text || *(DRNWWTQKDOZFPK.container->value.text + DRNWWTQKDOZFPK.index) != '6') goto label_MFFSVVNTGUXESI;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = DRNWWTQKDOZFPK;
        /*SET*/
        r_2 = arg_to;

// подстановка
        result->append(newRefText("26"));
        DataChain* BKUREHRQBBXAJE = new DataChain();
        DataContainer* BKUREHRQBBXAJE_execbr = newRefExecBrackets(Strategy, BKUREHRQBBXAJE, "Strategy");
        result->append(BKUREHRQBBXAJE_execbr);
        BKUREHRQBBXAJE->append_copy(l_1, r_1);
        BKUREHRQBBXAJE->append_copy(l_2, r_2);
        context->pushExecuteCall(BKUREHRQBBXAJE_execbr);
        return result;
    }
sentence_after_7:

    {
// сопоставление
//// [ e.1 <any> ]
        /*DEF*/	DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        r_1 = arg_from;
        /*JMP*/
        goto label_FBFHKZBPKAPBSZ_firststep;
label_FBFHKZBPKAPBSZ:
        /*INC*/
        if (!INC(r_1, arg_to)) goto sentence_after_8;
label_FBFHKZBPKAPBSZ_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor YSPDAAOXRAOJOT;
        /*SET*/
        YSPDAAOXRAOJOT = r_1;
        /*INC*/
        if (!INC(YSPDAAOXRAOJOT, arg_to)) goto label_FBFHKZBPKAPBSZ;
        if (YSPDAAOXRAOJOT.container->type != text || *(YSPDAAOXRAOJOT.container->value.text + YSPDAAOXRAOJOT.index) != '7') goto label_FBFHKZBPKAPBSZ;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = YSPDAAOXRAOJOT;
        /*SET*/
        r_2 = arg_to;

// подстановка
        result->append(newRefText("348"));
        DataChain* TSGRZUIGUSNWLY = new DataChain();
        DataContainer* TSGRZUIGUSNWLY_execbr = newRefExecBrackets(Strategy, TSGRZUIGUSNWLY, "Strategy");
        result->append(TSGRZUIGUSNWLY_execbr);
        TSGRZUIGUSNWLY->append_copy(l_1, r_1);
        TSGRZUIGUSNWLY->append_copy(l_2, r_2);
        context->pushExecuteCall(TSGRZUIGUSNWLY_execbr);
        return result;
    }
sentence_after_8:

    {
// сопоставление
//// [ e.1 <any> ]
        /*DEF*/	DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        r_1 = arg_from;
        /*JMP*/
        goto label_RVFNKKMSDBUHVH_firststep;
label_RVFNKKMSDBUHVH:
        /*INC*/
        if (!INC(r_1, arg_to)) goto sentence_after_9;
label_RVFNKKMSDBUHVH_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor FQTDVTNLEWFQUU;
        /*SET*/
        FQTDVTNLEWFQUU = r_1;
        /*INC*/
        if (!INC(FQTDVTNLEWFQUU, arg_to)) goto label_RVFNKKMSDBUHVH;
        if (FQTDVTNLEWFQUU.container->type != text || *(FQTDVTNLEWFQUU.container->value.text + FQTDVTNLEWFQUU.index) != '8') goto label_RVFNKKMSDBUHVH;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = FQTDVTNLEWFQUU;
        /*SET*/
        r_2 = arg_to;

// подстановка
        result->append(newRefText("35"));
        DataChain* BKDBMVHBSNJBTV = new DataChain();
        DataContainer* BKDBMVHBSNJBTV_execbr = newRefExecBrackets(Strategy, BKDBMVHBSNJBTV, "Strategy");
        result->append(BKDBMVHBSNJBTV_execbr);
        BKDBMVHBSNJBTV->append_copy(l_1, r_1);
        BKDBMVHBSNJBTV->append_copy(l_2, r_2);
        context->pushExecuteCall(BKDBMVHBSNJBTV_execbr);
        return result;
    }
sentence_after_9:

    {
// сопоставление
//// [ e.1 <any> ]
        /*DEF*/	DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        r_1 = arg_from;
        /*JMP*/
        goto label_JTQNBCHIWFUQLZ_firststep;
label_JTQNBCHIWFUQLZ:
        /*INC*/
        if (!INC(r_1, arg_to)) goto sentence_after_10;
label_JTQNBCHIWFUQLZ_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor SMXVFJTVQUITIV;
        /*SET*/
        SMXVFJTVQUITIV = r_1;
        /*INC*/
        if (!INC(SMXVFJTVQUITIV, arg_to)) goto label_JTQNBCHIWFUQLZ;
        if (SMXVFJTVQUITIV.container->type != text || *(SMXVFJTVQUITIV.container->value.text + SMXVFJTVQUITIV.index) != '9') goto label_JTQNBCHIWFUQLZ;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = SMXVFJTVQUITIV;
        /*SET*/
        r_2 = arg_to;

// подстановка
        result->append(newRefText("367"));
        DataChain* CANCHXSSJLUHLY = new DataChain();
        DataContainer* CANCHXSSJLUHLY_execbr = newRefExecBrackets(Strategy, CANCHXSSJLUHLY, "Strategy");
        result->append(CANCHXSSJLUHLY_execbr);
        CANCHXSSJLUHLY->append_copy(l_1, r_1);
        CANCHXSSJLUHLY->append_copy(l_2, r_2);
        context->pushExecuteCall(CANCHXSSJLUHLY_execbr);
        return result;
    }
sentence_after_10:

    {
// сопоставление
//// [ e.1 ]
        /*DEF*/	DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        r_1 = arg_to;

// подстановка
        result->append_copy(l_1, r_1);
        return result;
    }
sentence_after_11:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* Ifwin(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor OEBCGNSQFZXXWG;
        /*DEF*/
        DataCursor LIUEJOBCFPVNYR;
        /*DEF*/
        DataCursor RPKEGEQPVLHXEE;
        /*SET*/
        OEBCGNSQFZXXWG = arg_from;
        /*INC*/
        if (!INC(OEBCGNSQFZXXWG, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (OEBCGNSQFZXXWG.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        LIUEJOBCFPVNYR = OEBCGNSQFZXXWG.container->value.bracket_data.chain->at_before_first();
        RPKEGEQPVLHXEE   = OEBCGNSQFZXXWG.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = LIUEJOBCFPVNYR;
        /*SET*/
        r_1 = RPKEGEQPVLHXEE;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor OCMERJMZIUDTSQ;
        /*DEF*/
        DataCursor QOZVEJNRTIBVNJ;
        /*DEF*/
        DataCursor EPFQDSMVSTMMWW;
        /*SET*/
        OCMERJMZIUDTSQ = OEBCGNSQFZXXWG;
        /*INC*/
        if (!INC(OCMERJMZIUDTSQ, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (OCMERJMZIUDTSQ.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        QOZVEJNRTIBVNJ = OCMERJMZIUDTSQ.container->value.bracket_data.chain->at_before_first();
        EPFQDSMVSTMMWW   = OCMERJMZIUDTSQ.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = QOZVEJNRTIBVNJ;
        /*SET*/
        r_2 = EPFQDSMVSTMMWW;
//// [ empty ]
        /*ISEMPTY*/
        if (OCMERJMZIUDTSQ!=0 && arg_to != OCMERJMZIUDTSQ) goto sentence_after_1;

// подстановка
        DataChain* WQKNNRMQMJCCPA = new DataChain();
        DataContainer* WQKNNRMQMJCCPA_execbr = newRefExecBrackets(Ifwin1, WQKNNRMQMJCCPA, "Ifwin1");
        result->append(WQKNNRMQMJCCPA_execbr);
        DataChain* OWAZFEURGPBFRY = new DataChain();
        WQKNNRMQMJCCPA->append(newRefStructBrackets(OWAZFEURGPBFRY));
        DataChain* EDQJRLTMYMHYSO = new DataChain();
        DataContainer* EDQJRLTMYMHYSO_execbr = newRefExecBrackets(Strategy, EDQJRLTMYMHYSO, "Strategy");
        OWAZFEURGPBFRY->append(EDQJRLTMYMHYSO_execbr);
        EDQJRLTMYMHYSO->append_copy(l_1, r_1);
        context->pushExecuteCall(EDQJRLTMYMHYSO_execbr);
        DataChain* ICWUOHFEREBEAC = new DataChain();
        WQKNNRMQMJCCPA->append(newRefStructBrackets(ICWUOHFEREBEAC));
        DataChain* AZUVJOXYIPMSGU = new DataChain();
        DataContainer* AZUVJOXYIPMSGU_execbr = newRefExecBrackets(Strategy, AZUVJOXYIPMSGU, "Strategy");
        ICWUOHFEREBEAC->append(AZUVJOXYIPMSGU_execbr);
        AZUVJOXYIPMSGU->append_copy(l_2, r_2);
        context->pushExecuteCall(AZUVJOXYIPMSGU_execbr);
        context->pushExecuteCall(WQKNNRMQMJCCPA_execbr);
        return result;
    }
sentence_after_1:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* Ifwin1(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor FJIWLCFYWXTEYY;
        /*DEF*/
        DataCursor QDHXWJHIUDGHYX;
        /*DEF*/
        DataCursor YOXBSCEFTDRQEL;
        /*SET*/
        FJIWLCFYWXTEYY = arg_from;
        /*INC*/
        if (!INC(FJIWLCFYWXTEYY, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (FJIWLCFYWXTEYY.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        QDHXWJHIUDGHYX = FJIWLCFYWXTEYY.container->value.bracket_data.chain->at_before_first();
        YOXBSCEFTDRQEL   = FJIWLCFYWXTEYY.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = QDHXWJHIUDGHYX;
        /*SET*/
        r_1 = QDHXWJHIUDGHYX;
        /*JMP*/
        goto label_XFVCFBBJJYFSVK_firststep;
label_XFVCFBBJJYFSVK:
        /*INC*/
        if (!INC(r_1, YOXBSCEFTDRQEL)) goto sentence_after_1;
label_XFVCFBBJJYFSVK_firststep:
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor VSAPDSHAKGDVHC;
        /*DEF*/
        DataCursor l_A;
        /*DEF*/
        DataCursor r_A;
        /*SET*/
        l_A = r_1;
        /*SET*/
        VSAPDSHAKGDVHC = r_1;
        /*INC*/
        if (!INC(VSAPDSHAKGDVHC, YOXBSCEFTDRQEL)) goto label_XFVCFBBJJYFSVK;
        if (! isSymbolType(VSAPDSHAKGDVHC.container->type)) goto label_XFVCFBBJJYFSVK;
        /*SET*/
        r_A = VSAPDSHAKGDVHC;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = r_A;
        /*SET*/
        r_2 = r_A;
        /*JMP*/
        goto label_FMCEZTGJCMHXLH_firststep;
label_FMCEZTGJCMHXLH:
        /*INC*/
        if (!INC(r_2, YOXBSCEFTDRQEL)) goto label_XFVCFBBJJYFSVK;
label_FMCEZTGJCMHXLH_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor ASQKAUQLNFHGGT;
        /*SET*/
        ASQKAUQLNFHGGT = r_2;
        if (!SLIDE(ASQKAUQLNFHGGT, YOXBSCEFTDRQEL, l_A, r_A)) goto label_FMCEZTGJCMHXLH;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_3;
        /*DEF*/
        DataCursor r_3;
        /*SET*/
        l_3 = ASQKAUQLNFHGGT;
        /*SET*/
        r_3 = ASQKAUQLNFHGGT;
        /*JMP*/
        goto label_AGRNFFMNPINWLE_firststep;
label_AGRNFFMNPINWLE:
        /*INC*/
        if (!INC(r_3, YOXBSCEFTDRQEL)) goto label_FMCEZTGJCMHXLH;
label_AGRNFFMNPINWLE_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor XRQXISBFNHJZQV;
        /*SET*/
        XRQXISBFNHJZQV = r_3;
        if (!SLIDE(XRQXISBFNHJZQV, YOXBSCEFTDRQEL, l_A, r_A)) goto label_AGRNFFMNPINWLE;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_4;
        /*DEF*/
        DataCursor r_4;
        /*SET*/
        l_4 = XRQXISBFNHJZQV;
        /*SET*/
        r_4 = YOXBSCEFTDRQEL;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor OXKUKYLZCRUPMI;
        /*DEF*/
        DataCursor BACPJZSNACLMNU;
        /*DEF*/
        DataCursor QNBDIFZLUJQVNF;
        /*SET*/
        OXKUKYLZCRUPMI = FJIWLCFYWXTEYY;
        /*INC*/
        if (!INC(OXKUKYLZCRUPMI, arg_to)) goto label_AGRNFFMNPINWLE;
//// ISBRACKET
        if (OXKUKYLZCRUPMI.container->type != struct_bracket) goto label_AGRNFFMNPINWLE;
//// JMP_BRACKET
        BACPJZSNACLMNU = OXKUKYLZCRUPMI.container->value.bracket_data.chain->at_before_first();
        QNBDIFZLUJQVNF   = OXKUKYLZCRUPMI.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = BACPJZSNACLMNU;
        /*SET*/
        r_e = QNBDIFZLUJQVNF;
//// [ empty ]
        /*ISEMPTY*/
        if (OXKUKYLZCRUPMI!=0 && arg_to != OXKUKYLZCRUPMI) goto label_AGRNFFMNPINWLE;

// подстановка
        result->append(newRefText("1"));
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor JXXVKCZFKZZJQN;
        /*DEF*/
        DataCursor AQPOHYGJSJTAKZ;
        /*DEF*/
        DataCursor RSOSYQHQUHKJCJ;
        /*SET*/
        JXXVKCZFKZZJQN = arg_from;
        /*INC*/
        if (!INC(JXXVKCZFKZZJQN, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (JXXVKCZFKZZJQN.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        AQPOHYGJSJTAKZ = JXXVKCZFKZZJQN.container->value.bracket_data.chain->at_before_first();
        RSOSYQHQUHKJCJ   = JXXVKCZFKZZJQN.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = AQPOHYGJSJTAKZ;
        /*SET*/
        r_e = RSOSYQHQUHKJCJ;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor YUGTEDOGFURKXI;
        /*DEF*/
        DataCursor YQUFOTIAJMWHYI;
        /*DEF*/
        DataCursor LTHMOEVLWLRXPW;
        /*SET*/
        YUGTEDOGFURKXI = JXXVKCZFKZZJQN;
        /*INC*/
        if (!INC(YUGTEDOGFURKXI, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (YUGTEDOGFURKXI.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        YQUFOTIAJMWHYI = YUGTEDOGFURKXI.container->value.bracket_data.chain->at_before_first();
        LTHMOEVLWLRXPW   = YUGTEDOGFURKXI.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = YQUFOTIAJMWHYI;
        /*SET*/
        r_1 = YQUFOTIAJMWHYI;
        /*JMP*/
        goto label_PZHSVBFZVTVHWY_firststep;
label_PZHSVBFZVTVHWY:
        /*INC*/
        if (!INC(r_1, LTHMOEVLWLRXPW)) goto sentence_after_2;
label_PZHSVBFZVTVHWY_firststep:
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor CFZNMAOMAFSYVY;
        /*DEF*/
        DataCursor l_A;
        /*DEF*/
        DataCursor r_A;
        /*SET*/
        l_A = r_1;
        /*SET*/
        CFZNMAOMAFSYVY = r_1;
        /*INC*/
        if (!INC(CFZNMAOMAFSYVY, LTHMOEVLWLRXPW)) goto label_PZHSVBFZVTVHWY;
        if (! isSymbolType(CFZNMAOMAFSYVY.container->type)) goto label_PZHSVBFZVTVHWY;
        /*SET*/
        r_A = CFZNMAOMAFSYVY;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = r_A;
        /*SET*/
        r_2 = r_A;
        /*JMP*/
        goto label_RQPIZTEUOXGTHF_firststep;
label_RQPIZTEUOXGTHF:
        /*INC*/
        if (!INC(r_2, LTHMOEVLWLRXPW)) goto label_PZHSVBFZVTVHWY;
label_RQPIZTEUOXGTHF_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor XSMXJRWPSURSGW;
        /*SET*/
        XSMXJRWPSURSGW = r_2;
        if (!SLIDE(XSMXJRWPSURSGW, LTHMOEVLWLRXPW, l_A, r_A)) goto label_RQPIZTEUOXGTHF;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_3;
        /*DEF*/
        DataCursor r_3;
        /*SET*/
        l_3 = XSMXJRWPSURSGW;
        /*SET*/
        r_3 = XSMXJRWPSURSGW;
        /*JMP*/
        goto label_THHILGDHZFZAXA_firststep;
label_THHILGDHZFZAXA:
        /*INC*/
        if (!INC(r_3, LTHMOEVLWLRXPW)) goto label_RQPIZTEUOXGTHF;
label_THHILGDHZFZAXA_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor DTKLHYHQZFDIMS;
        /*SET*/
        DTKLHYHQZFDIMS = r_3;
        if (!SLIDE(DTKLHYHQZFDIMS, LTHMOEVLWLRXPW, l_A, r_A)) goto label_THHILGDHZFZAXA;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_4;
        /*DEF*/
        DataCursor r_4;
        /*SET*/
        l_4 = DTKLHYHQZFDIMS;
        /*SET*/
        r_4 = LTHMOEVLWLRXPW;
//// [ empty ]
        /*ISEMPTY*/
        if (YUGTEDOGFURKXI!=0 && arg_to != YUGTEDOGFURKXI) goto label_THHILGDHZFZAXA;

// подстановка
        result->append(newRefText("2"));
        return result;
    }
sentence_after_2:

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor RUEECXKQKRUDLM;
        /*DEF*/
        DataCursor ZGDTNHMIVNNKCL;
        /*DEF*/
        DataCursor GARYGYDQDHLTRS;
        /*SET*/
        RUEECXKQKRUDLM = arg_from;
        /*INC*/
        if (!INC(RUEECXKQKRUDLM, arg_to)) goto sentence_after_3;
//// ISBRACKET
        if (RUEECXKQKRUDLM.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET
        ZGDTNHMIVNNKCL = RUEECXKQKRUDLM.container->value.bracket_data.chain->at_before_first();
        GARYGYDQDHLTRS   = RUEECXKQKRUDLM.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = ZGDTNHMIVNNKCL;
        /*SET*/
        r_1 = GARYGYDQDHLTRS;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor THIDZYQAZFNOVK;
        /*DEF*/
        DataCursor TQCOTCHCOLINEI;
        /*DEF*/
        DataCursor YTYMRJSCYOEIVD;
        /*SET*/
        THIDZYQAZFNOVK = RUEECXKQKRUDLM;
        /*INC*/
        if (!INC(THIDZYQAZFNOVK, arg_to)) goto sentence_after_3;
//// ISBRACKET
        if (THIDZYQAZFNOVK.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET
        TQCOTCHCOLINEI = THIDZYQAZFNOVK.container->value.bracket_data.chain->at_before_first();
        YTYMRJSCYOEIVD   = THIDZYQAZFNOVK.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = TQCOTCHCOLINEI;
        /*SET*/
        r_2 = YTYMRJSCYOEIVD;
//// [ empty ]
        /*ISEMPTY*/
        if (THIDZYQAZFNOVK!=0 && arg_to != THIDZYQAZFNOVK) goto sentence_after_3;

// подстановка
        result->append(newRefText("0"));
        return result;
    }
sentence_after_3:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* Analiz(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ e.1 <any> ]
        /*DEF*/	DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = arg_from;
        /*SET*/
        r_1 = arg_from;
        /*JMP*/
        goto label_YHPHLJZHEZOHMI_firststep;
label_YHPHLJZHEZOHMI:
        /*INC*/
        if (!INC(r_1, arg_to)) goto sentence_after_1;
label_YHPHLJZHEZOHMI_firststep:
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor URCPBLVWAAJIQU;
        /*DEF*/
        DataCursor GTAOQMEMJLHGOX;
        /*DEF*/
        DataCursor PRURTYMKKTDBNO;
        /*SET*/
        URCPBLVWAAJIQU = r_1;
        /*INC*/
        if (!INC(URCPBLVWAAJIQU, arg_to)) goto label_YHPHLJZHEZOHMI;
//// ISBRACKET
        if (URCPBLVWAAJIQU.container->type != struct_bracket) goto label_YHPHLJZHEZOHMI;
//// JMP_BRACKET
        GTAOQMEMJLHGOX = URCPBLVWAAJIQU.container->value.bracket_data.chain->at_before_first();
        PRURTYMKKTDBNO   = URCPBLVWAAJIQU.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_3;
        /*DEF*/
        DataCursor r_3;
        /*SET*/
        l_3 = GTAOQMEMJLHGOX;
        /*SET*/
        r_3 = GTAOQMEMJLHGOX;
        /*JMP*/
        goto label_XWTTGEEQIMLHCZ_firststep;
label_XWTTGEEQIMLHCZ:
        /*INC*/
        if (!INC(r_3, PRURTYMKKTDBNO)) goto label_YHPHLJZHEZOHMI;
label_XWTTGEEQIMLHCZ_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor TCTYPHMEQDSUYV;
        /*SET*/
        TCTYPHMEQDSUYV = r_3;
        /*INC*/
        if (!INC(TCTYPHMEQDSUYV, PRURTYMKKTDBNO)) goto label_XWTTGEEQIMLHCZ;
        if (TCTYPHMEQDSUYV.container->type != text || *(TCTYPHMEQDSUYV.container->value.text + TCTYPHMEQDSUYV.index) != '>') goto label_XWTTGEEQIMLHCZ;
//// [ empty ]
        /*ISEMPTY*/
        if (TCTYPHMEQDSUYV!=0 && PRURTYMKKTDBNO != TCTYPHMEQDSUYV) goto label_XWTTGEEQIMLHCZ;
//// [ empty ]
        /*ISEMPTY*/
        if (URCPBLVWAAJIQU!=0 && arg_to != URCPBLVWAAJIQU) goto label_XWTTGEEQIMLHCZ;

// подстановка
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor VOZIMHXXQHDUIQ;
        /*DEF*/
        DataCursor EDLNGWGOOOUPNE;
        /*DEF*/
        DataCursor DKSDGPMHHDAQBS;
        /*SET*/
        VOZIMHXXQHDUIQ = arg_from;
        /*INC*/
        if (!INC(VOZIMHXXQHDUIQ, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (VOZIMHXXQHDUIQ.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        EDLNGWGOOOUPNE = VOZIMHXXQHDUIQ.container->value.bracket_data.chain->at_before_first();
        DKSDGPMHHDAQBS   = VOZIMHXXQHDUIQ.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ]
        /*DEF*/
        DataCursor QRFPDRSYKHBUTS;
        /*SET*/
        QRFPDRSYKHBUTS = EDLNGWGOOOUPNE;
        /*INC*/
        if (!INC(QRFPDRSYKHBUTS, DKSDGPMHHDAQBS)) goto sentence_after_2;
        if (QRFPDRSYKHBUTS.container->type != text || *(QRFPDRSYKHBUTS.container->value.text + QRFPDRSYKHBUTS.index) != '1') goto sentence_after_2;
//// [ empty ]
        /*ISEMPTY*/
        if (QRFPDRSYKHBUTS!=0 && DKSDGPMHHDAQBS != QRFPDRSYKHBUTS) goto sentence_after_2;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor DYFOECQQNLEMKI;
        /*DEF*/
        DataCursor MIPECEHLBTMBWN;
        /*DEF*/
        DataCursor KDXYMECLSSHVKM;
        /*SET*/
        DYFOECQQNLEMKI = VOZIMHXXQHDUIQ;
        /*INC*/
        if (!INC(DYFOECQQNLEMKI, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (DYFOECQQNLEMKI.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        MIPECEHLBTMBWN = DYFOECQQNLEMKI.container->value.bracket_data.chain->at_before_first();
        KDXYMECLSSHVKM   = DYFOECQQNLEMKI.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = MIPECEHLBTMBWN;
        /*SET*/
        r_1 = KDXYMECLSSHVKM;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor YWJXESHOIHMLGV;
        /*DEF*/
        DataCursor XILJVWLLFPNJZY;
        /*DEF*/
        DataCursor WCPAMEVWTYGFPH;
        /*SET*/
        YWJXESHOIHMLGV = DYFOECQQNLEMKI;
        /*INC*/
        if (!INC(YWJXESHOIHMLGV, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (YWJXESHOIHMLGV.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        XILJVWLLFPNJZY = YWJXESHOIHMLGV.container->value.bracket_data.chain->at_before_first();
        WCPAMEVWTYGFPH   = YWJXESHOIHMLGV.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = XILJVWLLFPNJZY;
        /*SET*/
        r_2 = WCPAMEVWTYGFPH;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor IFUBTTNWNPHDBY;
        /*DEF*/
        DataCursor TWODCLRJPRSEQW;
        /*DEF*/
        DataCursor RDWSVYNCGFRAZZ;
        /*SET*/
        IFUBTTNWNPHDBY = YWJXESHOIHMLGV;
        /*INC*/
        if (!INC(IFUBTTNWNPHDBY, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (IFUBTTNWNPHDBY.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        TWODCLRJPRSEQW = IFUBTTNWNPHDBY.container->value.bracket_data.chain->at_before_first();
        RDWSVYNCGFRAZZ   = IFUBTTNWNPHDBY.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_3;
        /*DEF*/
        DataCursor r_3;
        /*SET*/
        l_3 = TWODCLRJPRSEQW;
        /*SET*/
        r_3 = TWODCLRJPRSEQW;
        /*JMP*/
        goto label_AODGGXWWBTJQUJ_firststep;
label_AODGGXWWBTJQUJ:
        /*INC*/
        if (!INC(r_3, RDWSVYNCGFRAZZ)) goto sentence_after_2;
label_AODGGXWWBTJQUJ_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor RMCDPOMJRYLEDH;
        /*SET*/
        RMCDPOMJRYLEDH = r_3;
        /*INC*/
        if (!INC(RMCDPOMJRYLEDH, RDWSVYNCGFRAZZ)) goto label_AODGGXWWBTJQUJ;
        if (RMCDPOMJRYLEDH.container->type != text || *(RMCDPOMJRYLEDH.container->value.text + RMCDPOMJRYLEDH.index) != '>') goto label_AODGGXWWBTJQUJ;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor UFHWKHZKTNKYTG;
        /*DEF*/
        DataCursor l_A;
        /*DEF*/
        DataCursor r_A;
        /*SET*/
        l_A = RMCDPOMJRYLEDH;
        /*SET*/
        UFHWKHZKTNKYTG = RMCDPOMJRYLEDH;
        /*INC*/
        if (!INC(UFHWKHZKTNKYTG, RDWSVYNCGFRAZZ)) goto label_AODGGXWWBTJQUJ;
        if (! isSymbolType(UFHWKHZKTNKYTG.container->type)) goto label_AODGGXWWBTJQUJ;
        /*SET*/
        r_A = UFHWKHZKTNKYTG;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_4;
        /*DEF*/
        DataCursor r_4;
        /*SET*/
        l_4 = r_A;
        /*SET*/
        r_4 = RDWSVYNCGFRAZZ;
//// [ empty ]
        /*ISEMPTY*/
        if (IFUBTTNWNPHDBY!=0 && arg_to != IFUBTTNWNPHDBY) goto label_AODGGXWWBTJQUJ;

// подстановка
        DataChain* HWQQSLDZCSFOJS = new DataChain();
        DataContainer* HWQQSLDZCSFOJS_execbr = newRefExecBrackets(PolnAnaliz, HWQQSLDZCSFOJS, "PolnAnaliz");
        result->append(HWQQSLDZCSFOJS_execbr);
        DataChain* WRQCNBQYXAAGIB = new DataChain();
        HWQQSLDZCSFOJS->append(newRefStructBrackets(WRQCNBQYXAAGIB));
        WRQCNBQYXAAGIB->append(newRefText("2"));
        DataChain* PVTXDONPEASHNR = new DataChain();
        HWQQSLDZCSFOJS->append(newRefStructBrackets(PVTXDONPEASHNR));
        PVTXDONPEASHNR->append_copy(l_1, r_1);
        PVTXDONPEASHNR->append_copy(l_A, r_A);
        DataChain* OHUVOGLDXHSPRN = new DataChain();
        HWQQSLDZCSFOJS->append(newRefStructBrackets(OHUVOGLDXHSPRN));
        OHUVOGLDXHSPRN->append_copy(l_2, r_2);
        DataChain* GSOQDJFQTEXYRW = new DataChain();
        HWQQSLDZCSFOJS->append(newRefStructBrackets(GSOQDJFQTEXYRW));
        GSOQDJFQTEXYRW->append_copy(l_3, r_3);
        GSOQDJFQTEXYRW->append_copy(l_4, r_4);
        context->pushExecuteCall(HWQQSLDZCSFOJS_execbr);
        return result;
    }
sentence_after_2:

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor IZZOEOWAQEZDLM;
        /*DEF*/
        DataCursor WAFCOZVQCIEWGK;
        /*DEF*/
        DataCursor EKFGRCYVZSAHPS;
        /*SET*/
        IZZOEOWAQEZDLM = arg_from;
        /*INC*/
        if (!INC(IZZOEOWAQEZDLM, arg_to)) goto sentence_after_3;
//// ISBRACKET
        if (IZZOEOWAQEZDLM.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET
        WAFCOZVQCIEWGK = IZZOEOWAQEZDLM.container->value.bracket_data.chain->at_before_first();
        EKFGRCYVZSAHPS   = IZZOEOWAQEZDLM.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ]
        /*DEF*/
        DataCursor ZOBRIXWXKPICLQ;
        /*SET*/
        ZOBRIXWXKPICLQ = WAFCOZVQCIEWGK;
        /*INC*/
        if (!INC(ZOBRIXWXKPICLQ, EKFGRCYVZSAHPS)) goto sentence_after_3;
        if (ZOBRIXWXKPICLQ.container->type != text || *(ZOBRIXWXKPICLQ.container->value.text + ZOBRIXWXKPICLQ.index) != '2') goto sentence_after_3;
//// [ empty ]
        /*ISEMPTY*/
        if (ZOBRIXWXKPICLQ!=0 && EKFGRCYVZSAHPS != ZOBRIXWXKPICLQ) goto sentence_after_3;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor BCWLFKFFRLZZMK;
        /*DEF*/
        DataCursor VMHNLCIVWHWZTZ;
        /*DEF*/
        DataCursor RBXJCRTUVTXFKI;
        /*SET*/
        BCWLFKFFRLZZMK = IZZOEOWAQEZDLM;
        /*INC*/
        if (!INC(BCWLFKFFRLZZMK, arg_to)) goto sentence_after_3;
//// ISBRACKET
        if (BCWLFKFFRLZZMK.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET
        VMHNLCIVWHWZTZ = BCWLFKFFRLZZMK.container->value.bracket_data.chain->at_before_first();
        RBXJCRTUVTXFKI   = BCWLFKFFRLZZMK.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = VMHNLCIVWHWZTZ;
        /*SET*/
        r_1 = RBXJCRTUVTXFKI;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor DXHOAFYESYVIZV;
        /*DEF*/
        DataCursor OZSQORQMQLESIX;
        /*DEF*/
        DataCursor RNERZOOWRVWPMI;
        /*SET*/
        DXHOAFYESYVIZV = BCWLFKFFRLZZMK;
        /*INC*/
        if (!INC(DXHOAFYESYVIZV, arg_to)) goto sentence_after_3;
//// ISBRACKET
        if (DXHOAFYESYVIZV.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET
        OZSQORQMQLESIX = DXHOAFYESYVIZV.container->value.bracket_data.chain->at_before_first();
        RNERZOOWRVWPMI   = DXHOAFYESYVIZV.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = OZSQORQMQLESIX;
        /*SET*/
        r_2 = RNERZOOWRVWPMI;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor BHHYFFUVKOUKDW;
        /*DEF*/
        DataCursor JCVXQGLSCHJAGQ;
        /*DEF*/
        DataCursor UEHPNHKYCPMJTG;
        /*SET*/
        BHHYFFUVKOUKDW = DXHOAFYESYVIZV;
        /*INC*/
        if (!INC(BHHYFFUVKOUKDW, arg_to)) goto sentence_after_3;
//// ISBRACKET
        if (BHHYFFUVKOUKDW.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET
        JCVXQGLSCHJAGQ = BHHYFFUVKOUKDW.container->value.bracket_data.chain->at_before_first();
        UEHPNHKYCPMJTG   = BHHYFFUVKOUKDW.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_3;
        /*DEF*/
        DataCursor r_3;
        /*SET*/
        l_3 = JCVXQGLSCHJAGQ;
        /*SET*/
        r_3 = JCVXQGLSCHJAGQ;
        /*JMP*/
        goto label_LUDHRBEFJJFYTK_firststep;
label_LUDHRBEFJJFYTK:
        /*INC*/
        if (!INC(r_3, UEHPNHKYCPMJTG)) goto sentence_after_3;
label_LUDHRBEFJJFYTK_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor XLBNVMDWSYXHGS;
        /*SET*/
        XLBNVMDWSYXHGS = r_3;
        /*INC*/
        if (!INC(XLBNVMDWSYXHGS, UEHPNHKYCPMJTG)) goto label_LUDHRBEFJJFYTK;
        if (XLBNVMDWSYXHGS.container->type != text || *(XLBNVMDWSYXHGS.container->value.text + XLBNVMDWSYXHGS.index) != '>') goto label_LUDHRBEFJJFYTK;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor CZHYJGDFGNWFPD;
        /*DEF*/
        DataCursor l_A;
        /*DEF*/
        DataCursor r_A;
        /*SET*/
        l_A = XLBNVMDWSYXHGS;
        /*SET*/
        CZHYJGDFGNWFPD = XLBNVMDWSYXHGS;
        /*INC*/
        if (!INC(CZHYJGDFGNWFPD, UEHPNHKYCPMJTG)) goto label_LUDHRBEFJJFYTK;
        if (! isSymbolType(CZHYJGDFGNWFPD.container->type)) goto label_LUDHRBEFJJFYTK;
        /*SET*/
        r_A = CZHYJGDFGNWFPD;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_4;
        /*DEF*/
        DataCursor r_4;
        /*SET*/
        l_4 = r_A;
        /*SET*/
        r_4 = UEHPNHKYCPMJTG;
//// [ empty ]
        /*ISEMPTY*/
        if (BHHYFFUVKOUKDW!=0 && arg_to != BHHYFFUVKOUKDW) goto label_LUDHRBEFJJFYTK;

// подстановка
        DataChain* QMSSYGHWDVAEQJ = new DataChain();
        DataContainer* QMSSYGHWDVAEQJ_execbr = newRefExecBrackets(PolnAnaliz, QMSSYGHWDVAEQJ, "PolnAnaliz");
        result->append(QMSSYGHWDVAEQJ_execbr);
        DataChain* KZMHIYDLXDJOHN = new DataChain();
        QMSSYGHWDVAEQJ->append(newRefStructBrackets(KZMHIYDLXDJOHN));
        KZMHIYDLXDJOHN->append(newRefText("1"));
        DataChain* SCGHBTUSWZUMSQ = new DataChain();
        QMSSYGHWDVAEQJ->append(newRefStructBrackets(SCGHBTUSWZUMSQ));
        SCGHBTUSWZUMSQ->append_copy(l_1, r_1);
        DataChain* OYKIIDFWFXYAAA = new DataChain();
        QMSSYGHWDVAEQJ->append(newRefStructBrackets(OYKIIDFWFXYAAA));
        OYKIIDFWFXYAAA->append_copy(l_2, r_2);
        OYKIIDFWFXYAAA->append_copy(l_A, r_A);
        DataChain* YMOIVFHJLRWYAX = new DataChain();
        QMSSYGHWDVAEQJ->append(newRefStructBrackets(YMOIVFHJLRWYAX));
        YMOIVFHJLRWYAX->append_copy(l_3, r_3);
        YMOIVFHJLRWYAX->append_copy(l_4, r_4);
        context->pushExecuteCall(QMSSYGHWDVAEQJ_execbr);
        return result;
    }
sentence_after_3:

    {
// сопоставление
//// [ e.1 ]
        /*DEF*/	DataCursor l_e;
        /*DEF*/
        DataCursor r_e;
        /*SET*/
        l_e = arg_from;
        /*SET*/
        r_e = arg_to;

// подстановка
        DataChain* AWGEURBRNBERAZ = new DataChain();
        DataContainer* AWGEURBRNBERAZ_execbr = newRefExecBrackets(Prout, AWGEURBRNBERAZ, "Prout");
        result->append(AWGEURBRNBERAZ_execbr);
        AWGEURBRNBERAZ->append(newRefText("No point: "));
        AWGEURBRNBERAZ->append_copy(l_e, r_e);
        context->pushExecuteCall(AWGEURBRNBERAZ_execbr);
        return result;
    }
sentence_after_4:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* PolnAnaliz(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor SXTKAQUEHJFCEW;
        /*DEF*/
        DataCursor CTBFJTPQDLJHEH;
        /*DEF*/
        DataCursor JOBMARGUQWSOKL;
        /*SET*/
        SXTKAQUEHJFCEW = arg_from;
        /*INC*/
        if (!INC(SXTKAQUEHJFCEW, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (SXTKAQUEHJFCEW.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        CTBFJTPQDLJHEH = SXTKAQUEHJFCEW.container->value.bracket_data.chain->at_before_first();
        JOBMARGUQWSOKL   = SXTKAQUEHJFCEW.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor DZSCSFACXFZXFJ;
        /*DEF*/
        DataCursor l_g;
        /*DEF*/
        DataCursor r_g;
        /*SET*/
        l_g = CTBFJTPQDLJHEH;
        /*SET*/
        DZSCSFACXFZXFJ = CTBFJTPQDLJHEH;
        /*INC*/
        if (!INC(DZSCSFACXFZXFJ, JOBMARGUQWSOKL)) goto sentence_after_1;
        if (! isSymbolType(DZSCSFACXFZXFJ.container->type)) goto sentence_after_1;
        /*SET*/
        r_g = DZSCSFACXFZXFJ;
//// [ empty ]
        /*ISEMPTY*/
        if (r_g!=0 && JOBMARGUQWSOKL != r_g) goto sentence_after_1;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor QOVERSCJZBKMZD;
        /*DEF*/
        DataCursor NDOSIYHTYAVOXH;
        /*DEF*/
        DataCursor TAPYEKTUATPRWS;
        /*SET*/
        QOVERSCJZBKMZD = SXTKAQUEHJFCEW;
        /*INC*/
        if (!INC(QOVERSCJZBKMZD, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (QOVERSCJZBKMZD.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        NDOSIYHTYAVOXH = QOVERSCJZBKMZD.container->value.bracket_data.chain->at_before_first();
        TAPYEKTUATPRWS   = QOVERSCJZBKMZD.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = NDOSIYHTYAVOXH;
        /*SET*/
        r_1 = TAPYEKTUATPRWS;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor KXZCZNFDIUEHUW;
        /*DEF*/
        DataCursor YMTXDRNKLSMDUS;
        /*DEF*/
        DataCursor KVUTKFIUBZYBLW;
        /*SET*/
        KXZCZNFDIUEHUW = QOVERSCJZBKMZD;
        /*INC*/
        if (!INC(KXZCZNFDIUEHUW, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (KXZCZNFDIUEHUW.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        YMTXDRNKLSMDUS = KXZCZNFDIUEHUW.container->value.bracket_data.chain->at_before_first();
        KVUTKFIUBZYBLW   = KXZCZNFDIUEHUW.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = YMTXDRNKLSMDUS;
        /*SET*/
        r_2 = KVUTKFIUBZYBLW;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor MPARMJDSPXYWXE;
        /*DEF*/
        DataCursor RFTZLKORIEBSUP;
        /*DEF*/
        DataCursor CPXCJWKUVEEREN;
        /*SET*/
        MPARMJDSPXYWXE = KXZCZNFDIUEHUW;
        /*INC*/
        if (!INC(MPARMJDSPXYWXE, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (MPARMJDSPXYWXE.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        RFTZLKORIEBSUP = MPARMJDSPXYWXE.container->value.bracket_data.chain->at_before_first();
        CPXCJWKUVEEREN   = MPARMJDSPXYWXE.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_n;
        /*DEF*/
        DataCursor r_n;
        /*SET*/
        l_n = RFTZLKORIEBSUP;
        /*SET*/
        r_n = CPXCJWKUVEEREN;
//// [ empty ]
        /*ISEMPTY*/
        if (MPARMJDSPXYWXE!=0 && arg_to != MPARMJDSPXYWXE) goto sentence_after_1;

// подстановка
        DataChain* LAITVYCICYZALW = new DataChain();
        DataContainer* LAITVYCICYZALW_execbr = newRefExecBrackets(Ifmust, LAITVYCICYZALW, "Ifmust");
        result->append(LAITVYCICYZALW_execbr);
        DataChain* UIUZTEYCTMUIFE = new DataChain();
        LAITVYCICYZALW->append(newRefStructBrackets(UIUZTEYCTMUIFE));
        DataChain* FYGAIAIOIIEDBY = new DataChain();
        DataContainer* FYGAIAIOIIEDBY_execbr = newRefExecBrackets(Strategy, FYGAIAIOIIEDBY, "Strategy");
        UIUZTEYCTMUIFE->append(FYGAIAIOIIEDBY_execbr);
        FYGAIAIOIIEDBY->append_copy(l_1, r_1);
        context->pushExecuteCall(FYGAIAIOIIEDBY_execbr);
        DataChain* WRGRTDXVDKOCSA = new DataChain();
        LAITVYCICYZALW->append(newRefStructBrackets(WRGRTDXVDKOCSA));
        DataChain* EHFCILQJOEVAJN = new DataChain();
        DataContainer* EHFCILQJOEVAJN_execbr = newRefExecBrackets(Strategy, EHFCILQJOEVAJN, "Strategy");
        WRGRTDXVDKOCSA->append(EHFCILQJOEVAJN_execbr);
        EHFCILQJOEVAJN->append_copy(l_2, r_2);
        context->pushExecuteCall(EHFCILQJOEVAJN_execbr);
        DataChain* JTTKNRSPRTKRLK = new DataChain();
        LAITVYCICYZALW->append(newRefStructBrackets(JTTKNRSPRTKRLK));
        DataChain* JAPYMUZRPHZLCE = new DataChain();
        DataContainer* JAPYMUZRPHZLCE_execbr = newRefExecBrackets(Strategy, JAPYMUZRPHZLCE, "Strategy");
        JTTKNRSPRTKRLK->append(JAPYMUZRPHZLCE_execbr);
        JAPYMUZRPHZLCE->append_copy(l_n, r_n);
        context->pushExecuteCall(JAPYMUZRPHZLCE_execbr);
        DataChain* PAYTFAVEOPSZRN = new DataChain();
        LAITVYCICYZALW->append(newRefStructBrackets(PAYTFAVEOPSZRN));
        PAYTFAVEOPSZRN->append_copy(l_g, r_g);
        DataChain* KVNEHRJSTZFLVY = new DataChain();
        LAITVYCICYZALW->append(newRefStructBrackets(KVNEHRJSTZFLVY));
        KVNEHRJSTZFLVY->append_copy(l_1, r_1);
        DataChain* AHORKTKMGYCOUI = new DataChain();
        LAITVYCICYZALW->append(newRefStructBrackets(AHORKTKMGYCOUI));
        AHORKTKMGYCOUI->append_copy(l_2, r_2);
        DataChain* ERTLPBJCSXQLGY = new DataChain();
        LAITVYCICYZALW->append(newRefStructBrackets(ERTLPBJCSXQLGY));
        ERTLPBJCSXQLGY->append_copy(l_n, r_n);
        context->pushExecuteCall(LAITVYCICYZALW_execbr);
        return result;
    }
sentence_after_1:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* Ifmust(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor GLMVLYQXIXIPVW;
        /*DEF*/
        DataCursor OQLNKAEQMARVXU;
        /*DEF*/
        DataCursor MKRNJCOKVFKTQJ;
        /*SET*/
        GLMVLYQXIXIPVW = arg_from;
        /*INC*/
        if (!INC(GLMVLYQXIXIPVW, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (GLMVLYQXIXIPVW.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        OQLNKAEQMARVXU = GLMVLYQXIXIPVW.container->value.bracket_data.chain->at_before_first();
        MKRNJCOKVFKTQJ   = GLMVLYQXIXIPVW.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_e1;
        /*DEF*/
        DataCursor r_e1;
        /*SET*/
        l_e1 = OQLNKAEQMARVXU;
        /*SET*/
        r_e1 = MKRNJCOKVFKTQJ;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor DCUGBIDVBXRNSA;
        /*DEF*/
        DataCursor QWXTBFTQSNPAVY;
        /*DEF*/
        DataCursor TODPJDPVYQXKSU;
        /*SET*/
        DCUGBIDVBXRNSA = GLMVLYQXIXIPVW;
        /*INC*/
        if (!INC(DCUGBIDVBXRNSA, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (DCUGBIDVBXRNSA.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        QWXTBFTQSNPAVY = DCUGBIDVBXRNSA.container->value.bracket_data.chain->at_before_first();
        TODPJDPVYQXKSU   = DCUGBIDVBXRNSA.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_e21;
        /*DEF*/
        DataCursor r_e21;
        /*SET*/
        l_e21 = QWXTBFTQSNPAVY;
        /*SET*/
        r_e21 = QWXTBFTQSNPAVY;
        /*JMP*/
        goto label_VZWZTJRWOVTTLN_firststep;
label_VZWZTJRWOVTTLN:
        /*INC*/
        if (!INC(r_e21, TODPJDPVYQXKSU)) goto sentence_after_1;
label_VZWZTJRWOVTTLN_firststep:
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor KZNQDQIAUAPWKC;
        /*DEF*/
        DataCursor l_A;
        /*DEF*/
        DataCursor r_A;
        /*SET*/
        l_A = r_e21;
        /*SET*/
        KZNQDQIAUAPWKC = r_e21;
        /*INC*/
        if (!INC(KZNQDQIAUAPWKC, TODPJDPVYQXKSU)) goto label_VZWZTJRWOVTTLN;
        if (! isSymbolType(KZNQDQIAUAPWKC.container->type)) goto label_VZWZTJRWOVTTLN;
        /*SET*/
        r_A = KZNQDQIAUAPWKC;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_e22;
        /*DEF*/
        DataCursor r_e22;
        /*SET*/
        l_e22 = r_A;
        /*SET*/
        r_e22 = r_A;
        /*JMP*/
        goto label_ZXRXOPENEUXFLG_firststep;
label_ZXRXOPENEUXFLG:
        /*INC*/
        if (!INC(r_e22, TODPJDPVYQXKSU)) goto label_VZWZTJRWOVTTLN;
label_ZXRXOPENEUXFLG_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor BDWJMHJGUZPEUD;
        /*SET*/
        BDWJMHJGUZPEUD = r_e22;
        if (!SLIDE(BDWJMHJGUZPEUD, TODPJDPVYQXKSU, l_A, r_A)) goto label_ZXRXOPENEUXFLG;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_e23;
        /*DEF*/
        DataCursor r_e23;
        /*SET*/
        l_e23 = BDWJMHJGUZPEUD;
        /*SET*/
        r_e23 = TODPJDPVYQXKSU;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor DFEIMOZYFRQMFO;
        /*DEF*/
        DataCursor ZISSCCRIFWQBHX;
        /*DEF*/
        DataCursor YEHKTUSDGZXLAE;
        /*SET*/
        DFEIMOZYFRQMFO = DCUGBIDVBXRNSA;
        /*INC*/
        if (!INC(DFEIMOZYFRQMFO, arg_to)) goto label_ZXRXOPENEUXFLG;
//// ISBRACKET
        if (DFEIMOZYFRQMFO.container->type != struct_bracket) goto label_ZXRXOPENEUXFLG;
//// JMP_BRACKET
        ZISSCCRIFWQBHX = DFEIMOZYFRQMFO.container->value.bracket_data.chain->at_before_first();
        YEHKTUSDGZXLAE   = DFEIMOZYFRQMFO.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_nn1;
        /*DEF*/
        DataCursor r_nn1;
        /*SET*/
        l_nn1 = ZISSCCRIFWQBHX;
        /*SET*/
        r_nn1 = ZISSCCRIFWQBHX;
        /*JMP*/
        goto label_YKEXQGQOEVJTFR_firststep;
label_YKEXQGQOEVJTFR:
        /*INC*/
        if (!INC(r_nn1, YEHKTUSDGZXLAE)) goto label_ZXRXOPENEUXFLG;
label_YKEXQGQOEVJTFR_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor AMUQGBDNRSMBXR;
        /*SET*/
        AMUQGBDNRSMBXR = r_nn1;
        if (!SLIDE(AMUQGBDNRSMBXR, YEHKTUSDGZXLAE, l_A, r_A)) goto label_YKEXQGQOEVJTFR;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_nn2;
        /*DEF*/
        DataCursor r_nn2;
        /*SET*/
        l_nn2 = AMUQGBDNRSMBXR;
        /*SET*/
        r_nn2 = YEHKTUSDGZXLAE;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor VBTFGLOWFFCTUJ;
        /*DEF*/
        DataCursor TZQWZGGTLBHROP;
        /*DEF*/
        DataCursor KWKBBWVNAKWVVD;
        /*SET*/
        VBTFGLOWFFCTUJ = DFEIMOZYFRQMFO;
        /*INC*/
        if (!INC(VBTFGLOWFFCTUJ, arg_to)) goto label_YKEXQGQOEVJTFR;
//// ISBRACKET
        if (VBTFGLOWFFCTUJ.container->type != struct_bracket) goto label_YKEXQGQOEVJTFR;
//// JMP_BRACKET
        TZQWZGGTLBHROP = VBTFGLOWFFCTUJ.container->value.bracket_data.chain->at_before_first();
        KWKBBWVNAKWVVD   = VBTFGLOWFFCTUJ.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ]
        /*DEF*/
        DataCursor YCXCZOZQIWORVP;
        /*SET*/
        YCXCZOZQIWORVP = TZQWZGGTLBHROP;
        /*INC*/
        if (!INC(YCXCZOZQIWORVP, KWKBBWVNAKWVVD)) goto label_YKEXQGQOEVJTFR;
        if (YCXCZOZQIWORVP.container->type != text || *(YCXCZOZQIWORVP.container->value.text + YCXCZOZQIWORVP.index) != '2') goto label_YKEXQGQOEVJTFR;
//// [ empty ]
        /*ISEMPTY*/
        if (YCXCZOZQIWORVP!=0 && KWKBBWVNAKWVVD != YCXCZOZQIWORVP) goto label_YKEXQGQOEVJTFR;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = VBTFGLOWFFCTUJ;
        /*SET*/
        r_1 = VBTFGLOWFFCTUJ;
        /*JMP*/
        goto label_NKCXEKJQZVUESW_firststep;
label_NKCXEKJQZVUESW:
        /*INC*/
        if (!INC(r_1, arg_to)) goto label_YKEXQGQOEVJTFR;
label_NKCXEKJQZVUESW_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor QKNZPYVYSDKHSO;
        /*SET*/
        QKNZPYVYSDKHSO = r_1;
        /*INC*/
        if (!INC(QKNZPYVYSDKHSO, arg_to)) goto label_NKCXEKJQZVUESW;
        if (QKNZPYVYSDKHSO.container->type != word || !memcmp(QKNZPYVYSDKHSO.container->value.word.value, "e2", QKNZPYVYSDKHSO.container->value.word.leng)) goto label_NKCXEKJQZVUESW;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor ICMHCZOHEFNASL;
        /*DEF*/
        DataCursor XWXLLXLEWTZUWB;
        /*DEF*/
        DataCursor SUVSENEIQWHNEZ;
        /*SET*/
        ICMHCZOHEFNASL = QKNZPYVYSDKHSO;
        /*INC*/
        if (!INC(ICMHCZOHEFNASL, arg_to)) goto label_NKCXEKJQZVUESW;
//// ISBRACKET
        if (ICMHCZOHEFNASL.container->type != struct_bracket) goto label_NKCXEKJQZVUESW;
//// JMP_BRACKET
        XWXLLXLEWTZUWB = ICMHCZOHEFNASL.container->value.bracket_data.chain->at_before_first();
        SUVSENEIQWHNEZ   = ICMHCZOHEFNASL.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_n;
        /*DEF*/
        DataCursor r_n;
        /*SET*/
        l_n = XWXLLXLEWTZUWB;
        /*SET*/
        r_n = SUVSENEIQWHNEZ;
//// [ empty ]
        /*ISEMPTY*/
        if (ICMHCZOHEFNASL!=0 && arg_to != ICMHCZOHEFNASL) goto label_NKCXEKJQZVUESW;

// подстановка
        result->append(newRefText("2"));
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor OJKXHORYESUGDH;
        /*DEF*/
        DataCursor TJCKQJDFGNRDOI;
        /*DEF*/
        DataCursor ZPYFMDLQLWQIOD;
        /*SET*/
        OJKXHORYESUGDH = arg_from;
        /*INC*/
        if (!INC(OJKXHORYESUGDH, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (OJKXHORYESUGDH.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        TJCKQJDFGNRDOI = OJKXHORYESUGDH.container->value.bracket_data.chain->at_before_first();
        ZPYFMDLQLWQIOD   = OJKXHORYESUGDH.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_e21;
        /*DEF*/
        DataCursor r_e21;
        /*SET*/
        l_e21 = TJCKQJDFGNRDOI;
        /*SET*/
        r_e21 = TJCKQJDFGNRDOI;
        /*JMP*/
        goto label_CWFYGKIVBUJFIN_firststep;
label_CWFYGKIVBUJFIN:
        /*INC*/
        if (!INC(r_e21, ZPYFMDLQLWQIOD)) goto sentence_after_2;
label_CWFYGKIVBUJFIN_firststep:
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor ZYHCEJCJOJONHG;
        /*DEF*/
        DataCursor l_A;
        /*DEF*/
        DataCursor r_A;
        /*SET*/
        l_A = r_e21;
        /*SET*/
        ZYHCEJCJOJONHG = r_e21;
        /*INC*/
        if (!INC(ZYHCEJCJOJONHG, ZPYFMDLQLWQIOD)) goto label_CWFYGKIVBUJFIN;
        if (! isSymbolType(ZYHCEJCJOJONHG.container->type)) goto label_CWFYGKIVBUJFIN;
        /*SET*/
        r_A = ZYHCEJCJOJONHG;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_e22;
        /*DEF*/
        DataCursor r_e22;
        /*SET*/
        l_e22 = r_A;
        /*SET*/
        r_e22 = r_A;
        /*JMP*/
        goto label_USTQJFNECOLOCM_firststep;
label_USTQJFNECOLOCM:
        /*INC*/
        if (!INC(r_e22, ZPYFMDLQLWQIOD)) goto label_CWFYGKIVBUJFIN;
label_USTQJFNECOLOCM_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor FHPZXTGFPMUSCR;
        /*SET*/
        FHPZXTGFPMUSCR = r_e22;
        if (!SLIDE(FHPZXTGFPMUSCR, ZPYFMDLQLWQIOD, l_A, r_A)) goto label_USTQJFNECOLOCM;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_e23;
        /*DEF*/
        DataCursor r_e23;
        /*SET*/
        l_e23 = FHPZXTGFPMUSCR;
        /*SET*/
        r_e23 = ZPYFMDLQLWQIOD;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor LDURENNLQKWHHY;
        /*DEF*/
        DataCursor IPQZEVBYKTBVTP;
        /*DEF*/
        DataCursor WVTTGECAJYLQVU;
        /*SET*/
        LDURENNLQKWHHY = OJKXHORYESUGDH;
        /*INC*/
        if (!INC(LDURENNLQKWHHY, arg_to)) goto label_USTQJFNECOLOCM;
//// ISBRACKET
        if (LDURENNLQKWHHY.container->type != struct_bracket) goto label_USTQJFNECOLOCM;
//// JMP_BRACKET
        IPQZEVBYKTBVTP = LDURENNLQKWHHY.container->value.bracket_data.chain->at_before_first();
        WVTTGECAJYLQVU   = LDURENNLQKWHHY.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_e1;
        /*DEF*/
        DataCursor r_e1;
        /*SET*/
        l_e1 = IPQZEVBYKTBVTP;
        /*SET*/
        r_e1 = WVTTGECAJYLQVU;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor IZFSOAYXZILJZE;
        /*DEF*/
        DataCursor GBLCATMVEFQRZX;
        /*DEF*/
        DataCursor WKTNDPBBZDRWLP;
        /*SET*/
        IZFSOAYXZILJZE = LDURENNLQKWHHY;
        /*INC*/
        if (!INC(IZFSOAYXZILJZE, arg_to)) goto label_USTQJFNECOLOCM;
//// ISBRACKET
        if (IZFSOAYXZILJZE.container->type != struct_bracket) goto label_USTQJFNECOLOCM;
//// JMP_BRACKET
        GBLCATMVEFQRZX = IZFSOAYXZILJZE.container->value.bracket_data.chain->at_before_first();
        WKTNDPBBZDRWLP   = IZFSOAYXZILJZE.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_nn1;
        /*DEF*/
        DataCursor r_nn1;
        /*SET*/
        l_nn1 = GBLCATMVEFQRZX;
        /*SET*/
        r_nn1 = GBLCATMVEFQRZX;
        /*JMP*/
        goto label_HLGDYWDOFNZXQL_firststep;
label_HLGDYWDOFNZXQL:
        /*INC*/
        if (!INC(r_nn1, WKTNDPBBZDRWLP)) goto label_USTQJFNECOLOCM;
label_HLGDYWDOFNZXQL_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor XVKHDJYALHVVPA;
        /*SET*/
        XVKHDJYALHVVPA = r_nn1;
        if (!SLIDE(XVKHDJYALHVVPA, WKTNDPBBZDRWLP, l_A, r_A)) goto label_HLGDYWDOFNZXQL;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_nn2;
        /*DEF*/
        DataCursor r_nn2;
        /*SET*/
        l_nn2 = XVKHDJYALHVVPA;
        /*SET*/
        r_nn2 = WKTNDPBBZDRWLP;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor ANGODNLXHLSXSH;
        /*DEF*/
        DataCursor HTIFXICKOBIXBB;
        /*DEF*/
        DataCursor DUZVNGQIAGGCXF;
        /*SET*/
        ANGODNLXHLSXSH = IZFSOAYXZILJZE;
        /*INC*/
        if (!INC(ANGODNLXHLSXSH, arg_to)) goto label_HLGDYWDOFNZXQL;
//// ISBRACKET
        if (ANGODNLXHLSXSH.container->type != struct_bracket) goto label_HLGDYWDOFNZXQL;
//// JMP_BRACKET
        HTIFXICKOBIXBB = ANGODNLXHLSXSH.container->value.bracket_data.chain->at_before_first();
        DUZVNGQIAGGCXF   = ANGODNLXHLSXSH.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ]
        /*DEF*/
        DataCursor GRJMARWUPAYBNQ;
        /*SET*/
        GRJMARWUPAYBNQ = HTIFXICKOBIXBB;
        /*INC*/
        if (!INC(GRJMARWUPAYBNQ, DUZVNGQIAGGCXF)) goto label_HLGDYWDOFNZXQL;
        if (GRJMARWUPAYBNQ.container->type != text || *(GRJMARWUPAYBNQ.container->value.text + GRJMARWUPAYBNQ.index) != '1') goto label_HLGDYWDOFNZXQL;
//// [ empty ]
        /*ISEMPTY*/
        if (GRJMARWUPAYBNQ!=0 && DUZVNGQIAGGCXF != GRJMARWUPAYBNQ) goto label_HLGDYWDOFNZXQL;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = ANGODNLXHLSXSH;
        /*SET*/
        r_1 = ANGODNLXHLSXSH;
        /*JMP*/
        goto label_LXJECCGQHBCZIB_firststep;
label_LXJECCGQHBCZIB:
        /*INC*/
        if (!INC(r_1, arg_to)) goto label_HLGDYWDOFNZXQL;
label_LXJECCGQHBCZIB_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor HQUFQQXVLLVMTZ;
        /*SET*/
        HQUFQQXVLLVMTZ = r_1;
        /*INC*/
        if (!INC(HQUFQQXVLLVMTZ, arg_to)) goto label_LXJECCGQHBCZIB;
        if (HQUFQQXVLLVMTZ.container->type != word || !memcmp(HQUFQQXVLLVMTZ.container->value.word.value, "e2", HQUFQQXVLLVMTZ.container->value.word.leng)) goto label_LXJECCGQHBCZIB;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor HFMBEZPLHQAKBM;
        /*DEF*/
        DataCursor MVAFQYXJYEXDSS;
        /*DEF*/
        DataCursor WBJIOUYMHLZCLT;
        /*SET*/
        HFMBEZPLHQAKBM = HQUFQQXVLLVMTZ;
        /*INC*/
        if (!INC(HFMBEZPLHQAKBM, arg_to)) goto label_LXJECCGQHBCZIB;
//// ISBRACKET
        if (HFMBEZPLHQAKBM.container->type != struct_bracket) goto label_LXJECCGQHBCZIB;
//// JMP_BRACKET
        MVAFQYXJYEXDSS = HFMBEZPLHQAKBM.container->value.bracket_data.chain->at_before_first();
        WBJIOUYMHLZCLT   = HFMBEZPLHQAKBM.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_n;
        /*DEF*/
        DataCursor r_n;
        /*SET*/
        l_n = MVAFQYXJYEXDSS;
        /*SET*/
        r_n = WBJIOUYMHLZCLT;
//// [ empty ]
        /*ISEMPTY*/
        if (HFMBEZPLHQAKBM!=0 && arg_to != HFMBEZPLHQAKBM) goto label_LXJECCGQHBCZIB;

// подстановка
        result->append(newRefText("1"));
        return result;
    }
sentence_after_2:

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor JUDOBFUOIWUBGE;
        /*DEF*/
        DataCursor IDPMVKHOZHKDUC;
        /*DEF*/
        DataCursor OMLGLTLVEINNCA;
        /*SET*/
        JUDOBFUOIWUBGE = arg_from;
        /*INC*/
        if (!INC(JUDOBFUOIWUBGE, arg_to)) goto sentence_after_3;
//// ISBRACKET
        if (JUDOBFUOIWUBGE.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET
        IDPMVKHOZHKDUC = JUDOBFUOIWUBGE.container->value.bracket_data.chain->at_before_first();
        OMLGLTLVEINNCA   = JUDOBFUOIWUBGE.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_e1;
        /*DEF*/
        DataCursor r_e1;
        /*SET*/
        l_e1 = IDPMVKHOZHKDUC;
        /*SET*/
        r_e1 = OMLGLTLVEINNCA;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor IKNSUGJQCCASDX;
        /*DEF*/
        DataCursor DAZCRTVLLKFVTE;
        /*DEF*/
        DataCursor ZAZZCSCTLEGENL;
        /*SET*/
        IKNSUGJQCCASDX = JUDOBFUOIWUBGE;
        /*INC*/
        if (!INC(IKNSUGJQCCASDX, arg_to)) goto sentence_after_3;
//// ISBRACKET
        if (IKNSUGJQCCASDX.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET
        DAZCRTVLLKFVTE = IKNSUGJQCCASDX.container->value.bracket_data.chain->at_before_first();
        ZAZZCSCTLEGENL   = IKNSUGJQCCASDX.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_e21;
        /*DEF*/
        DataCursor r_e21;
        /*SET*/
        l_e21 = DAZCRTVLLKFVTE;
        /*SET*/
        r_e21 = DAZCRTVLLKFVTE;
        /*JMP*/
        goto label_LTVKZDQOWGOLJP_firststep;
label_LTVKZDQOWGOLJP:
        /*INC*/
        if (!INC(r_e21, ZAZZCSCTLEGENL)) goto sentence_after_3;
label_LTVKZDQOWGOLJP_firststep:
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor DSYQNCSDJSDCXX;
        /*DEF*/
        DataCursor l_A;
        /*DEF*/
        DataCursor r_A;
        /*SET*/
        l_A = r_e21;
        /*SET*/
        DSYQNCSDJSDCXX = r_e21;
        /*INC*/
        if (!INC(DSYQNCSDJSDCXX, ZAZZCSCTLEGENL)) goto label_LTVKZDQOWGOLJP;
        if (! isSymbolType(DSYQNCSDJSDCXX.container->type)) goto label_LTVKZDQOWGOLJP;
        /*SET*/
        r_A = DSYQNCSDJSDCXX;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_e22;
        /*DEF*/
        DataCursor r_e22;
        /*SET*/
        l_e22 = r_A;
        /*SET*/
        r_e22 = r_A;
        /*JMP*/
        goto label_YRGHRWPQINXMRI_firststep;
label_YRGHRWPQINXMRI:
        /*INC*/
        if (!INC(r_e22, ZAZZCSCTLEGENL)) goto label_LTVKZDQOWGOLJP;
label_YRGHRWPQINXMRI_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor DXPDPQUNVKWXRY;
        /*SET*/
        DXPDPQUNVKWXRY = r_e22;
        if (!SLIDE(DXPDPQUNVKWXRY, ZAZZCSCTLEGENL, l_A, r_A)) goto label_YRGHRWPQINXMRI;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_e23;
        /*DEF*/
        DataCursor r_e23;
        /*SET*/
        l_e23 = DXPDPQUNVKWXRY;
        /*SET*/
        r_e23 = ZAZZCSCTLEGENL;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor KXTLXYPPFMAJFH;
        /*DEF*/
        DataCursor QYUDWTIGBJTMQM;
        /*DEF*/
        DataCursor DLTCQZGCAIWSWF;
        /*SET*/
        KXTLXYPPFMAJFH = IKNSUGJQCCASDX;
        /*INC*/
        if (!INC(KXTLXYPPFMAJFH, arg_to)) goto label_YRGHRWPQINXMRI;
//// ISBRACKET
        if (KXTLXYPPFMAJFH.container->type != struct_bracket) goto label_YRGHRWPQINXMRI;
//// JMP_BRACKET
        QYUDWTIGBJTMQM = KXTLXYPPFMAJFH.container->value.bracket_data.chain->at_before_first();
        DLTCQZGCAIWSWF   = KXTLXYPPFMAJFH.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_nn1;
        /*DEF*/
        DataCursor r_nn1;
        /*SET*/
        l_nn1 = QYUDWTIGBJTMQM;
        /*SET*/
        r_nn1 = QYUDWTIGBJTMQM;
        /*JMP*/
        goto label_YRYHCWWIARUHII_firststep;
label_YRYHCWWIARUHII:
        /*INC*/
        if (!INC(r_nn1, DLTCQZGCAIWSWF)) goto label_YRGHRWPQINXMRI;
label_YRYHCWWIARUHII_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor BUJOPGRQNPIUGK;
        /*SET*/
        BUJOPGRQNPIUGK = r_nn1;
        if (!SLIDE(BUJOPGRQNPIUGK, DLTCQZGCAIWSWF, l_A, r_A)) goto label_YRYHCWWIARUHII;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_nn2;
        /*DEF*/
        DataCursor r_nn2;
        /*SET*/
        l_nn2 = BUJOPGRQNPIUGK;
        /*SET*/
        r_nn2 = DLTCQZGCAIWSWF;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor DQTESOJACQHNWD;
        /*DEF*/
        DataCursor AGNVXESFRFIEFA;
        /*DEF*/
        DataCursor ABRADQEELKPKEC;
        /*SET*/
        DQTESOJACQHNWD = KXTLXYPPFMAJFH;
        /*INC*/
        if (!INC(DQTESOJACQHNWD, arg_to)) goto label_YRYHCWWIARUHII;
//// ISBRACKET
        if (DQTESOJACQHNWD.container->type != struct_bracket) goto label_YRYHCWWIARUHII;
//// JMP_BRACKET
        AGNVXESFRFIEFA = DQTESOJACQHNWD.container->value.bracket_data.chain->at_before_first();
        ABRADQEELKPKEC   = DQTESOJACQHNWD.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ]
        /*DEF*/
        DataCursor VPSDWELPDJMMBP;
        /*SET*/
        VPSDWELPDJMMBP = AGNVXESFRFIEFA;
        /*INC*/
        if (!INC(VPSDWELPDJMMBP, ABRADQEELKPKEC)) goto label_YRYHCWWIARUHII;
        if (VPSDWELPDJMMBP.container->type != text || *(VPSDWELPDJMMBP.container->value.text + VPSDWELPDJMMBP.index) != '1') goto label_YRYHCWWIARUHII;
//// [ empty ]
        /*ISEMPTY*/
        if (VPSDWELPDJMMBP!=0 && ABRADQEELKPKEC != VPSDWELPDJMMBP) goto label_YRYHCWWIARUHII;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = DQTESOJACQHNWD;
        /*SET*/
        r_1 = DQTESOJACQHNWD;
        /*JMP*/
        goto label_CUGGHONUCWEGVF_firststep;
label_CUGGHONUCWEGVF:
        /*INC*/
        if (!INC(r_1, arg_to)) goto label_YRYHCWWIARUHII;
label_CUGGHONUCWEGVF_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor JZBDWKBEVKGDWU;
        /*SET*/
        JZBDWKBEVKGDWU = r_1;
        /*INC*/
        if (!INC(JZBDWKBEVKGDWU, arg_to)) goto label_CUGGHONUCWEGVF;
        if (JZBDWKBEVKGDWU.container->type != word || !memcmp(JZBDWKBEVKGDWU.container->value.word.value, "e2", JZBDWKBEVKGDWU.container->value.word.leng)) goto label_CUGGHONUCWEGVF;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor BTJVTOQOTHGGTD;
        /*DEF*/
        DataCursor RDOLGJMFUBZZPN;
        /*DEF*/
        DataCursor HJAQWOTZQBLHMR;
        /*SET*/
        BTJVTOQOTHGGTD = JZBDWKBEVKGDWU;
        /*INC*/
        if (!INC(BTJVTOQOTHGGTD, arg_to)) goto label_CUGGHONUCWEGVF;
//// ISBRACKET
        if (BTJVTOQOTHGGTD.container->type != struct_bracket) goto label_CUGGHONUCWEGVF;
//// JMP_BRACKET
        RDOLGJMFUBZZPN = BTJVTOQOTHGGTD.container->value.bracket_data.chain->at_before_first();
        HJAQWOTZQBLHMR   = BTJVTOQOTHGGTD.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_n;
        /*DEF*/
        DataCursor r_n;
        /*SET*/
        l_n = RDOLGJMFUBZZPN;
        /*SET*/
        r_n = HJAQWOTZQBLHMR;
//// [ empty ]
        /*ISEMPTY*/
        if (BTJVTOQOTHGGTD!=0 && arg_to != BTJVTOQOTHGGTD) goto label_CUGGHONUCWEGVF;

// подстановка
        DataChain* FZFGYKZMUCWWPD = new DataChain();
        DataContainer* FZFGYKZMUCWWPD_execbr = newRefExecBrackets(StepShag, FZFGYKZMUCWWPD, "StepShag");
        result->append(FZFGYKZMUCWWPD_execbr);
        DataChain* YJVCTVFAMCGLTM = new DataChain();
        DataContainer* YJVCTVFAMCGLTM_execbr = newRefExecBrackets(Lins, YJVCTVFAMCGLTM, "Lins");
        FZFGYKZMUCWWPD->append(YJVCTVFAMCGLTM_execbr);
        DataChain* JTMRCJIVHSYTNW = new DataChain();
        YJVCTVFAMCGLTM->append(newRefStructBrackets(JTMRCJIVHSYTNW));
        JTMRCJIVHSYTNW->append_copy(l_n, r_n);
        DataChain* MQQJVMOHFYESQX = new DataChain();
        DataContainer* MQQJVMOHFYESQX_execbr = newRefExecBrackets(AntiStrategy, MQQJVMOHFYESQX, "AntiStrategy");
        YJVCTVFAMCGLTM->append(MQQJVMOHFYESQX_execbr);
        MQQJVMOHFYESQX->append_copy(l_A, r_A);
        context->pushExecuteCall(MQQJVMOHFYESQX_execbr);
        context->pushExecuteCall(YJVCTVFAMCGLTM_execbr);
        DataChain* DVRJGFVGYMHLWD = new DataChain();
        FZFGYKZMUCWWPD->append(newRefStructBrackets(DVRJGFVGYMHLWD));
        DVRJGFVGYMHLWD->append(newRefText("1"));
        FZFGYKZMUCWWPD->append_copy(l_1, r_1);
        FZFGYKZMUCWWPD->append(newRefWord("e2"));
        DataChain* XLOZMCQMVHTCEX = new DataChain();
        FZFGYKZMUCWWPD->append(newRefStructBrackets(XLOZMCQMVHTCEX));
        XLOZMCQMVHTCEX->append_copy(l_n, r_n);
        context->pushExecuteCall(FZFGYKZMUCWWPD_execbr);
        return result;
    }
sentence_after_3:

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor AMEYKVIXDAQVSS;
        /*DEF*/
        DataCursor DWWOEDKLQENAFB;
        /*DEF*/
        DataCursor CFNHWRHDKJCSXO;
        /*SET*/
        AMEYKVIXDAQVSS = arg_from;
        /*INC*/
        if (!INC(AMEYKVIXDAQVSS, arg_to)) goto sentence_after_4;
//// ISBRACKET
        if (AMEYKVIXDAQVSS.container->type != struct_bracket) goto sentence_after_4;
//// JMP_BRACKET
        DWWOEDKLQENAFB = AMEYKVIXDAQVSS.container->value.bracket_data.chain->at_before_first();
        CFNHWRHDKJCSXO   = AMEYKVIXDAQVSS.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_e21;
        /*DEF*/
        DataCursor r_e21;
        /*SET*/
        l_e21 = DWWOEDKLQENAFB;
        /*SET*/
        r_e21 = DWWOEDKLQENAFB;
        /*JMP*/
        goto label_HDVRBNLBLSEEND_firststep;
label_HDVRBNLBLSEEND:
        /*INC*/
        if (!INC(r_e21, CFNHWRHDKJCSXO)) goto sentence_after_4;
label_HDVRBNLBLSEEND_firststep:
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor UBKXAORTEJLRCM;
        /*DEF*/
        DataCursor l_A;
        /*DEF*/
        DataCursor r_A;
        /*SET*/
        l_A = r_e21;
        /*SET*/
        UBKXAORTEJLRCM = r_e21;
        /*INC*/
        if (!INC(UBKXAORTEJLRCM, CFNHWRHDKJCSXO)) goto label_HDVRBNLBLSEEND;
        if (! isSymbolType(UBKXAORTEJLRCM.container->type)) goto label_HDVRBNLBLSEEND;
        /*SET*/
        r_A = UBKXAORTEJLRCM;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_e22;
        /*DEF*/
        DataCursor r_e22;
        /*SET*/
        l_e22 = r_A;
        /*SET*/
        r_e22 = r_A;
        /*JMP*/
        goto label_CVOVRSQRCOPNNP_firststep;
label_CVOVRSQRCOPNNP:
        /*INC*/
        if (!INC(r_e22, CFNHWRHDKJCSXO)) goto label_HDVRBNLBLSEEND;
label_CVOVRSQRCOPNNP_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor KUNKKCPOENVPKV;
        /*SET*/
        KUNKKCPOENVPKV = r_e22;
        if (!SLIDE(KUNKKCPOENVPKV, CFNHWRHDKJCSXO, l_A, r_A)) goto label_CVOVRSQRCOPNNP;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_e23;
        /*DEF*/
        DataCursor r_e23;
        /*SET*/
        l_e23 = KUNKKCPOENVPKV;
        /*SET*/
        r_e23 = CFNHWRHDKJCSXO;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor YGUNPABOUJVIRE;
        /*DEF*/
        DataCursor LEHLGECTNAZVQP;
        /*DEF*/
        DataCursor SOUUBCPYFIKGQT;
        /*SET*/
        YGUNPABOUJVIRE = AMEYKVIXDAQVSS;
        /*INC*/
        if (!INC(YGUNPABOUJVIRE, arg_to)) goto label_CVOVRSQRCOPNNP;
//// ISBRACKET
        if (YGUNPABOUJVIRE.container->type != struct_bracket) goto label_CVOVRSQRCOPNNP;
//// JMP_BRACKET
        LEHLGECTNAZVQP = YGUNPABOUJVIRE.container->value.bracket_data.chain->at_before_first();
        SOUUBCPYFIKGQT   = YGUNPABOUJVIRE.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_e1;
        /*DEF*/
        DataCursor r_e1;
        /*SET*/
        l_e1 = LEHLGECTNAZVQP;
        /*SET*/
        r_e1 = SOUUBCPYFIKGQT;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor UFVQQEVCPCJPMJ;
        /*DEF*/
        DataCursor HPUACSIASPTSKQ;
        /*DEF*/
        DataCursor YHITAUZFABLPQL;
        /*SET*/
        UFVQQEVCPCJPMJ = YGUNPABOUJVIRE;
        /*INC*/
        if (!INC(UFVQQEVCPCJPMJ, arg_to)) goto label_CVOVRSQRCOPNNP;
//// ISBRACKET
        if (UFVQQEVCPCJPMJ.container->type != struct_bracket) goto label_CVOVRSQRCOPNNP;
//// JMP_BRACKET
        HPUACSIASPTSKQ = UFVQQEVCPCJPMJ.container->value.bracket_data.chain->at_before_first();
        YHITAUZFABLPQL   = UFVQQEVCPCJPMJ.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_nn1;
        /*DEF*/
        DataCursor r_nn1;
        /*SET*/
        l_nn1 = HPUACSIASPTSKQ;
        /*SET*/
        r_nn1 = HPUACSIASPTSKQ;
        /*JMP*/
        goto label_KUKAHMLIVZAPRO_firststep;
label_KUKAHMLIVZAPRO:
        /*INC*/
        if (!INC(r_nn1, YHITAUZFABLPQL)) goto label_CVOVRSQRCOPNNP;
label_KUKAHMLIVZAPRO_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor TLQDIUOEEYKIQZ;
        /*SET*/
        TLQDIUOEEYKIQZ = r_nn1;
        if (!SLIDE(TLQDIUOEEYKIQZ, YHITAUZFABLPQL, l_A, r_A)) goto label_KUKAHMLIVZAPRO;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_nn2;
        /*DEF*/
        DataCursor r_nn2;
        /*SET*/
        l_nn2 = TLQDIUOEEYKIQZ;
        /*SET*/
        r_nn2 = YHITAUZFABLPQL;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor AHFAVZZRFRZZEM;
        /*DEF*/
        DataCursor IYZVOBXUOJORAW;
        /*DEF*/
        DataCursor URHJOPPNNCTEHR;
        /*SET*/
        AHFAVZZRFRZZEM = UFVQQEVCPCJPMJ;
        /*INC*/
        if (!INC(AHFAVZZRFRZZEM, arg_to)) goto label_KUKAHMLIVZAPRO;
//// ISBRACKET
        if (AHFAVZZRFRZZEM.container->type != struct_bracket) goto label_KUKAHMLIVZAPRO;
//// JMP_BRACKET
        IYZVOBXUOJORAW = AHFAVZZRFRZZEM.container->value.bracket_data.chain->at_before_first();
        URHJOPPNNCTEHR   = AHFAVZZRFRZZEM.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ]
        /*DEF*/
        DataCursor ULPGKOZUYWMOBC;
        /*SET*/
        ULPGKOZUYWMOBC = IYZVOBXUOJORAW;
        /*INC*/
        if (!INC(ULPGKOZUYWMOBC, URHJOPPNNCTEHR)) goto label_KUKAHMLIVZAPRO;
        if (ULPGKOZUYWMOBC.container->type != text || *(ULPGKOZUYWMOBC.container->value.text + ULPGKOZUYWMOBC.index) != '2') goto label_KUKAHMLIVZAPRO;
//// [ empty ]
        /*ISEMPTY*/
        if (ULPGKOZUYWMOBC!=0 && URHJOPPNNCTEHR != ULPGKOZUYWMOBC) goto label_KUKAHMLIVZAPRO;
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = AHFAVZZRFRZZEM;
        /*SET*/
        r_1 = AHFAVZZRFRZZEM;
        /*JMP*/
        goto label_LVQTAMMEMHQPYI_firststep;
label_LVQTAMMEMHQPYI:
        /*INC*/
        if (!INC(r_1, arg_to)) goto label_KUKAHMLIVZAPRO;
label_LVQTAMMEMHQPYI_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor OWMNLQAEFZSIOT;
        /*SET*/
        OWMNLQAEFZSIOT = r_1;
        /*INC*/
        if (!INC(OWMNLQAEFZSIOT, arg_to)) goto label_LVQTAMMEMHQPYI;
        if (OWMNLQAEFZSIOT.container->type != word || !memcmp(OWMNLQAEFZSIOT.container->value.word.value, "e2", OWMNLQAEFZSIOT.container->value.word.leng)) goto label_LVQTAMMEMHQPYI;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor PXJWOCJEUMCJDQ;
        /*DEF*/
        DataCursor SZRRRUGIMNJBJA;
        /*DEF*/
        DataCursor LQLRCEZJFXCHWD;
        /*SET*/
        PXJWOCJEUMCJDQ = OWMNLQAEFZSIOT;
        /*INC*/
        if (!INC(PXJWOCJEUMCJDQ, arg_to)) goto label_LVQTAMMEMHQPYI;
//// ISBRACKET
        if (PXJWOCJEUMCJDQ.container->type != struct_bracket) goto label_LVQTAMMEMHQPYI;
//// JMP_BRACKET
        SZRRRUGIMNJBJA = PXJWOCJEUMCJDQ.container->value.bracket_data.chain->at_before_first();
        LQLRCEZJFXCHWD   = PXJWOCJEUMCJDQ.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_n;
        /*DEF*/
        DataCursor r_n;
        /*SET*/
        l_n = SZRRRUGIMNJBJA;
        /*SET*/
        r_n = LQLRCEZJFXCHWD;
//// [ empty ]
        /*ISEMPTY*/
        if (PXJWOCJEUMCJDQ!=0 && arg_to != PXJWOCJEUMCJDQ) goto label_LVQTAMMEMHQPYI;

// подстановка
        DataChain* DXONZMNJVLRJXR = new DataChain();
        DataContainer* DXONZMNJVLRJXR_execbr = newRefExecBrackets(StepShag, DXONZMNJVLRJXR, "StepShag");
        result->append(DXONZMNJVLRJXR_execbr);
        DataChain* XWKDUOOERCTEEQ = new DataChain();
        DataContainer* XWKDUOOERCTEEQ_execbr = newRefExecBrackets(Lins, XWKDUOOERCTEEQ, "Lins");
        DXONZMNJVLRJXR->append(XWKDUOOERCTEEQ_execbr);
        DataChain* DVDLRWAMNKYXJS = new DataChain();
        XWKDUOOERCTEEQ->append(newRefStructBrackets(DVDLRWAMNKYXJS));
        DVDLRWAMNKYXJS->append_copy(l_n, r_n);
        DataChain* XPFDLZEHBGKVYP = new DataChain();
        DataContainer* XPFDLZEHBGKVYP_execbr = newRefExecBrackets(AntiStrategy, XPFDLZEHBGKVYP, "AntiStrategy");
        XWKDUOOERCTEEQ->append(XPFDLZEHBGKVYP_execbr);
        XPFDLZEHBGKVYP->append_copy(l_A, r_A);
        context->pushExecuteCall(XPFDLZEHBGKVYP_execbr);
        context->pushExecuteCall(XWKDUOOERCTEEQ_execbr);
        DataChain* XFSMQHIBNGJTGR = new DataChain();
        DXONZMNJVLRJXR->append(newRefStructBrackets(XFSMQHIBNGJTGR));
        XFSMQHIBNGJTGR->append(newRefText("2"));
        DXONZMNJVLRJXR->append_copy(l_1, r_1);
        DXONZMNJVLRJXR->append(newRefWord("e2"));
        DataChain* KPFERAYXDZNPGK = new DataChain();
        DXONZMNJVLRJXR->append(newRefStructBrackets(KPFERAYXDZNPGK));
        KPFERAYXDZNPGK->append_copy(l_n, r_n);
        context->pushExecuteCall(DXONZMNJVLRJXR_execbr);
        return result;
    }
sentence_after_4:

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor SDFPDJOBICQFQM;
        /*DEF*/
        DataCursor FSTQHPFMCPMFDC;
        /*DEF*/
        DataCursor DCCMODLQJQGWJO;
        /*SET*/
        SDFPDJOBICQFQM = arg_from;
        /*INC*/
        if (!INC(SDFPDJOBICQFQM, arg_to)) goto sentence_after_5;
//// ISBRACKET
        if (SDFPDJOBICQFQM.container->type != struct_bracket) goto sentence_after_5;
//// JMP_BRACKET
        FSTQHPFMCPMFDC = SDFPDJOBICQFQM.container->value.bracket_data.chain->at_before_first();
        DCCMODLQJQGWJO   = SDFPDJOBICQFQM.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_e1;
        /*DEF*/
        DataCursor r_e1;
        /*SET*/
        l_e1 = FSTQHPFMCPMFDC;
        /*SET*/
        r_e1 = DCCMODLQJQGWJO;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor FNUQNPMHDVKZEB;
        /*DEF*/
        DataCursor NLIGKJFSWCXWCU;
        /*DEF*/
        DataCursor JWHEPDBSGTFFKB;
        /*SET*/
        FNUQNPMHDVKZEB = SDFPDJOBICQFQM;
        /*INC*/
        if (!INC(FNUQNPMHDVKZEB, arg_to)) goto sentence_after_5;
//// ISBRACKET
        if (FNUQNPMHDVKZEB.container->type != struct_bracket) goto sentence_after_5;
//// JMP_BRACKET
        NLIGKJFSWCXWCU = FNUQNPMHDVKZEB.container->value.bracket_data.chain->at_before_first();
        JWHEPDBSGTFFKB   = FNUQNPMHDVKZEB.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_e2;
        /*DEF*/
        DataCursor r_e2;
        /*SET*/
        l_e2 = NLIGKJFSWCXWCU;
        /*SET*/
        r_e2 = JWHEPDBSGTFFKB;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor YKEUHNFZNGKPMV;
        /*DEF*/
        DataCursor QTHEJJRBZHRCGG;
        /*DEF*/
        DataCursor OEWVRXBWYSZBLQ;
        /*SET*/
        YKEUHNFZNGKPMV = FNUQNPMHDVKZEB;
        /*INC*/
        if (!INC(YKEUHNFZNGKPMV, arg_to)) goto sentence_after_5;
//// ISBRACKET
        if (YKEUHNFZNGKPMV.container->type != struct_bracket) goto sentence_after_5;
//// JMP_BRACKET
        QTHEJJRBZHRCGG = YKEUHNFZNGKPMV.container->value.bracket_data.chain->at_before_first();
        OEWVRXBWYSZBLQ   = YKEUHNFZNGKPMV.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_nn;
        /*DEF*/
        DataCursor r_nn;
        /*SET*/
        l_nn = QTHEJJRBZHRCGG;
        /*SET*/
        r_nn = OEWVRXBWYSZBLQ;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_hn;
        /*DEF*/
        DataCursor r_hn;
        /*SET*/
        l_hn = YKEUHNFZNGKPMV;
        /*SET*/
        r_hn = arg_to;

// подстановка
        DataChain* GPWJPLTJFRQCOC = new DataChain();
        DataContainer* GPWJPLTJFRQCOC_execbr = newRefExecBrackets(PolnAnalizEny, GPWJPLTJFRQCOC, "PolnAnalizEny");
        result->append(GPWJPLTJFRQCOC_execbr);
        GPWJPLTJFRQCOC->append_copy(l_hn, r_hn);
        context->pushExecuteCall(GPWJPLTJFRQCOC_execbr);
        return result;
    }
sentence_after_5:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* StepShag(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ s.1 <any> ]
        /*DEF*/	DataCursor QXYLUTTLWHTZAS;
        /*DEF*/
        DataCursor l_A;
        /*DEF*/
        DataCursor r_A;
        /*SET*/
        l_A = arg_from;
        /*SET*/
        QXYLUTTLWHTZAS = arg_from;
        /*INC*/
        if (!INC(QXYLUTTLWHTZAS, arg_to)) goto sentence_after_1;
        if (! isSymbolType(QXYLUTTLWHTZAS.container->type)) goto sentence_after_1;
        /*SET*/
        r_A = QXYLUTTLWHTZAS;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor NQEOYJBXKIQMAJ;
        /*DEF*/
        DataCursor AGFHZZFBDVFUYU;
        /*DEF*/
        DataCursor RLVURNWRAMCADU;
        /*SET*/
        NQEOYJBXKIQMAJ = r_A;
        /*INC*/
        if (!INC(NQEOYJBXKIQMAJ, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (NQEOYJBXKIQMAJ.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        AGFHZZFBDVFUYU = NQEOYJBXKIQMAJ.container->value.bracket_data.chain->at_before_first();
        RLVURNWRAMCADU   = NQEOYJBXKIQMAJ.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ]
        /*DEF*/
        DataCursor NWUGTUESHXMGZV;
        /*SET*/
        NWUGTUESHXMGZV = AGFHZZFBDVFUYU;
        /*INC*/
        if (!INC(NWUGTUESHXMGZV, RLVURNWRAMCADU)) goto sentence_after_1;
        if (NWUGTUESHXMGZV.container->type != text || *(NWUGTUESHXMGZV.container->value.text + NWUGTUESHXMGZV.index) != '1') goto sentence_after_1;
//// [ empty ]
        /*ISEMPTY*/
        if (NWUGTUESHXMGZV!=0 && RLVURNWRAMCADU != NWUGTUESHXMGZV) goto sentence_after_1;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor VIVOWLZIVLIICZ;
        /*DEF*/
        DataCursor PUSSWAFKENWEMO;
        /*DEF*/
        DataCursor CIMLMSLEBFIIAR;
        /*SET*/
        VIVOWLZIVLIICZ = NQEOYJBXKIQMAJ;
        /*INC*/
        if (!INC(VIVOWLZIVLIICZ, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (VIVOWLZIVLIICZ.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        PUSSWAFKENWEMO = VIVOWLZIVLIICZ.container->value.bracket_data.chain->at_before_first();
        CIMLMSLEBFIIAR   = VIVOWLZIVLIICZ.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = PUSSWAFKENWEMO;
        /*SET*/
        r_1 = CIMLMSLEBFIIAR;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor GFMUABIZMYQPTH;
        /*DEF*/
        DataCursor DMZEIEGQCJTSJH;
        /*DEF*/
        DataCursor QKMVWZEDALKJDV;
        /*SET*/
        GFMUABIZMYQPTH = VIVOWLZIVLIICZ;
        /*INC*/
        if (!INC(GFMUABIZMYQPTH, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (GFMUABIZMYQPTH.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        DMZEIEGQCJTSJH = GFMUABIZMYQPTH.container->value.bracket_data.chain->at_before_first();
        QKMVWZEDALKJDV   = GFMUABIZMYQPTH.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = DMZEIEGQCJTSJH;
        /*SET*/
        r_2 = QKMVWZEDALKJDV;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor MZGRXOKCHGOALG;
        /*DEF*/
        DataCursor UQCNQYROKQMJSZ;
        /*DEF*/
        DataCursor JWSDGCOFGLCQGD;
        /*SET*/
        MZGRXOKCHGOALG = GFMUABIZMYQPTH;
        /*INC*/
        if (!INC(MZGRXOKCHGOALG, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (MZGRXOKCHGOALG.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        UQCNQYROKQMJSZ = MZGRXOKCHGOALG.container->value.bracket_data.chain->at_before_first();
        JWSDGCOFGLCQGD   = MZGRXOKCHGOALG.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_n1;
        /*DEF*/
        DataCursor r_n1;
        /*SET*/
        l_n1 = UQCNQYROKQMJSZ;
        /*SET*/
        r_n1 = UQCNQYROKQMJSZ;
        /*JMP*/
        goto label_NDBYPQQIDCLZXS_firststep;
label_NDBYPQQIDCLZXS:
        /*INC*/
        if (!INC(r_n1, JWSDGCOFGLCQGD)) goto sentence_after_1;
label_NDBYPQQIDCLZXS_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor QBJWIPLOXDERKL;
        /*SET*/
        QBJWIPLOXDERKL = r_n1;
        if (!SLIDE(QBJWIPLOXDERKL, JWSDGCOFGLCQGD, l_A, r_A)) goto label_NDBYPQQIDCLZXS;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_n2;
        /*DEF*/
        DataCursor r_n2;
        /*SET*/
        l_n2 = QBJWIPLOXDERKL;
        /*SET*/
        r_n2 = JWSDGCOFGLCQGD;
//// [ empty ]
        /*ISEMPTY*/
        if (MZGRXOKCHGOALG!=0 && arg_to != MZGRXOKCHGOALG) goto label_NDBYPQQIDCLZXS;

// подстановка
        DataChain* GBXGOGNWYUNRNU = new DataChain();
        DataContainer* GBXGOGNWYUNRNU_execbr = newRefExecBrackets(PolnAnaliz, GBXGOGNWYUNRNU, "PolnAnaliz");
        result->append(GBXGOGNWYUNRNU_execbr);
        DataChain* MFOLBALEZROKNK = new DataChain();
        GBXGOGNWYUNRNU->append(newRefStructBrackets(MFOLBALEZROKNK));
        MFOLBALEZROKNK->append(newRefText("2"));
        DataChain* JNWRWEBGELZBGI = new DataChain();
        GBXGOGNWYUNRNU->append(newRefStructBrackets(JNWRWEBGELZBGI));
        JNWRWEBGELZBGI->append_copy(l_1, r_1);
        JNWRWEBGELZBGI->append_copy(l_A, r_A);
        DataChain* QDSCWTSBXXZKGH = new DataChain();
        GBXGOGNWYUNRNU->append(newRefStructBrackets(QDSCWTSBXXZKGH));
        QDSCWTSBXXZKGH->append_copy(l_2, r_2);
        DataChain* SKGEXLEVGXNYDQ = new DataChain();
        GBXGOGNWYUNRNU->append(newRefStructBrackets(SKGEXLEVGXNYDQ));
        SKGEXLEVGXNYDQ->append_copy(l_n1, r_n1);
        SKGEXLEVGXNYDQ->append_copy(l_n2, r_n2);
        context->pushExecuteCall(GBXGOGNWYUNRNU_execbr);
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ s.1 <any> ]
        /*DEF*/	DataCursor VTYJSLLQKEHTLI;
        /*DEF*/
        DataCursor l_A;
        /*DEF*/
        DataCursor r_A;
        /*SET*/
        l_A = arg_from;
        /*SET*/
        VTYJSLLQKEHTLI = arg_from;
        /*INC*/
        if (!INC(VTYJSLLQKEHTLI, arg_to)) goto sentence_after_2;
        if (! isSymbolType(VTYJSLLQKEHTLI.container->type)) goto sentence_after_2;
        /*SET*/
        r_A = VTYJSLLQKEHTLI;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor AUYICCQDMFIEJR;
        /*DEF*/
        DataCursor QNRNAZCRFHPBJM;
        /*DEF*/
        DataCursor RFBYQMHDABALHT;
        /*SET*/
        AUYICCQDMFIEJR = r_A;
        /*INC*/
        if (!INC(AUYICCQDMFIEJR, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (AUYICCQDMFIEJR.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        QNRNAZCRFHPBJM = AUYICCQDMFIEJR.container->value.bracket_data.chain->at_before_first();
        RFBYQMHDABALHT   = AUYICCQDMFIEJR.container->value.bracket_data.chain->at_last();
//// [ `a` <any> ]
        /*DEF*/
        DataCursor IGPQMWFONTEPRC;
        /*SET*/
        IGPQMWFONTEPRC = QNRNAZCRFHPBJM;
        /*INC*/
        if (!INC(IGPQMWFONTEPRC, RFBYQMHDABALHT)) goto sentence_after_2;
        if (IGPQMWFONTEPRC.container->type != text || *(IGPQMWFONTEPRC.container->value.text + IGPQMWFONTEPRC.index) != '2') goto sentence_after_2;
//// [ empty ]
        /*ISEMPTY*/
        if (IGPQMWFONTEPRC!=0 && RFBYQMHDABALHT != IGPQMWFONTEPRC) goto sentence_after_2;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor VLZMJBMWEOILEJ;
        /*DEF*/
        DataCursor RPKSBXEESTGPSM;
        /*DEF*/
        DataCursor NMALPUSWIBUBAQ;
        /*SET*/
        VLZMJBMWEOILEJ = AUYICCQDMFIEJR;
        /*INC*/
        if (!INC(VLZMJBMWEOILEJ, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (VLZMJBMWEOILEJ.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        RPKSBXEESTGPSM = VLZMJBMWEOILEJ.container->value.bracket_data.chain->at_before_first();
        NMALPUSWIBUBAQ   = VLZMJBMWEOILEJ.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = RPKSBXEESTGPSM;
        /*SET*/
        r_1 = NMALPUSWIBUBAQ;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor VOTCAYTBTUZDTW;
        /*DEF*/
        DataCursor SYSJRVRWGIXZHX;
        /*DEF*/
        DataCursor WHIUHVQTKJPQZY;
        /*SET*/
        VOTCAYTBTUZDTW = VLZMJBMWEOILEJ;
        /*INC*/
        if (!INC(VOTCAYTBTUZDTW, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (VOTCAYTBTUZDTW.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        SYSJRVRWGIXZHX = VOTCAYTBTUZDTW.container->value.bracket_data.chain->at_before_first();
        WHIUHVQTKJPQZY   = VOTCAYTBTUZDTW.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = SYSJRVRWGIXZHX;
        /*SET*/
        r_2 = WHIUHVQTKJPQZY;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor YHHTXMJFMQLFWZ;
        /*DEF*/
        DataCursor JFQVBENLERLKYA;
        /*DEF*/
        DataCursor WOLVBTYZGEWXCC;
        /*SET*/
        YHHTXMJFMQLFWZ = VOTCAYTBTUZDTW;
        /*INC*/
        if (!INC(YHHTXMJFMQLFWZ, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (YHHTXMJFMQLFWZ.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        JFQVBENLERLKYA = YHHTXMJFMQLFWZ.container->value.bracket_data.chain->at_before_first();
        WOLVBTYZGEWXCC   = YHHTXMJFMQLFWZ.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_n1;
        /*DEF*/
        DataCursor r_n1;
        /*SET*/
        l_n1 = JFQVBENLERLKYA;
        /*SET*/
        r_n1 = JFQVBENLERLKYA;
        /*JMP*/
        goto label_HSWMWGHBBANCUE_firststep;
label_HSWMWGHBBANCUE:
        /*INC*/
        if (!INC(r_n1, WOLVBTYZGEWXCC)) goto sentence_after_2;
label_HSWMWGHBBANCUE_firststep:
//// [ &.name <any> ]
        /*DEF*/
        DataCursor JVMWGSFFVOWDLR;
        /*SET*/
        JVMWGSFFVOWDLR = r_n1;
        if (!SLIDE(JVMWGSFFVOWDLR, WOLVBTYZGEWXCC, l_A, r_A)) goto label_HSWMWGHBBANCUE;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_n2;
        /*DEF*/
        DataCursor r_n2;
        /*SET*/
        l_n2 = JVMWGSFFVOWDLR;
        /*SET*/
        r_n2 = WOLVBTYZGEWXCC;
//// [ empty ]
        /*ISEMPTY*/
        if (YHHTXMJFMQLFWZ!=0 && arg_to != YHHTXMJFMQLFWZ) goto label_HSWMWGHBBANCUE;

// подстановка
        DataChain* YINXFIWFHTLDYT = new DataChain();
        DataContainer* YINXFIWFHTLDYT_execbr = newRefExecBrackets(PolnAnaliz, YINXFIWFHTLDYT, "PolnAnaliz");
        result->append(YINXFIWFHTLDYT_execbr);
        DataChain* YGQKXRWDVRKCOY = new DataChain();
        YINXFIWFHTLDYT->append(newRefStructBrackets(YGQKXRWDVRKCOY));
        YGQKXRWDVRKCOY->append(newRefText("1"));
        DataChain* TXKCWEAGYDMHRP = new DataChain();
        YINXFIWFHTLDYT->append(newRefStructBrackets(TXKCWEAGYDMHRP));
        TXKCWEAGYDMHRP->append_copy(l_1, r_1);
        DataChain* YQUIMWRBVEZZVV = new DataChain();
        YINXFIWFHTLDYT->append(newRefStructBrackets(YQUIMWRBVEZZVV));
        YQUIMWRBVEZZVV->append_copy(l_2, r_2);
        YQUIMWRBVEZZVV->append_copy(l_A, r_A);
        DataChain* JPGIHCYFQZVADT = new DataChain();
        YINXFIWFHTLDYT->append(newRefStructBrackets(JPGIHCYFQZVADT));
        JPGIHCYFQZVADT->append_copy(l_n1, r_n1);
        JPGIHCYFQZVADT->append_copy(l_n2, r_n2);
        context->pushExecuteCall(YINXFIWFHTLDYT_execbr);
        return result;
    }
sentence_after_2:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}

DataChain* PolnAnalizEny(DataCursor arg_from, DataCursor arg_to, ExecContext *context)
{
    DataChain *result = new DataChain();
    DataChain *tmp_chain = new DataChain();

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor DFYEMFQVYNBDLR;
        /*DEF*/
        DataCursor QHVAPGYSGGXDOR;
        /*DEF*/
        DataCursor KVMVQEXPJFGVPI;
        /*SET*/
        DFYEMFQVYNBDLR = arg_from;
        /*INC*/
        if (!INC(DFYEMFQVYNBDLR, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (DFYEMFQVYNBDLR.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        QHVAPGYSGGXDOR = DFYEMFQVYNBDLR.container->value.bracket_data.chain->at_before_first();
        KVMVQEXPJFGVPI   = DFYEMFQVYNBDLR.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor FYIDTTGGSDYJBV;
        /*DEF*/
        DataCursor l_s;
        /*DEF*/
        DataCursor r_s;
        /*SET*/
        l_s = QHVAPGYSGGXDOR;
        /*SET*/
        FYIDTTGGSDYJBV = QHVAPGYSGGXDOR;
        /*INC*/
        if (!INC(FYIDTTGGSDYJBV, KVMVQEXPJFGVPI)) goto sentence_after_1;
        if (! isSymbolType(FYIDTTGGSDYJBV.container->type)) goto sentence_after_1;
        /*SET*/
        r_s = FYIDTTGGSDYJBV;
//// [ empty ]
        /*ISEMPTY*/
        if (r_s!=0 && KVMVQEXPJFGVPI != r_s) goto sentence_after_1;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor OLBMCGBRRVKUPT;
        /*DEF*/
        DataCursor ANLZOSCTFNYSZK;
        /*DEF*/
        DataCursor LRNZRKUXYJPWWM;
        /*SET*/
        OLBMCGBRRVKUPT = DFYEMFQVYNBDLR;
        /*INC*/
        if (!INC(OLBMCGBRRVKUPT, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (OLBMCGBRRVKUPT.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        ANLZOSCTFNYSZK = OLBMCGBRRVKUPT.container->value.bracket_data.chain->at_before_first();
        LRNZRKUXYJPWWM   = OLBMCGBRRVKUPT.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = ANLZOSCTFNYSZK;
        /*SET*/
        r_1 = LRNZRKUXYJPWWM;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor INHPLXGXWULGXH;
        /*DEF*/
        DataCursor LMSBZRQUAJUAXP;
        /*DEF*/
        DataCursor DPSMWIWXXDVIPO;
        /*SET*/
        INHPLXGXWULGXH = OLBMCGBRRVKUPT;
        /*INC*/
        if (!INC(INHPLXGXWULGXH, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (INHPLXGXWULGXH.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        LMSBZRQUAJUAXP = INHPLXGXWULGXH.container->value.bracket_data.chain->at_before_first();
        DPSMWIWXXDVIPO   = INHPLXGXWULGXH.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = LMSBZRQUAJUAXP;
        /*SET*/
        r_2 = DPSMWIWXXDVIPO;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor UXTLKQWWOWRQEA;
        /*DEF*/
        DataCursor TQBMMILPOXBIPW;
        /*DEF*/
        DataCursor WEGHTFIQJQKBNJ;
        /*SET*/
        UXTLKQWWOWRQEA = INHPLXGXWULGXH;
        /*INC*/
        if (!INC(UXTLKQWWOWRQEA, arg_to)) goto sentence_after_1;
//// ISBRACKET
        if (UXTLKQWWOWRQEA.container->type != struct_bracket) goto sentence_after_1;
//// JMP_BRACKET
        TQBMMILPOXBIPW = UXTLKQWWOWRQEA.container->value.bracket_data.chain->at_before_first();
        WEGHTFIQJQKBNJ   = UXTLKQWWOWRQEA.container->value.bracket_data.chain->at_last();
//// [ empty ]
        /*ISEMPTY*/
        if (TQBMMILPOXBIPW!=0 && WEGHTFIQJQKBNJ != TQBMMILPOXBIPW) goto sentence_after_1;
//// [ empty ]
        /*ISEMPTY*/
        if (UXTLKQWWOWRQEA!=0 && arg_to != UXTLKQWWOWRQEA) goto sentence_after_1;

// подстановка
        return result;
    }
sentence_after_1:

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor HXDKUNEBQGRIZK;
        /*DEF*/
        DataCursor EKGERQQLYYFESO;
        /*DEF*/
        DataCursor YKMVAYQBNKSTMD;
        /*SET*/
        HXDKUNEBQGRIZK = arg_from;
        /*INC*/
        if (!INC(HXDKUNEBQGRIZK, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (HXDKUNEBQGRIZK.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        EKGERQQLYYFESO = HXDKUNEBQGRIZK.container->value.bracket_data.chain->at_before_first();
        YKMVAYQBNKSTMD   = HXDKUNEBQGRIZK.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor EFRMTWKYLNONCH;
        /*DEF*/
        DataCursor l_s;
        /*DEF*/
        DataCursor r_s;
        /*SET*/
        l_s = EKGERQQLYYFESO;
        /*SET*/
        EFRMTWKYLNONCH = EKGERQQLYYFESO;
        /*INC*/
        if (!INC(EFRMTWKYLNONCH, YKMVAYQBNKSTMD)) goto sentence_after_2;
        if (! isSymbolType(EFRMTWKYLNONCH.container->type)) goto sentence_after_2;
        /*SET*/
        r_s = EFRMTWKYLNONCH;
//// [ empty ]
        /*ISEMPTY*/
        if (r_s!=0 && YKMVAYQBNKSTMD != r_s) goto sentence_after_2;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor IGMTFBOURZHMFF;
        /*DEF*/
        DataCursor FSRCBDZDFBEOST;
        /*DEF*/
        DataCursor FVSKREBTLJHZKR;
        /*SET*/
        IGMTFBOURZHMFF = HXDKUNEBQGRIZK;
        /*INC*/
        if (!INC(IGMTFBOURZHMFF, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (IGMTFBOURZHMFF.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        FSRCBDZDFBEOST = IGMTFBOURZHMFF.container->value.bracket_data.chain->at_before_first();
        FVSKREBTLJHZKR   = IGMTFBOURZHMFF.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = FSRCBDZDFBEOST;
        /*SET*/
        r_1 = FVSKREBTLJHZKR;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor GHTSGBBDHLSICU;
        /*DEF*/
        DataCursor TFMMJOUTFVEXDC;
        /*DEF*/
        DataCursor ZSCHYTBCRKLIWC;
        /*SET*/
        GHTSGBBDHLSICU = IGMTFBOURZHMFF;
        /*INC*/
        if (!INC(GHTSGBBDHLSICU, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (GHTSGBBDHLSICU.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        TFMMJOUTFVEXDC = GHTSGBBDHLSICU.container->value.bracket_data.chain->at_before_first();
        ZSCHYTBCRKLIWC   = GHTSGBBDHLSICU.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = TFMMJOUTFVEXDC;
        /*SET*/
        r_2 = ZSCHYTBCRKLIWC;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor XKGOQVUFYOGVFR;
        /*DEF*/
        DataCursor NYMOPFWPNFUZEI;
        /*DEF*/
        DataCursor HXYXANSPRGGWDY;
        /*SET*/
        XKGOQVUFYOGVFR = GHTSGBBDHLSICU;
        /*INC*/
        if (!INC(XKGOQVUFYOGVFR, arg_to)) goto sentence_after_2;
//// ISBRACKET
        if (XKGOQVUFYOGVFR.container->type != struct_bracket) goto sentence_after_2;
//// JMP_BRACKET
        NYMOPFWPNFUZEI = XKGOQVUFYOGVFR.container->value.bracket_data.chain->at_before_first();
        HXYXANSPRGGWDY   = XKGOQVUFYOGVFR.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_3;
        /*DEF*/
        DataCursor r_3;
        /*SET*/
        l_3 = NYMOPFWPNFUZEI;
        /*SET*/
        r_3 = NYMOPFWPNFUZEI;
        /*JMP*/
        goto label_AFAWQGQBTDGFFC_firststep;
label_AFAWQGQBTDGFFC:
        /*INC*/
        if (!INC(r_3, HXYXANSPRGGWDY)) goto sentence_after_2;
label_AFAWQGQBTDGFFC_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor EGTPCYBQVRQUSQ;
        /*SET*/
        EGTPCYBQVRQUSQ = r_3;
        /*INC*/
        if (!INC(EGTPCYBQVRQUSQ, HXYXANSPRGGWDY)) goto label_AFAWQGQBTDGFFC;
        if (EGTPCYBQVRQUSQ.container->type != text || *(EGTPCYBQVRQUSQ.container->value.text + EGTPCYBQVRQUSQ.index) != '>') goto label_AFAWQGQBTDGFFC;
//// [ empty ]
        /*ISEMPTY*/
        if (EGTPCYBQVRQUSQ!=0 && HXYXANSPRGGWDY != EGTPCYBQVRQUSQ) goto label_AFAWQGQBTDGFFC;
//// [ empty ]
        /*ISEMPTY*/
        if (XKGOQVUFYOGVFR!=0 && arg_to != XKGOQVUFYOGVFR) goto label_AFAWQGQBTDGFFC;

// подстановка
        return result;
    }
sentence_after_2:

    {
// сопоставление
//// [ (<any>) <any> ]
        /*DEF*/	DataCursor NOPFYMRMQHUCGO;
        /*DEF*/
        DataCursor MDIUXEMXBZYSLV;
        /*DEF*/
        DataCursor LITWUBNSPBMEWW;
        /*SET*/
        NOPFYMRMQHUCGO = arg_from;
        /*INC*/
        if (!INC(NOPFYMRMQHUCGO, arg_to)) goto sentence_after_3;
//// ISBRACKET
        if (NOPFYMRMQHUCGO.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET
        MDIUXEMXBZYSLV = NOPFYMRMQHUCGO.container->value.bracket_data.chain->at_before_first();
        LITWUBNSPBMEWW   = NOPFYMRMQHUCGO.container->value.bracket_data.chain->at_last();
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor HGPMPRKCYFDXKM;
        /*DEF*/
        DataCursor l_s;
        /*DEF*/
        DataCursor r_s;
        /*SET*/
        l_s = MDIUXEMXBZYSLV;
        /*SET*/
        HGPMPRKCYFDXKM = MDIUXEMXBZYSLV;
        /*INC*/
        if (!INC(HGPMPRKCYFDXKM, LITWUBNSPBMEWW)) goto sentence_after_3;
        if (! isSymbolType(HGPMPRKCYFDXKM.container->type)) goto sentence_after_3;
        /*SET*/
        r_s = HGPMPRKCYFDXKM;
//// [ empty ]
        /*ISEMPTY*/
        if (r_s!=0 && LITWUBNSPBMEWW != r_s) goto sentence_after_3;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor TUHEVOIXRWLMXW;
        /*DEF*/
        DataCursor GCNOYZMMYOVRTE;
        /*DEF*/
        DataCursor PQTIBDVTHMPOAQ;
        /*SET*/
        TUHEVOIXRWLMXW = NOPFYMRMQHUCGO;
        /*INC*/
        if (!INC(TUHEVOIXRWLMXW, arg_to)) goto sentence_after_3;
//// ISBRACKET
        if (TUHEVOIXRWLMXW.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET
        GCNOYZMMYOVRTE = TUHEVOIXRWLMXW.container->value.bracket_data.chain->at_before_first();
        PQTIBDVTHMPOAQ   = TUHEVOIXRWLMXW.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_I;
        /*DEF*/
        DataCursor r_I;
        /*SET*/
        l_I = GCNOYZMMYOVRTE;
        /*SET*/
        r_I = PQTIBDVTHMPOAQ;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor YDDQRXNVKIYADV;
        /*DEF*/
        DataCursor LOYEMCYCFCPYUW;
        /*DEF*/
        DataCursor KZEBCJAEDSBVQQ;
        /*SET*/
        YDDQRXNVKIYADV = TUHEVOIXRWLMXW;
        /*INC*/
        if (!INC(YDDQRXNVKIYADV, arg_to)) goto sentence_after_3;
//// ISBRACKET
        if (YDDQRXNVKIYADV.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET
        LOYEMCYCFCPYUW = YDDQRXNVKIYADV.container->value.bracket_data.chain->at_before_first();
        KZEBCJAEDSBVQQ   = YDDQRXNVKIYADV.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_Y;
        /*DEF*/
        DataCursor r_Y;
        /*SET*/
        l_Y = LOYEMCYCFCPYUW;
        /*SET*/
        r_Y = KZEBCJAEDSBVQQ;
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor IJQLGJYCJPKPXF;
        /*DEF*/
        DataCursor LCEONIYVQVURDI;
        /*DEF*/
        DataCursor AQMSRTFGWTPEPU;
        /*SET*/
        IJQLGJYCJPKPXF = YDDQRXNVKIYADV;
        /*INC*/
        if (!INC(IJQLGJYCJPKPXF, arg_to)) goto sentence_after_3;
//// ISBRACKET
        if (IJQLGJYCJPKPXF.container->type != struct_bracket) goto sentence_after_3;
//// JMP_BRACKET
        LCEONIYVQVURDI = IJQLGJYCJPKPXF.container->value.bracket_data.chain->at_before_first();
        AQMSRTFGWTPEPU   = IJQLGJYCJPKPXF.container->value.bracket_data.chain->at_last();
//// [ e.1 <any> ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = LCEONIYVQVURDI;
        /*SET*/
        r_1 = LCEONIYVQVURDI;
        /*JMP*/
        goto label_NUGEAJDGZSJEWS_firststep;
label_NUGEAJDGZSJEWS:
        /*INC*/
        if (!INC(r_1, AQMSRTFGWTPEPU)) goto sentence_after_3;
label_NUGEAJDGZSJEWS_firststep:
//// [ `a` <any> ]
        /*DEF*/
        DataCursor QRMJZSSBXJVOTJ;
        /*SET*/
        QRMJZSSBXJVOTJ = r_1;
        /*INC*/
        if (!INC(QRMJZSSBXJVOTJ, AQMSRTFGWTPEPU)) goto label_NUGEAJDGZSJEWS;
        if (QRMJZSSBXJVOTJ.container->type != text || *(QRMJZSSBXJVOTJ.container->value.text + QRMJZSSBXJVOTJ.index) != '>') goto label_NUGEAJDGZSJEWS;
//// [ s.1 <any> ]
        /*DEF*/
        DataCursor VJQCFQPTBZGKET;
        /*DEF*/
        DataCursor l_sss;
        /*DEF*/
        DataCursor r_sss;
        /*SET*/
        l_sss = QRMJZSSBXJVOTJ;
        /*SET*/
        VJQCFQPTBZGKET = QRMJZSSBXJVOTJ;
        /*INC*/
        if (!INC(VJQCFQPTBZGKET, AQMSRTFGWTPEPU)) goto label_NUGEAJDGZSJEWS;
        if (! isSymbolType(VJQCFQPTBZGKET.container->type)) goto label_NUGEAJDGZSJEWS;
        /*SET*/
        r_sss = VJQCFQPTBZGKET;
//// [ e.1 ]
        /*DEF*/
        DataCursor l_2;
        /*DEF*/
        DataCursor r_2;
        /*SET*/
        l_2 = r_sss;
        /*SET*/
        r_2 = AQMSRTFGWTPEPU;
//// [ empty ]
        /*ISEMPTY*/
        if (IJQLGJYCJPKPXF!=0 && arg_to != IJQLGJYCJPKPXF) goto label_NUGEAJDGZSJEWS;

// подстановка
        DataChain* EKRCIHHXJEIGUT = new DataChain();
        DataContainer* EKRCIHHXJEIGUT_execbr = newRefExecBrackets(Analiz, EKRCIHHXJEIGUT, "Analiz");
        result->append(EKRCIHHXJEIGUT_execbr);
        DataChain* WIGDBBDXRBWMBR = new DataChain();
        EKRCIHHXJEIGUT->append(newRefStructBrackets(WIGDBBDXRBWMBR));
        WIGDBBDXRBWMBR->append_copy(l_s, r_s);
        DataChain* MBVGAOWLVDJYDD = new DataChain();
        EKRCIHHXJEIGUT->append(newRefStructBrackets(MBVGAOWLVDJYDD));
        MBVGAOWLVDJYDD->append_copy(l_I, r_I);
        DataChain* YCTCOCKMGZVARP = new DataChain();
        EKRCIHHXJEIGUT->append(newRefStructBrackets(YCTCOCKMGZVARP));
        YCTCOCKMGZVARP->append_copy(l_Y, r_Y);
        DataChain* FOBGMHPAOJOIQP = new DataChain();
        EKRCIHHXJEIGUT->append(newRefStructBrackets(FOBGMHPAOJOIQP));
        FOBGMHPAOJOIQP->append_copy(l_1, r_1);
        FOBGMHPAOJOIQP->append(newRefText(">"));
        FOBGMHPAOJOIQP->append_copy(l_sss, r_sss);
        FOBGMHPAOJOIQP->append_copy(l_2, r_2);
        context->pushExecuteCall(EKRCIHHXJEIGUT_execbr);
        DataChain* QTXTUCRORYSMGT = new DataChain();
        DataContainer* QTXTUCRORYSMGT_execbr = newRefExecBrackets(PolnAnaliz, QTXTUCRORYSMGT, "PolnAnaliz");
        result->append(QTXTUCRORYSMGT_execbr);
        DataChain* XCFZLBJBIPFIMU = new DataChain();
        QTXTUCRORYSMGT->append(newRefStructBrackets(XCFZLBJBIPFIMU));
        XCFZLBJBIPFIMU->append_copy(l_s, r_s);
        DataChain* NEZPQAQJASIXVW = new DataChain();
        QTXTUCRORYSMGT->append(newRefStructBrackets(NEZPQAQJASIXVW));
        NEZPQAQJASIXVW->append_copy(l_I, r_I);
        DataChain* OQYJVXKHCQPQIA = new DataChain();
        QTXTUCRORYSMGT->append(newRefStructBrackets(OQYJVXKHCQPQIA));
        OQYJVXKHCQPQIA->append_copy(l_Y, r_Y);
        DataChain* BUBQQDOFEHHJTZ = new DataChain();
        QTXTUCRORYSMGT->append(newRefStructBrackets(BUBQQDOFEHHJTZ));
        BUBQQDOFEHHJTZ->append_copy(l_1, r_1);
        BUBQQDOFEHHJTZ->append_copy(l_sss, r_sss);
        BUBQQDOFEHHJTZ->append(newRefText(">"));
        BUBQQDOFEHHJTZ->append_copy(l_2, r_2);
        context->pushExecuteCall(QTXTUCRORYSMGT_execbr);
        return result;
    }
sentence_after_3:

    {
// сопоставление
//// [ e.1 <any> ]
        /*DEF*/	DataCursor l_sIY;
        /*DEF*/
        DataCursor r_sIY;
        /*SET*/
        l_sIY = arg_from;
        /*SET*/
        r_sIY = arg_from;
        /*JMP*/
        goto label_YQKTDMKAPSPBMY_firststep;
label_YQKTDMKAPSPBMY:
        /*INC*/
        if (!INC(r_sIY, arg_to)) goto sentence_after_4;
label_YQKTDMKAPSPBMY_firststep:
//// [ (<any>) <any> ]
        /*DEF*/
        DataCursor KOYLPNZOIPZWDM;
        /*DEF*/
        DataCursor KRBHDNTDKVPDEL;
        /*DEF*/
        DataCursor ORQCJKQZZPINOQ;
        /*SET*/
        KOYLPNZOIPZWDM = r_sIY;
        /*INC*/
        if (!INC(KOYLPNZOIPZWDM, arg_to)) goto label_YQKTDMKAPSPBMY;
//// ISBRACKET
        if (KOYLPNZOIPZWDM.container->type != struct_bracket) goto label_YQKTDMKAPSPBMY;
//// JMP_BRACKET
        KRBHDNTDKVPDEL = KOYLPNZOIPZWDM.container->value.bracket_data.chain->at_before_first();
        ORQCJKQZZPINOQ   = KOYLPNZOIPZWDM.container->value.bracket_data.chain->at_last();
//// [ e.1 ]
        /*DEF*/
        DataCursor l_1;
        /*DEF*/
        DataCursor r_1;
        /*SET*/
        l_1 = KRBHDNTDKVPDEL;
        /*SET*/
        r_1 = ORQCJKQZZPINOQ;
//// [ empty ]
        /*ISEMPTY*/
        if (KOYLPNZOIPZWDM!=0 && arg_to != KOYLPNZOIPZWDM) goto label_YQKTDMKAPSPBMY;

// подстановка
        DataChain* LUIBJGNQQLFEWI = new DataChain();
        DataContainer* LUIBJGNQQLFEWI_execbr = newRefExecBrackets(PolnAnaliz, LUIBJGNQQLFEWI, "PolnAnaliz");
        result->append(LUIBJGNQQLFEWI_execbr);
        LUIBJGNQQLFEWI->append_copy(l_sIY, r_sIY);
        DataChain* OAMGMRCEMOAXVU = new DataChain();
        LUIBJGNQQLFEWI->append(newRefStructBrackets(OAMGMRCEMOAXVU));
        OAMGMRCEMOAXVU->append(newRefText(">"));
        OAMGMRCEMOAXVU->append_copy(l_1, r_1);
        context->pushExecuteCall(LUIBJGNQQLFEWI_execbr);
        return result;
    }
sentence_after_4:

// подготовка к возвращению неуспеха
    std::cout << "fail!";
    return 0;

}
