import java.util.Scanner;

/*
	Vigenere Cipher
	
		* It Consistes of the 26 Caesar Cipher with shifts of 0 through 25
		
		* Determining the length of keyword.
		
		* Key and the plain Text share the same frequency distribution of letters , a statistical technique can be applied.
		
		* normal key generation 
		
			* it has some repetition characters in them as same key have been added to make the length to the plain text
			
		* Autokey system
		
			* The periodic nature of the keyword can be eliminated by using a non-repeating keyword that is as long as the message itself.
			
			* vigenere proposed auto key system , in which  a keyword  is concatenated with the plain text itself to provide a running key.
			
		
		* Encryption Formula
		
			C[i] = (p[i] + k[i] ) mod 26
			
		* Decryption Formula
		
			P[i] = ( c[i] - k[i] ) mod 26
		
		
		Example 
		
		
		key : deceptivedeceptivedeceptive
		
		plain text : wearediscoveredsaveyourself
		
		Cipher Text : zicvtwqngrgvtwavzhcqyglmgj
		
		
		code working output
		
		
		 *** Vigenere Cipher *** 
		 Enter the key value : deceptive
		 Enter the plain text : wearediscoveredsaveyourself
		 you can use 1. normal key generation  2. auto system key generation 
		 Enter choice ( 1or 2) :1
		 your Cipher Text is zicvtwqngrzgvtwavzhcqyglmgj
		 Your decrypted Text is wearediscoveredsaveyourself
		 
		 
		 *** Vigenere Cipher *** 
		 Enter the key value : deceptive
		 Enter the plain text : wearediscoveredsaveyourself
		 you can use 1. normal key generation  2. auto system key generation 
		 Enter choice ( 1or 2) :2
		 your Cipher Text is zicvtwqngkzeiigasxstslvvwla
		 Your decrypted Text is wearediscoveredsaveyourself


*/

public class VigenereCipher
{

	public static int getAlphabeticValue(char character)
	{
		return ((int)Character.toLowerCase(character)) -97; 	
	}
	
	public static String getEncryptedText(String plainText, String key)
	{
		String encryptedText = "";
		
		for(int i = 0 ; i < key.length() ; i++)
		{	
			int value = getAlphabeticValue( plainText.charAt(i) ) + getAlphabeticValue( key.charAt(i) );
			
			value = value %26;
			
			encryptedText +=  (char) ( value + 97 );	
			
			
		}
		
		return encryptedText;
			
	}
	
	public static String getDecryptedText(String cipherText, String key)
	{
		String decryptedText = "";
		
		for(int i = 0 ; i < key.length() ; i++)
		{	
			int value = getAlphabeticValue( cipherText.charAt(i) ) - getAlphabeticValue( key.charAt(i) );
			
			value = value %26;
			
			if(value<0)
				value+=26;
			
			decryptedText +=  (char) ( value + 97 );	
			
			
		}
		
		return decryptedText;
	}
	
	public static String makeKeySameLength(String plainText,String key,int choice)
	{
		int keyLength = key.length(),plainTextLength = plainText.length(),index=0;
		
		if(choice==1)
		{
			while(keyLength<plainTextLength)
			{
				key+=key.charAt(index++);
				
				if(index >= keyLength)
					index = 0;
				keyLength++;
			}
		}
		else
		{
			while(keyLength<plainTextLength)
			{
				key+=plainText.charAt(index++);
				
				if(index >= plainTextLength)
					index = 0;
				keyLength++;
			}
		}
		
		return key;
				
	}
	
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.println ( " *** Vigenere Cipher *** ");
		
		System.out.print(" Enter the key value : ");
		
		String key = scanner.nextLine();
		
		System.out.print(" Enter the plain text : ");
		
		String plainText = scanner.nextLine();
		
		System.out.print(" you can use 1. normal key generation  2. auto system key generation \n Enter choice ( 1or 2) :");
		
		int choice =scanner.nextInt();
		
		scanner.nextLine();
		
		key = makeKeySameLength(plainText,key,choice);
		
		String cipherText = getEncryptedText(plainText,key);
		
		String decryptedText = getDecryptedText(cipherText,key);
		
		System.out.println(" your Cipher Text is " + cipherText);
		
		System.out.println(" Your decrypted Text is " + decryptedText);
	}
}
