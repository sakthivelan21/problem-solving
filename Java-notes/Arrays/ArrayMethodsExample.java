/*
    Array Built-in Methods 

*** output ***

** Arrays.sort **
Partial Sorted Array:
*
1 3 4 5 2 
Sorted Array:
*
1 2 3 4 5 
** Arrays.fill **
Displaying all array values with Fill Method 1
*
1 1 1 1 1 
Displaying the array values where Fill method used to fill 2 from 0 to 2 index: 
*
2 2 1 1 1 
Searching for element 2 in array 
*
2 2 1 1 1 
** Arrays.binarySearch **
Element 2 not found
Creating Copy of the Array 
** Arrays.copyOf **
*
2 2 1 1 1 null null null null 
Creating a particular range copy of an array
*
2 2 1 
** Arrays.equals **
Comparing two Arrays
First Array
*
2 2 1 1 1 
Second Array
*
2 2 1 
Are both first and Second Array equal false
Converting array to String
Integer array to String [2, 2, 1, 1, 1]
Character array to String [Ljava.lang.Integer;@7adf9f5f
** Arrays.hashCode **
hash code of the array is 30536768
** Arrays.deepToString **
Multimensional Array to String is [[1, 2], [3, 4]]

*/
import java.util.Arrays;

public class ArrayMethodsExample{

    public static <T> void displayArray(T[] array)
    {   
        System.out.println("*");
        for(T element : array)
        {
            System.out.print(element+" ");
        }

        System.out.println();
    }
    
    public static void main(String[] args)
    {
        Integer [] array = {1,3,4,5,2};

        System.out.println("** Arrays.sort **");


        // partial sort 
        //Array.sort(array,sortIndex,EndIndex)
        Arrays.sort(array,0,3);

        System.out.println("Partial Sorted Array:");

        displayArray(array);

        //Sorting with in built class 
        Arrays.sort(array);

        System.out.println("Sorted Array:");
        
        displayArray(array);

        System.out.println("** Arrays.fill **");
        
        System.out.println("Displaying all array values with Fill Method 1");

        // filling all the values of array 
        // Arrays.fill(array,element)
        Arrays.fill(array,1);

        displayArray(array);

        System.out.println("Displaying the array values where Fill method used to fill 2 from 0 to 2 index: ");

        // filling values into array of certain range
        // Arrays.fill(array,fromIndex,toIndex,element)
        Arrays.fill(array,0,2,2);

        displayArray(array);

        System.out.println("Searching for element 2 in array ");
        
        displayArray(array);

        System.out.println("** Arrays.binarySearch **");

        // performing binary search 
        // Arrays.binarySearch(array,target)
        int index = Arrays.binarySearch(array,2);

        if(index>=0)
            System.out.println("Element 2 is present at position "+index);
        else 
            System.out.println("Element 2 not found");

        System.out.println("Creating Copy of the Array ");
        
        System.out.println("** Arrays.copyOf **");

        // Arrays.copyOf(array,size);
        Integer[] newArray = Arrays.copyOf(array,9);

        displayArray(newArray);

        System.out.println("Creating a particular range copy of an array");

        Integer[] smallArray = Arrays.copyOfRange(array,0,3);

        displayArray(smallArray);

        System.out.println("** Arrays.equals **");

        System.out.println("Comparing two Arrays");

        System.out.println("First Array");

        displayArray(array);

        System.out.println("Second Array");

        displayArray(smallArray);

        // Arrays.equals(firstArray,secondArray)
        System.out.println("Are both first and Second Array equal "+ Arrays.equals(array,smallArray));

        Character[] name = {'s','a','k','t','h','i'};

        // converting array to string
        // Arrays.toString(array);

        System.out.println("Converting array to String");

        System.out.println("Integer array to String " + Arrays.toString(array));

        System.out.println("Character array to String "+ String.valueOf(array));

        System.out.println("** Arrays.hashCode **");

        // getting the hashCode of the array 
        System.out.println("hash code of the array is "+Arrays.hashCode(array));

        System.out.println("** Arrays.deepToString **");

        // Arrays.deepToString to convert multi-dimensional array into string
        Integer[][] twoDimensionArray = {{1,2},{3,4}};

        // to sort a two dimensional array based on starting value

        Arrays.sort(twoDimensionArray, (a, b) -> Integer.compare(a[0], b[0]));

        System.out.println("Multimensional Array to String is "+Arrays.deepToString(twoDimensionArray));

    }
}