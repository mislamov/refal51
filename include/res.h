#include "direfal.h" 
#include "system.h" 
#include "evalutor.h" 
#include <list> 

DataChain* Go(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* WordsMissTable(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* CompletionTable(DataCursor arg_from, DataCursor arg_to, ExecContext *context);

DataChain* Question(DataCursor arg_from, DataCursor arg_to, ExecContext *context);
