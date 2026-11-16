package myPackage.Shapes;

public class Square{
    private double side;
    public Square(double side)
    {
        this.side = side;
    }

    public double area(){
        return this.side*this.side;
    }

    public double perimeter(){
        return 4*this.side ;
    }

    public void setSide(double side)
    {
        this.side = side;
    }

    public double setSide()
    {
        return this.side;
    }
}