CC=gcc
CFLAGS=-Wall -pedantic -std=c99
LDLIBS=

main: random.o main.o cai.o

main.o: cai.h main.c

cai.o: cai.c cai.h random.h

random.o: random.h random.c

.PHONY: clean recom

recom:
	make clean; make

clean:
	rm -rf *.o main
