using System;
 
namespace Hello
{
    /*
        Delegates Example 2
        
        Creating Simple Delegate 
        
        
        Delegate is a reference data type which can  be made to reference a function 
        
        delegates help us to pass a function as a parameter
        
        
        There are three steps involved while working with delegates:

            1. Declare a delegate
            2. Set a target method
            3. Invoke a delegate

        output
        
        Using Delegate Class showMessage function
        First Delegate
        Using Delegate Class showMessage function
        Third Delegate
        Using inline lambda function
        Third Delegate    
    */
    // declaring the delegate first
    public delegate void DelegateHolder(String message);
    
    public class Delegate 
    {
        public void showMessage(String message)
        {
            Console.WriteLine("Using Delegate Class showMessage function");
            Console.WriteLine(message);
        }
    }
	public class Hello
	{  
		public static void Main (string[] args)
		{
		       DelegateHolder delegateHolder=new Delegate().showMessage;
		        
		       delegateHolder("First Delegate");
		       
		       //Multicast delegates
		       delegateHolder+= (String message)=>{
		           Console.WriteLine("Using inline lambda function");
		           Console.WriteLine(message);
		       };
		       
		       delegateHolder("Third Delegate");
		       
		}
	}
}
