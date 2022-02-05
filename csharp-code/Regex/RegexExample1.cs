using System;
using System.Text.RegularExpressions;
 
namespace Hello
{
    /*
        Regular Expression - mobile Number validation
        
        we use regular expression from System.Text.RegularExpressions
        
        
        
    */
    public class Hello
    {
		public static void Main (string[] args)
		{
		    // match at start(^) with ten digits from [0-9] $ end
		    String rule=@"^[0-9]{10}$";
		    Regex re = new Regex(rule);
		    Console.WriteLine(re.IsMatch("9876543210")); // true
            Console.WriteLine(re.IsMatch("987654321a")); // false
		    
		}
	}
}
