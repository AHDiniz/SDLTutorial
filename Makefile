CC = g++
CFLAGS = -g -O2
LFLAGS = -lSDL2 -lSDL2_image
SRC = $(wildcard src/*.cpp)
INC = -Iinclude
EXE = bin/test

all:
	$(CC) $(SRC) -o $(EXE) $(CFLAGS) $(LFLAGS) $(INC)

run:
	./$(EXE)
