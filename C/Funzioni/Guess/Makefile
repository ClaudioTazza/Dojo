CC=gcc
CFLAGS=-Wall -pedantic -std=c99
LDLIBS=

main: random.o main.o guess.o

main.o: guess.h main.c

guess.o: guess.c guess.h random.h

random.o: random.h random.c

.PHONY: clean recom

recom:
	make clean; make

clean:
	rm -rf *.o main
