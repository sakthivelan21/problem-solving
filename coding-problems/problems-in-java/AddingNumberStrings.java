/*
Num1 and Num2 are represented as string, return the sum of num1 and num2 as string 

both the numbers are positive numbers 
we must solve the problem without using any built in library for handling large integers(BigInteger)

you must also not convert the inputs to integers directly

** case 1 
11 123
The sum of 11 + 123 = 134

** case 2 
456 77
The sum of 456 + 77 = 533

** case 3
0 0
The sum of 0 + 0 = 0
*/
import java.util.Scanner;
public class AddingNumberStrings
{

    public static String getSum(String a, String b)
    {
        String num="";
        int i = a.length()-1,j = b.length()-1;
        int digitSum,remainder=0;
       
        while(i>=0 || j>=0)
        {
            if(i>=0 && j>=0)
                digitSum = ((int)a.charAt(i--)-48) + ((int)b.charAt(j--) - 48);
            else if(i>=0)
                digitSum = ((int)a.charAt(i--)-48);
            else 
                digitSum = ((int)b.charAt(j--)-48);

            digitSum+=remainder;

            if(digitSum<=9)
            {
                num = Character.toString((char)(digitSum+48)) + num ; 
                remainder=0;
            }
            else 
            {
                remainder = digitSum/10;
                num = Character.toString((char)(digitSum%10+48))+num;
            }
            
        }
        if(remainder>0)
            num = Character.toString(remainder) + num ; 
        return num;
    }
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        String[] numbers = scanner.nextLine().split(" ");
        System.out.printf("The sum of %s + %s = %s",numbers[0],numbers[1],getSum(numbers[0],numbers[1]));
    }
}