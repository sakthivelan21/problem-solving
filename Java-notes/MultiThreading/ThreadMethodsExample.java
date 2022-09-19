/*
Thread Methods Example 

** output ** 
Main Thread
Thread is it alive ? false
Thread[Main Thread,5,main]
Id 10
Priority of the Thread 5
New Priority of the Thread 2
Is the current Thread is interrupted ?? false
Is the Thread is daemon Thread ?? true
Thread is running created by extending to parent Thread class
The active count of active Threads is 2
Putting Thread to sleep for 500ms
After 500ms sleep 0
After 500ms sleep 1
After 500ms sleep 2
After 500ms sleep 3

*/

class MyThread extends Thread 
{
    // Run() method for our thread
    public void run()
    {
 
        // Print statement
        System.out.println(
            "Thread is running created by extending to parent Thread class");
    }
}

public class ThreadMethodsExample
{
	public static void main(String[] args) {
	    
	    MyThread myThread = new MyThread();
	    
	    // setting the name of the thread 
		myThread.setName("Main Thread");
		
		// display the name of Thread 
		System.out.println(myThread.getName());
		
		// checking if the thread is alive 
		System.out.println("Thread is it alive ? "+myThread.isAlive());
		
		System.out.println(myThread.toString());
		
		// to get the Id of the thread 
		System.out.println("Id " + myThread.getId());
		
		// to get the priority of the thread 
		
		System.out.println("Priority of the Thread "+myThread.getPriority());
		
		// we can set the Priority of the thread to new Priority (between 1 and 10) 
		// and if Priority value is outside the range(1-10) it will throw IllegalArgumentException
        myThread.setPriority(2);
        
		System.out.println("New Priority of the Thread "+myThread.getPriority());
		
		
		// to check if the current Thread is interrupted 
		System.out.println("Is the current Thread is interrupted ?? "+ myThread.isInterrupted());
		
		
		
		// to set a thread to daemon thread 
		myThread.setDaemon(true);
		// this should be done before a thread is started 
		
		// to check if the thread is daemon thread 
		System.out.println("Is the Thread is daemon Thread ?? "+myThread.isDaemon());
		
		// starting the thread 
		
		myThread.start(); // This will trigger the run method in the thread 
		
		
		// to get the active count of active threads in current thread groups is 
		System.out.println("The active count of active Threads is "+ Thread.activeCount());
		
		// sleep() method makes the thread yield cpu and wait for the time period which is passed as argument.
		// if the thread wake before the sleep timing , it will throw InterruptedException
		
		System.out.println("Putting Thread to sleep for 500ms");
		
		try{
		    for(int i=0;i<4;i++)
		    {
		        myThread.sleep(500);
		        System.out.println("After 500ms sleep " +i);
		    }
		}
		// to look out for interuption towards the thread 
		catch(InterruptedException e) 
		{
		    System.out.println(e);
		}
	}
}
