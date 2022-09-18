/*
    Method Arguments in java 

    *** output *** 

    my
    life
*/

public  class MethodArguments{

    public void show(String... values)
    {
       for(String value : values ) 
        System.out.println(value);
    }
    public static void main(String[] args)
    {
        MethodArguments methodArguments = new MethodArguments();

        methodArguments.show("my","life");
    }
}