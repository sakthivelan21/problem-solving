public class StringManipulation{
	/*
		String Mainpulation in Java 
		
		*** output *** 
		Sakthi Velan
		chennai
		Sakthi
		SubString of Sakthi is akthi
		SubString of Sakthi is ak
		'Vel' substring presence in 'Velan' is true
		false
		true
		true
		0
		5
		-1
		sakthi
		SAKTHI
		Hi I am Sakthi. I love myself 
		Hi I bm Sbkthi. I love you 
		1
		Hi I am Sakthi. I love you
		to check if string starts with 'Sak' true
		to check if string 'Sakthi' ends with 'hi' true
		to compare ignoring case 0
		value is 83 in char is S
		value is 97 in char is a
		value is 107 in char is k
		value is 116 in char is t
		value is 104 in char is h
		value is 105 in char is i

		
	*/
	 public static void main(String[] args) {
	 	String a = "Sakthi";
	 	String b = "Velan";
	 	
	 	// String Concatenation
	 	System.out.println(a+" "+b);
	 	
	 	char[] place ={'c','h','e','n','n','a','i'};
	 	
	 	// Conversion of char array to String
	 	String newString = new String(place);
	 	
	 	System.out.println(newString);
	 	
	 	// To Iterate through every character in a string
	 	for(int i=0;i<a.length();i++)
	 	{
	 		System.out.print(a.charAt(i));
		}
		System.out.println();
		
		// SubString of String 
		
		System.out.println("SubString of " + a + " is "+ a.substring(1));
		System.out.println("SubString of " + a + " is "+ a.substring(1,3));
		
		//Contains in String - to find if a Sub String is present or not - contains method
		
		System.out.println("'Vel' substring presence in 'Velan' is "+b.contains("Vel"));
		
		// to check if a String is empty - isEmpty method
		System.out.println(a.isEmpty());
		
		// To check is a String is equal to another String in java - equal method
		System.out.println(a.equals("Sakthi"));
		
		// To check without cases  - equalsIgnoreCase
		System.out.println(a.equalsIgnoreCase("SAKTHI"));
		
		
		// To get the Index of the substring or character in a String is 
		System.out.println(a.indexOf('S'));
		
		// If we want to search from a particular index in a string is 
		System.out.println(a.indexOf('i',3)); // searching i after index 3
		
		// searching for the index of  element that is not present in a string - it will return -1
		System.out.println(a.indexOf('w'));
		
		// to convert a string to lowercase 
		System.out.println(a.toLowerCase());
		
		// To convert the string to uppercase 
		System.out.println(a.toUpperCase());
		
		String text = " Hi I am Sakthi. I love you ";
		
		// String replace - it will replace only one time
		System.out.println(text.replace("you","myself"));
		
		// replaceAll - To replace All occurence
		System.out.println(text.replace('a','b'));
		
		// to convert a number to string 
		System.out.println(String.valueOf(1));
		
		// To remove leading and trailing spaces
		System.out.println(text.trim());

		//To check if a string starts with the given subString
		System.out.println("to check if string starts with 'Sak' " + a.startsWith("Sak"));


		// To check if a string ends with the given subString
		System.out.println("to check if string 'Sakthi' ends with 'hi' " + a.endsWith("hi"));
		
		String x = "Sakthi",y="SAKTHI";
		
		System.out.println(" to compare ignoring case "+ x.compareToIgnoreCase(y));

		// to get the bytes of the string
		byte[] arr = x.getBytes();

		for(int i=0;i<arr.length;i++)
		{
			System.out.println(" value is "+arr[i] + " in char is "+ (char)arr[i]);
		}


	 }
}
