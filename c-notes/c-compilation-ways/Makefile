all: sieve_of_eratosthenes main build

sieve_of_eratosthenes:
	gcc -g -o sieve-of-eratosthenes.o -c sieve-of-eratosthenes.c -Iinclude/ `pkg-config --cflags --libs glib-2.0`

main:
	gcc -g -o main.o -c main.c -Iinclude/ `pkg-config --cflags --libs glib-2.0`

build:
	gcc -g -o main main.o sieve-of-eratosthenes.o `pkg-config --cflags --libs glib-2.0`

clean:
	rm -rf *.o main
	