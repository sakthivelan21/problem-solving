/*
Write a program to compare two strings with and without ignoring case 

*** output *** 

Comparing two strings with and without ignoring case

Enter the first String: Sakthi

Enter the Second String: SAKthi

Without ignoring case
Sakthiis not equal to SAKthi
With ignoring case
Sakthiis equal to SAKthi

*/

import java.util.Scanner;

public class CompareTwoStrings{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Comparing two strings with and without ignoring case");

        System.out.print("\nEnter the first String: ");

        String firstString = scanner.nextLine().trim();

        System.out.print("\nEnter the Second String: ");

        String secondString = scanner.nextLine().trim();

        System.out.println("\nWithout ignoring case");
       
        String result = firstString.equals(secondString) ? "is equal to ":"is not equal to ";
       
        System.out.println(firstString + result + secondString);

        System.out.println("With ignoring case");
       
        result = firstString.equalsIgnoreCase(secondString) ? "is equal to ":"is not equal to ";
       
        System.out.println(firstString + result + secondString);

        


    }
}