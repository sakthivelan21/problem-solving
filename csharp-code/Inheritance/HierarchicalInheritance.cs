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
    
    public class Aquatic:Carnivore
    {
        public Aquatic(String name)
        {
            base.name=name;
        }
        public String getBaseInfo()
        {
            return getType();
        }
    }
	public class Hello
	{
	    /*
	        C# Hierarchical Inheritance
	        
	        output
	        
	        Tiger is a Carnivore 
            
            Shark is a Carnivore
	        
	    */
	    
	    
		public static void Main (string[] args)
		{
            Animal animal=new Animal("Tiger");
            Aquatic aquatic=new Aquatic("Shark");
            Console.WriteLine(animal.getBaseInfo());
            Console.WriteLine(aquatic.getBaseInfo());
		}
	}
}
