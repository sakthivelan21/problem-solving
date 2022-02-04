using System;
 
namespace Hello
{
	class Hello
	{
	    /*
	        Call By Value & Call By Reference
	        
	        output
	        
	        calling CallByValue...
            Copy of value passed inside CallByValue after incrementation is 11
            After CallByValue value is 10
            calling CallByReference...
            CallByReference value after incrementation is 11
            After CallByReference value is 11
	        
	    */
	    
	    public  void CallByValue(int value)
	    {
	        value++;
	        Console.WriteLine($"Copy of value passed inside CallByValue after incrementation is {value}");
	    }
	    
	    public  void CallByReference(ref int value)
	    {
	        value++;
	        Console.WriteLine($"CallByReference value after incrementation is {value}");
	    }
		public static void Main (string[] args)
		{
		    int value=10;
		    Hello hello = new Hello();
		    Console.WriteLine("calling CallByValue...");
		    hello.CallByValue(value);
		    Console.WriteLine($"After CallByValue value is {value}");
		    Console.WriteLine("calling CallByReference...");
		    hello.CallByReference(ref value);
		    Console.WriteLine($"After CallByReference value is {value}");
		}
	}
}
