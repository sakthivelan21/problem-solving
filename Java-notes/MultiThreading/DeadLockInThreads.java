/*

Dead Lock in java
*** output *** 

Hello World
In Method 1 starts
In Method 1 starts

Then program runs infinite time


*** Explaination *** 

* Thread t1 starts and calls method1 method by taking the object lock of shared1.

* Thread t2 starts and calls method2 method by taking the object lock of shared2.

* t1 prints `In Method 1 starts` and t2 prints `In Method 1 starts` and both waits for 1 second, so that both threads can be started if any of them is not.

* t1 tries to take object lock of s2 and call method method2 but as it is already acquired by t2Same happens with t2. It tries to take object lock of s1 and call method test1 but it is already acquired by t1, so it has to wait till t1 release the lock. 
t2 will also not release lock of s2 until it gets lock of s1. so it waits till it become free. It will not release lock of s1 until it gets lock of s2.

* Same happens with t2. It tries to take object lock of s1 and call method method1 but it is already acquired by t1, so it has to wait till t1 release the lock. t2 will also not release lock of s2 until it gets lock of s1.

* Now, both threads are in wait state, waiting for each other to release locks. Now there is a race around condition that who will release the lock first.

* As none of them is ready to release lock, so this is the Dead Lock condition.

* When you will run this program, it will be look like execution is paused.
*/
class Shared 
{
    public synchronized void method1(String name,Shared shared)
    {
        System.out.println("In Method 1 starts");
        try {
            Thread.sleep(1000); 

            shared.method2();
        } catch(InterruptedException e) {
            System.out.println(e);
        }
        System.out.println(name+" is using this method");
        // method2(name);
        System.out.println("In Method 1 end ");
    }

     // second synchronized method
    synchronized void method2()
    {
        System.out.println("method2-begin");
        try
        {
            Thread.sleep(1000);
        }
        catch(InterruptedException e)
        {
            System.out.println(e);
        }
        // taking object lock of s1 enters
        // into test1 method
        System.out.println("method2-end");
    }
    
    
    
}
public class DeadLockInThreads
{
	public static void main(String[] args) {
		
        System.out.println("Hello World");
		
        // creating one object
		Shared shared1 = new Shared();

        // creating second object
        Shared shared2 = new Shared();


		// creating first thread
		Thread thread = new Thread(()->{

            // calling the method1 of shared1  and passing shared2 object 
		    shared1.method1("Thread 1",shared2);
		});
		
        // starting thread 1
        thread.start();

		Thread thread2 = new Thread(()->{
            // calling the method1 of shared2 and passing shared1 object
		    shared2.method1("Thread 2",shared1);
		});
		
		// starting thread 2
		thread2.start();
		
		
		
	}
}
