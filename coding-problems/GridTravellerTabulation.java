import java.util.Scanner;
/*
***  Grid Traveller - Tabulation method ***

You are given with the row and column of Grid. You are allowed to traverse one step left,right or bottom
You  will always start at 0,0 and destination is the row,column 
You have to find all the available paths to reach the destination.


### Example 1

i/p : 1 1 
o/p : 1 

### Example 2

i/p : 2 3
o/p : 3

### Example 3

i/p : 3 2
o/p : 3


### Example 4

i/p : 3 3
o/p : 6

### Example 5

i/p : 18 18
o/p : 2333606220


*/
public class GridTravellerTabulation{
    public static void main(String[] args)
    {
        int row= 18 , column=18;
        
        long[][] table = new long[row+1][column+1];

        table[1][1]=1;
        for(int i=0;i<=row;i++)
        {
            for(int j=0;j<=column;j++)
            {
                long currentValue = table[i][j];
                if(i+1<=row)
                    table[i+1][j] += currentValue;
                if(j+1<=column)
                    table[i][j+1] += currentValue;
            }
        }

        System.out.println(table[row][column]);
    }
}