/*
    Multi Level Inheritance 

    *** output *** 
    Area of Rectangle is 12
    Perimeter of Rectange is 14
*/

interface Area{
    public int getArea();
}

interface Perimeter{
    public int getPerimeter();
}

class Rectangle implements Area,Perimeter{
    int l,b;
    public Rectangle(int l,int b)
    {
        this.l=l;
        this.b=b;
    }
    public int getArea()
    {
        return l*b;
    }
    
    public int getPerimeter()
    {
        return 2*(l+b);   
    }
}

public class MultipleInheritance{
    public static void main(String[] args)
    {
        Rectangle rectangle=new Rectangle(3,4);
        System.out.println("Area of Rectangle is "+rectangle.getArea());
        System.out.println("Perimeter of Rectange is "+rectangle.getPerimeter());
    }
}