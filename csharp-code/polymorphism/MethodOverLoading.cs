using System;
 
namespace Hello
{
    
	public class Hello
	{
	    public static int Area(int size)
	    {
	        return size*size;
	    }
	    
	    public static int Area(int l,int b)
	    {
	        return l*b;
	    }
	    
		public static void Main (string[] args)
		{
            Console.WriteLine(Area(4)+" "+Area(3,4));
            
		}
	}
}

