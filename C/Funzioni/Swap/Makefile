CC=gcc
CFLAGS=-Wall -pedantic -std=c99
LDLIBS=

main: main.o swap.o

main.o: main.c swap.h

swap.o: swap.c swap.h

.PHONY: clean recom

recom:
	make clean; make

clean:
	rm -rf *.o main
