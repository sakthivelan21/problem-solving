# Java Notes 
    This repo contains source code of java concepts and oops.

### Codes in this repo

+ [Simple Hello World Program](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/HelloWorld.java)
+ [Command Line Arguments Program](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/)
+ [](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/)

### History of Java

* Java was developed by `James Gosling`   and team in `1991 -1993` as a `system independent language`.

* The Java programming language is a general-purpose programming language that is based on the OOPs concept.

* Java is a platform-independent and robust programming language. 

* The principle followed by Java is `WORA` that says `Write Once, Run Anywhere`. 

* Core java involves basic concepts in java  and it is a part of java SE.


### Java - System Independent Language

* when the `source code of a java program` is `compiled`, it is converted into the `byte code` file for a virtual machine.

* the compiled program in byte code can be run on different computers having different operating systems with the help of `JVM(java virtual machines)`.

* JVM will `interprets` the `byte code` into `machine specific instructions` and runs the program.

### Java - Compiled and Interpreted Language

* Java uses both interpretation and compilation process and making it a two - stage programming system.

* first, the java compiler generated a class file(.class)  from its source file(.java file).

* this class file with .class extension contains the bytecode that are platform independent for JVM

* java interpreter in jvm will convert the byte code into machine language code according to its platform. 

* then , JVM provide the environment and it will load and run the program in the system.

* in `java byte code`, the libraries will not be added into the file to make it executable. so compiled code are small in size.

* JAVA API will used to invoke the needed libraries while running on the virtual machine.

+ java byte code cannot call the operating system libraries directly (example like I/O  operations).

+ Resources required to run the bytecode are made available by the `Java Virtual Machine`, which `calls the processor` to `allocate the required resources`.

### DATA TYPES in java

* `primitive data type`: (build in types) (java doesn't support unsigned numbers )

    * byte -  8 bit 

    * short - 2 bytes

    * int -   4 bytes

    * long -  8 bytes

    * boolean - 1 bit

    * float - 4 bytes

    * double - 8 bytes

    * char - 2 bytes

* `non-primitive types`:

    * these ar the class and interfaces types that are defined by the user.

### type casting  or type conversion 

	* to convert the data from one type to another type in the program 

	* example : double d=6.8;int value=(int)d;

### Static variable

* generally when a object of a class is created a copy of it is stored.

* if the variable is declared static then there will be only one variable copy in the memory. 

### Static import
*  If we use static import of the Math class, there is no need to use class reference with every method. 
```
import static java.lang.Math.*;
public class Hello{
    public static void main(String[] args)
    {
        // we can call the methods simply by their name without the package name
        System.out.println(sqrt(100));
    }
}
```

### Final Keyword

* The value of a variable declared `final` cannot be changed in the program.
* It makes the varable as a `constant`

```
final double PI = 3.14159;
```

### Chain of Assignment

```
int a,b,c,d;
a=b=c=10;
```

