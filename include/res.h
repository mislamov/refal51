#include "direfal.h" 
#include "system.h" 

DataChain* Go(DataCursor arg_from, DataCursor arg_to, ExecContext *context);
//   =  <Begin >
DataChain* Begin(DataCursor arg_from, DataCursor arg_to, ExecContext *context);
//   =  <Prout <GetPairs <ParseFileNames <Mount 'store.txt' >>>>
DataChain* ParseFileNames(DataCursor arg_from, DataCursor arg_to, ExecContext *context);
// e.1  '\n' e.n   =  <Implode <Print @.1  >>'+' <ParseFileNames <Print @.n >>
DataChain* GetPairs(DataCursor arg_from, DataCursor arg_to, ExecContext *context);
// e.e   =  @.e 