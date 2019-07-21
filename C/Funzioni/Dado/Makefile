CC=gcc
CFLAGS=-Wall -pedantic -std=c99
LDLIBS=

main: main.o dado.o random.o

main.o: main.c dado.h

dado.o: dado.c dado.h random.h

random.o: random.h random.c

.PHONY: clean

clean:
	rm -rf *.o main
