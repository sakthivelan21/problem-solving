using System;
 
namespace Hello
{
    /*
        Anonymouse delegate methods
    */
    
    public delegate void Print<T>(T message);
	public class Hello
	{
	   
		public static void Main (string[] args)
		{
		    // both will work
            
            Print<int> print=(int val)=>{
                Console.WriteLine(val);
            };
		  
		    /*
		    
            Print<int> print=delegate(int val){
                Console.WriteLine(val);
            }; 
		    */
		    print(10);
		}
	}
}
