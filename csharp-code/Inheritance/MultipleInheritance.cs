using System;
 
namespace Hello
{
    public interface IArea
    {
         int getArea(int l,int b);
    }
    
    public interface IPerimeter 
    {
         int getPerimeter(int l,int b);
    }
    
    public class Rectangle:IArea,IPerimeter
    {
        public int getArea(int l,int b)
        {
            return l*b;
        }
        
        public int getPerimeter(int l,int b)
        {
            return 2*(l+b);   
        }
    }
   
	public class Hello
	{
	    /*
	        C# Multiple Inheritance
	        
	        output
	        
	        Area 12
	        perimeter 
	    */
	    
	    
		public static void Main (string[] args)
		{
		    Rectangle rectangle=new Rectangle();
		    Console.WriteLine($"Area {rectangle.getArea(3,4)}");
		    Console.WriteLine($"perimeter {rectangle.getPerimeter(3,4)}");
		}
	}
}
