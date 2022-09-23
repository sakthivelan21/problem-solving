/*
Write a program to replace a character with a given character in a string 

*** ouput ***

To replace a character from a string
Enter your base string : Sakthivelan

Enter the character that you want to replace : a

Enter the replacing character : p
After replacing the character 'a' from  'Sakthivelan' is Spkthivelpn

*/
import java.util.Scanner;

public class ReplaceCharacterInString
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("To replace a character from a string");

        System.out.print("Enter your base string : ");

        String baseString = scanner.nextLine().trim();

        System.out.print("\nEnter the character that you want to replace : ");

        char character = scanner.next().charAt(0);

        System.out.print("\nEnter the replacing character : ");

        char replaceCharacter = scanner.next().charAt(0);

        System.out.println("After replacing the character '"+character+"' from  '"+baseString+"' is "+ baseString.replace(character,replaceCharacter));
    }
}