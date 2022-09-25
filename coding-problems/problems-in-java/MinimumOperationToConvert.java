/*
To find the minimum no. of operations to convert a string A to String B.
The only operation allowed is to put any character from A and insert it at front. Find if it’s possible to convert the string.
If yes, then output minimum no. of operations required for transformation.

Explaination 
Input:  A = "ABD", B = "BAD"
Output: 1
Explanation: Pick B and insert it at front.

Input:  A = "EACBD", B = "EABCD"
Output: 3
Explanation: Pick B and insert at front, EACBD => BEACD
             Pick A and insert at front, BEACD => ABECD
             Pick E and insert at front, ABECD => EABCD

** case 1
123123121
123121231
3

** case 2
EACBD
EABCD
*/
import java.util.Scanner;

public class MinimumOperationToConvert
{
    public static int getMinOps(String a,String b)
    {
        // checking if both the strings of same length
        if(a.length()!=b.length())
            return -1;
        // checking the count of characters in string a and b 
        // 256 refers to number of ascii values 
        int[] countArr = new int[256];


        for(int i = 0; i < a.length(); i++)
        {
            countArr[a.charAt(i)]++;
            countArr[b.charAt(i)]--;
        }
        for(int i = 0; i < 256; i++)
            if(countArr[i]!=0)
                return -1;

        // getting the count of minimum operations required to change the numbers 

        int res = 0 , i = a.length()-1, j = b.length()-1;
        
        while(i>=0)
        {
            // checking for mismatch and increment the count and decrement i 
            while(i>=0 && a.charAt(i)!=b.charAt(j))
            {
                i--;
                res++;
            }

            // if there's a match, decrementing both
            if(i>=0)
            {
                i--;
                j--;
            }
        }
        return res;
    }
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        String A = scanner.nextLine();
        String B = scanner.nextLine();
        
        int result = getMinOps(A,B);
        if(result==-1)
            System.out.println("It is not possible to convert String A to String B");
        else 
            System.out.println("The minimum count to convert String A to String B "+result);
    }
}