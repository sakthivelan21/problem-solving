

public class ForEachLoop
{
    /*
        For Each loop and Array Literal
        
        *** output ***
        Total 150
    */
	public static void main(String[] args) {
		int[] numbers = {10,20,30,40,50};
		int total=0;
		for(int number : numbers)
		    total+=number;
		System.out.println("Total "+total);
	}
}
