/*
    Method OverLoading 

    *** output *** 

    The Area of Square 25.0
    The Area of Rectangle 30.0


*/
class Shape
{
    // Method Overloading by parameters change
    public double getArea(int shape)
    {
        return shape*shape;
    }

    public double getArea(double length,double breadth)
    {
        return length*breadth;
    }
}

public class MethodOverLoading
{
    public static void main(String[] args)
    {
        Shape shape = new Shape();

        System.out.println("The Area of Square "+shape.getArea(5));

        System.out.println("The Area of Rectangle "+shape.getArea(5,6));

    }
}