using System;
 
namespace Hello
{
    
	public class Hello
	{
	    /*
	        Simple Tuple in C#
	        
	        output
	        
	        1
            2
            3
            4
            5
            6
            7
            ((8, sakthi))
            (8, sakthi)
            sakthi
	    */
	    
		public static void Main (string[] args)
		{
            var person = Tuple.Create(1,2,3,4,5,6,7,Tuple.Create(8,"sakthi"));
            Console.WriteLine(person.Item1);
            Console.WriteLine(person.Item2);
            Console.WriteLine(person.Item3);
            Console.WriteLine(person.Item4);
            Console.WriteLine(person.Item5);
            Console.WriteLine(person.Item6);
            Console.WriteLine(person.Item7);
            Console.WriteLine(person.Rest);// Rest will be holding data within a tuple stuff - ((8, sakthi))
            Console.WriteLine(person.Rest.Item1); // it will give access only to (8,sakthi)
            Console.WriteLine(person.Rest.Item1.Item2); // it will give access to sakthi
		}
	}
}
