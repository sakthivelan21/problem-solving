import java.util.Scanner;

/*
	Rail Fence Cipher - Row transformation
	
		* A Transposition cipher
		
		* The plain text is written down as a sequence of diagonals and then read them off a sequence
		
			of rows
		
	program output
	
	
	 Enter the input String :goodmorning
	 Enter the depth value : 2
	 As the length of the string is not long enough added 'x' at last
	 Displaying the Array :
		gomrig
		odonnx
	 the encrypted String : gomrigodonnx
	 the decrypted String : goodmorningx

	
	 Enter the input String :goodmorning
	 Enter the depth value : 3
	 As the length of the string is not long enough added 'x' at last
	 Displaying the Array :
		gdrn
		omng
		ooix
	 the encrypted String : gdrnomngooix
	 the decrypted String : goodmorningx
		
		
*/

public class RailFenceCipher
{
	
	public static void displayArray(char[][] array, int row, int col)
	{
		System.out.println(" Displaying the Array :");
		
		for(int i=0; i < row; i++)
		{
			for(int j=0;j<col;j++)
				System.out.print(array[i][j]);
			System.out.println();
		}
	}

	public static String getEncryptedText(String inputString , int depth)
	{
		if (inputString.length() % depth !=0)
			System.out.println(" As the length of the string is not long enough added 'x' at last");
		
		while( inputString.length() % depth !=0)
			inputString+="x";
			
		int colLength = inputString.length()/depth;
		
		String encryptedString="";
		
		char[][] railFence = new char[depth][colLength];
		
		int index=0;
		
		for(int i=0;i< colLength ; i++)
		{
			for(int j=0; j < depth ; j++)
			{
				railFence[j][i]=inputString.charAt(index++);
			}
		}
		
		displayArray(railFence,depth,colLength);
		
		for(int i=0; i < depth ; i++)
		{
			for(int j=0;j < colLength ; j++)
				encryptedString+= railFence[i][j];
		}
		
		return encryptedString;
		
	}
	
	public static String getDecryptedText( String encryptedString , int depth)
	{
		String decryptedString="";
		
		int colLength = encryptedString.length()/depth;
		
		char[][] railFence = new char[depth][colLength];
		
		int index=0;
		
		for(int i=0;i < depth ; i++)
		{
			for(int j=0; j < colLength ; j++)
				railFence[i][j]=encryptedString.charAt(index++);
		}
		
		
		
		for(int j=0; j < colLength ; j++)
		{
			for(int i=0;i < depth ; i++)
				decryptedString+= railFence[i][j];
		}
		
		return decryptedString;
	}
		
	public static void main ( String [] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.print(" Enter the input String :");
		
		String inputString = scanner.nextLine();
		
		System.out.print(" Enter the depth value : ");
		
		int depth = scanner.nextInt();
		
		scanner.nextLine();
		
		String encryptedString = getEncryptedText( inputString , depth );
		
		String decryptedString = getDecryptedText ( encryptedString , depth );
		
		System.out.println(" the encrypted String : " + encryptedString);
		
		System.out.println(" the decrypted String : " + decryptedString);
		
	}
}
