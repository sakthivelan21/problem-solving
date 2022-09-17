/*
    Dynamic Memory Change  in Arrays

    *** output *** 

    1 2 3 4 5 
    0 0 0 0 0 0 0 0 0 0 

*/

public class DynamicArraySizeChange
{
    public static void displayArray(int[] array)
    {
        for(int num : array)
            System.out.print(num+" ");
        System.out.println();
    }
    public static void main(String[] args)
    {
        int[] array = new int[5];

        for(int i=0;i<array.length;i++)
            array[i]=i+1;
        
        displayArray(array);

        array = new int[10];

        displayArray(array);
    }
}