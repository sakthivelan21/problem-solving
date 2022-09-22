import java.util.List;
import java.util.ListIterator;
import java.util.Arrays;

/*
    List Iterator Example 

    *** output *** 

    Iterating in forward direction
    1 2 3 4 5 
    Iterating in backward direction
    5 4 3 2 1
*/

public class ListIteratorExample{

    public static void display(ListIterator iterator)
    {
        // checking for next element
        while(iterator.hasNext())
        {
            // printing the current element
            System.out.print(iterator.next()+" ");
        }
    }
    public static void main(String[] args)
    {
        Integer[] numbers = {1,2,3,4,5};
        
        List<Integer> list = Arrays.asList(numbers);

        ListIterator<Integer> iterator = list.listIterator(0);

        System.out.println("Iterating in forward direction");

        display(iterator);

        System.out.println();

        System.out.println("Iterating in backward direction");

        // checking for previous element
        while(iterator.hasPrevious())
        {
            // printing the previous element
            System.out.print(iterator.previous()+" ");
        }

        System.out.println();


    }
}