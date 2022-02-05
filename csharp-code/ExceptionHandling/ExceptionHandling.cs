using System;
 
namespace Hello
{
    /*
        ExceptionHandling
        
        output
        
        Attempted to divide by zero.
        Executing the finally block
    */
    public class Hello
    {
		public static void Main (string[] args)
		{
		    try
		    {
		        int a=10,b=0;
		        Console.WriteLine(a/b);
		    }
		    catch(DivideByZeroException ex)
		    {
		           Console.WriteLine(ex.Message);
		    }
		    catch(Exception e)
		    {
		        Console.WriteLine(e.Message);   
		    }
		    finally
		    {
		        Console.WriteLine("Executing the finally block");
		    }
		    
		}
	}
}

