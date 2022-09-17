/*
    ** Binary Search **

    *** output ***
    Element 2 is present at position 1 in array
*/
import java.util.Arrays;

public class BinarySearch{
    public static int binarySearch(int[] array,int target)
    {
        //Sorting the Array first to make binary search work properly
        Arrays.sort(array);

        int start=0,end=array.length-1,mid;
        
        while(start<=end)
        {
            mid = (start+end)/2;

            if(array[mid]==target)
                return mid;

            if( target > array[mid])
                start = mid + 1;
            else 
                end = mid - 1;

        }
        return -1;
    }

    public static void main(String[] args)
    {
        int[] array = {10,3,12,4,67,8,321,2};

        int index = binarySearch(array,3);

        if(index==-1)
            System.out.println("Element 2 is not found in the list");
        else 
            System.out.println("Element 2 is present at position "+index+" in array");
    }
}