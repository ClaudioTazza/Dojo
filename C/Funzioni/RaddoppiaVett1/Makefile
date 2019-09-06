CC=gcc
CFLAGS=-Wall -pedantic -std=c99
LDLIBS=

main: main.o vettore.o

main.o: main.c vettore.h

vettore.o: vettore.c vettore.h

.PHONY: clean

clean:
	rm -rf *.o main
