CC=gcc
CFLAGS=-Wall -pedantic -std=c99
LDLIBS=

main: main.o random.o

main.o: main.c random.h

random.o: random.c random.h

.PHONY: clean
clean:
	rm -rf *.o main
