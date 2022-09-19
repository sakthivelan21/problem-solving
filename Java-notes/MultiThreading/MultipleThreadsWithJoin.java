/*
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
Bye

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

public class MultipleThreadsWithJoin{

    public static void main(String[] args)
    {
        Thread1 thread1 = new Thread1();

        Thread thread2 = new Thread(new Thread2());

        // thread 1 will be started
        thread1.start();

        // thread 2 will be started 
        thread2.start();

        // setting max priority to thread 1 to be executed first
        thread1.setPriority(Thread.MAX_PRIORITY);
        thread2.setPriority(Thread.MIN_PRIORITY);

        //asking main thread to wait till thread1 and thread 2 are completed
        try{
            thread1.join();
        }
        catch(InterruptedException e)
        {
            System.out.println(e);
        }

        try{
            thread2.join();
        }
        catch(InterruptedException e)
        {
            System.out.println(e);
        }
        
        // main won't wait for thread1 and thread2 as they will handle themselves
        // it will executed last by main thread as we asked main thread via join method
        System.out.println("Bye");
    }
}