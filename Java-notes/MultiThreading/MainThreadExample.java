/*
    Main Thread 
    
    *** output *** 
    
    main
*/
public class MainThreadExample
{
	public static void main(String[] args) {
	    
	    // to get the reference of current running main Thread instance 
		Thread mainThread = Thread.currentThread();
		
		//printing the name of the Thread 
		System.out.println(mainThread.getName());
		
	}
}
