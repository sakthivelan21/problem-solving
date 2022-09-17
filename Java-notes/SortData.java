
class SortAlgorithms
{
    int[] selectionSort(int[] array)
    {
        for(int i=0;i<array.length;i++)
        {
            int temp = i;
            for(int j=i+1;j<array.length;j++)
            {
                if(array[temp]>array[j])
                    temp=j;
            }
            
            int tempVal = array[i];
            
            array[i] = array[temp];
            
            array[temp] = tempVal;
            
        }
        
        return array;
        
    }
    int[] bubbleSort(int[] array)
    {
        for(int i=0;i<array.length;i++)
        {
            int temp = i;
            for(int j=i+1;j<array.length;j++)
            {
                if(array[temp]>array[j])
                {
                    int tempVal = array[temp];
            
                    array[j] = array[temp];
                    
                    array[temp] = tempVal;
                }
            }
            
            
            
        }
        
        return array;
        
    }
    
    int[] insertionSort(int[] array)
    {
        for(int i=1;i<array.length;i++)
        {
            int j=i-1;
            int key = array[i];
            while(j>=0 && key<array[j])
            {
                array[j+1]=array[j];
                j--;
            }
            array[j+1]=key;
        }
        return array;
    }
}

public class SortData
{
    /*
        Array sorting - Selection Sort , Bubble sort 
        
        *** output ***
        Total 150
    */
	public static void main(String[] args) {
		int[] numbers = {10,2,30,15,5};
		SortAlgorithms sortAlgorithms = new SortAlgorithms();
		System.out.println("Sorted values are ");
		for(int num : sortAlgorithms.insertionSort(numbers))
		{
		    System.out.print(num+" ");
		}
	
	}
}
