CC=gcc
CFLAGS=-Wall -pedantic -std=c99
LDLIBS=

main: main.o vett.o

main.o: main.c vett.h

vett.o: vett.c vett.h

.PHONY: clean

clean:
	rm -rf *.o main
