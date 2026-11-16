/*

*** output *** 

Hello World
1 2
1 2.0
Square Rectangle

*/

class Shape<T1,T2>{
    T1 a;
    T2 b; 
    public Shape(T1 a,T2 b)
    {
        this.a = a;
        this.b = b;
    }
    
    public void display(){
        System.out.println(this.a +" "+this.b);
    }
}
public class GenericClassExample
{
	public static void main(String[] args) {
		System.out.println("Hello World");
		Shape<Integer,Integer> shape = new Shape<Integer,Integer>(1,2);
		Shape<Integer,Double> shape2 = new Shape<Integer,Double>(1,2.0);
		Shape<String,String> shape3 = new Shape<String,String>("Square","Rectangle");
		shape.display();
		shape2.display();
		shape3.display();
		
	}
}
