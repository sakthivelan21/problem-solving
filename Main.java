import java.util.*;
/*problem to find the greatest and smallest number in the diagonals with interface*/
interface DiagonalInterface
{
	public void diagonalMinMax(int matrix[][]);
}
class Diagonal implements DiagonalInterface
{
	public void diagonalMinMax(int matrix[][])
	{
		int length=matrix.length;
		int minLeftDiagonal=matrix[0][0],minRightDiagonal=matrix[0][length-1];
		int maxLeftDiagonal=0,maxRightDiagonal=0;

		int leftIndex=0,rightIndex=length-1;
		for(int row=0;row<length;row++)
		{
			if(matrix[row][leftIndex]<minLeftDiagonal)
				minLeftDiagonal=matrix[row][leftIndex];

			if(matrix[row][rightIndex]<minRightDiagonal)
				minRightDiagonal=matrix[row][rightIndex];

			if(matrix[row][leftIndex] > maxLeftDiagonal)
				maxLeftDiagonal=matrix[row][leftIndex];

			if(matrix[row][rightIndex] > maxRightDiagonal)
				maxRightDiagonal=matrix[row][rightIndex];

			leftIndex++;rightIndex--;
		}

		System.out.println("Smallest Element - 1: "+ minLeftDiagonal);
		System.out.println("Greatest Element - 1: "+ maxLeftDiagonal);
		System.out.println("Smallest Element - 2: "+ minRightDiagonal);
		System.out.println("Greatest Element - 2: "+ maxRightDiagonal);

		
	}
}
public class Main
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		Diagonal diagonal=new Diagonal();
		int length;
		length=sc.nextInt();
		int matrix[][]=new int[length][length];
		for(int i=0;i<length;i++)
		{
			for(int j=0;j<length;j++)
				matrix[i][j]=sc.nextInt();
		}

		diagonal.diagonalMinMax(matrix);
	}
}
