# -*- mode: Makefile; -*-
# -----------------------------------------
# project direfal-010

CC = g++
BIN = refal2
OP = .\src#  #Object path
SP = .\src#  #Source path
OBJ = $(OP)\main.o   $(OP)\commands.o   $(OP)\system.o   $(OP)\DataCursor.o   $(OP)\DataChain.o $(OP)\DataContainer.o $(OP)\ExecContext.o $(OP)\res.o
SRC = $(SP)\main.cpp $(SP)\commands.cpp $(SP)\system.cpp $(SP)\DataCursor.cpp $(SP)\DataChain.cpp $(SP)\DataContainer.cpp $(SP)\ExecContext.cpp $(SP)\res.cc
LNK = 
INCLUDE = -I.\include
AC = -g -O3 -Wall -pg

$(BIN): $(OBJ)
	$(CC) $(AC) $(INCLUDE) $(OBJ)  -o $(BIN) $(LNK)
all: $(BIN)

$(OP)\res.o: .\fn.ref .\fn2.ref
	.\refal51 fn2.ref
	$(CC) $(AC) $(INCLUDE) -c $(SP)\res.cc -o $(OP)\res.o
	
$(OP)\ExecContext.o: $(SP)\ExecContext.cpp
	$(CC) $(AC) $(INCLUDE) -c $(SP)\ExecContext.cpp -o $(OP)\ExecContext.o
	
$(OP)\commands.o: $(SP)\commands.cpp
	$(CC) $(AC) $(INCLUDE) -c $(SP)\commands.cpp -o $(OP)\commands.o
	
$(OP)\DataChain.o: $(SP)\DataChain.cpp
	$(CC) $(AC) $(INCLUDE) -c $(SP)\DataChain.cpp -o $(OP)\DataChain.o
	
$(OP)\DataCursor.o: $(SP)\DataCursor.cpp
	$(CC) $(AC) $(INCLUDE) -c $(SP)\DataCursor.cpp -o $(OP)\DataCursor.o
	
$(OP)\DataContainer.o: $(SP)\DataContainer.cpp
	$(CC) $(AC) $(INCLUDE) -c $(SP)\DataContainer.cpp -o $(OP)\DataContainer.o
	
$(OP)\system.o: $(SP)\system.cpp
	$(CC) $(AC) $(INCLUDE) -c $(SP)\system.cpp -o $(OP)\system.o
	
$(OP)\main.o: $(SP)\main.cpp
	$(CC) $(AC) $(INCLUDE) -c $(SP)\main.cpp -o $(OP)\main.o
	

clean:
	rm -f $(BIN)
	rm -f $(OBJ)
	rm -f $(SP)\res.cc
	rm -f .\include\res.h



