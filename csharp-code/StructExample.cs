using System;
 
namespace Hello
{
    public struct Rectangle
    {
        public int breadth,length;
        public Rectangle(int breadth,int length)
        {
            this.breadth=breadth;
            this.length=length;
        }
        
        public int getArea()
        {
            return breadth*length;
        }
    }
	public class Hello
	{
	    /*
	        C# struct
	        
	        it is same like classes but it has data in value type whereas class have dat in reference type.
	        It is useful if you have data that is not intended to be modified after creation of struct. 
	        
	        output 
	        
	        12
	    */
	    
	    
		public static void Main (string[] args)
		{
            Rectangle rectangle = new Rectangle(3,4);
            Console.WriteLine(rectangle.getArea());
		}
	}
}
