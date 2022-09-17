public class CompareToExample
{
	/*
		Sorting String with compareTo
		
		s1.compareTo(s2)
		
		f s1 > s2, it returns positive number  
		if s1 < s2, it returns negative number  
		if s1 == s2, it returns 0  
		
		*** output ***
		
		alia bhatt
		dia
		jennifer aniston
		sai pallavi
		sakthi
	*/
	public static void main(String[] args) {
		String[] arr = {"sakthi","sai pallavi","alia bhatt","dia","jennifer aniston"};
		
		for(int i=0;i<arr.length;i++)
		{
			int temp=i;
			for(int j=i+1;j<arr.length;j++)
			{
				if(arr[temp].compareTo(arr[j]) > 0)
					temp=j;
			}
			String tempStr = arr[i];
			arr[i]=arr[temp];
			arr[temp]=tempStr;
			System.out.println(arr[i]);
		}
		
	}
}
