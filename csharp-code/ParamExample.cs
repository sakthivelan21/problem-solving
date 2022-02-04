using System;
 
namespace Hello
{
	class Hello
	{
	    /*
	        C# Params
	        
	        output 
	        
	        param passed values 
	        
	        sakthi 
	        
	        21 
	        
	        single
	        
	    */
	    
	    public static void ParamValuePrinter(params object[] paramValues)
	    {
	        for(int i=0;i<paramValues.Length;i++)
	            Console.WriteLine(paramValues[i]);
	    }
	    
	    
		public static void Main (string[] args)
		{
		    ParamValuePrinter("param passed values","sakthi",21,"single",123.123F);
		}
	}
}
