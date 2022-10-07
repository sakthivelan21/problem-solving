// functional interface
interface Display{
    // An abstract function
    void display();
    
}

public class ArrowFunctions{
    public static void main(String[] args)
    {
        Display f = () -> System.out.println("Hi pallavi");

        
        f.display();

    }
}