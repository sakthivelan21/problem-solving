/*
    *** output *** 

    this is default constructor called
    2.0
    4.0
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

    public double area()
    {
        return this.length * this.breadth;
    }
}

public class ConstructorOverLoading{
    public static void main(String[] args)
    {
        Rectangle rectangle = new Rectangle(1,2);

        Rectangle rect = new Rectangle();

        System.out.println(rectangle.area());

        System.out.println(rect.area());

    }
}