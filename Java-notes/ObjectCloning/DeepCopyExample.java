/*
    *** Deep copy *** 

    ** output ** 

    Before Cloning
    display 1  is sakthi
    display 1 is 4
    display 2 is sakthi
    display 2 is 4
    After Cloning
    display 1  is sakthi
    display 1 is 4
    display 2 is pallavi
    display 2 is 5
*/

class Hello{
    int number;
    public Hello(){}
    public Hello(int number)
    {
        this.number = number;
    }
}

class Display implements Cloneable
{
    String name;

   Hello hello = new Hello(4);
    public Display(String name)
    {
        this.name = name;
    }

    public Object clone()throws CloneNotSupportedException{  
        Display display =(Display) super.clone();  

        display.hello = new Hello();

        display.hello.number = this.hello.number;

        return display;
    }  

}

public class DeepCopyExample {

    public static void main(String[] args)
    {
        Display display1 = new Display("sakthi");
        Display display2;
        try
        {
            // cloning the object - shallow copy 
             display2 = (Display)display1.clone();

             System.out.println("Before Cloning");

            System.out.println("display 1  is "+display1.name);

            System.out.println("display 1 is "+display1.hello.number);

            System.out.println("display 2 is "+display2.name);

            System.out.println("display 2 is "+display2.hello.number);

            // we could find that the member variables are working fine as expected
            display2.name = "pallavi";

            // change in display2 doesn't affect display1 object
            display2.hello.number = 5;

            System.out.println("After Cloning");

            System.out.println("display 1  is "+display1.name);

            System.out.println("display 1 is "+display1.hello.number);

            System.out.println("display 2 is "+display2.name);

            System.out.println("display 2 is "+display2.hello.number);

        }
        catch(CloneNotSupportedException e)
        {
            System.out.println(e);
        }
        
    } 
}