/*
Synchronization in Threads Example 

without synchronization 

2
3
4
4
8
6
6
12
9

with Synchronization

2
4
6
4
8
12
3
6
9

*/

class Table{
    // synchronized will make a lock on this method, so other thread have to wait untill 
    // accessing thread has to complete it's work
    public synchronized void printTable(int number)
    {
        for(int i=1;i<=3;i++)
        {
            System.out.println(number*i);

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

public class SynchronizationThreadsExample{

    public static void main(String[] args)
    {
        Table table = new Table();


        // creating Thread with Lambda Expression
        Thread thread1 = new Thread(()->{
            table.printTable(2);
        });

        // creating thread with inner class of Runnable 

        Thread thread2 = new Thread(new Runnable(){
            public void run(){
                table.printTable(3);
            }
        });

        Thread thread3 = new Thread(){public void run(){
            table.printTable(4);
        }};

        // starting the threads 

        // if we thread1 to be completed then thread2 to be started 
        // we have to add synchronized to the method
        thread1.start();
        thread2.start();
        thread3.start();

    }
}