CC=gcc
CFLAGS=-Wall -pedantic -std=c99
LDLIBS=

main: main.o coin.o random.o

main.o: main.c coin.h

coin.o: coin.c coin.h random.h

random.o: random.c random.h

.PHONY: clean

clean:
	rm -rf *.o main
