import java.util.Scanner;

public class CaesarCipher
{
	
	public static String encryptString(String inputString , int key)
	{
		String encryptedString = "";
		
		for(int i=0;i< inputString.length() ; i++)
		{
			char character= inputString.charAt(i);
			
			if(Character.isAlphabetic(character))
			{
				int val = (Character.isLowerCase(character))?97:65;
				
				int characterVal= character;
				
				character=(char) ((characterVal-val+key)%26 + val);
				
			}
			encryptedString+=character;
		}	
		
		return encryptedString;
	}
	
	public static String decryptString(String encryptedString , int key )
	{
		String decryptedString = "";
		
		for(int i=0;i< encryptedString.length() ; i++)
		{
			char character= encryptedString.charAt(i);
			
			if(Character.isAlphabetic(character))
			{
				int val = (Character.isLowerCase(character))?97:65;
				
				int characterVal= character;
				
				characterVal= characterVal-key%26;
				
				if(characterVal < val)
				
					characterVal+=26;
					
				character=(char)characterVal;
				
			}
			decryptedString+=character;
		}	
		
		return decryptedString;
	}
	public static void main(String[] args)
	{	
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("Enter any String for Caesar Cipher : ");
		
		String inputString=scanner.nextLine();
				
		System.out.print("\nEnter the key : ");
		
		int key=scanner.nextInt();
		
		String encryptedString = encryptString(inputString , key);
		
		String decryptedString = decryptString( encryptedString , key);
		
		System.out.print("\nThe Encrypted String : " + encryptedString );
		
		System.out.print("\nThe Decrypted String : " + decryptedString ); 
	}
}
