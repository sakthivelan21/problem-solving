# c - compilation ways 

1) first ways is writing a script to compile and create object files and link them with gcc 

```bash
rm -rf *.o
gcc -g -o sieve-of-eratosthenes.o -c sieve-of-eratosthenes.c -Iinclude/ `pkg-config --cflags --libs glib-2.0`
gcc -g -o main.o -c main.c -Iinclude/ `pkg-config --cflags --libs glib-2.0`
gcc -g -o main main.o sieve-of-eratosthenes.o `pkg-config --cflags --libs glib-2.0`
```

2) writing a proper `Makefile` for it  - 

    * For more detailed examples and explanations, you can refer to the [Makefile tutorial](https://makefiletutorial.com/#makefile-cookbook).
    
    * install make in your system ```apt install make```

    * Makefiles must be indented using TABs and not spaces or make will fail.

    * `make command``

        * Makefile rule syntanx 

        ```bash
            target: prerequistes
                commands
                commands 
        ```

        * what make file is to basically it will start to iterate through each target , and check if the target as a filename exists

        * if a target file exists, it will run the following prerequistes first and proceed with the commands

        * makefile works on timestamps of file, if the timestamp of the file is updated, it will match that command and run prerequistes again.

        ```Makefile
            all : test
                @echo "all called, calling clean and test"

            clean: 
                @echo "clean called"

            call:
                @echo "call called"

            test: call
                @echo "test called, calling after call"

        ```

        * when we call `make command`,  only first target will be executed.

        * also make allows you to call specific targets `make {target}` to trigger specific target.

        * also `make clean` can be called to run specific commands - mostly used to clean the files

    * `variables` in make 

        * 

    * `functions` in make
