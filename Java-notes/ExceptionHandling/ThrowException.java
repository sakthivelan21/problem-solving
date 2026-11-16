/* 
 throw example
 
  *** output *** 
  Caught inside fun().
    Caught in main.
    Caught in main
*/


public class ThrowException{
    static void fun()
    {
        try
        {
            throw new NullPointerException("demo"); // throwing the exception
        }
        catch(NullPointerException e) // catching the thrown exception
        {
            System.out.println("Caught inside fun().");
            throw e; // rethrowing the exception, it will be catched back towards the function call
        }
    }
    
    static void func2(){
        throw new NullPointerException("demo2"); // throwing an exception
    }
    public static void main(String args[])
    {
        try
        {
            fun(); // exception will be received here if thrown 
        }
        catch(NullPointerException e) // catching the exception 
        {
            System.out.println("Caught in main.");
        }
        
        try{
            func2();
        }
        catch(NullPointerException e)
        {
            System.out.println("Caught in main");
        }
    }
}