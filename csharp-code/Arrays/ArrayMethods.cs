using System;
using System.Linq;
 
namespace Hello
{
	class Hello
	{
	    /*
	        Array min max sum values;
	        
	        output 
	        
	        1 3 2 4 5
	        
	        min 1 
	        max 5 
	        sum 15
	        dimension 
	        sort 1 2 3 4 5
	        
	    */
	    
	    
		public static void Main (string[] args)
		{
		    int[] array=new int[5]{1,3,2,4,5};
		    foreach(int number in array)
		        Console.Write(number+" ");
		    Console.WriteLine();
		    
		    Console.WriteLine($"Min {array.Min()}");
		    
		    Console.WriteLine($"Max {array.Max()}");
		    
		    Console.WriteLine($"Sum {array.Sum()}");
		    
		    Console.WriteLine($"dimension {array.Rank}");
		    Console.Write("Sort ");
		    Array.Sort(array);
		    
		    foreach(int number in array)
		        Console.Write(number+" ");
		}
	}
}
