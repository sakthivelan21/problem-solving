# ABOUT C 

+ `C` is the procedural programming language. It was initially developed by `Dennis Ritchie` in the year `1972`.

+ It was mainly developed for system programming language to write an operating system.

+ The main features of the C language include low-level memory access, a simple set of keywords, dynamic memory allocation and a clean style, these features make C language suitable for `system programmings like an operating system or compiler development`. 

+ Many programming languages borrowed the syntax of c like PHP ,java c++ etc.

+ Many tools like windows, Linux and macs operating system kernels, MySQL , python , vim , git were built with c.

## History Of C

+ It was developed in 1970's by Dennis ritchie at AT&T Bell laboratories. 

+ The objective of its development was in the context of the re-design of the UNIX operating system to enable it to be used on multiple computers.

+ Earlier the language B was used for improving the UNIX system. Being a high-level language, B allowed much faster production of code than in assembly language. Still, B suffered from drawbacks as it did not understand data-types and did not provide the use of “structures”.

+ These drawbacks became the driving force for Ritchie for development of a new programming language called C. He kept most of language B’s syntax and added data-types and many other required changes.

## Features Of C

+ As a middle-level language, C combines the features of both high-level and low-level languages. It can be used for low-level programming, such as scripting for drivers and kernels and it also supports functions of high-level programming languages, such as scripting for software applications etc.
	
+ C is a structured programming language which allows a complex program to be broken into simpler programs called functions. It also allows free movement of data across these functions.
	
+ Various features of C including direct access to machine level hardware APIs, the presence of C compilers, deterministic resource use and dynamic memory allocation make C language an optimum choice for scripting applications and drivers of embedded systems.
	
+ C language is case-sensitive which means lowercase and uppercase letters are treated differently.
	
+ C is highly portable and is used for scripting system applications which form a major part of Windows, UNIX, and Linux operating system.
	
+ C is a general-purpose programming language and can efficiently work on enterprise applications, games, graphics, and applications requiring calculations, etc.
	
+ C language has a rich library which provides a number of built-in functions.
	
+ C implements algorithms and data structures swiftly, facilitating faster computations in programs. This has enabled the use of C in applications requiring higher degrees of calculations like MATLAB and Mathematica.

+ Riding on these advantages, C became dominant and spread quickly beyond Bell Labs replacing many well-known languages of that time, such as ALGOL, B, PL/I, FORTRAN, etc. C language has become available on a very wide range of platforms, from embedded microcontrollers to supercomputers.



## About Header Files 

+ The first and foremost component is the inclusion of the Header files in a C program. 

+ A header file is a file with extension .h which contains C function declarations and macro definitions to be shared between several source files.

+ Few Header files are 

	+ stdio.h – Defines core input and output functions.

	+ math.h – Defines common mathematical functions.

	+ stdlib.h – Defines numeric conversion functions, pseudo-random network generator, memory allocation.
	
## About Preprocessor Directives 

+  All lines that start with # are processed by preprocessor which is a special program invoked by the compiler.
 
+  During the compile time it will add the functionality of header files into the  current program and compile the preprocessor directives code before our code.

## Macro Directives 
 
 The macros can take function like arguments, the arguments are not checked for data type. For example, the following macro INCREMENT(x) can be used for x of any data type.
 
```
 	#include <stdio.h>
	#define INCREMENT(x) ++x
	int main()
	{
		char *ptr = "GeeksQuiz";
		int x = 10;
		printf("%s  ", INCREMENT(ptr));
		printf("%d", INCREMENT(x));
		return 0;
	}
	// o/p eeksQuiz  11
```

## Installing The GCC Compiler

```
$sudo apt install gcc
```

## To Run The Code In GCC 

```
type your code and save the file with .c extension 

now just type to create the object file

$ gcc -o object_file filename.c 

now to run the file in gcc

$./object_file

```


## Compilation Process in c

+ The c compilation process converts the source code taken as input into the object code or machine code.

+ The compilation process is being done by the `compiler`. 

+  The compilation process can be divided into four steps, i.e., `Pre-processing`, `Compiling`, `Assembling` and `Linking`.

+ Pre-Processing
	+  The preprocessor takes the source code as an input, and it removes all the comments from the source code. 
	+ The preprocessor takes the preprocessor directive and interprets it. 
	+ For example, if <stdio.h>, the directive is available in the program, then the preprocessor interprets the directive and replace this directive with the content of the 'stdio.h' file.

+ Compiling
	+ The compiler will receive the code that was pre-processed and it will convert the  pre-processed code into assembly code.

+ Assembling by Assembler
	+ The Assembler will convert the assembly code into object code.
	+ The object code is saved into a object file

+ Linking by Linker
	+ All the programs written in C use library functions. These library functions are pre-compiled, and the object code of these library files is stored with '.lib' (or '.a') extension.
	+ The main working of the linker is to combine the object code of library files with the object code of our program. 
	+ The name of the executable file is the same as the source file but differs only in their extensions. 
	+ In DOS, the extension of the executable file is '.exe', and in UNIX, the executable file can be named as 'a.out'.

## Terminologies in C

### TOKENS 
A token is the smallest element of a program that is meaningful to the compiler. Tokens
can be classified as follows:  

+ Keywords
+ Identifiers
+ Constants
+ Strings
+ Special Symbols
+ Operators

### KEYWORDS

+ Keywords are pre-defined or reserved words in a programming language. Each keyword is meant to perform a specific function in a program. 

+ Since keywords are referred names for a compiler, they can’t be used as variable names because by doing so, we are trying to assign a new meaning to the keyword which is not allowed. You cannot redefine keywords.
	
+ However, you can specify the text to be substituted for keywords before compilation by using C/C++ preprocessor directives. 	

+ C language supports 32 keywords which are given below: 

```
auto         double      int        struct
break        else        long       switch
case         enum        register   typedef
char         extern      return     union
const        float       short      unsigned
continue     for         signed     void
default      goto        sizeof     volatile
do           if          static     while 
```

### IDENTIFIERS:

+ Identifiers are used as the general terminology for the naming of variables, functions and arrays. 

+ These are user-defined names consisting of an arbitrarily long sequence of letters and digits with either a letter or the underscore(_) as a first character. 

+ You cannot use keywords as identifiers; they are reserved for special use.
+ The length of the identifiers should not be more than 31 characters.

### CONSTANTS:

+ Constants are also like normal variables. But, the only difference is, their values can not be modified by the program once they are defined. 

+ Constants refer to fixed values. They are also called literals. eg: const int data=10;

### STRINGS

+ Strings are nothing but an array of characters ended with a null character (‘\0’). This null character indicates the end of the string. 

+ Strings are always enclosed in double-quotes. Whereas, a character is enclosed in single quotes in C and C++.

```	
	EG: char string[20] = {‘g’, ’e’, ‘e’, ‘k’, ‘s’, ‘f’, ‘o’, ‘r’, ‘g’, ’e’, ‘e’, ‘k’, ‘s’, ‘\0’};
		char string[20] = “geeksforgeeks”;
		char string [] = “geeksforgeeks”;
```
### SPECIAL SYMBOLS 

+ The following special symbols are used in C having some special meaning and thus, cannot be used for some other purpose.[] () {}, ; * = # 

### OPERATORS 

+ Operators are symbols that trigger an action when applied to C variables and other objects. The data items on which operators act upon are called operands. 

+ Depending on the number of operands that an operator can act upon, operators can be classified as follows: 

    + Unary Operators: Those operators that require only a single operand to act upon are known as unary operators.For Example increment and decrement operators.
    +  Binary Operators: Those operators that require two operands to act upon are called binary operators. Binary operators are classified into : 
       + Arithmetic operators
       + Relational Operators
       + Logical Operators
       + Assignment Operators
       + Conditional Operators
       + Bitwise Operators

### VARIABLES TYPE AND SCOPE 

```
# variable declaration
type variable_name
```

+ local variable - declared within the block 
```
void function_name(){
	// local variable
	int a = 10;
}
```

+ global variable - accessible from any block 
```
int value = 10 ; // global variable
void function_name(){
	// local variable
	int a = 10;
}
```

+ static vairable - A variable that retains its value between multiple function calls is known as static variable.  value will be modified dynamically.
```
#include<stdio.h>

/*
Every time you call this function static variable value will be incremented value
and the value of x remains the same 

*** output ***

11 11
11 12
11 13
11 14
11 15

*/
void function_name(){
	int x = 10;
	static int y = 10;
	printf("%d %d\n",++x,++y);
} 

void main(){
	for(int i=0;i<5;i++)
		function_name();
}
```

+ Automatic Variable  - All variables in C that are declared inside the block, are automatic variables by default. We can explicitly declare an automatic variable using auto keyword.Automatic variables are similar as local variables.
```
void main(){  
int x=10;//local variable (also automatic)  
auto int y=20;//automatic variable  
} 
```

+ External Variable -External variable can be shared between multiple C files.We can declare external variable using extern keyword in a header file. 
```
#myfile.h
extern int x=10;

# test.c

#include "myfile.h"  
#include <stdio.h>  
void printValue(){  
	printf("Global variable: %d", x);  
}  

```

### Data type in c 
+ A data type specifies the type of data that a variable can store such as integer, floating, character, etc. 
+ Basic Data type
	| Data Type     | size   | Range
	|-----------    | -----  | -------
	| int           | 2 byte | -32768 to 32767
	| signed int    | 2 byte | -32768 to 32767
	| unsigned int  | 2 byte |  0 to 65535
	| short         | 2 byte | -32768 to 32767
	| short int     | 2 byte | -32768 to 32767
	| char          | 1 byte | -128 to 127
	| signed char   | 1 byte | -128 to 127
	| unsigned char | 1 byte |  0 to 255
	| float         | 4 byte | 
	| double        | 8 byte |
	| long int      | 4 byte |
	| long double   |10 byte |
+ Derived Data Type
	+ array
	+ pointer
	+ structure
	+ union

+ Enumeration  Data Type
	+ enum

+ Void Data Type
	+ void 

### Format specifier in c
+ The Format specifier is a string used in the formatted input and output functions. The format string determines the format of the input and output. The format string always starts with a '%' character.
+ you can refer all the format specifier - https://www.javatpoint.com/c-format-specifier

### Memory allocation and Garbage collection in c

+ The lack of a "heap" or "garbage collection" feature in C is both one of the great strengths of the language and at the same time is likely reason that the average programmer will never develop or maintain a major C application during their career.  

+ C provides a simple feature using the malloc() and free() functions that allows a programmer to request a certain amount of memory be allocated dynamically.

+  Kernighan and Ritchie knew "garbage collection" was difficult. So they left it out of the C language and put it into a run-time library.  


### Static Function in c

+ Non-static functions are global by default means that the function can be accessed outside the file

+ If we declare the function as static, then it limits the function scope. The static function can be accessed within a file only. 

```
static void func()  
{  
    printf("Hello javaTpoint");  
}  
```

### Programming errors in c
+ Programming errors are also known as the bugs or faults, and the process of removing these bugs is known as debugging.
+ There are mainly 5 types of errors exist in c
	+ Syntax Error
	
		+ Syntax errors are also known as the compilation errors as they occurred at the compilation time, or we can say that the syntax errors are thrown by the compilers.
	
		+ They are mostly misspelled words, missed parenthesis, missed semicolons etc
	
	+ Run time Error

		+ Sometimes the errors exist during the execution-time even after the successful compilation known as run-time errors.

		+ Zero division error is a run time error
		
	+ Linker Error
		
		+ Linker errors are mainly generated when the executable file of the program is not created.
		
		+ This can be happened either due to the wrong function prototyping or usage of the wrong header file.
		
		+ The most common linker error that occurs is that we use Main() instead of main().
		
	+ Logical Error
	
		+ The logical error is an error that leads to an undesired output.
	
	+ Semantic Error
	
		+ Semantic errors are the errors that occurred when the statements are not understandable by the compiler.
		
		```
			Use of a un-initialized variable.
			int i;
			i=i+2;
		```
### Type Casting in C

+ Typecasting allows us to convert one data type into other. 
+ In C language, we use cast operator for typecasting which is denoted by (type).

```
(type)value; 
float f=(float) 9/4;  
```

### Bitwise operators in c
+ The bitwise operators are the operators used to perform the operations on the data at the bit-level. 
+ When we perform the bitwise operations, then it is also known as bit-level programming. 
+ It consists of two digits, either 0 or 1. 
+ It is mainly used in numerical computations to make the calculations faster.

[Detailed Example](link)

### 2's complement in C

+ The 2s complement in C is generated from the 1s complement in C. 
+ As we know that the 1s complement of a binary number is created by transforming bit 1 to 0 and 0 to 1
+ the 2s complement of a binary number is generated by adding one to the 1s complement of a binary number.

```
Calculate 2’s complement of 3: 
Binary form of 3 = 0011 
1’s Complement of 3 = 1100 
Adding 1 to 1’s complement = 1100 +1
2’s complement of 3 = 1101  
```

### Switch Case in C

+ The switch expression must be of an integer or character type.
+ The case value must be an integer or character constant.
+ The case value can be used only inside the switch statement.

```
#include<stdio.h>  
int main()  
{  
    int j = 1;  
    switch(j)  
    {  
        printf("Hello programmer!");   // it will be ignored by default switch will start to work from case
        case 1:  
            printf("Case1");  
            break;  
        case 2:  
            printf("Case2");  
            break;  
    }  
return 0;  
}  
```
		
