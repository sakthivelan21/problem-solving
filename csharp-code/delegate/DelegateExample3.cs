using System;
 
namespace Hello
{
    /*
        Delegates Example 3
        
        Creating Simple Delegate 
        
        
        Delegate is a reference data type which can  be made to reference a function 
        
        delegates help us to pass a function as a parameter
        
        
        There are three steps involved while working with delegates:

            1. Declare a delegate
            2. Set a target method
            3. Invoke a delegate

        output
        
        adding 10 and 20
        30
   */
    // declaring the delegate first
    public delegate T DelegateHolder<T>(T number1,T number2);
    
    public class Delegate 
    {
        public int addValues(int  a,int b)
        {
            Console.WriteLine($"adding {a} and {b}");
            return a+b;
        }
    }
	public class Hello
	{  
		public static void Main (string[] args)
		{
		       DelegateHolder<int> delegateHolder=new Delegate().addValues;
		        
		       
		       Console.WriteLine(delegateHolder(10,20));
		       
		       
		}
	}
}
