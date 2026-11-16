/*
    Interrupting Thread Example 

    *** output ***

    Thread is Interrupted...
    Thread[Thread 1,5,main] running
    Thread[Thread 1,5,main] running
    Thread[Thread 2,5,main] running
    Thread[Thread 2,5,main] running
    Thread[Thread 1,5,main] running
    Thread[Thread 2,5,main] running
    Thread[Thread 1,5,main] running
    Thread[Thread 1,5,main] running
    Thread[Thread 2,5,main] running
    Thread[Thread 2,5,main] running
    Thread[Thread 2,5,main] running

*/

class MyThread extends Thread{

    public void run(){
        for(int i=0;i<=5;i++)
        {
            if(Thread.interrupted( ))
            {
                System.out.println("Thread is Interrupted...");
            }
            else{
                System.out.println(Thread.currentThread()+" running");
            }
        }
    }
}

public class InterruptingThreadExample{

    public static void main(String[] args)
    {
        MyThread myThread1 = new MyThread();

        MyThread myThread2 = new MyThread();


        myThread1.setName("Thread 1");

        myThread1.start();

        myThread2.setName("Thread 2");

        

        // interrupting the thread 1
        myThread1.interrupt();

        myThread2.start();

        
    }
}