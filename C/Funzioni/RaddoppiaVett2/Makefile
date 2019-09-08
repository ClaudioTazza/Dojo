CC=gcc
CFLAGS=-Wall -pedantic -std=c99
LDLIBS=

main: main.o vettore.o raddoppiaInt.o

main.o: main.c vettore.h

vettore.o: vettore.c vettore.h raddoppiaInt.h

raddoppiaInt.o: raddoppiaInt.h raddoppiaInt.c

.PHONY: clean

clean:
	rm -rf *.o main
