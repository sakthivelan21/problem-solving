/*
	MD5 - Message Digest Algorithm
	
	The MD5 message-digest algorithm is a cryptographically broken but still widely used hash function producing a 128-bit hash value
	
	it has been found to suffer from extensive vulnerabilities. It can still be used as a checksum to verify data integrity, but only against unintentional corruption
	
	MD5 was designed by Ronald Rivest in 1991 to replace an earlier hash function MD4
	
	MD5 algorithm has 5 types
	
	1) Appending Padding Bits. The original message is "padded" (extended) so that its length
(in bits) is congruent to 448, modulo 512. The padding rules are:
		
		The original message is always padded with one bit "1" first.

		Then zero or more bits "0" are padded to bring the length of the message up to 64 bits
		
		fewer than a multiple of 512.
		
	2) next append 64 bits indicate the length of  original message in bytes
	
	3) Initializing MD Buffer. MD5 algorithm requires a 128-bit buffer with a specific initial

		value. The buffer is divided into 4 parts
	
	4) Processing Message in 512-bit Blocks. This is the main step of MD 5 algorithm, which
loops through the padded and appended message in blocks of 512 bits each. 

	5) For each input block, 4 rounds of operations are performed with 16 operations in each round

	word input 
	
	 *** MD5 Algorithm *** 
	 Choice 1) Get Hash value 2) CheckDataIntegrity 
	 Enter your choice :1
	 Enter the inputString :sakthi velan
	 Your MD5 digest value : bb4d1e086cb2917d1d4fa427b09bb94a
	
	  *** MD5 Algorithm *** 
	 Choice 1) Get Hash value 2) CheckDataIntegrity 
	 Enter your choice :2
	Enter the inputString :sakthi velan
	Enter the messageDigest value :bb4d1e086cb2917d1d4fa427b09bb94a
	Digest value matches and inputString is not altered
*/

import java.util.Scanner;
import java.math.BigInteger;
import java.security.MessageDigest;

public class MD5Algorithm
{

	public static String getMessageDigest(String inputString)
	{
		try
		{
		
		MessageDigest messageDigest = MessageDigest.getInstance("MD5");
		
		// digest() method is called to calculate message digest
		// of an input digest() return array of byte
		byte[] digestBinValue = messageDigest.digest(inputString.getBytes());
		
		// Convert byte array into signum representation
		BigInteger bigInteger = new BigInteger(1,digestBinValue);
		
		// Convert message digest into hex value
		String generatedDigest = bigInteger.toString(16);
		
		while( generatedDigest.length()<32)
			generatedDigest = "0" + generatedDigest;
			
		return generatedDigest;
		
		}
		catch(Exception e)
		{
			e.printStackTrace();
			
			System.out.println(e);
			
			return null; 
		}
	}
	
	public static void checkMessageDigest(String inputString,String messageDigest)
	{
		String generatedDigest = getMessageDigest(inputString);
		
		if(messageDigest.equals(generatedDigest))
		{	
			System.out.println("Digest value matches and inputString is not altered");
		}
		else
		{
			System.out.println("Digest value not matches !!! and inputString is  altered");
		}
	}
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.println(" *** MD5 Algorithm *** ");
		
		System.out.print(" Choice 1) Get Hash value 2) CheckDataIntegrity \n Enter your choice :");
		
		int choice = scanner.nextInt();
		
		scanner.nextLine();
		
		if(choice == 1)
		{
			System.out.print("Enter the inputString :");
			
			String inputString = scanner.nextLine();
			
			System.out.println("Your MD5 digest value : "+ getMessageDigest(inputString));
		}
		else
		{	
			System.out.print("Enter the inputString :");
			
			String inputString = scanner.nextLine();
			
			System.out.print("Enter the messageDigest value : ");
			
			String inputDigest = scanner.nextLine();
			
			checkMessageDigest(inputString,inputDigest);	
		}
	}
}
