using System;
 
namespace Hello
{
    /*
        
        Func Delegate - inbuilt delegate 
        
        it will take in  one  to sixteen input and  return the values 
        
        alternate custom delegate
        
        
        output
        
        30
        50
        Sakthi
   */

    // declaring the delegate first
    public delegate T CustomDelegate<T>(T a, T b);
    
	public class Hello
	{
	    public static int addValues(int a,int b)
	    {
	        return a+b;
	    }
		public static void Main (string[] args)
		{
		       CustomDelegate<int> customDelegate=Hello.addValues;
		       
		       Console.WriteLine(customDelegate(10,20));
		       
		       // <input , input , output> 
		       Func<int,int , int> actionDelegate=Hello.addValues;
		       
		       Console.WriteLine(actionDelegate(20,30));
		       
		       Func<String,String> action2Delegate=(String message)=>(message);
		       
		       Console.WriteLine(action2Delegate("Sakthi"));
		       
		}
	}
}
