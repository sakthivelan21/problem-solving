/*
    Hierarchical Inheritance 

    *** output ***

    Tiger is a Carnivore 
    Fearless apex predator
    Tiger is a Carnivore 
    Smells like a blood hound
*/

class Carnivore //base class or parent class
{
    protected String name;

    public Carnivore(String name)
    {
        this.name = name;
    }
    
    public String getAnimalType()
    {
        return this.name +" is a Carnivore ";
    }
}

// Carnivore class inherits  members and methods of Carnivore
class CarnivoreAnimal extends Carnivore // derived class or child class
{
    protected String baseInfo;

    public CarnivoreAnimal(String name,String baseInfo)
    {
         super(name); // calling the parent constructor and setting value
         // call to super must be first statement in constructor
        this.baseInfo = baseInfo;
       
    }
    
    public String getBaseInfo()
    {
       return baseInfo;
    }
}

class AquaticCarnivore extends Carnivore // derived class or child class
{
    protected String details;

    public AquaticCarnivore(String name,String details)
    {
         super(name); // calling the parent constructor and setting value
         // call to super must be first statement in constructor
        this.details = details;
       
    }
    
    public String getDetails()
    {
       return details;
    }
}

public class HierarchicalInheritance{
    public static void main(String[] args)
    {
        CarnivoreAnimal animal = new CarnivoreAnimal("Tiger","Fearless apex predator");
        AquaticCarnivore aquatic = new AquaticCarnivore("Shark","Smells like a blood hound");
        System.out.println(animal.getAnimalType());
        System.out.println(animal.getBaseInfo());
        System.out.println(animal.getAnimalType());
        System.out.println(aquatic.getDetails());
    }
}