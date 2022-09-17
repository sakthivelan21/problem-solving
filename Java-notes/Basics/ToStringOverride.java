class Animal
{
    String animalName;
    
    public Animal(String animalName)
    {
        this.animalName = animalName;
    }
    
    @Override
    public String toString(){
        return "Animal class name is "+this.animalName;
    }
}

public class ToStringOverride
{
    /*
        *** output *** 
        Animal class name is Tiger
    */
	public static void main(String[] args) {
	        
	        Animal animal = new Animal("Tiger");
	        System.out.println(animal);
	}
	s
}

