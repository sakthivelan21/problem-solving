/*
	DES Cipher
	
		Symmetric key block cipher published by National Institute of Standards and Technology ( NIST)
		
		plain Text block size - 64 bit
		
		cipher Text  block size - 64 bit
		
		key size - 56 bit 
		
		Symmetric cipher: uses the same key for encryption and decryption

		Uses 16 rounds which all perform the identical operation
		
		Different subkeys in each round derived from the main key
		
	DES Structure
	
		DES structure is a Feistel network
	
		Advantage: encryption and decryption differ only in the key schedule
		
		Bitwise initial permutation, then 16 round
		
		
	    The plaintext is split into 32-bit halves Lᵢand Rᵢ
	    
	    Every round a 48 bit key is given by the key generator  
        
        Ri and round key is fed into the function f.
        
        in function f, feistal network , where the expansion box expands 32-bit Rᵢ to 48 bit and xor it with roundkey.
        
        and s-boxes will convert the 48-bit result back to 32 bit output
        
        the output of which is then XORed with Li
        
        The Left and right half are swapped
		
		Rounds can be expressed as Lᵢ = Rᵢ-₁, Rᵢ=Lᵢ-₁⊕f(Rᵢ-₁,kᵢ)	
		
		
		working output
		
		
		*** DES cipher ***
	Enter the input String : hello sakthi
	The encrypted String as cipher text : ��B{X+5S��0�QW
	The decrypted String as output : hello sakthi


*/
import java.util.Scanner;

import javax.crypto.Cipher;
import javax.crypto.KeyGenerator;
import javax.crypto.SecretKey;

public class  DesCipher
{
	public static void main( String[] args)
	{
		System.out.println("*** DES cipher ***");
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("Enter the input String : ");
		
		// converting input string into byte array as DES works with bytes
		byte[] inputByteArray = scanner.nextLine().getBytes();
		
		byte[] encryptedByteArray,decryptedByteArray;
		
		try
		{
			KeyGenerator keyGenerator = KeyGenerator.getInstance("DES");
			
			SecretKey secretKey = keyGenerator.generateKey();
			
			Cipher desCipher = Cipher.getInstance("DES");
			
			desCipher.init(Cipher.ENCRYPT_MODE , secretKey );
			
			encryptedByteArray = desCipher.doFinal(inputByteArray);
			
			desCipher.init(Cipher.DECRYPT_MODE , secretKey);
			
			decryptedByteArray = desCipher.doFinal(encryptedByteArray);
			
			String encryptedString = new String(encryptedByteArray);
		
			String decryptedString = new String(decryptedByteArray);
			
			System.out.println("The encrypted String as cipher text : " + encryptedString );
			
			System.out.println("The decrypted String as output : " + decryptedString);
		}
		
		catch(Exception e)
		{
			e.printStackTrace();
			
			System.out.println(e);
		}
		
		
	}
}
