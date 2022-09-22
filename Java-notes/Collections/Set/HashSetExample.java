
import java.util.HashSet;

/*
    Hash Set  collection methods 

    *** output *** 
    Element in hashSet [2, 3, 4]
    Element in hashSet [2, 4]
    Size of hashSet 2
    Does hashSet contains 4 ?? true
    is hashSet Empty true
*/

public class HashSetExample
{
    public static void main(String[] args)
    {
        HashSet<Integer> hashSet = new HashSet<Integer>();

       

        hashSet.add(2);

        hashSet.add(3);

        //addding duplicate elements into list
        hashSet.add(3);

        hashSet.add(4);

        System.out.println("Element in hashSet "+hashSet);

        hashSet.remove(3);

        System.out.println("Element in hashSet "+hashSet);

        System.out.println("Size of hashSet "+hashSet.size());

        System.out.println("Does hashSet contains 4 ?? " +hashSet.contains(4));
        // to clear the stack
        hashSet.clear();

        System.out.println("is hashSet Empty "+hashSet.isEmpty());
    }
}