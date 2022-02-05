using System;
using System.Text.RegularExpressions;
 
namespace Hello
{
    /*
        Regular Expression - validate email
    */
    public class Hello
    {
		public static void Main (string[] args)
		{
		    // one or more times of Hi present in string
		    //@ first match a word,@,match the word,.,match word of length 2 to 4 at end $
            String rule=@"^[\w-\.]+@([\w-]+\.)+[\w-]{2,4}$";
		    Console.WriteLine(Regex.IsMatch("sakthi@gmail.com",rule)); 
		    
		}
	}
}

