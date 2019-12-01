CC = gcc
CFLAGS = -std=c99 -w -g -I.

FUNC_C = src/*.c
FUNC_O = src/*.o

OBJ = $(patsubst %.c, %.o, $(wildcard $(FUNC_C)))
OBJ_MAIN = $(patsubst %.c, %.o, $(wildcard *.c))

lab4.exe: $(OBJ) $(OBJ_MAIN)
	$(CC) -o $@ $^ -lm

run:
	./app.exe

clean:
	rm -f *.o *.exe $(FUNC_O) vgcore*
