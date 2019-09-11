CC=gcc
CFLAGS=-Wall -pedantic -std=c99
LDLIBS=

main: main.o myvect.o

main.o: main.c myvect.h

myvect.o: myvect.c myvect.h

.PHONY: clean

clean:
	rm -rf *.o main

