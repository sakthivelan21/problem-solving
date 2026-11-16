/*
To write a program to remove sub string from string 

*** output *** 

To remove sub string from a string
Enter your base string : Hi I am sakthi am good am sam

Enter the substring you want to remove : am
After removing substring 'am' from string 'Hi I am sakthi am good am sam' is Hi I  sakthi  good  s
By Using Regex
After removing substring 'am' from string 'Hi I am sakthi am good am sam' is Hi I  sakthi  good  s

*/
import java.util.Scanner;
public class RemoveSubString
{
    public static String removeSubString(String baseString,String subString)
    {
        int index=0,baseStringLength=baseString.length(),itr;

        int subStringLength = subString.length();

        String newString = "";

        while( index <= (baseStringLength - subStringLength))
        {
            itr=0;
            while(itr<subStringLength && baseString.charAt(index+itr)==subString.charAt(itr))
                itr++;
            if(itr==subStringLength)
                index+=subStringLength;
            else
                newString+=baseString.charAt(index++);
        }

        return newString;
    }

    public static String removeSubStringByRegex(String baseString,String subString)
    {
        return baseString.replaceAll(subString,"");
    }

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("To remove sub string from a string");


        System.out.print("Enter your base string : ");

        String baseString = scanner.nextLine().trim();

        System.out.print("\nEnter the substring you want to remove : ");

        String subString = scanner.nextLine().trim();

        System.out.println("After removing substring '"+subString+"' from string '"+baseString+"' is "+removeSubString(baseString,subString));

        System.out.println("By Using Regex");

        System.out.println("After removing substring '"+subString+"' from string '"+baseString+"' is "+removeSubStringByRegex(baseString,subString));
    }
}