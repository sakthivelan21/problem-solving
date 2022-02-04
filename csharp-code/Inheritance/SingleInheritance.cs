using System;
 
namespace Hello
{
    public class Carnivore //base class or parent class
    {
        protected String name;
        
        public String getAnimalType()
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
            return getAnimalType();
        }
    }
	public class Hello
	{
	    /*
	        C# single Inheritance 
	        
	        output
	        
	        TIger is a Carnivore
	        
	    */
	    
	    
		public static void Main (string[] args)
		{
            Animal animal=new Animal("Tiger");
            Console.WriteLine(animal.getBaseInfo());
		}
	}
}
