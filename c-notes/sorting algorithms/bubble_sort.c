#include<stdio.h>

void main()
{
	printf("welcome to bubble sort....\n Time complexity worst-case: O(n^2) best-case : O(n) \n Space Complexity : O(1)");
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
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{	
				int temp=arr[j];arr[j]=arr[j+1];arr[j+1]=temp;
			}
		}
	}
	
	printf("\n the element after sorting the array : ");
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
}
