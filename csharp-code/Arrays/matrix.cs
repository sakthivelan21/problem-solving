using System;
 
namespace Hello
{
	class Hello
	{
	    /*
	        Transpose of Matrix
	        
	        input 
	        
	        3 3
	        
	        1 2 3
	        4 5 6
	        7 8 9
	        
	        output 
	        
	        Transpose of matrix :
	        
	        1 4 7
	        2 5 8 
	        3 6 9
	    */
		public static void Main (string[] args)
		{
		    String[] inputSize=Console.ReadLine().Split(" ");
		    int row = Convert.ToInt32(inputSize[0]);
		    int column = Convert.ToInt32(inputSize[1]);
		    int[,] matrix=new int[row,column];
		    
		    for(int i=0;i<row;i++)
		    {
		        String[] input=Console.ReadLine().Split(" ");
		        for(int j=0;j<column;j++)
		            matrix[i,j]=Convert.ToInt32(input[j]);
		    }
		    Console.WriteLine(row+" "+column);
		    
		    for(int j=0;j<column;j++)
		    {
		        for(int i=0;i<row;i++)
		        {
		            Console.Write(matrix[i,j]+" ");
		        }
		        Console.Write("\n");
		    }
		}
	}
}
