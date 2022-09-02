# ABOUT C 

+ `C` is the procedural programming language. It was initially developed by `Dennis Ritchie` in the year `1972`.

+ It was mainly developed for system programming language to write an operating system.

+ The main features of the C language include low-level memory access, a simple set of keywords, dynamic memory allocation and a clean style, these features make C language suitable for `system programmings like an operating system or compiler development`. 

+ Many programming languages borrowed the syntax of c like php ,java c++ etc.

+ Many tools like windows, linux and macos operating system kernels, mysql , python , vim , git were built with c.

## History Of C

+ It was developed in 1970's by dennis ritchie at AT&T Bell laboratories. 

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

+ local variable - declared within the block 

+ global variable - accessible from any block 

+ static vairable - A variable that retains its value between multiple function calls is known as static variable.  value will be modified dynamically 

+ Automatic Variable  - All variables in C that are declared inside the block, are automatic variables by default. We can explicitly declare an automatic variable using auto keyword.Automatic variables are similar as local variables.

+ External Variable -External variable can be shared between multiple C files.We can declare external variable using extern keyword. 

