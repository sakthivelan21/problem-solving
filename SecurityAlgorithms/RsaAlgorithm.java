import java.util.Scanner;

/*
	RSA Algorithm
	
		RSA Algorithm developed in 1977 by Rivest Shamir Adlemen (RSA) at MIT
	
		public key Asymmetric encryption Algorithm
	
	Simple working concept - Asymmetric encryption Algorithm
	
		Alice generates her private key and find a exact complent as public key
		
		Alice sends the public key to bob
		
		bob locks his message with Alice public key and send back the encrypted message to Alice
		
		Alice decrypts the encrypted message with her private key and retrive the message
		
	RSA algorithm working
		
		where C = cipher text , M = message , e = encryption key , d = decryption key 
		
		
		1) At first pick two randomly generated large prime numbers p and q
		
		2) calculate n = p * q
		
		3) calculate Phi (n) = Phi(p*q)
		
				  Phi(n) = Phi(p) * Phi(q)   ( Phi(a*b) = Phi(a) * Phi(b) if a,b are relatively prime)
				  
				  Phi(n) = (p - 1) * ( q - 1) ( Phi(p) = p - 1  by Euler Phi function )
				  
		4) pick e , encryption key , so gcd ( e , Phi(n) ) = 1 , 1 < e < Phi(n)
		
		5) calculate d, by  d = ( k * Phi(n) + 1) / e or with e * d = 1 mod ( Phi(n))
		
		6) alice hides her d,decryption key and sends  n and e as a open lock to bob
		
		7) bob locks his message with C = M ^ e mod(n) and sends back C to alice
		
		8) alice unlocks the message with her private key d by M = C ^ d mod (n)
		
		9) let's say Eve who is an intruder in the network listen to alice and bob , she only can hear
		
			e,n and c from their messages . Eve need to d , decryption key to crack the message 
			
			but Eve needs to find prime factorization of n 
			
		if value of n is large enough, Alice will be sure that it cannot be cracked with even powerful 
		
		network of computers ( Hardness of Prime Factorization ) 
	
		
	RSA Algorithm main formula			  
				   
		C = M ^ e mod N
		
		M = C ^ d mod N
		
	Working output
		
	*** RSA Algorithm ***
	 Make sure p and q are relatively prime !!!
	 Enter the value of p , a prime number : 53
	 Enter the value of q , a prime number : 59
	 Enter the value of e, encryption key () : 3
	 Enter the input string value : hi
	 The value of message m is 78
	 The value of n is 3127
	 The phi value of 3127 is 3016
	 The d,decryption key value is 2011
	 The ecrypted value is 2375
	 The decrypted value is 78
	 The decrypted String value is hi
	
   *** RSA Algorithm ***
	 Make sure p and q are relatively prime !!!
	 Enter the value of p , a prime number : 7
	 Enter the value of q , a prime number : 13
	 Enter the value of e, encryption key () : 5
	 Enter the input string value : ba
	 The value of message m is 10
	 The value of n is 91
	 The phi value of 91 is 72
	 The d,decryption key value is 29
	 The ecrypted value is 82
	 The decrypted value is 10
	 The decrypted String value is ba


*/

public class RsaAlgorithm
{

	public static int calculatePhiValue(int p,int q)
	{
		return (p-1) * (q - 1);
	}
	
	public static int calculateDecryptionKey(int e,int phiN)
	{
		int d = 1;
		
		while((e*d)%phiN!=1)
			d+=1;
			
		return d;
	}
	
	public static int getEncryptedValue(int m,int e,int n)
	{
		int value = m;
		
		for(int i=0;i<e;i++)
		{
			value = value % n;
			
			if( i!=e-1)
				value *=m;
		}
				
		return value;
	}
	
	public static int getDecryptedValue(int c,int d,int n)
	{
		int value=c;
		
		for(int i=0;i<d;i++)
		{
			value = value % n;
			
			if( i!=d-1)
				value *=c;
		}
				
		return value;
	}
	
	public static int getTextValue(String text)
	{
		int number=0;
		
		for(int i = 0 ; i < text.length(); i++)
		{
			number = number * 10 + ( Character.toLowerCase(text.charAt(i)) - 97 );
		}
		
		return number;
	}
	
	public static String getStringValue(int number)
	{
		String value = "";
		
		while(number>0)
		{
			value = (char) (number%10 + 97) + value;
			
			number/=10;
		}
		
		return value;
	}
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("*** RSA Algorithm ***");
		
		System.out.println(" Make sure p and q are relatively prime !!!");
		
		System.out.print(" Enter the value of p , a prime number : ");
		
		int p = scanner.nextInt();
		
		scanner.nextLine();
		
			
		System.out.print(" Enter the value of q , a prime number : ");
		
		int q = scanner.nextInt();
		
		scanner.nextLine();
				
		int n = p * q;
		
		System.out.print(" Enter the value of e, encryption key () : ");
		
		int e = scanner.nextInt();
		
		scanner.nextLine();
		
		System.out.print(" Enter the input string value : ");
		
		String inputString = scanner.nextLine();
		
		int m = getTextValue(inputString);
		
		System.out.println(" The value of message m is " + m);
		
		System.out.println(" The value of n is " + n);
		
		int phiN = calculatePhiValue(p,q);
		
		System.out.println(" The phi value of " + n + " is " + phiN);
		
		int d = calculateDecryptionKey(e,phiN);
		
		System.out.println(" The d,decryption key value is "+d);
		
		int c = getEncryptedValue(m,e,n);
		
		int decryptedValue = getDecryptedValue(c,d,n);
		
		System.out.println(" The ecrypted value is "+ c);
		
		System.out.println(" The decrypted value is "+ decryptedValue);
		
		System.out.println(" The decrypted String value is " + getStringValue(decryptedValue));

	}
}
