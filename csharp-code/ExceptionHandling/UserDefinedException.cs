using System;
 
namespace Hello
{
    /*
        ExceptionHandling - user Defined Exceptions
        
        output
        
        Age should be greater than 18
        Exception of type 'Hello.InvalidAgeException' was thrown.
    */
    
    public class InvalidAgeException:Exception{
        
        public InvalidAgeException(String message):base(message)
        {
        }
    }
    public class Hello
    {
		public static void Main (string[] args)
		{
		    
		    try
		    {
		        int age=17;
    		    if(age<18)
    		        throw new InvalidAgeException("Age should be greater than 18");
    		    
		    }
		    catch(InvalidAgeException e)
		    {
		        Console.WriteLine(e.Message);
		    }
		}
	}
}

