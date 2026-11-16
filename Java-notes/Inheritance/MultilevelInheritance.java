/*
    Multi Level Inheritance 

    *** output ***

    Apex Predator and fearless
    Panthera tigris is a carnivore

*/

class Carnivore //base class or parent class
{
    String name ;

    public String getType()
    {
        return this.name+" is a carnivore";
    }
}

class Animal extends Carnivore // derived class or child class
{
    String character;
    public Animal(String name,String character)
    {
        super.name = name;
        this.character  = character;
    }

    public String getDetails()
    {
        return this.character;
    }
}

class Tiger extends Animal
{
    public Tiger(String name,String character)
    {
        super(name,character); // calling parent class Constructore
    }
}

public class MultilevelInheritance
{
    public static void main(String[] args)
    {
        Tiger tiger = new Tiger("Panthera tigris","Apex Predator and fearless");

        System.out.println(tiger.getDetails());

        System.out.println(tiger.getType());

    }
}