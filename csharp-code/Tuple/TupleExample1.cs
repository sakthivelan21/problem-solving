using System;
 
namespace Hello
{
    
	public class Hello
	{
	    /*
	        Simple Tuple in C#
	    */
	    
		public static void Main (string[] args)
		{
            Tuple<int, string, string> person = 
                        new Tuple <int, string, string>(1, "Steve", "Jobs");
            Console.WriteLine(person.Item1);
            Console.WriteLine(person.Item2);
            Console.WriteLine(person.Item3);
		}
	}
}
