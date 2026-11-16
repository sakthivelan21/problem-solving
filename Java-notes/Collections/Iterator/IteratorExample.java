import java.util.List;
import java.util.Iterator;
import java.util.Arrays;

/*
    Iterator Example 

    *** output *** 

    1 2 3 4 5
*/

public class IteratorExample{
    public static void main(String[] args)
    {
        Integer[] numbers = {1,2,3,4,5};
        
        List<Integer> list = Arrays.asList(numbers);

        Iterator<Integer> iterator = list.iterator();

        // checking for next element
        while(iterator.hasNext())
        {
            // printing the current element
            System.out.print(iterator.next()+" ");
        }
    }
}