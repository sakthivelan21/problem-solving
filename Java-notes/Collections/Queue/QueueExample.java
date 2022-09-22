import java.util.Queue;
import java.util.Iterator;
import java.util.LinkedList;

/*

** output ** 
Displaying Queue Data 1 
2
3
4
5

Dropping element 3
Displaying Queue Data 1
2
4 
5

The size of queue is 4
The peek element is 1
The poll element is 1
*/
public class QueueExample{

    public static void display(Iterator iterator)
    {
        System.out.print("Displaying Queue Data ");
        while(iterator.hasNext())
        {
            System.out.println(iterator.next()+" ");
        }
        System.out.println();
    }
    public static void main(String[] args)
    {
        //Queue is an interface which is implemented with the help of Linked List
        Queue<Integer> queue = new LinkedList<Integer>();

        for(int i=0;i<5;i++)
            queue.add(i+1);

        display(queue.iterator());

        System.out.println("Dropping element 3 ");

        queue.remove(3);

        display(queue.iterator());

        System.out.println("The size of queue is "+queue.size());

        System.out.println("The peek element is "+queue.peek());

        System.out.println("The poll element is "+queue.poll());// it will remove the top element 




    }
}