using System;
 
namespace Hello
{
    public class Generics<T>
    {
        protected T message;
        
        public Generics(T message)
        {
            this.message=message;
        }
        
        public T getMessage()
        {
            return this.message;
        }
    }
	public class Hello
	{
	    /*
	        Generics in c# with examples
	        
	        output
	        
	        12
            12.4
            Sakthi is in peace
            True
            i am happy
	    */
	    public static T classMessage<T>(T value)
	    {
	        return value;
	    }
		public static void Main (string[] args)
		{
            Generics<int> integer= new Generics<int>(12);
            Generics<float> floatingNumber=new Generics<float>(12.4F);
            Generics<String> message=new Generics<String>("Sakthi is in peace");
            Generics<bool> boolean=new Generics<bool>(true);
            
            Console.WriteLine(integer.getMessage());
            Console.WriteLine(floatingNumber.getMessage());
            Console.WriteLine(message.getMessage());
            Console.WriteLine(boolean.getMessage());
            
            Console.WriteLine(classMessage("i am happy"));
		}
	}
}
