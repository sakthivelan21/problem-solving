/*
    private access specifier example 

    *** output *** 

    Length is 1.0
    Breadth is 2.0
    area is 2.0
*/

class Rectangle
{
    private double length,breadth;

    public Rectangle(double length,double breadth)
    {
        this.length = length;
        this.breadth = breadth;
    }


    // private method
    private double area(){
        return this.length * this.breadth;
    }

    // to access private method
    public double getArea(){
        return area();
    }

    // getters to get private member variables data
    public double getLength()
    {
        return this.length;
    }
    public double getBreadth()
    {
        return this.breadth;
    }

    // setters to modify private member variables data
    public void setLength(double length)
    {
        this.length = length;
    }

    public void setBreadth(double breadth)
    {
        this.breadth = breadth;
    }
}

public class PrivateAccessSpecifier
{
    public static void main(String[] args)
    {
        Rectangle rectangle = new Rectangle(1,2);

        System.out.println("Length is "+rectangle.getLength());

        System.out.println("Breadth is "+rectangle.getBreadth());

        System.out.println("area is "+rectangle.getArea());
    }
}