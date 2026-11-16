using System;
 
namespace Hello
{
    /*
        prime number counter in C#
        
        input
            
            5
            5
            3
            0
            12
            10
        
        output
            
            2
            
    */
    public class Hello 
    {
        public static bool isPrime(int number)
        {
            if(number<=1)
                return false;
            int length=(int)Math.Sqrt(number)+1;
            for(int i=2;i<length;i++)
            {
                if(number%i==0)
                    return false;
            }
            return true;
        }
		public static void Main(String[] args)
		{
		   int n=Convert.ToInt32(Console.ReadLine());
		   int count=0;
		   for(int i=0;i<n;i++)
		   {
		       if(isPrime(Convert.ToInt32(Console.ReadLine())))
		        count++;
		   }
		   if(count==0)
		        Console.WriteLine("No such element exist");
		   else
		        Console.WriteLine(count);
		}
	}
}

