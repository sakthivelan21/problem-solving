using System;
 
namespace Hello
{
    
	public class Hello
	{
	    /*
	        C# pointers
	        
	        
	    */
	    
	    public unsafe static  void swapValues(int* x,int* y)
	    {
	        int temp=*x;
	        *x=*y;
	        *y=temp;
	    }
	    
		public static void Main (string[] args)
		{
            int value1=10,value2=20;
            
            unsafe
            {
                int *val1=&value1;
                int *val2=&value2;
                swapValues(val1,val2);
            }
            
            Console.WriteLine(value1+" "+value2);
            
		}
	}
}
