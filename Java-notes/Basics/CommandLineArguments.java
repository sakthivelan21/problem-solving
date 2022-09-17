/*
    Command Line Arguments in java

    *** output *** 

    $ javac CommandLineArguments.java 

    $ java  CommandLineArguments "I love you Sakthi"

    $ I love you Sakthi
*/

class CommandLineArguments{

    // The Arguments are passed via args array
    public static void main(String[] args)
    {
        // getting the length of the array
        int length = args.length; 
        // displaying the args value
        for(int i=0;i<length;i++)
            System.out.print(args[i]+" ");
    }
}