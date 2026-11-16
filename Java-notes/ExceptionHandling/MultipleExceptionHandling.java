/*
    Handling Multiple Exceptions in java 


    *** output *** 

    Entered the try block
    1
    2
    3
    4
    Entered Catch Block ...
    e = java.lang.ArrayIndexOutOfBoundsException: Index 4 out of bounds for length 4
    Exiting catch block ...
    In finalize block ..
*/

public class MutlipleExceptionHandling
{
    public static void main(String[] args)
    {

        int a = 10,b=0;
		int[] array = {1,2,3,4};
		
		try{
		    System.out.println("Entered the try block");
		    for(int i=0;i<5;i++)
		        System.out.println(array[i]);
		    
		   int k=a/b;
		   System.out.println("Exiting the try block ");
		}
		catch(ArithmeticException| ArrayIndexOutOfBoundsException e)
		{
		    System.out.println("Entered Catch Block ...");
		    
		    System.out.println("e = "+e);
		    
		    System.out.println("Exiting catch block ...");
		}
		finally{
		    System.out.println("In finalize block ..");
		}
    }
}