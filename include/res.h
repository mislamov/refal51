#include "direfal.h" 
#include "system.h" 
#include "evalutor.h" 
#include <list> 

DataChain* Go(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* Begin(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* FirG(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* Game(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* GameIfWin(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* Game1(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* PlayerHod(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* GetHod(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* UseHod(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* UHod(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* Ekran(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* XO(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* Switch(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* Maix(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* WriteXO(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* WXOif(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* Lins(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* AntiStrategy(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* WriteXO1(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* First1(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* Length(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* DivS(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* IfDiv(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* NextPl(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* Optima21(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* Optima211(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* Strategy(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* Ifwin(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* Ifwin1(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* Analiz(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* PolnAnaliz(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* Ifmust(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* StepShag(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* PolnAnalizEny(DataCursor arg_from, DataCursor arg_to, ExecContext *context);
