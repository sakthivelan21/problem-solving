# Java Notes 
    This repo contains source code of java concepts and oops.

### Codes in this repo

+ Basic Hello World 

	+ [Simple Hello World Program](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Basics/HelloWorld.java)


+ Command Line Arguments

	+ [Command Line Arguments Program](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Basics/CommandLineArguments.java)

	+ [Command Line Arguments sum Program](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Basics/CommandLineArgumentsSum.java)

+ Sorting Alogrithms

	+ [Sorting Alogrithms ](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/SortingAlgorithms/SortData.java)


+ Searching Algorithms

	+ [Linear Search](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Searching-Algorithms/LinearSearch.java)

	+ [Binary Search](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Searching-Algorithms/BinarySearch.java)

	+ [Recursive Binary Search](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Searching-Algorithms/RecursiveBinarySearch.java)

+ String
	
	+ [String Manipulation in java](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Strings/StringManipulation.java)

	+ [ComapareTo Example in java](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Strings/CompareToExample.java)

	+ [String Buffer Example in java](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Strings/OtherStringClassManipulation.java)


+ Arrays

	+ [For Each with Array Example](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Arrays/ForEachLoop.java)

	+ [Arrays class In Built Methods Example](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Arrays/ArrayMethodsExample.java)

	+ [Transpose of Matrix](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Arrays/TransposeOfMatrix.java)

	+ [Matrix Multiplication](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Arrays/MatrixMultiplication.java)

	+ [Vector Example](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Arrays/VectorExample.java)

	+ [Dynamic Array Size change]((https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Arrays/DynamicArraySizeChange.java))

+ Inheritance

	+ [Single Inheritance](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Inheritance/SingleInheritance.java)

	+ [Multi-level Inheritance](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Inheritance/MultilevelInheritance.java)

	+ [Hierarchical Inheritance](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Inheritance/HierarchicalInheritance.java)

	+ [Multiple Inheritance](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Inheritance/MultipleInheritance.java)

+ Class 

	+ [To String Override](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Basics/ToStringOverride.java)


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


* order of type casting is as follows 

byte -> short -> int,char -> long -> float -> double 

* Conversion from lower order to higher order

```
public class Main {

	/*
		** output **
		18
	*/

	public static void main(String[] args)
	{
		byte a = 8;
		short b = 10;
		int c=a+b; // type casting 
		System.out.println(c);
	}
}
```

* when we trying to caste a value from higher order to lower order we need to specifiy like this

* type variable = (new_type) variable

```
double d=6.8;
int value=(int)d; // type casting

// value = 6
```

### Autoboxing in java 

* Each primitive data type also has a full Java class implementation that can wrap it. For instance, the Integer class can wrap an int.

* There is sometimes a need to convert from the primitive type to its object wrapper (e.g., using them with generics).

* Java can perform this conversion for us automatically, a process called Autoboxing:

```
Character c = 'c';

Integer i = 1;
```

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

### Call by value and Call by Reference in Java 

+ [clear Article link](https://www.geeksforgeeks.org/g-fact-31-java-is-strictly-pass-by-value/)

+ Java is Strictly Pass by Value for primitive data types of java 

+ But in java, All non-primitives (or objects of any class) are always references.

+  So it gets tricky when we pass object references to methods. 

+ Java creates a copy of references and pass it to method, but they still point to same memory reference. 

+ Mean if set some other reference to object passed inside method, the object from calling method as well its reference will remain unaffected. 

+ But if we change the member variables of an object that it is passed, it will be changed 


### Arrays in Java 

* An array in Java is a group of like-typed variables referred to by a common name.

* In Java, all arrays are dynamically allocated

* Arrays are stored in consecutive memory locations.

* Since arrays are objects in Java, we can find their length using the object property length.

* The size of an array must be specified by int

```
int intArray[];   //declaring array
intArray = new int[10];  //declaring array

// it can be also done in a single line 

int[] intArray = new int[20]; // combining both statements in one

```

### Array Literal

* In a situation where the size of the array and variables of the array are already known, array literals can be used. 

* The length of this array determines the length of the created array.

* There is no need to write the new int[] part in the latest versions of Java.

[Array Literal Example](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Arrays/ForEachLoop.java)

```
// Declaring array literal
 int[] intArray = new int[]{ 1,2,3,4,5,6,7,8,9,10 }; 
 
``` 

### Multi-Dimensional Array in java 

	* Arrays will have internal arrays in each index;
	
```
int array[][]= {
	    {1,1,1,1},
	    {2,2,2,2},
	    {3,3,3,3},
	    {4,4,4,4}
	};
```

### Dynamic Memory Change in Array

+ The number of elements(size) of array may change during the execution of the program.

+ you can dynamically change the number of elements by dynamically retaining the array name.

+ [Dynamic Memory Change Example](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Arrays/DynamicArraySizeChange.java)

### Array Methods in java 

+ [Array Methods Example](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Arrays/ArrayMethodsExample.java)


### Strings in Java

* string is basically an object that represents sequence of char values. An array of characters works same as Java string.

* [String Manipulation in java code](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Strings/StringManipulation.java)


### String Storage

* They are three classes to handle string  and they are available in java.lang package.

	* `class String` - stored in `string constant pool and heap`, not mutable, thread safe and fast.

	* `class StringBuffer` - stored in `Heap` , mutable,thread safe and slow

	* `class StringBuilder` - stored in `Heap`, mutable, Not thread safe and fast

* The objects of class String have aspcial storage facility,which is not available to other two classes.

* normally. The memory allocated to java program is divided into two segments 

	* Stack - The program is stored on the stack.

	* Heap - The variables are stored in heap. In heap, there is memory segment called `String constant pool`. 

	* String constant pool has only unique String values. 

	* If you declare another string with same value. The reference will be already in pool . so it will be referred instead of creating a new instant


```
// String defined like this are stored in String constant pool
String strx = "abcd";

// Strings defined using new operator are stored on heap memory

String strz = new String("abcd")
```

### Difference between == and equals in String 

* == comparess the references, i.e two references point to the same object 

* equals() method compares the content of two strings 

```
String str1 = "Delhi";
String str2 = "Delhi";
String str3 = new String("Delhi");

str1 == str2  // true ( as both variable be pointing to same reference in the string constant pool)

str2 == str3 // false ( as both variable be pointing to difference references in different location)

str1.equals(str2) // true ( as it will compare the contents of two strings)
```
