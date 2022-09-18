/*
    Local Class 

    *** output ***
    from inner class
*/

public class LocalClass{
    public static void main(String[] args)
    {
        class Inner{
            public void display(){
                System.out.println("from inner class");
            }
        }

        Inner inner = new Inner();

        inner.display();
    }


}