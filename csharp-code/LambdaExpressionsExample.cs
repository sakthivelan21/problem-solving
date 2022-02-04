using System;
 
namespace Hello
{
    /*
        Lambda Expressions 
    */
    
	public class Hello
	{
	   
		public static void Main (string[] args)
		{
		    Action<String> actionDelegate=(String message)=>(Console.WriteLine(message));
		    
		    actionDelegate("Sakthi will rise !!");
		}
	}
}
