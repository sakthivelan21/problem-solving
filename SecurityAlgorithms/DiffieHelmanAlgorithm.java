import java.util.Scanner;
/*
	Diffie Helman Key Exchange Algorithm 
	
		* Diffie–Hellman key exchange is a method of securely exchanging cryptographic keys over a public channel and was one of the first public-key protocols as conceived by Ralph Merkle and named after Whitfield Diffie and Martin Hellman.
		
		* DH is one of the earliest practical examples of public key exchange implemented within the field of cryptography. Published in 1976 by Diffie and Hellman, this is the earliest publicly known work that proposed the idea of a private key and a corresponding public key.
		
	1) Select a prime modulus q and generator alpha
	
	2) send the prime modulus q and generator alpha to bob.
	
	3) alice select a random prime number  Xa < q and calculate Ya = alpha ^ Xa  mod q 
	
	4) bob select a random prime number Xb  < q and calculate Yb = alpha ^ Xb mod q
	
	5) alice send Ya to bob and bob send Yb to alice
	
	6) alice perform Ka = Yb ^ Xa mod q
	
	7) bob perform Kb = Ya ^ Xb mod q 
	
	8) bob and alice gets the shared message and eve who listens to this will stuck in discrete logarithms problem
	
	
	working output
	
	**** Diffie Helmen Algorithm ***
	Enter the value of alpha : 5
	Enter the value of q : 83
	Enter the value of Xa for alice : 6
	Enter the value of Xb for bob : 10
	The value of  Ya from alice : 21
	The value of Yb from bob : 11
	The shared value Ka from alice : 9
	The shared value Kb from bob : 9
	
	**** Diffie Helmen Algorithm ***
	Enter the value of alpha : 3
	Enter the value of q : 353
	Enter the value of Xa for alice : 97
	Enter the value of Xb for bob : 233
	The value of  Ya from alice : 40
	The value of Yb from bob : 248
	The shared value Ka from alice : 160
	The shared value Kb from bob : 160


	
*/
public class DiffieHelmanAlgorithm
{
	public static int valueFinder(int base,int exp , int modVal)
	{
		int value=base;
		
		for(int i=0;i<exp;i++)
		{
			value = value % modVal;
			
			if( i!=exp-1)
				value *=base;
		}
				
		return value;
	}
	
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("**** Diffie Helmen Algorithm ***");
		
		System.out.print("Enter the value of alpha : ");
		
		int alpha = scanner.nextInt();
		
		scanner.nextLine();
		
		System.out.print("Enter the value of q : ");
		
		int q =scanner.nextInt();
		
		scanner.nextLine();
		
		System.out.print("Enter the value of Xa for alice : ");
		
		int Xa = scanner.nextInt();
		
		System.out.print("Enter the value of Xb for bob : ");
		
		int Xb = scanner.nextInt();
		
		int Ya = valueFinder(alpha,Xa,q);
		
		int Yb = valueFinder(alpha,Xb,q);
		
		System.out.println("The value of  Ya from alice : "+ Ya);
		
		System.out.println("The value of Yb from bob : "+Yb);
		
		int Ka = valueFinder(Yb,Xa,q);
		
		int Kb = valueFinder(Ya,Xb,q);
		
		System.out.println("The shared value Ka from alice : "+ Ka);
		
		System.out.println("The shared value Kb from bob : "+ Kb);
		
	}
}
