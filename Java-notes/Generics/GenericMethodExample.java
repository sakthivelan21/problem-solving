/*
    *** output *** 
    
    1 2 3 4 
    1.2 3.4 5.6 7.6 
    Hi Pallavi I am Sakthi
*/
public class GenericMethodExample
{
    
    public static <T> void display(T [] array)
    {
        for(T element: array)
            System.out.print(element+" ");
        System.out.println();
    }
	public static void main(String[] args) {
		Integer[] numArr = {1,2,3,4};
		Double[] doubleArr = {1.2,3.4,5.6,7.6};
		
		String[] strArr = {"Hi","Pallavi","I","am","Sakthi"};
		
		display(numArr);
		
		display(doubleArr);
		
		display(strArr);
		
	}
}
