/*
    ** Binary Search **

    *** output ***
    Element 2 is present at position 1 in array
*/
import java.util.Arrays;

public class RecursiveBinarySearch{
    public static int recursiveBinarySearch(int[] array,int target,int first,int end)
    {
        int mid = (first + end)/2;
        if(first<=end)
        {
            if(array[mid]==target)
                return mid;
            else if(target > array[mid])
                return recursiveBinarySearch(array,target,mid+1,end);
            else 
                return recursiveBinarySearch(array,target,first,mid-1);
        }
        return -1;
    }

    public static void main(String[] args)
    {
        int[] array = {10,3,12,4,67,8,321,2};


         //Sorting the Array first to make binary search work properly
        Arrays.sort(array);
        int first=0,end=array.length - 1;

        int index = recursiveBinarySearch(array,3,first,end);

        if(index==-1)
            System.out.println("Element 2 is not found in the list");
        else 
            System.out.println("Element 2 is present at position "+index+" in array");
    }
}