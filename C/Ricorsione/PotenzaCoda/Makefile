CC=gcc
CFLAGS=-Wall -pedantic -std=c99
LDLIBS=

main: main.o 

main.o: main.c

.PHONY: clean recom

recom:
	make clean; make

clean:
	rm -rf *.o main
