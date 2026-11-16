/*
    
    Abstract class 
    
        The basic idea behind an abstract class is to provide a generic concept instead of a specific class that performs some specific
        functions. 
       
        An abstract class provide declaration only and does not contain any implementatino 
        
        Further an anstract class cannot be used to instantiate objects directly with the new operator.
        
    *** output ***
    
    Area is 4.0
    Area is 6.25
    
*/

// declaration of abstract class
abstract class Shape{ 
    abstract public  void area(double side); // abstract method
}

class Square extends Shape // extending the absract meclass
{
    public  void area(double side){
        double value = side * side;
        System.out.println("Area is "+value);
    }
}

public class AbstractClass
{
	public static void main(String[] args) {
	       Square square = new Square();
	       square.area(2);
	       square.area(2.5);
	}
}
