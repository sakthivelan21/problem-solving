
/*
    Anonymous class example 

    *** output *** 

    Hi pallavi, I am falling for you
    printing from interface obj
*/

abstract class Person{
    abstract void display();
}

interface Interface{
    public void display();
}
public class AnonymousClass{
    public static void main(String[] args)
    {
        // Anonymous class created from abstract class
        Person person = new Person(){
            void display(){
                System.out.println("Hi pallavi, I am falling for you");
            }
        };
        person.display();

        // Anonymous class created from interface
        Interface interfaceObj = new Interface(){
            public void display(){
                System.out.println("printing from interface obj");
            }
        };

        interfaceObj.display();



    }
}