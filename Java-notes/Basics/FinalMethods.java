class Show{
    // cannot be overrided by child class
    final void display(){
        System.out.println("Show Class");
    }
}

public class FinalMethods extends Show{

    // error: display() in FinalMethods cannot override display() in Show
    // void display(){
    //     System.out.println("In Final Method Class");
    // }
    public static void main(String[] args)
    {
        FinalMethods finalMethods = new FinalMethods();

        finalMethods.display();
    }
}