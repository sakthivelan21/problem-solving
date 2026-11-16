using System;
 
namespace Hello
{
    /*
        String methods
        
        String are immutable objects
        
    */
    
	public class Hello
	{
	    
	    public static void sortString(String message)
	    {
	        String[] arr=message.Split(" ");
	        
	        for(int i=0;i<arr.Length;i++)
	        {
	            int temp=i;
	            for(int j=i+1;j<arr.Length;j++)
	            {
	                if(arr[temp].CompareTo(arr[j])>0)
	                    temp=j;
	                    
	               /*
	                a.CompareTo(b)  
	                
	                    if a>b 
	                    
	                        return a number >0 
	                    
	                    else if a==b
	                        
	                        return a number=0
	                   
	                   else if a<b 
	                   
	                        return a number<0
	               */
	            }
	            
	            String tempStr=arr[i];
	            arr[i]=arr[temp];
	            arr[temp]=tempStr;
	        }
	        
	        Console.WriteLine("Sorted string is ");
	        foreach(String str in arr)
	            Console.Write(str+" ");
	        //Sorted string is 
            // a boy good is Sakthi 
	    }
	   
		public static void Main (string[] args)
		{
		    String Sentence ="Sakthi is a good boy";
		    
		    // String slicing
		    
		    Console.WriteLine(Sentence.Substring(0,6));//Sakthi
		    
		    
		    // String printing everything after 8 index
		    Console.WriteLine(Sentence.Substring(6));//is a good boy
		    
		    // Split method 
		    foreach(String word in Sentence.Split(" "))
		        Console.WriteLine(word);
		    /*
		        Sakthi
                is
                a
                good
                boy
		    */
		        
		    String name="Sakthi";
		    
		    //Accessing the first Character of String
		    Console.WriteLine(name[0]);//S
		    
		    //getting the length of the String
		    Console.WriteLine(name.Length);//6
		    
		    // finding the values in a string and getting the index of it 
		    
		    Console.WriteLine(name.IndexOf("S"));//0
		    
		    // to get hashCode of the string
		    
		    Console.WriteLine(name.GetHashCode());//1151227651
		    
		    
		    // String Concatenation
		    Console.WriteLine("sakthi"+" "+"Velan");//Sakthi Velan
		    
		    // String comparision
		    
		    Console.WriteLine("sakthi".Equals("sakthi"));// true
		    
		    // String Replace
		    
		    Console.WriteLine(Sentence.Replace("Sakthi","SakthiVel"));//SakthiVel is a good boy
		    
		    // Toupper case 
		    
		    Console.WriteLine("sakthi".ToUpper());//SAKTHI
		    
		    
		    //ToLower case 
		    
		    Console.WriteLine("sakthi".ToLower());//sakthi
		    
		    //To Sort a String words
		    
		    sortString(Sentence);
		    
		}
	}
}
