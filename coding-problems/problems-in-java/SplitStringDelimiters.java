/*
A program to split a string with two or more delimiters
*** output ***
Enter your base string : sa,kthi.velan

Enter the delimiters where you want to split : ,. 
Splitted String : 
sa kthi velan 
*/

import java.util.Scanner;

public class SplitStringDelimiters{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your base string : ");

        String baseString = scanner.nextLine().trim();

        System.out.print("\nEnter the delimiters where you want to split : ");

        String subString = scanner.nextLine();

       // [., ]+  - regex
        String[] array = baseString.split("["+subString+"]+");

        System.out.println("Splitted String : ");

        for(String str:array)
            System.out.print(str+" ");
    }
}