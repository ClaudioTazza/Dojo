CC=gcc
CFLAGS=-Wall -pedantic -std=c99
LDLIBS=

main: main.o fibonacci.o 

main.o: main.c fibonacci.h

fibonacci.o: fibonacci.c fibonacci.h 

.PHONY: clean

clean:
	rm -rf *.o main
