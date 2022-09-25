/*
Find all the numbers in a array that are strictly decreasing 


** case 1
868 666 765 821
The numbers strictly decreasing are [765, 821]

** case 2
123 210 828 986
The numbers strictly decreasing are [210, 986]

*/
import java.util.Scanner;
import java.util.ArrayList;
public class NumbersStrictlyDecreasing
{
    public static boolean isStrictlyDecreasing(String number)
    {
        for(int i=0;i<number.length()-1;i++)
            if(number.charAt(i)<=number.charAt(i+1))
                return false;
        return true;
    }   
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        String[] strArr = scanner.nextLine().split(" ");

        ArrayList<String> arrayList = new ArrayList<String>();

        for(String strNum:strArr)
        {
            if(isStrictlyDecreasing(strNum))
                arrayList.add(strNum);
        }
        System.out.println("The numbers strictly decreasing are "+ arrayList);
    }
}