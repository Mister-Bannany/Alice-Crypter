CC = gcc
CFLAGS = 
EXEC = bin/alcrpt
SRC = $(wildcard src/*.c src/*/*.c src/*/*/*.c)
OBJ = $(SRC:.c=.o)

all : $(EXEC)

%.o : %.c
	$(CC) -o $@ -c $< $(CFLAGS)

run : 
	make all
	clear
	./$(EXEC)

$(EXEC) : $(OBJ)
	$(CC) -o $@ $^