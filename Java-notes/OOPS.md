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

* It has 4 types of classes 

	* Nested Classes 
	
	* super class
	
	* Derived Class
	
	* Final Class
	

### Local Class

### Anonymous Class

### Cleaning Process 

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

        + [Single Inheritance Example](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/inheritance/SingleInheritance.java)

    * Hierarchical Inheritance

        *  In Hierarchical Inheritance, one class serves as a superclass (base class) for more than one subclass. 
        
        * In the below image, class A serves as a base class for the derived class B, C.

        + [Hierarchical Inheritance Example](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/inheritance/HierarchicalInheritance.java)

    * Multilevel Inheritance

        * When there is a chain of inheritance, it is known as multilevel inheritance.
        
        * In the above image, class A serves as a base class for the derived class B, which in turn serves as a base class for the derived class C.

        * In Java, a class cannot directly access the grandparent’s members. That means class C cannot directly access class A members 

        + [Multi-level Inheritance Example](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/inheritance/MultilevelInheritance.java)

    * Multiple Inheritance 

        * To reduce the complexity and simplify the language, multiple inheritance is not supported in java. 

        * Consider a scenario where A, B, and C are three classes. The C class inherits A and B classes. 
        
        * If A and B classes have the same method and you call it from child class object, there will be ambiguity to call the method of A or B class.

        * Since compile-time errors are better than runtime errors, Java renders compile-time error if you inherit 2 classes. So whether you have same method or different, there will be compile time error.

        * But in java, `interface` supports multiple inheritance.

        + [Multiple Inheritance Example](https://github.com/sakthivelan21/problem-solving/blob/main/Java-notes/inheritance/MultipleInheritance.java)

	
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