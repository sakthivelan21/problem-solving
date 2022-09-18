## Object Oriented Programming

+ object oriented programming attempts to provide the model for developing programs and applications based on objects and classes.

+ Objects form the basic unit of object oriented programming.


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

* In java, class which are declared as `Final class` cannot be extended by other classes

* class has a mechanism which helps to hide information(`information hiding`) about data and methods from the user through `access specifiers`.

* It has 4 types of classes 

	* Nested Classes 

        * They are inner classes inside a class and they are classified as follows.

            * Member inner class

            * Local class 

            * Anonymous class 
	
	* super class

        * It is a parent class from which other classes are derived
	
	* Derived Class

        * It is a class which is derived from another class.
	
	* Final Class

        * A class declared final cannot have sub (derived) classes but it can  have super class.

    * Generic class

        * These are classes that declare one or more type parameters.

    * abstract class

        * A class which is declared abstract must have `one or more abstract methods` as its members or it's super class has abstract methods that are not fully defined.

        * we cannot create object for abstract class

        * Abstract class is used to provide common method implementation to all the subclasses or to provide default implementation. 

### Constructor 

* Constructor is also a public method with the same name as the class.

* It has no type; further it dows not return any value.

* it only constructs and initializes the object of a class.

* Every time an object of the class is created , the constructor method is automatically called.

* Constructor overloading - constructor are overloaded with the parameters

and example is [Constructor Overloading](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Polymorphism/ConstructorOverLoading.java)

### private constructor

* If a constructor is made private, it can be accessible within the class.

* We cannot create an object with private constructor 

* We need private constructor in 

    * Internal Constructor Chaining 

    * Singleton class Design pattern 

        * A class is said to be singleton if it limits the number of objects of that class to one.

        * We can’t have more than a single object for such classes.

        * Singleton classes are employed extensively in concepts like Networking and Database Connectivity.

+ [Singleton Class  private constructor](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Class/SingletonClass.java)

### Cleaning Process - Garbage Collection

+  objects are allocated memory from the heap memory space. They must be freed from the memory after use.

+ It is performed automatically and it enable better memory management.

+ This automated process is called `Garbage Collection`.

+ when objects are no longer needed, to reclaim the space from objects that are no longer referenced to the program, `Java Virtual machine(JVM)` performs garbage collection.

+ garbage collector only collects those objects that are created by a `new keyword`.

+ Garbage collection is done by `daemon thread` and it will invoke `finalize()` method, to finalize that the object is unreferenced before it can be garbage collected. Then it will clean the object.



+ JVM will have to to distinguish between the live objects from the garbage objects. 

    + `Reference Couting`

        + Initially when an object is created it will have reference count as one.

        + Then it will be incremented, if any variable is assigned a reference of that object 

        + When all the references become null and reference count decrement to zero. Then that object is ready for garabage collection.

    + `Tracing`

        + The tracing algorithm is termed as `mark and sweep`.

        + `Mark phase` : The garbage collectors trace out the graph of references starting with root noes.

        + `sweep phase` : Objects encountered are `marked` in the trace. After trace is over, unmarked objects are recognized as unreachable and can be garbage collected.


* The object become suitable for cleaning when 

    + objects that are are not reachable from any live thread or by any static references. if all references of object are set to null.
    
    + when parent object is set to null and if the object holds a reference of another object. then both will be null and good for garbage collection


### Advantages of automatic garbage collection 

* It relieves the programmer to worry about memory managment.

* It improves security and integrity by  correctly cleaning of memory avoiding human errors.

* It enhances productivity of programmer.

### Disadvantage of garabage collection 

* A addition overhead has to be runned to handle memory managment and JVM has to keep track of various object that are being referenced by the executing program, then it had to finalize and free unreferenced objects 

* It has more CPU time and programmer has less controll over the CPU scheduling and memory

### this keyword 

+ The keyword `this` provides reference to the current object

### Instance Variable Hiding 

* The value of instance variable having the same name as local variable has been shadowed or hidden.

* inorder to overcome this problem of variable hiding the `this` keyword is used to refer the member variables 

```
class Demo{
    int var = 10;
    public static void main(String[] args)
    {
        Demo demo = new Demo();
    }

    public void dis(int var)
    {
        // it will referring to the local variable of this method and not the member variable
        var = 20 ;

        // it will be referring to the member variable and not local variable
        this.var = 14;
    }
}
```

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

* Types of Inheritance 

    ![Types of Inheritance image](https://static.javatpoint.com/images/core/typesofinheritance.jpg)

    ![Type of Inheritance image 2](https://static.javatpoint.com/images/core/multiple.jpg)


    * Single Inheritance

        * In single inheritance, subclasses inherit the features of one superclass.

        * In the image Abouve, class A serves as a base class for the derived class B.

        + [Single Inheritance Example](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Inheritance/SingleInheritance.java)

    * Hierarchical Inheritance

        *  In Hierarchical Inheritance, one class serves as a superclass (base class) for more than one subclass. 
        
        * In the below image, class A serves as a base class for the derived class B, C.

        + [Hierarchical Inheritance Example](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Inheritance/HierarchicalInheritance.java)

    * Multilevel Inheritance

        * When there is a chain of inheritance, it is known as multilevel inheritance.
        
        * In the above image, class A serves as a base class for the derived class B, which in turn serves as a base class for the derived class C.

        * In Java, a class cannot directly access the grandparent’s members. That means class C cannot directly access class A members 

        + [Multi-level Inheritance Example](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Inheritance/MultilevelInheritance.java)

    * Multiple Inheritance 

        * To reduce the complexity and simplify the language, multiple inheritance is not supported in java. 

        * Consider a scenario where A, B, and C are three classes. The C class inherits A and B classes. 
        
        * If A and B classes have the same method and you call it from child class object, there will be ambiguity to call the method of A or B class.

        * Since compile-time errors are better than runtime errors, Java renders compile-time error if you inherit 2 classes. So whether you have same method or different, there will be compile time error.

        * But in java, `interface` supports multiple inheritance.

        + [Multiple Inheritance Example](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/Inheritance/MultipleInheritance.java)

	
### Polymorphism 

* Polymorphism in Java is a concept by which we can perform a single action in different ways. 

* Polymorphism is derived from 2 Greek words: poly and morphs. The word `poly` means `many` and `morphs` means `forms`. 

* So `polymorphism` means `many forms`.

* There are two types of polymorphism in Java: `compile-time` polymorphism and `runtime` polymorphism. 

* We can perform polymorphism in java by `method overloading` and `method overriding`.

* `Method Overloading`

    * It is done when methods with the same name and scope are permitted provided they have different signatures likes 

        * Number of parameters 

        * Types of Parameters 

        * Their order in parameter list
    

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



### Assertion in java 

* Assertion is a statement in java. It can be used to test your assumptions about the program.

* While executing assertion, it is believed to be true. If it fails, JVM will throw an error named AssertionError. It is mainly used for testing purpose. 

* advantage : It provides an effective way to detect and correct programming errors.

```
// syntax 
assert expression;  

assert expression1 : expression2;  
```

### where to avoid assertion 

There are some situations where assertion should be avoid to use. They are:

* According to Sun Specification, assertion should not be used to check arguments in the public methods because it should result in appropriate runtime exception e.g. IllegalArgumentException, NullPointerException etc.
    
* Do not use assertion, if you don't want any error in any situation.
