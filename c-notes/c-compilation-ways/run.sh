rm -rf *.o
gcc -g -o sieve-of-eratosthenes.o -c sieve-of-eratosthenes.c -Iinclude/ `pkg-config --cflags --libs glib-2.0`
gcc -g -o main.o -c main.c -Iinclude/ `pkg-config --cflags --libs glib-2.0`
gcc -g -o main main.o sieve-of-eratosthenes.o `pkg-config --cflags --libs glib-2.0`