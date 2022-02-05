using System;
 
namespace Hello
{
    public class Indexers<T>
    {
	    /*
	        Indexers in C#
	    */
	    
	    private T[] array;
	    
	    public Indexers(int size)
	    {
	        this.array=new T[size];
	    }
	    
	    public  T this [int index]
	    {
	        get{return array[index];}
	        set{array[index]=value;}
	    }
    }
    
	public class Hello
	{  
		public static void Main (string[] args)
		{
		        Indexers<object> indexers=new Indexers<object>(3);
		        
		        indexers[0]="Sakthi";
		        indexers[1]=21;
		        indexers[2]="vel";
		        
		        Console.WriteLine($"firstName : {indexers[0]} , lastName : {indexers[2]} , age {indexers[1]}");
		}
	}
}
