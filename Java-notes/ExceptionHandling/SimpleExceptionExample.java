/*

Try Catch Example 

*** output *** 

Entered the try block
Entered Catch Block ...
e = java.lang.ArithmeticException: / by zero
Message is / by zero
stack trace 
java.lang.ArithmeticException: / by zero
        at Main.main(Main.java:16)
Exiting catch block ...
In finalize block ..

*/

public class SimpleExceptionExample
{
	public static void main(String[] args) {
		int a = 10,b=0;
		
		try{
		    System.out.println("Entered the try block");
		   int k=a/b;
		   System.out.println("Exiting the try block ");
		}
		catch(ArithmeticException e)
		{
		    System.out.println("Entered Catch Block ...");
		    
		    System.out.println("e = "+e);
		    
		    System.out.println("Message is "+e.getMessage());
		    
		    System.out.println("stack trace ");
		    e.printStackTrace();
		    
		    System.out.println("Exiting catch block ...");
		}
        finally{
		    System.out.println("In finalize block ..");
		}
	}
}
