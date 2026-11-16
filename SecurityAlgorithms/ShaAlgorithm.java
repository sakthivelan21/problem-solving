/*
	SHA - 1 Algorithm
	
	MessageDigest class contains    
	
		MD2
		MD5
		SHA-1
		SHA-224
		SHA-256
		SHA-384
		SHA-512
	
	SHA -1
	
		SHA-1 or Secure Hash Algorithm 1 is a cryptographic hash function which takes an input and produces a 160-bit (20-byte) hash value. 
		
		This hash value is known as a message digest. This message digest is usually then rendered as a hexadecimal number which is 40 digits long. 
		
		it has 80 rounds and block size of 512 and internal  block size of  160 ( 5 * 32)
		
		
		 *** SHA-1 Algorithm *** 
		 Choice 1) Get Hash value 2) CheckDataIntegrity 
		 Enter your choice :2
		Enter the inputString :cryptography
		Enter the messageDigest value : 48c910b6614c4a0aa5851aa78571dd1e3c3a66ba
		Digest value matches and inputString is not altered
		
		
         *** SHA-1 Algorithm *** 
		 Choice 1) Get Hash value 2) CheckDataIntegrity 
		 Enter your choice :1
		Enter the inputString :cryptography
		Your MD5 digest value : 48c910b6614c4a0aa5851aa78571dd1e3c3a66ba


*/

import java.util.Scanner;
import java.math.BigInteger;
import java.security.MessageDigest;

public class ShaAlgorithm
{

	public static String getMessageDigest(String inputString)
	{
		try
		{
		
		MessageDigest messageDigest = MessageDigest.getInstance("SHA-1");
		
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
		
		System.out.println(" *** SHA-1 Algorithm *** ");
		
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
