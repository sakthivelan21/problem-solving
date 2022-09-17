/*
    Command Line Arguments Input Sum 

        We are passing number as args and finding out their sume
    
    *** output *** 
    
    $ javac CommandLineArgumentsSum.java
    
    $ java CommandLineArgumentsSum 10 23 30
    
    Sum is 63
*/
public class CommandLineArgumentsSum{
    public static void main(String[] args)
    {
        int sum=0;
        for(int i=0;i<args.length;i++)
            sum+= Integer.parseInt(args[i]);
        System.out.println("Sum is "+sum);
    }
}