using System;
 
namespace Hello
{
    
	public class Hello
	{
	    /*
	        Simple Tuple in C# example 2
	    */
	    
		public static void Main (string[] args)
		{
            var person = Tuple.Create(1,2,3,4,5,6,7,"sakthi");
            Console.WriteLine(person.Item1);
            Console.WriteLine(person.Item2);
            Console.WriteLine(person.Item3);
            Console.WriteLine(person.Item4);
            Console.WriteLine(person.Item5);
            Console.WriteLine(person.Item6);
            Console.WriteLine(person.Item7);
            Console.WriteLine(person.Rest);
		}
	}
}
