using System;
 
namespace Hello
{
    public abstract class Carnivore //abstract class which cannot be used as objects
    {
        protected String name;
        
        public String getAnimalType()
        {
            return $"{this.name} is a Carnivore ";
        }
        
        public abstract String getName(); // abstract method which has no body and it will be provided in derived class
    }
    
    public class Animal:Carnivore // inheriting abstract class
    {
        public Animal(String name)
        {
            base.name=name; // base is similar to super in java
        }
        
        public String getBaseInfo()
        {
            return getAnimalType();
        }
        
        public override String getName()
        {
            return base.name;
        }
    }
	public class Hello
	{
	    /*
	        C# Abstract classes 
	        
	        To achieve security - hide certain details and only show the important details of an object.
	        
	        output
	        
	        TIger is a Carnivore
	        
	    */
	    
	    
		public static void Main (string[] args)
		{
            Animal animal=new Animal("Tiger");
            Console.WriteLine(animal.getBaseInfo());
            Console.WriteLine(animal.getName());
		}
	}
}
