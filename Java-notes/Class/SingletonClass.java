/*
*** output ***
Value of a.x = 20
Value of b.x = 20
*/

class Singleton
{
	static Singleton singleton = null;
	public int x = 10;
	
	// private constructor can't be accessed outside the class
	private Singleton() { }

	// Factory method to provide the users with instances
	static public Singleton getInstance()
	{
		if (singleton == null)		
			singleton = new Singleton();

		return singleton;
	}
}

// Driver Class
class SingletonClass
{
public static void main(String args[])	
{
	Singleton a = Singleton.getInstance();
	Singleton b = Singleton.getInstance();
	a.x = a.x + 10;
	System.out.println("Value of a.x = " + a.x);
	System.out.println("Value of b.x = " + b.x);
}	
}
