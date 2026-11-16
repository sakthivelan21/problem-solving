/*
A program to tokenize a string in java

*** output ***
Enter your base string : I am sakthi velan

Enter the delimiters where you want to split :  
Count of tokens are 4
Tokenized Strings are :
I
am
sakthi
velan
*/
import java.util.StringTokenizer;
import java.util.Scanner;

public class StringTokenizerExample{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your base string : ");

        String baseString = scanner.nextLine().trim();

        System.out.print("\nEnter the delimiters where you want to split : ");

        String delimiter = scanner.nextLine();
       
        StringTokenizer stringTokenizer = new StringTokenizer(baseString,delimiter);

        System.out.println("Count of tokens are "+stringTokenizer.countTokens());

        System.out.println("Tokenized Strings are : ");

        // If tokens are present
        while (stringTokenizer.hasMoreTokens())
            // Print the token
            System.out.println(stringTokenizer.nextToken());

        
    }
}