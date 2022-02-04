using System;
 
namespace Hello
{
    public class Indexers
    {
	    /*
	        Indexers in C#
	    */
	    
	    private string[] array;
	    
	    public Indexers(int size)
	    {
	        this.array=new string[size];
	    }
	    
	    public  string this [int index]
	    {
	        get{return array[index];}
	        set{array[index]=value;}
	    }
    }
    
	public class Hello
	{  
		public static void Main (string[] args)
		{
		        Indexers indexers=new Indexers(3);
		        
		        indexers[0]="Sakthi";
		        indexers[1]="will";
		        indexers[2]="rise";
		        
		        Console.WriteLine(indexers[0]+" "+indexers[1]+" "+indexers[2]);
		}
	}
}
