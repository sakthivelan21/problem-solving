/*
    Vector Example 
    
    *** output *** 
    
    Vector current size : 0
    Vector capacity :5
    5
    First element : 1
    Last element : Sakthi
    Element at 0 position : 1
    Element at 1 position : Sakthi
*/
import java.util.Vector;
public class VectorExample
{
	public static void main(String[] args) {
		 // initializing a vector with size 5 which is also optional
        Vector vector = new Vector(5);

        // to get the vector size 
        System.out.println("Vector current size : "+ vector.size());

        // to get the vector capacity
        System.out.println("Vector capacity :"+vector.capacity());

        vector.addElement(new Integer(1));

        vector.addElement(new String("Sakthi"));


        System.out.println(vector.capacity());

        System.out.println("First element : "+vector.firstElement());

        System.out.println("Last element : " + vector.lastElement());

        for(int i=0;i<vector.size();i++)
            System.out.println("Element at "+i+" position : "+ vector.get(i));

        
	}
}
