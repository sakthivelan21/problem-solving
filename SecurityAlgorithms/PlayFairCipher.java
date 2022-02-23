import java.util.Scanner;


/*
	Play Fair Cipher
	
	 * Manual Symmetric Encryption Technique by	 diagram substitution cipher
	 
	 * 5*5 matrix is used with a key constructured
	 
	 	* key should have no repetition of letter in key, so leave repeatiting characters 
	 	
	 * first the characters in key must be filled inside the matrix and then the remaining characters are
	 
	 filled.
	 
	 * Steps for Play Fair Encryption 
	 
	 	* Diagram creation of matrix with keyword
	 	
	 	* Repeating letter are borken with filler letter 'x'
	 	
	 	* always the letters are taken in a pair of two values 
	 	
	 	* if the given input string length is odd, make it even with filler letter 'x'
	
		* Encrypting the pairs
		
			* Same Column if both pairs ( choose their next character down) wrap around |down direction| 
			
			* Same row if both pairs ( choose their next character next)  wrap around | ->|
			
			* Rectangle [] swap
			
		* Decrypting the pairs
		
			* Same Column wrap around |up  direction|
			
			* Same row   wrap around | <-|
			
			* Rectangle [] swap 
	
		* Matrix size is 5*5 = 25 (i/j) are combined to make the combination for 26 alphabets
*/

/*

Sample Input output

*** Play Fair Cipher ***
Enter the Key for the matrix : monarchy

Enter the String to be encrypted : mosque
Key Value after unique values is monarchy

Matrix is : 
m o n a r 
c h y b d 
e f g i k 
l p q s t 
u v w x z 
 your created pair String before encryption is mosque

 Encrypted String for mosque is ontsml

 Decrypted String for encrypted String ontsml is mosque


*** Play Fair Cipher ***
Enter the Key for the matrix : monarchy

Enter the String to be encrypted : attack
Key Value after unique values is monarchy

Matrix is : 
m o n a r 
c h y b d 
e f g i k 
l p q s t 
u v w x z 
 your created pair String before encryption is attack

 Encrypted String for attack is rssrde

 Decrypted String for encrypted String rssrde is attack
*/

public class PlayFairCipher
{
	//  row - 5 column - 5
	public static char[][] matrix= new char[5][5];
	
	public static boolean isCharacterPresent(String str,char character)
	{
		for(int i = 0; i < str.length(); i++)
			if( str.charAt(i) ==character)
				return true;
		return false;
	}
	
	// to remove the repeating characters in the key
	public static String uniqueKeyGenerate(String givenKey)
	{
		String key="";
		
		for(int i = 0;i < givenKey.length(); i++)
		{
			char character = givenKey.charAt(i);
			
			if(!isCharacterPresent( key,character ))
				key+=character;
		}
		
		return key;
		
	}
	
	// to generate the matrix
	public  static void generateMatrix(String key)
	{
		key = uniqueKeyGenerate(key);
		
		System.out.println("Key Value after unique values is " + key);
		
		int r = 0,c = 0;
		
		for(int i = 0; i< key.length();i++)
		{
			matrix[r][c++]=Character.toLowerCase(key.charAt(i));
			
			if(c>=5)
			{
				c=0;r++;
			}
		}
		
		for(int i = 97;i < 123;i++)
		{
			char character = (char)i;
			if(!isCharacterPresent( key,character ) && character!='j')
			{
				matrix[r][c++]=character;
			
				if(c>=5)
				{
					c=0;r++;
				}
			}
		}
	}
	
	public static String createPairStringGenerator(String inputString)
	{
		String str="";
		
		int i=0,length = inputString.length();
		
		// checking if their is repeating characters in string
		
		while( i+1 < length)
		{
			char first = inputString.charAt(i);
			
			char second = inputString.charAt(i+1);
			
			str+=first;
			
			if(first==second)
			{
				str+="x";
				i++;
			}
			else
			{
				str+=second;
				i+=2;
			}
		}
		
		// checking if length of the string is odd , adding filler letter
		if(i<=length-1)
		{
			str+=inputString.charAt(length-1);
			str+="x";
		}
		return str;
	}
	
	public static int[] getIndex(char character)
	{
		int[] points = new int[2];
		for(int i = 0 ; i < 5 ; i++)
		{
			for( int j = 0; j < 5 ; j++)
				if(character == matrix[i][j])
				{
					points[0]=i;
					points[1]=j;
					return points;
				}
		}
		return points;
	}
	
	public static String encryptString(String inputString)
	{
		String encryptedString="";
		
		inputString = createPairStringGenerator( inputString );
		
		System.out.println(" your created pair String before encryption is " + inputString);
		
		for(int i = 0 ; i < inputString.length() - 1; i+=2)
		{
			char first = inputString.charAt(i);
			
			char second = inputString.charAt(i+1);
			
			int[] firstIndex= getIndex(first);
			
			int[] secondIndex= getIndex(second);
			
			if( firstIndex[1] == secondIndex[1] )
			{
				first = matrix [ (firstIndex[0]+1)%5] [ firstIndex[1] ];
				
				second = matrix [ (secondIndex[0]+1)%5] [ secondIndex[1] ];
			}
			else if ( firstIndex[0] == secondIndex[0])
			{
				first = matrix [firstIndex[0]] [ (firstIndex[1]+1)%5] ;
				
				second = matrix [secondIndex[0]] [ (secondIndex[1]+1)%5];	
			}
			else
			{
				first = matrix [ firstIndex[0] ] [ secondIndex[1] ];
				
				second = matrix [ secondIndex[0] ] [ firstIndex[1] ];
			}
			
			encryptedString+=first;
			
			encryptedString+=second;
			
		}
		
		return encryptedString;
	}
	
	public static int getBackValue(int value)
	{
		if(value-1<0)
			return 4;
		return value-1;
	}
	
	public static String decryptString(String encryptedString , int originalLength)
	{
		String decryptedString="";
		
		for(int i = 0 ; i < encryptedString.length() - 1; i+=2)
		{
			char first = encryptedString.charAt(i);
			
			char second = encryptedString.charAt(i+1);
			
			int[] firstIndex= getIndex(first);
			
			int[] secondIndex= getIndex(second);
			
			if( firstIndex[1] == secondIndex[1] )
			{
				first = matrix [ getBackValue(firstIndex[0]) ] [ firstIndex[1] ];
				
				second = matrix [ getBackValue(secondIndex[0]) ] [ secondIndex[1] ];
			}
			else if ( firstIndex[0] == secondIndex[0])
			{
				first = matrix [firstIndex[0]] [ getBackValue(firstIndex[1]) ] ;
				
				second = matrix [firstIndex[0]] [ getBackValue(secondIndex[1]) ];	
			}
			else
			{
				first = matrix [ firstIndex[0] ] [ secondIndex[1] ];
				
				second = matrix [ secondIndex[0] ] [ firstIndex[1] ];
			}
			
			decryptedString+=first;
			
			decryptedString+=second;
			
		}
		
		return decryptedString;
	}
	
	// to display the matrix
	public static void displayMatrix()
	{
		System.out.println("\nMatrix is : ");
		
		for(int i =0; i < 5 ;i++)
		{
			for(int j=0;j < 5; j++)
				System.out.print(matrix[i][j]+" ");
			System.out.println();
		}
	}
	public static void main(String[] arg)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("*** Play Fair Cipher ***");
		
		System.out.print("Enter the Key for the matrix : ");
			
		String key = scanner.nextLine();
		
		System.out.print("\nEnter the String to be encrypted : ");
		
		String inputString = scanner.nextLine();
		
		generateMatrix(key);
		
		displayMatrix();
		
		String encryptedString = encryptString(inputString);
		
		String decryptedString = decryptString(encryptedString,inputString.length());
		
		System.out.println("\n Encrypted String for " + inputString + " is " + encryptedString);
		
		System.out.println("\n Decrypted String for encrypted String " + encryptedString + " is " + decryptedString);
		
	}
}
