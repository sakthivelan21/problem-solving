/*

*** Count of subsets with sum equal to X 

Explaination 

Input: arr[] = {1, 2, 3, 3}, X = 6 
Output: 3 
All the possible subsets are {1, 2, 3}, 
{1, 2, 3} and {3, 3}



** case 1
Enter the sum value : 16
Enter the length : 4
Enter the numbers in the set : 2 4 6 10
The Count of subset equal to the sum 16 is 2

** case 2 
Enter the sum value : 4
Enter the length : 4
Enter the numbers in the set : 1 2 3 4
The Count of subset equal to the sum 4 is

** case 3
Enter the sum value : 0
Enter the length : 4
Enter the numbers in the set : 1 2 3 4
The Count of subset equal to the sum 0 is 1
*/

import java.util.Scanner;
import java.util.ArrayList;

public class SubsetSumCount
{
    public static int getSubSetCount(int[] array,int sum)
    {
        // using dynamic programming approach Using Tabulation Method:
        int row = array.length+1,  col = sum + 1;

        // creating the table
        int[][] table = new int[row][col];

        table[0][0]=1;
        for(int i=1;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(j>=array[i-1])
                {
                    table[i][j]  =  table[i-1][j] + table[i-1][j-array[i-1]];
                }
                else{
                    table[i][j] = table[i-1][j];
                }
            }
        }

        return table[row-1][col-1];
        
    }
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the sum value : ");
        int sum = scanner.nextInt();
        System.out.print("Enter the length : ");
        int length = scanner.nextInt();
        int[] array = new int[length];
        System.out.print("Enter the numbers in the set : ");
        for(int i=0;i<length;i++)
            array[i] = scanner.nextInt();
        System.out.println("The Count of subset equal to the sum "+sum+" is "+getSubSetCount(array,sum));
    }
}