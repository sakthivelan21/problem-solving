import java.util.Scanner;
/*
    *** output *** 

    Enter the length of Rectange : 4

    Enter the breadth of Rectangle : 3
    Area of Rectangle is 12.0
*/
class Rectangle{
    double length,breadth;
    public double area()
    {
        return this.length * this.breadth;
    }
}


public class SimpleClass{
    public static void main(String[] args)
    {
        Rectangle rectangle; //initializing a reference for Rectangle class 
        // value is null here 

        rectangle = new Rectangle(); // new instance of Rectangle class is created 


        Scanner scanner = new Scanner(System.in);

        System.out.print("\n Enter the length of Rectange : ");
        //accessing the member variables 
        rectangle.length = scanner.nextDouble();

        System.out.print("\n Enter the breadth of Rectangle : ");

        rectangle.breadth = scanner.nextDouble();

        System.out.println("Area of Rectangle is " + rectangle.area());
    }
}