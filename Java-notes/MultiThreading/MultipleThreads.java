/*

Multiple Threads Running

*** output *** 
Bye
Thread 1 0
Thread 2 0
Thread 1 1
Thread 2 1
Thread 1 2
Thread 2 2
Thread 1 3
Thread 2 3
Thread 1 4
Thread 2 4

*/

class Thread1 extends Thread 
{
    public void run(){
        for(int i=0;i<5;i++)
        {
            System.out.println("Thread 1 "+i);
            try
            { 
                Thread.sleep(500);
            } 
            catch(InterruptedException e)
            {
                System.out.println(e);
            }
        }
    }
}

class Thread2 implements Runnable{
    public void run(){
        for(int i=0;i<5;i++)
        {
            System.out.println("Thread 2 "+i);
            
            try
            {
                Thread.sleep(500);
            } 
            catch(InterruptedException e)
            {
                System.out.println(e);
            }
        }
    }
}

public class MultipleThreads{

    public static void main(String[] args)
    {
        Thread1 thread1 = new Thread1();

        Thread thread2 = new Thread(new Thread2());

        // thread 1 will be started
        thread1.start();

        // thread 2 will be started 
        thread2.start();
        
        // main won't wait for thread1 and thread2 as they will handle themselves
        // it will executed first by main thread
        System.out.println("Bye");
    }
}