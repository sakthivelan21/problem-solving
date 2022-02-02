#include<stdio.h>

void main()
{
	printf("welcome to selection sort....\n Time complexity worst-case: O(n^2) best-case : O(n) \n Space Complexity : O(1)");
	int n; 
	printf("\n enter the number of elements in the array : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++) 
	{
		printf("\n enter the element : ");
		scanf("%d",&arr[i]);
	}
	printf("\n the element before sorting the array : ");
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	for(int i=0;i<n;i++)
	{
		int p=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[p]>arr[j])
			{	
				p=j;
			}
		}
		int temp=arr[i];arr[i]=arr[p];arr[p]=temp;
	}
	
	printf("\n the element after sorting the array : ");
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
}
