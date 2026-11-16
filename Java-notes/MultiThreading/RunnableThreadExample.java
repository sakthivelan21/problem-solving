class MyThread implements Runnable{
    public void run(){
        System.out.println("My Thread is Running");
    }
}

public class RunnableThreadExample{
    public static void main(String[] args)
    {

       // whenever we create a thread by Runnable , we need initilize via Thread class
       Thread myThread = new Thread(new MyThread());

       myThread.start(); 
    }
}