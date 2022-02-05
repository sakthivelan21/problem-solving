using System;
using System.Text.RegularExpressions;
 
namespace Hello
{
    /*
        Regular Expression 
    */
    public class Hello
    {
		public static void Main (string[] args)
		{
		    // one or more times of Hi present in string
            String rule=@"(Hi)+";
		    Console.WriteLine(Regex.IsMatch("HiHiHi",rule)); 
            Console.WriteLine(Regex.IsMatch("sakthi",rule));
		    
		}
	}
}

