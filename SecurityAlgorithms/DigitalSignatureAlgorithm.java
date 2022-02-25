/*

output:

*** Digital Signature Algorithm *** 
 Your Choices 1. Generate Digital Signature 2.verify Digital Signature 
 Enter your choice : 1
To Generate Digital Signature 
Enter the input File Name (keep the file in same directory): hello.txt
 Your digital Signature and public key are generated as signature and key in this folder !!!

*** Digital Signature Algorithm *** 
 Your Choices 1. Generate Digital Signature 2.verify Digital Signature 
 Enter your choice : 2
To Verify the Digital Signature 
Enter the input File Name (keep the file in same directory) : hello.txt
Enter the public key File Name (keep the file in same directory) : publickey.txt
Enter the digital signature File Name (keep the file in same directory) : signature.txt
 Your data Integrity :  data is not altered , integrity preserved

*/
import java.util.Scanner;
import java.security.KeyPairGenerator;
import java.security.PrivateKey;
import java.security.KeyPair;
import java.security.PublicKey;
import java.security.SecureRandom;
import java.security.Signature;
import java.io.FileOutputStream;
import java.io.FileInputStream;
import java.io.BufferedInputStream;

import java.security.spec.X509EncodedKeySpec;
import java.security.KeyFactory;

public class DigitalSignatureAlgorithm
{

	public static void saveFile(String fileName,byte[] byteArray)
	{
		try
		{
		
			FileOutputStream fileOutputStream = new FileOutputStream(fileName);
			
			fileOutputStream.write(byteArray);
			
			fileOutputStream.close();
		}
		catch(Exception e)
		{
			e.printStackTrace();
			
			System.out.println(e);
		}
	}
	
	public static byte[] readFile(String fileName)
	{
		try
		{
		
			FileInputStream fileInputStream = new FileInputStream(fileName);
			
			byte[] byteArray = new byte[fileInputStream.available()];
			
			fileInputStream.read(byteArray);
			
			fileInputStream.close();
			
			return byteArray;
		}
		catch(Exception e)
		{
			e.printStackTrace();
			
			System.out.println(e);
		}
		
		return null;
	}
	
	public static void generateDigitalSignature(String inputFileName, PrivateKey privateKey)
	{
		try
		{
			Signature signature = Signature.getInstance("SHA1withDSA","SUN");
			
			signature.initSign(privateKey);
			
			FileInputStream fileInputStream = new FileInputStream(inputFileName);
			
			BufferedInputStream bufferedInputStream = new BufferedInputStream(fileInputStream);
			
			byte[] bufferValue = new byte[1024];
			
			while(bufferedInputStream.available()!=0)
			{
				int length = bufferedInputStream.read(bufferValue);
				
				signature.update(bufferValue,0,length);
			}
			
			bufferedInputStream.close();
			
			// To save the Signature in file
			saveFile("signature.txt",signature.sign());
		}
		catch(Exception e)
		{
			e.printStackTrace();
			
			System.out.println(e);
		}
		
	}
	
	public static void verifyIntegrityOfDigitalSignature(String inputFile,String digitalSignatureFile, String  publicKeyFile)
	{
		try
		{
			byte[] publicKeyByteArray = readFile(publicKeyFile);
			
			byte[] digitalSignatureArray = readFile(digitalSignatureFile);
			
			X509EncodedKeySpec pubKeySpec = new X509EncodedKeySpec(publicKeyByteArray);  
			
			KeyFactory keyFactory = KeyFactory.getInstance("DSA", "SUN");  
			
			PublicKey publicKey = keyFactory.generatePublic(pubKeySpec);  
			
			FileInputStream fileInputStream = new FileInputStream(inputFile);
			
			BufferedInputStream bufferedInputStream = new BufferedInputStream(fileInputStream);
			
			Signature signature = Signature.getInstance("SHA1withDSA","SUN");
			
			signature.initVerify(publicKey);
			
			byte[] bufferValue = new byte[1024];
			
			while(bufferedInputStream.available()!=0)
			{
				int length = bufferedInputStream.read(bufferValue);
				
				signature.update(bufferValue,0,length);
			}
			
			bufferedInputStream.close();
			
			System.out.println(" Your data Integrity : " +(signature.verify(digitalSignatureArray)?" data is not altered , integrity preserved" : "  data is altered , integrity not preserved "));
			
		}
		catch(Exception e)
		{
			e.printStackTrace();
			
			System.out.println(e);
			
		}
		
	}
	
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("*** Digital Signature Algorithm *** ");
		
		System.out.print(" Your Choices 1. Generate Digital Signature 2.verify Digital Signature \n Enter your choice : ");
		
		int choice = scanner.nextInt();
		
		scanner.nextLine();
		
		if(choice ==1)
		{
			System.out.println("To Generate Digital Signature ");
			
			
			
			try
			{
				
				System.out.print("Enter the input File Name (keep the file in same directory): ");
		
				String inputFileName = scanner.nextLine();
				
				KeyPairGenerator keyPairGenerator = KeyPairGenerator.getInstance("DSA","SUN");
				
				SecureRandom secureRandom = SecureRandom.getInstance("SHA1PRNG","SUN");
				
				keyPairGenerator.initialize(1024,secureRandom);
				
				KeyPair keyPair = keyPairGenerator.generateKeyPair();
				
				generateDigitalSignature( inputFileName , keyPair.getPrivate());
				
				saveFile("publickey.txt",keyPair.getPublic().getEncoded());
				
				System.out.println(" Your digital Signature and public key are generated as signature and key in this folder !!!");
				
			
			}
			
			catch(Exception e)
			{
				e.printStackTrace();
			
				System.out.println(e);
			}
			
			
			
			
		}
		else
		{
			try
			{
			
				System.out.println("To Verify the Digital Signature ");
				
				System.out.print("Enter the input File Name (keep the file in same directory) : ");
			
				String inputFile = scanner.nextLine();
				
				System.out.print("Enter the public key File Name (keep the file in same directory) : ");
				
				String publicKeyFileName = scanner.nextLine();
				
				System.out.print("Enter the digital signature File Name (keep the file in same directory) : ");
				
				String  digitalSignatureFile = scanner.nextLine();
				
				verifyIntegrityOfDigitalSignature( inputFile , digitalSignatureFile, publicKeyFileName); 
				
				
				
			}
			
			catch(Exception e)
			{
				e.printStackTrace();
			
				System.out.println(e);
			}
			
		}
		
	}
}
