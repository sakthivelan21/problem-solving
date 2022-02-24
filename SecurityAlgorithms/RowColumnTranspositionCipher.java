import java.util.Scanner;

/*
	Row Column Transposition Cipher
	
		* more complex scheme
		
		* need a rectangle matrix to create it 
		
		* Write : Row by Row
		
		* Read : Column by Column 
		
		* key : order of the column
		
	input need to shared between sender and receiver
	
		* row & column length for rectangle
		
		* number of rounds of ciphering process
		
		* key : order of the column

	program output
	
	*** Row Column Transposition Cipher ***
	Enter the number of rows for Rectangle : 5
	Enter the number of columns for Rectangle : 7
	Enter the number of rounds for column transposition cipher process : 1
	Enter the input String to be encrypted : killcoronavirusattwelveamtomorrow
	Enter the key numbers separated by space : 4 3 1 2 5 6 7
	Your encrypted String : latarlvtmoinaerkosvociwtworeoxrulmx
	Your decrypted String : killcoronavirusattwelveamtomorrowxx
	
	
	*** Row Column Transposition Cipher ***
	Enter the number of rows for Rectangle : 5
	Enter the number of columns for Rectangle : 4
	Enter the number of rounds for column transposition cipher process : 3
	Enter the input String to be encrypted : includehelpisawesome
	Enter the key numbers separated by space : 1 3 4 2
	Your encrypted String : iecehldlewssmaneiupo
	Your decrypted String : includehelpisawesome

*/
public class RowColumnTranspositionCipher
{
	public static void displayArray(char[][] array, int row, int col)
	{
		System.out.println("Displaying the Array :");
		
		for(int i=0; i < row; i++)
		{
			for(int j=0;j<col;j++)
				System.out.print(array[i][j]);
			System.out.println();
		}
	}

	public static int[] getKeyFromString(String keyString)
	{
		String[] keyStringArray = keyString.split(" ");
		
		int[] keyArray = new int[keyStringArray.length];
		
		int index=0;

		for(String keyValue : keyStringArray)
		{
			keyArray[index++] = Integer.parseInt(keyValue);	
		}
		
		return keyArray;
	}
	
	public static String getEncryptedString(int row,int col,String inputString, int[] key,int rounds)
	{
		String encryptedString="";
		
		int totalLength = row * col;
		
		while( inputString.length() < totalLength)
			inputString+="x";
		
		char[][] table = new char[row][col];
		
		for(int round = 0 ; round < rounds; round++)
		{
			encryptedString="";int index=0;
			
			// cleaning the table and entering the inputString
			for(int i = 0 ;i < row;i++)
			{
				for(int j = 0 ; j < col; j++)
				{
					table[i][j]=inputString.charAt(index++);
				}
			}
			
			// to view the table at each rounds
			//displayArray(table,row,col);
			
			
			for(int i = 0 ; i < key.length ; i++)
			{
				int keyIndex = -1;
				
				for(int j = 0; j < key.length; j++)
				{
					if(key[j] == i+1)
					{
						keyIndex=j;
						break;
					}	
				}
				
				for(int x = 0 ; x< row ; x++)
					
					encryptedString += table[x][keyIndex];
			}
			
			
			
			// passing back the encryptedString as input to the inputString
			inputString = encryptedString;
		
		}
		
		return encryptedString;	
	}
	
	public static String getDecryptedString(int row,int col,String encryptedString,int[] key, int rounds)
	{
		String decryptedString="";
		
		int totalLength = row * col;
				
		char[][] table = new char[row][col];
		
		
		for(int round = 0 ; round < rounds; round++)
		{
			decryptedString="";int index=0;
			
			for(int i = 0 ; i < key.length ; i++)
			{
				int keyIndex = -1;
				
				for(int j = 0; j < key.length; j++)
				{
					if(key[j] == i+1)
					{
						keyIndex=j;
						break;
					}	
				}
				
				for(int x = 0 ; x< row ; x++)
					
					table[x][keyIndex]=encryptedString.charAt(index++);
			}
			
			// to view the table at each rounds
			//displayArray(table,row,col);
			
			for(int i = 0 ; i < row ; i++)
			{
				for( int j = 0 ; j < col ; j++)
				
					decryptedString += table[i][j];
			}
			// passing back the decryptedString as input to the encryptedString
			encryptedString = decryptedString;
		
		}
		
		
		return decryptedString;	
	}
	 
	public static void main( String[] args)
	{
		Scanner scanner = new Scanner( System.in);
		
		System.out.println("*** Row Column Transposition Cipher ***");
		
		System.out.print("Enter the number of rows for Rectangle : ");
		
		int row = scanner.nextInt();
		
		scanner.nextLine();
		
		System.out.print("Enter the number of columns for Rectangle : ");
		
		int column = scanner.nextInt();
		
		scanner.nextLine();
		
		System.out.print("Enter the number of rounds for column transposition cipher process : ");
		
		int rounds = scanner.nextInt();
		
		scanner.nextLine();
		
		System.out.print("Enter the input String to be encrypted : ");
		
		String inputString = scanner.nextLine();
		
		System.out.print("Enter the key numbers separated by space : ");
		
		String keyString = scanner.nextLine();
		
		int[] key =getKeyFromString(keyString);
		
		String encryptedString = getEncryptedString(row,column,inputString,key,rounds);
		
		String decryptedString = getDecryptedString(row,column,encryptedString,key,rounds);
		
		System.out.println("Your encrypted String : " + encryptedString);
		
		System.out.println("Your decrypted String : " + decryptedString);
		
		
		
	}
	
}
