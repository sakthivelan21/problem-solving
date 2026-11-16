/*

Write a program to concatenate two strings 

*** output ***


Concatenating two strings

Enter the first String: sakthi

Enter the Second String: pallavi
Concatenated String is sakthi pallavi

*/

import java.util.Scanner;

public class StringConcatenation
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Concatenating two strings");

        System.out.print("\nEnter the first String: ");

        String firstString = scanner.nextLine().trim();

        System.out.print("\nEnter the Second String: ");

        String secondString = scanner.nextLine().trim();

        System.out.println("Concatenated String is "+firstString.concat(" "+secondString));
    }
}