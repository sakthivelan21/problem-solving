using System;
 
namespace Hello
{
    public class Shape
    {
        public virtual int getArea(int l,int b)
        {
            return l*b;
        }
    }
    
    public class Rectangle:Shape
    {
        public override int getArea(int l,int b)
        {
            Console.WriteLine("Inside Rectange class");
            return l*b;
        }
    }
	public class Hello
	{
	    /*
	        C# virtual keyword 
	        
	        C# virtual method is a method that can be redefined in derived classes
	        
	        
	        override - we can only override a method that is marked with virtual , abstract , override
	        
	        
	        output
	        
	        
	    */
	    
	    
		public static void Main (string[] args)
		{
            Rectangle rectangle=new Rectangle();
            Console.WriteLine(rectangle.getArea(3,4));
		}
	}
}
