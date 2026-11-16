/*
    Linear Search 

    *** output ***
    Element 2 is present at position 1 in array
*/

public class LinearSearch
{
    public static int linearSearch(int[] array,int target)
    {
        for(int i=0;i<array.length;i++)
        {
            if(array[i]==target)
            {
                return i;
            }
        }
        return -1;
    }
    public static void main(String[] args)
    {
        int[] array = {10,3,12,4,67,8,321,2};

        int index = linearSearch(array,3);

        if(index==-1)
            System.out.println("Element 2 is not found in the list");
        else 
            System.out.println("Element 2 is present at position "+index+" in array");
    }
}