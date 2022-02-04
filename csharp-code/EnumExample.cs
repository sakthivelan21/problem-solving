using System;
 
namespace Hello
{
    enum Level
    {
        Low,    // enum values by default starts from 0
        Medium, // 1
        High    // 2
    }
	public class Hello
	{
	    /*
	        C# enum
	        
	        output
	        
			    Medium level
				Medium
				1
	        
	    */
	    
	    
		public static void Main (string[] args)
		{
            Level value=Level.Medium;
            
            switch(value) 
              {
                case Level.Low:
                  Console.WriteLine("Low level");
                  break;
                case Level.Medium:
                   Console.WriteLine("Medium level");
                  break;
                case Level.High:
                  Console.WriteLine("High level");
                  break;
              }
              
              Console.WriteLine(value);
              Console.WriteLine((int)Level.Medium);
		}
	}
}
