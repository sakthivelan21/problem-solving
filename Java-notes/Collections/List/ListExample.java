/*
    All methods of List Interface

    *** output *** 
    
    Current data in list : 
    12 1 
    Current data in list :
    12 1 10 20 30
    Current data in list :
    12 1 10 20 30 10 20 30 
    is element 1 present in the list : true
    index of element 1 present in the list : 1
    index of last occurence of element 1 present in the list : 1
    Changing an element at a position
    Current data in list :
    12 11 10 20 30 10 20 30 
    new sub list data :
    11 10 20 30
    clearing the list
    To check the array if it is empty true
    
*/ 
import java.util.List;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.ListIterator;

public class ListExample
{
    public static void display(List<Integer> list)
    {
        // list.size() returns the size of th list 
        for(int i=0;i<list.size();i++)
            System.out.print(list.get(i)+" ");

        System.out.println();
    }

    public static void iteratorDisplay(List<Integer> list)
    {
        Iterator<Integer> iterator = list.iterator();

        // checking for next element
        while(iterator.hasNext())
        {
            // printing the current element
            System.out.print(iterator.next()+" ");
        }

        System.out.println();
    }

    public static void listIteratorDisplay(List<Integer> list)
    {

        ListIterator<Integer> iterator = list.listIterator(0);

        // checking for next element
        while(iterator.hasNext())
        {
            // printing the current element
            System.out.print(iterator.next()+" ");
        }

        System.out.println();
    }

    public static void main(String[] args)
    {

        // normal intialization of array
        List<Integer> list = new ArrayList<Integer>();

        Integer[] arr = {10,20,30};

        // to intialize an array list with array 
        ArrayList<Integer> list2 = new ArrayList<Integer>(Arrays.asList(arr));

        // to add a single element to list
        list.add(1);

        // to add a element at a particular index
        list.add(0,12);

        System.out.println("Current data in list : ");

        display(list);

        // to add all elements to a list from another list 
        list.addAll(list2);

        System.out.println("Current data in list : ");

        iteratorDisplay(list);

        // to add from specified index to a list from another list
        list.addAll(2,list2);

        System.out.println("Current data in list : ");

        listIteratorDisplay(list);


        System.out.println("is element 1 present in the list : "+list.contains(1));

        System.out.println("index of element 1 present in the list : "+list.indexOf(1));

        System.out.println("index of last occurence of element 1 present in the list : "+list.lastIndexOf(1));

        System.out.println("Changing an element at a position");

        list.set(1,11);

        System.out.println("Current data in list : ");

        display(list);

        // to remove an element from an index
        list.remove(0);

        // to get sublist of a list 

        List<Integer> newList = list.subList(0,4);

        System.out.println("new sub list data : ");

        // to convert list to array 
        for(Object num : newList.toArray())
            System.out.print(num+" ");

        System.out.println("\nclearing the list ");
        
        list.clear();

        System.out.println("To check the array if it is empty "+list.isEmpty());



    }
}


