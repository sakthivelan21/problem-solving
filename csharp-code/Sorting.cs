using System;
 
namespace Hello
{
	class Hello
	{
	    /*
	    	Sorting by Selection sort
	        input 
	        5 
	        1 5 4 3 2 
	        
	        output 
	        1 2 3 4 5
	    */
		public static void Main (string[] args)
		{
		    int n=Convert.ToInt32(Console.ReadLine());
		    int[] array = new int[n];
		    String[] input=Console.ReadLine().Split(' ');
		    for(int i=0;i<n;i++)
		        array[i]=Convert.ToInt32(input[i]);
		   
		    // selection sorting
		    for(int i=0;i<n;i++)
		    {
		        int temp=i;
		        for(int j=i+1;j<n;j++)
		        {
		            if(array[temp]>array[j])
		                temp=j;
		        }
		        int tempVal=array[i];
		        array[i]=array[temp];
		        array[temp]=tempVal;
		    }
		    foreach(int number in array)
		        Console.Write(number+" ");
		}
	}
}
