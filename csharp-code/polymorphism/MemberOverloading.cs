using System;
 
namespace Hello
{
    
	public class Hello
	{
	    public static int Sum(int a,int b)
	    {
	        return a+b;
	    }
	    
	    public static float Sum(float a,float b)
	    {
	        return a+b;
	    }
	    
		public static void Main (string[] args)
		{
            Console.WriteLine(Sum(4,5)+" "+Sum(4.0F,5.1F));
            
		}
	}
}
