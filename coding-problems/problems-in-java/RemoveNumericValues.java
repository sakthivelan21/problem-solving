/*
Write a program to eliminate numeric values in java 

*** output *** 

To eliminate numeric values in the string 
Enter your string : Hi12343 I am sakthi243

After removeing the numeric values
By Normal Method : Hi I am sakthi
By Regex Method: Hi I am sakthi

*/
import java.util.Scanner;

public class RemoveNumericValues
{
    // Time Complexity : O(N)
    // Space Complexity : O(1)
    public static String removeNumericValues(String baseString)
    {
        String newString="";
        for(int i =0;i<baseString.length();i++)
        {
            if(!Character.isDigit(baseString.charAt(i)))
                newString+=baseString.charAt(i);
        }
        return newString;
    }

     // Time Complexity : O(N)
    // Space Complexity : O(1)
    public static String removeNumericValuesByRegex(String baseString)
    {
        return baseString.replaceAll("\\d","");
    }
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.println("To eliminate numeric values in the string ");

        System.out.print("Enter your string : ");

        String baseString = scanner.nextLine();

        System.out.println("\nAfter removeing the numeric values ");

        System.out.println("By Normal Method : "+removeNumericValues(baseString));

        System.out.println("By Regex Method: "+removeNumericValuesByRegex(baseString));
    }
}