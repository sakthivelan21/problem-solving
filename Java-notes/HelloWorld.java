// Creating a Class named HelloWorld with public access
public class HelloWorld{
    /*
      * Access specifier of main is public so it can be accessed easily from outside the class.
      * Main() method is declared static because that the method main() can be called even without the class object
    */
    public static void main(String[] args)
    {
        // System.out refers to the object of PrintStream class which has two methods print() and println()
        System.out.println("Hello world");
    }
}