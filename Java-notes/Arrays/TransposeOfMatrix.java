public class TransposeOfMatrix
{
    /*
        Transpose of a Matrix 
        
        *** output *** 
        1 2 3 4
        1 2 3 4
        1 2 3 4
        1 2 3 4
    */
    public static void transpose(int[][] arr)
    {
        for(int i=0;i<arr.length;i++)
        {
            for(int j=i+1;j<arr[i].length;j++)
            {
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }
    
	public static void main(String[] args) {
		int array[][]= {
		    {1,1,1,1},
		    {2,5,2,3},
		    {3,3,3,3},
		    {4,4,4,4}
		};
		
		transpose(array);
		
		for(int[] arr : array)
		{
		    for(int num: arr)
		        System.out.print(num+" ");
		    System.out.println();
		}
	}
}

