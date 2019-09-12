CC=gcc
CFLAGS=-Wall -pedantic -std=c99
LDLIBS=

main: main.o myvect.o myvect_serch.o

main.o: main.c myvect.h myvect_serch.h

myvect.o: myvect.c myvect.o

myvect_serch.o: myvect_serch.c myvect_serch.h

.PHONY: clean

clean:
	rm -rf main *.o
