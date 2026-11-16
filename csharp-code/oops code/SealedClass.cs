using System;
 
namespace Hello
{
    
    
    public sealed class Rectangle
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
	        C# sealed class - it cannot be inherited by any sub classes
	        
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
