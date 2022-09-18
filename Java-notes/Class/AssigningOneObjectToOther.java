/*

*** output ***

First rectangle is Length is 2.000000 and Breadth is 3.000000
Second rectangle is Length is 3.000000 and Breadth is 4.000000
First rectangle is Length is 2.000000 and Breadth is 5.000000
Second rectangle is Length is 2.000000 and Breadth is 5.000000

*/
class Rectangle{
    double length,breadth;

    public Rectangle(double length,double breadth)
    {
        this.length = length;

        this.breadth = breadth;
    }
    public double area()
    {
        return this.length * this.breadth;
    }

    @Override 
    public String toString(){

        return String.format("Length is %f and Breadth is %f",this.length,this.breadth);
    }
}

public class AssigningOneObjectToOther
{
    public static void main(String[] args)
    {
        Rectangle rectangle1  = new Rectangle(2,3);

        System.out.println("First rectangle is " + rectangle1);
        
        Rectangle rectangle2 = new Rectangle(3,4);

        System.out.println("Second rectangle is " + rectangle2);

        // assigning one object to another
        rectangle2 = rectangle1;

        rectangle2.breadth = 5;

        System.out.println("First rectangle is " + rectangle1);

        System.out.println("Second rectangle is " + rectangle2);

    }
}