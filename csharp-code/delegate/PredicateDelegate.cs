using System;
 
namespace Hello
{
    /*
        
        Predicate Delegate - inbuilt delegate 
        
        it will take in only one input and return the values in boolean of true or false
        
        alternate custom delegate
        
        
        output
        
        true
        
        true 
        
        false
   */

    // declaring the delegate first
    public delegate bool CustomDelegate(int age);
    
    
    
	public class Hello
	{
	    public static bool ValidateAge(int age)
	    {
	        if(age>=18)
	            return true;
	        return false;
	    }
		public static void Main (string[] args)
		{
		       CustomDelegate customDelegate=Hello.ValidateAge;
		       
		       Console.WriteLine(customDelegate(18));
		       
		       // <input>
		       Predicate<int> predicateDelegate=Hello.ValidateAge;
		       
		       Console.WriteLine(predicateDelegate(20));
		       
		       customDelegate=(age)=>(age>=18);
		       
		       Console.WriteLine(customDelegate(12));
		       
		}
	}
}
