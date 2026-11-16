import java.util.Scanner;

/*
	Caesar Cipher
	
		* Simplest Substitution Cipher named after Julius Caesar.
		
		* It is involved Shifting each letter of a given text into the letter of fixed position 
		like for 'A' shifted to 'B', by a value k=1
		
		a - 0   b - 1   c - 2   d - 3   e - 4   f - 5   g - 6  h - 7  i -8 
		j - 9   k - 10  l - 11  m - 12  n - 13  o - 14  p - 15  q - 16  r - 17 s - 18 
		t - 19  u -20  v - 21  w - 22 x - 23 y - 24 z - 25 
		
		 
		
		* only 26 keys - 0 to 25 of 26 alphabets
		
		
		* Formula
		
			cipher text=(plain text +key ) % 26
		
			plain text = ( cipher text- key) % 26
		
		Disadvantage is key limit 26 can be broken by brute force approach of trying out all 26 keys
*/

/*

input

*** Caesar Cipher ***
Enter the String to be Encrypted : Hello world
Enter the key value : 3

output

Encrypted String value for Hello world is Khoor zruog
Decrypted String value for Hello world is Hello world


*/
public class CaesarCipher
{
	public static String  getEncryptedString(String inputString , int key)
	{
		String encryptedString = "";
		
		for(int index=0; index < inputString.length(); index++)
		{
			char character = inputString.charAt(index);
			
			// checking for only alphabets
			if(Character.isAlphabetic(character))
			{
				int caseValue = (Character.isLowerCase(character))?97:65;
				
				int characterVal = character;
				
				character= (char) ( (characterVal-caseValue + key)%26 + caseValue);
				
			}
			
			encryptedString += character;
			
		}
		
		return encryptedString;
	}
	
	public static String getDecryptedString(String encryptedString , int key)
	{
		String decryptedString = "";
		
		for(int index=0; index < encryptedString.length(); index++)
		{
			char character = encryptedString.charAt(index);
			
			// checking for only alphabets
			if(Character.isAlphabetic(character))
			{
				int caseValue = (Character.isLowerCase(character))?97:65;
				
				int characterVal = character;
				
				characterVal = characterVal - key%26;
				
				if ( characterVal < caseValue)
				
					characterVal+=26;
				
				character=(char)characterVal;
				
			}
			
			decryptedString += character;
			
		}
		return decryptedString;
	}
	
	public static void main ( String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("*** Caesar Cipher ***");
		
		System.out.print("Enter the String to be Encrypted : ");
		
		String inputString = scanner.nextLine();
		
		
		System.out.print("Enter the key value : ");
		
		int key = scanner.nextInt();
		
		String encryptedString = getEncryptedString(inputString,key);
		
		String decryptedString = getDecryptedString(encryptedString,key);
		
		System.out.println("Encrypted String value for " + inputString + " is " + encryptedString );
		
		System.out.println("Decrypted String value for " + encryptedString + " is " + decryptedString );
		
		
	}
	
}
