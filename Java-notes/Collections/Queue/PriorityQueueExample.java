
import java.util.PriorityQueue;

/*
    Priority Queue collection methods 

    *** output *** 

    Element in pqueue [Hi, Pallavi, I love you]
    Peek element of pqueue Hi
    poping an element from pqueue
    Element in pqueue [I love you, Pallavi]
    Does pqueue contains 'Pallavi' ?? true
*/

public class PriorityQueueExample
{
    public static void main(String[] args)
    {
        PriorityQueue<String> pqueue = new PriorityQueue<String>();

       

        pqueue.add("Pallavi");

         pqueue.add("Hi");

        pqueue.add("I love you");

        System.out.println("Element in pqueue "+pqueue);

        System.out.println("Peek element of pqueue "+pqueue.peek());

        System.out.println("poping an element from pqueue");

        pqueue.remove("Hi");

        System.out.println("Element in pqueue "+pqueue);

        System.out.println("Does pqueue contains 'Pallavi' ?? " +pqueue.contains("Pallavi"))
;        // to clear the stack
        pqueue.clear();
    }
}