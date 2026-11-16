/*
    *** Nested class *** 

    *** output *** 

    Area of Rectangle is 2.0
    Area of Rectangle is 2.0
*/
class Rectangle{
    double length,breadth;

    // Constructor with default values
    public Rectangle()
    {
        System.out.println("this is default constructor called");
        this.length = 2;
        this.breadth = 2;
    }

    // Parameterized constructor
    public Rectangle(double length ,double breadth)
    {
        this.length = length;
        this.breadth = breadth;
    }

    public double getArea()
    {
        Inner inner = new Inner();

        return inner.area();
    }

     class Inner{
        public double area()
        {
            return length * breadth;
        }
    }
}

public class NestedClass
{
    public static void main(String[] args)
    {
        
        Rectangle   rectangle = new Rectangle(1,2);

        System.out.println("Area of Rectangle is "+rectangle.getArea());

        // accessing the inner class which is inside rectangle class
        Rectangle.Inner inner =  rectangle.new Inner();

        System.out.println("Area of Rectangle is "+inner.area());
    }

}
