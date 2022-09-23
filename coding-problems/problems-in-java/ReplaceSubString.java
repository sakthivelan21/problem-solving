/*
To write a program to replace sub string from string 

*** output *** 

To replace sub string from a string
Enter your base string : I am sakthi good to see you am am mam

Enter the substring you want to replace : am

Enter the replacement substring : you
After removing substring 'am' from string 'I am sakthi good to see you am am mam' is I you sakthi good to see you you you myou
By Using Regex
After removing substring 'am' from string 'I am sakthi good to see you am am mam' is I you sakthi good to see you you you myou
*/
import java.util.Scanner;
public class ReplaceSubString
{
    public static String removeSubString(String baseString,String subString,String replaceString)
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
            {
                index+=subStringLength;
                newString+=replaceString;
            }
            else
                newString+=baseString.charAt(index++);
        }

        return newString;
    }

    public static String removeSubStringByRegex(String baseString,String subString,String replaceString)
    {
        return baseString.replaceAll(subString,replaceString);
    }

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("To remove sub string from a string");


        System.out.print("Enter your base string : ");

        String baseString = scanner.nextLine().trim();

        System.out.print("\nEnter the substring you want to replace : ");

        String subString = scanner.nextLine().trim();

        System.out.print("\nEnter the replacement substring : ");

        String replaceString = scanner.nextLine().trim();

        System.out.println("After removing substring '"+subString+"' from string '"+baseString+"' is "+removeSubString(baseString,subString,replaceString));

        System.out.println("By Using Regex");

        System.out.println("After removing substring '"+subString+"' from string '"+baseString+"' is "+removeSubStringByRegex(baseString,subString,replaceString));
    }
}