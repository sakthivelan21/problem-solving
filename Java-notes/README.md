# History of Java

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

### Procedural Programming vs Object Oriented Programming (OOP)

#### Procedural Programming

+ Procedural programming involves executing a step-by-step list of instructions in order to complete the given task.

+ In this approach, the whole program forms a single part having a sequential flow.

+ It decomposes the task into variables, data structures and subroutines.

+ they can be invoked at any given time in order to complete the  intended function.

+ These procedural languages are extremely powerful. eg:- Fortran, Pascal, COBOL and C.

### Procedural programming limitations:

+ It is difficult to upgrade and debug the code as length of the code increases.

+ Functions have unrestricted access to the global data. so data is exposed to the whole program and security cannot be ensured.

+ Importance is given to the operations on data and not on data itself.

+ It's quite difficult to create user defined data types and this tends to reduce the extensibility of the program. 


### Object Oriented Programming

+ object oriented programming attempts to provide the model for developing programs and applications based on objects and classes.

+ Objects form the basic unit of object oriented programming.

### Object

+ Object in oop language refers to a specific type or instance of a class.

+ Example : human is an example of an object . it has similar structure to other objects but have individual characteristics as well.

### Need for object oriented programming && Advantage of object oriented programming over procedural programming:

+ `Reusability` : to reuse the previously defined objects and classes  of the code without any modification like inheritance.

+  `Modular Structure` : to provide a clear and modular structure for program development. this enables us to define the abstract data types where implementation details can be kept hidden.

+ `Easy to maintain and upgrade` : to maintain and modify the existing code. it is easier to locate and correct the bugs in the code.

+ `Inheritance` : to eliminate the redundant code and use existing classes.

+ `Data hiding` : The programmer can hide the data and functions in a class from another class. It helps in building secure programs.

### Data Abstraction 

+ Data abstraction is the `process of extracting the most relevant characteristics of object` data that are required by the program.

### Encapsulation

+ Encapsulation is the mechanism of `wrapping the data and methods` into a `single unit` called `class`.

+ In encapsulation, the data of the class can be kept hidden so that it cannot be accessed from outside of the class and accessible only by using methods of that class(private access specifier stuff).


### Class

* A class is a user defined blueprint or prototype from which objects are created.  

* It represents the set of properties or methods that are common to all objects of one type.

* It has data members and methods in it.

### Access Control to Data Variables and Methods : (Access specifiers)

* `public` : 
    
    + it is applied to variables , constructors, methods and classes. 
    
    + If any of these data members are declared public, they are accessible to all classes in all the packages.

* `default` : 
    
    * It can be applied to variables, constructors, methods and classes. 
    
    * When no access specifier is used, it implies the  default access. 
    
    * Here, the member can be accessed by classes within the same package.

* `protected` : 
    
    * it is applied to variables, constructors, methods and nested classes(excluding top level classes).  
    
    * The member declared as protected is accessed by the same class, it's subclasses and the classes in the same package.

* `private` : 
    
    * It is applied to variables, constructors, methods and nested classes (excluding top level classes).  
    
    * A private member can be accessed by the same class where it is defined and it cannot be accessed by subclasses and from other external classes.

### Inheritance

* Inheritance in Java is a mechanism in which one object `acquires all the properties and behaviors of a parent object`.

* The idea behind inheritance in Java is that you can create new classes that are built upon existing classes. 
		
* When you inherit from an existing class, you can reuse methods and fields of the parent class. 

* Moreover, you can add new methods and fields in your current class also.

* Inheritance creates a `parent-child relationship`.

* Reason : we use inheritance for `code reusability` and `method overriding`.

* `Super Class/Parent Class`: 
    
    * Superclass is the class from where a subclass inherits the features. 

    * It is also called a base class or a parent class.

* `Sub Class/Child Class`:
    
    *  Subclass is a class which inherits the other class. 

    *  It is also called a derived class, extended class, or child class. 
	
### Polymorphism 

* Polymorphism in Java is a concept by which we can perform a single action in different ways. 

* Polymorphism is derived from 2 Greek words: poly and morphs. The word `poly` means `many` and `morphs` means `forms`. 

* So `polymorphism` means `many forms`.

* There are two types of polymorphism in Java: `compile-time` polymorphism and `runtime` polymorphism. 

* We can perform polymorphism in java by `method overloading` and `method overriding`.

* If you `overload a static method` in Java, it is the example of `compile time polymorphism`.

* `Runtime polymorphism` or `Dynamic Method Dispatch` is a process in which a `call to an overridden method is resolved at runtime rather than compile-time`.  

* In this process, an overridden method is called through the `reference variable of a superclass`.

* If the reference variable of Parent class refers to the object of Child class, it is known as `upcasting`.


### Object oriented analyis design metrics fo a well defined class :

* `High cohesion` : cohesion implies the extend to which the class is dependent on other classes in the system

* `Low coupling` : coupling is a measure of the strength of association established by a connection from one entity to another.

* `sufficiency` : enough characteristic requirements.

* `completeness` : must satisfy all the characteristic requirements to capture all the meaningful characteristics of abstraction 

* `primitiveness` : it keeps compeleteness in check.


