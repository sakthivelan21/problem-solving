using System;
using System.Text.RegularExpressions;
 
namespace Hello
{
    /*
        Regular Expression - 
    */
    public class Hello
    {
		public static void Main (string[] args)
		{
		    // Match all the characters start with s
            String rule=@"\bs\S*";
		    MatchCollection matchCollection=Regex.Matches("sakthi is a single",rule);
		    foreach(Match match in matchCollection)
		    {
		        Console.WriteLine(match);
		    }// sakthi single
		}
	}
}
