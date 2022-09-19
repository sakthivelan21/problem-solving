/*
 throws exception 

 *** output *** 
 Inside fun()
 caught in main.
*/
public class ThrowsException
{
    // indicating the compiler that this method may throw InterruptedException
    static void fun() throws InterruptedException 
    {
        System.out.println("Inside fun(). ");
        // throwing interrupted Exception
        throw new InterruptedException("demo");
    }
    public static void main(String args[])
    {   
        // catching the thrown exception perfectly inside try catch block
        try
        {
            fun();
        }
        catch(InterruptedException e)
        {
            System.out.println("caught in main.");
        }
    }
}