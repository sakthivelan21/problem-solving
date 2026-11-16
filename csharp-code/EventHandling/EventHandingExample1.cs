using System;
using System.Reflection;
 
namespace Hello
{
    /*
        Event - a notification sent by and object to signal the occurence of an action 
        like receiving what's app notification
        
        Publisher 
        
            will have the event and delegate(it defines the signature of the event)
            
            he will publish the notifications
    
        Subscriber
        
            he has to subscribe for the event 
            
            Event Handler to handle the event when he receive the notification
        
            
    */
    
    public delegate void Notify(); // declaring delegate to point to the event Method
    
    public class Publisher
    {
        public event Notify NotifyEvent;// declaring the event with delegate refernce
        
        public void Start()
        {
            Console.WriteLine("Starting the Event Notification");
            NotifyEvent?.Invoke(); // it will Invoke if the event is not null
        }
    }
    public class Hello // Subscriber 
    {
		public static void Main(String[] args)
		{
		    Publisher publisher = new Publisher();
		    
		    publisher.NotifyEvent+=EventHandler; // Event Subscribing by registering the event 
		    
		    publisher.Start();
		}
		
		public static void EventHandler()  // Event Handler
		{
		    Console.WriteLine("Listening back notification in EventHandler");
		}
	}
}

