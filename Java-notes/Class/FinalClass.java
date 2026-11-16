/*
    Final class Example
    
    This feature is provided in java so that we may create an immutable class like the String class.
    This becomes important in order to prevent hackers from accessing and  changing private information.
    
    *** output ***
    
    Area is 3.0
    
*/
final class Rectangle
{
    double length,breadth;
    public Rectangle(double length,double breadth)
    {
        this.length = length;
        this.breadth = breadth;
    }
    
    public double area(){
        return this.length * this.breadth;
    }
}

/*

If we try to inherit a final class then it will throw cannot inherit compilation error
class hello extends Rectangle{
    
}
*/
public class FinalClass
{
	public static void main(String[] args) {
	        Rectangle rectangle = new Rectangle(1,3);
	        System.out.println("Area is "+rectangle.area());
	}
}
