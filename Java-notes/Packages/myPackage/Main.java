package myPackage;
import myPackage.Shapes.Rectangle;

import myPackage.Shapes.Square;

/*
    *** output ***

    Area of Rectangle is 6.0
    Perimeter of Rectangle is 10.0
    Area of Square is 16.0
    Perimeter of Square is 16.0
*/

public class Main{
    public static void main(String[] args)
    {
        Rectangle rectangle = new Rectangle(2,3);

        Square square = new Square(4);

        System.out.println("Area of Rectangle is "+rectangle.area());

        System.out.println("Perimeter of Rectangle is "+rectangle.perimeter());

        System.out.println("Area of Square is "+square.area());

        System.out.println("Perimeter of Square is "+square.perimeter());
    }
}