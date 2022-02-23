import java.util.Scanner;

/*
	Hill Cipher
	
		* Hill cipher is a polygraphic substitution cipher based on linear algebra
		
		* . To encrypt a message, each block of n letters (considered as an n-component vector) is multiplied by an invertible n × n matrix, against modulus 26. 
		
		* To decrypt the message, each block is multiplied by the inverse of the matrix used for encryption.
		
		cipher_text = (plain_text * key)mod 26
		
		plain_text = cipher_text*(key ^ -1) mod 26
		
		
		working ...
		
		
		Enter the Plain Text : pay
		Enter the key Text : rrfvsvcct
		 Your input String Matrix Value is 
		15 
		0 
		24 
		 Your input key Matrix Value is 
		17 17 5 
		21 18 21 
		2 2 19 
		 Your Cipher Matrix is 
		11 
		13 
		18 
		inside GetInverseMatrix
		determinant value before is -939
		determinant value after is 23
		The cofactor MAtrix is
		300 -357 6 
		-313 313 0 
		267 -252 -51 
		The transpose of Matrix is
		300 -313 267 
		-357 313 -252 
		6 0 -51 
		 number 23 divisor 26
		inverse of value for determinant is 17
		 Your inverse key Matrix 
		238 425 119 
		119 17 136 
		102 0 17 
		your decrypted Matrix is 
		15 
		0 
		24 

		
		
	
*/
class MatrixHolder
{
	int row,col;
	int[][] matrix;
	
	public MatrixHolder(String str,int row,int col)
	{
		this.row=row;
		this.col=col;
		this.matrix=new int[row][col];
		generateMatrix(str);
	}
	
	public MatrixHolder(int row,int col)
	{
		this.row=row;
		this.col=col;
		this.matrix=new int[row][col];
	}
	public void generateMatrix(String str)
	{
		int r=0,c=0;
		for(int i=0;i<str.length();i++)
		{
			this.matrix[r][c++]=Character.toLowerCase(str.charAt(i))-97;
			if(c>=col)
			{
				c=0;r++;
			}
		}
	}
	
	public void display(String msg)
	{
		System.out.println(msg);
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				System.out.print( matrix[i][j]+ " ");	
			}
			System.out.println();
		}
	}
	
}
public class HillCipher
{
	public static int gcd(int a,int b)
	{
		if(a==0)
		
			return b;
		else
			return gcd(b%a,a);
	}
	
	public static int lcm(int a, int b)
	{
		return (a/gcd(a,b))*b;
	}
	
	public static MatrixHolder getMatrixMultiplication(MatrixHolder matrix1, MatrixHolder matrix2)
	{
		int row= matrix1.row,col = matrix2.col;
		
		MatrixHolder resultMatrix=new MatrixHolder(row,col);
		
		for(int i = 0; i < row; i++)
		{
			for(int j = 0;j < col;j++)
			{
				for(int k = 0; k < matrix2.row; k++)
				
					resultMatrix.matrix[i][j] += matrix1.matrix[i][k] * matrix2.matrix[k][j];
			}
		}
		
		return resultMatrix;
		
		
	}
	
	public static MatrixHolder matrixReducer(MatrixHolder matrixHolder)
	{
		for(int i=0;i < matrixHolder.row ; i++)
		{
			for(int j=0; j < matrixHolder.col;j++)
			
				matrixHolder.matrix[i][j]%=26;
		}
			
		return matrixHolder;
	}
	
	
	public static MatrixHolder getTransposeMatrix(MatrixHolder matrixHolder)
	{
		MatrixHolder newMatrix=new MatrixHolder(matrixHolder.col,matrixHolder.row);
		
		for(int j=0;j<matrixHolder.col;j++)
		{
			for(int i=0;i<matrixHolder.row;i++)
				newMatrix.matrix[j][i]=matrixHolder.matrix[i][j];
		}
		
		return newMatrix;
	}

	public static MatrixHolder encryptMatrix(MatrixHolder keyMatrix, MatrixHolder inputMatrix)
	{
		return matrixReducer(getMatrixMultiplication(keyMatrix,inputMatrix));
	}
	
	public static MatrixHolder decryptMatrix(MatrixHolder inverseKeyMatrix,MatrixHolder cipherMatrix)
	{
		return matrixReducer(getMatrixMultiplication(inverseKeyMatrix,cipherMatrix));
	}
	
	public static int getFactorValue(int[][] cofactor,int r,int c)
	{	
	
		/*
		System.out.println("Cofactor Value is");
		
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			
				System.out.print(cofactor[i][j]+" ");
			System.out.println();
		}
		*/
	
		int leftDiagonal=1,rightDiagonal=1,end=r-1;
		for(int i=0;i<r;i++)
		{
			leftDiagonal*= cofactor[i][i];
			rightDiagonal*= cofactor[end--][i];
		}
		
		//System.out.println(leftDiagonal - rightDiagonal);
		
		return leftDiagonal - rightDiagonal;
	}
	
	public static int getDeterminantValue(MatrixHolder matrixHolder)
	{
		int determinantValue = 0;
		
		int r = matrixHolder.row-1, c = matrixHolder.col-1;
		
		int[][] cofactor = new int[r][c];
		
		for(int i=0;i<matrixHolder.col;i++)
		{	
			int a=0,b=0;
			
			for(int x=0;x<matrixHolder.row;x++)
			{
					for(int y=0;y<matrixHolder.col;y++)
					{
						if(y!=i && x!=0)
						{
							cofactor[a][b++]=matrixHolder.matrix[x][y];
							if(b>=c)
							{
								b=0;a++;
							}
						}
					}
				
			}
			if(i%2==0)
				determinantValue+= matrixHolder.matrix[0][i]*getFactorValue(cofactor,r,c);
			else
				determinantValue-= matrixHolder.matrix[0][i]*getFactorValue(cofactor,r,c);
		}
		
		return determinantValue;
	}


	public static int getInverseOfNumber(int number,int divisor)
	{
		System.out.println(" number " + number + " divisor " + divisor);
		int i=1;
		while(true)
		{
			int val=i*number;
			if(val>divisor  && val%divisor==1)
				return i;
			i+=1;
		}
		
	}
	
	public static MatrixHolder getInverseMatrix( MatrixHolder matrixHolder)
	{
	
		System.out.println("inside GetInverseMatrix");
		
		int determinantValue=getDeterminantValue(matrixHolder);
		
		System.out.println("determinant value before is "+determinantValue);
		
		determinantValue%=26;
		
		if(determinantValue<0)
			determinantValue+=26;
		
		MatrixHolder newMatrix; 
		
		System.out.println("determinant value after is "+determinantValue);
		
		
		
		if(determinantValue!=0)
		{
			
			newMatrix = new MatrixHolder(matrixHolder.row,matrixHolder.col);
			
			int r = matrixHolder.row-1, c = matrixHolder.col-1,f = 0;
		
			int[][] cofactor = new int[r][c];
			
			for(int i=0;i < matrixHolder.row;i++)
			{	
				
				for(int j=0;j <  matrixHolder.col;j++)
				{
				
					int a=0,b=0;
					
					for(int x=0;x < matrixHolder.row;x++)
					{
						for(int y=0; y < matrixHolder.col ; y++)
						{
							if(x!=i && y!=j)
							{
								cofactor[a][b++] = matrixHolder.matrix[x][y];
								
								if(b >= c)
								{
									b=0;
									a++;
								}
							}
						}
					}
				
					if(f%2==0)
						newMatrix.matrix[i][j]= getFactorValue(cofactor,r,c);
					else
						newMatrix.matrix[i][j]= -getFactorValue(cofactor,r,c);
					f++;
				}
			 }
			 
			 newMatrix.display("The cofactor MAtrix is");
			 
			 newMatrix = getTransposeMatrix(newMatrix);
			 
			 newMatrix.display("The transpose of Matrix is");
			 
			 determinantValue = getInverseOfNumber(determinantValue,26);
			 
			 System.out.println("inverse of value for determinant is " + determinantValue);
			 
			 for(int i=0;i<newMatrix.row;i++)
			 {
			 	for(int j=0;j<newMatrix.col;j++)
			 	{
			 		newMatrix.matrix[i][j]%=26;
			 		
			 		if(newMatrix.matrix[i][j]<0)
			 			newMatrix.matrix[i][j]+=26;
			 		
			 		newMatrix.matrix[i][j]*= determinantValue;
			 	}			
			 }
			 
		}
		
		else
		{
			newMatrix = new MatrixHolder(0,0);
			
			System.out.println("Determinant Value is zero !!! so we can't take inverse of Matrix");
			
		}
		
		
		
		return newMatrix;
	}
	
	
	public static void main(String[] args)
	{
		Scanner scanner  = new Scanner( System.in );
		
		System.out.print("Enter the Plain Text : ");
		
		String inputText = scanner.nextLine();
				
		System.out.print("Enter the key Text : ");
		
		String keyText = scanner.nextLine();
		
		int inputLength = inputText.length(),keyLength = keyText.length();
		
		int  commonValue = gcd ( inputLength , keyLength );
		
		MatrixHolder inputMatrix = new MatrixHolder(inputText,commonValue,inputLength/commonValue);
		
		inputMatrix.display(" Your input String Matrix Value is ");
		
		MatrixHolder keyMatrix = new MatrixHolder(keyText,keyLength/commonValue,commonValue);
		
		keyMatrix.display(" Your input key Matrix Value is ");
		
		MatrixHolder cipherMatrix= encryptMatrix(keyMatrix,inputMatrix);
		
		cipherMatrix.display(" Your Cipher Matrix is ");
		
		MatrixHolder inverseKeyMatrix = getInverseMatrix(keyMatrix);
		
		inverseKeyMatrix.display(" Your inverse key Matrix ");
		
		MatrixHolder decryptedMatrix = decryptMatrix(inverseKeyMatrix,cipherMatrix);
		
		decryptedMatrix.display("your decrypted Matrix is ");
		
		
	}
}
