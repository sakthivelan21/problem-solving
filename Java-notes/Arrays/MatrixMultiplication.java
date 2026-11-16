/*
    Matrix Multiplication 

    *** output *** 

    First Matrix
    1 2 3 
    4 4 5 
    4 5 6 
    Second Matrix
    1 2 3 
    4 5 6 
    7 8 9 
    Result Matrix
    21 24 27 
    35 40 45 
    42 48 54 
*/


public class MatrixMultiplication
{

    public static void displayArray(int[][] array,int row,int col)
    {
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
                System.out.print(array[i][j]+" ");
            System.out.println();
        }
    }
    
    
    public static void main(String[] args)
    {
        int[][] mat1 ={ {1,2,3},{4,4,5},{4,5,6} };

        int[][] mat2 = { {1,2,3},{4,5,6},{7,8,9}};

        int m1 = 3 , n1 = 3, m2 = 3, n2 = 3;

        if(n1!=m2)
        {
            System.out.println("Matrix multiplication cannot be performed as (m*n n*q) n is not matching");
            System.exit(0);
            
        }
        int[][] mat3 = new int [m1][n2];

        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                for(int k=0;k<m2;k++)
                {
                    mat3[i][j] = mat1[i][k]*mat2[k][j];
                }
            }
        }

        System.out.println("First Matrix");

        displayArray(mat1,m1,n1);

        System.out.println("Second Matrix");

        displayArray(mat2,m2,n2);

        System.out.println("Result Matrix");

        displayArray(mat3,m1,n2);
    }
}
