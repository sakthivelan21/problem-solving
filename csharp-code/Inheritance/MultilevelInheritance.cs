using System;
 
namespace Hello
{
    public class Carnivore //base class or parent class
    {
        protected String name;
        
        public String getType()
        {
            return $"{this.name} is a Carnivore ";
        }
    }
    
    public class Animal:Carnivore // derived class or child class
    {
        public Animal(String name)
        {
            base.name=name; // base is similar to super in java
        }
        
        public String getBaseInfo()
        {
            return getType();
        }
    }
    
    public class Tiger:Animal
    {
        private string character;
        public Tiger(String name,String character):base(name)
        {
            this.character=character;
        }
        public String getDetails()
        {
            return getBaseInfo()+" "+this.character;
        }
        
    }
	public class Hello
	{
	    /*
	        C# Multilevel Inheritance
	        
	        output
	        
	        Tiger is a Carnivore  Solitary apex predator
	        
	    */
	    
	    
		public static void Main (string[] args)
		{
            Tiger tiger=new Tiger("Tiger","Solitary apex predator");
            Console.WriteLine(tiger.getDetails());
		}
	}
}
