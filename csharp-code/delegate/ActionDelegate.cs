using System;
 
namespace Hello
{
    /*
        
        Action Delegate - inbuilt delegate 
        
        it will take in  one  to sixteen input and does not return the values 
        
        alternate custom delegate
        
        output
        
        30
        50
        sakthi
   */

    // declaring the delegate first
    public delegate void CustomDelegate<T>(T a, T b);
    
	public class Hello
	{
	    public static void showMessage(int a,int b)
	    {
	        Console.WriteLine(a+b);
	    }
		public static void Main (string[] args)
		{
		       CustomDelegate<int> customDelegate=Hello.showMessage;
		       
		       customDelegate(10,20);
		       
		       // <input input>
		       Action<int,int> actionDelegate=Hello.showMessage;
		       
		       actionDelegate(20,30);
		       
		       Action<String> action2Delegate=(String message)=>(Console.WriteLine(message));
		       
		       action2Delegate("Sakthi");
		       
		}
	}
}
