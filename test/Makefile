CXX:= g++
CXX_FLAGS:= -Wall -Wextra -std=c++17 -ggdb 

BIN:= ../build
SRC:= src
INCLUDE:= include
LIB:= lib

LIBRARIES:=
EXECUTABLE:= gtest

MAIN:=main_test


all: $(BIN)/$(EXECUTABLE) 

run: clean all
	clear
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.cpp ../$(SRC)/*.cpp $(MAIN).cpp
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) -L$(LIB) $^ -o $@ $(LIBRARIES) -L/opt/gtest/lib -lgtest -lgtest_main -lpthread

clean:
	-rm $(BIN)/*
