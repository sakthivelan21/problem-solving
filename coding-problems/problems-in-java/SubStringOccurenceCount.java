/*
    Write a program to find the number of occurences of substring in a string

    *** output *** 

    Finding the number of occurences of substring in a string
    Enter your base string : I am Sakthi I am good to be human amI

    Enter the substring you want to search : am
    Count of 'am' in 'I am Sakthi I am good to be human amI' is 3


*/

import java.util.Scanner;

public class SubStringOccurenceCount
{

    // Naive Search Approach 
    // Time Complexity : O (m*n)
    public static int getSubStringCount(String baseString,String searchSubString)
    {
        int m = baseString.length(),n = searchSubString.length();
        int count=0,index;
        for(int i=0;i<m-n;i++)
        {
            index=0;
            while(index<n && baseString.charAt(i+index)==searchSubString.charAt(index))
                index++;
            if(index==n)
                count++;
        }

        return count;
    }

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Finding the number of occurences of substring in a string");

        System.out.print("Enter your base string : ");

        String baseString = scanner.nextLine();

        System.out.print("\nEnter the substring you want to search : ");

        String searchSubString = scanner.nextLine();

        System.out.println("Count of '"+searchSubString+"' in '"+baseString+ "' is "+ getSubStringCount(baseString,searchSubString));
    }
}