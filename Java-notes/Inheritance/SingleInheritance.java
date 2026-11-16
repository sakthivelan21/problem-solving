/*
    Single Inheritance 

    *** output *** 

    Solidary and apex Predator
    Tiger is a Carnivore 

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

public class SingleInheritance
{
    public static void main(String[] args)
    {
        CarnivoreAnimal animal=new CarnivoreAnimal("Tiger","Solidary and apex Predator");

        System.out.println(animal.getBaseInfo());

        System.out.println(animal.getAnimalType());
    }
}