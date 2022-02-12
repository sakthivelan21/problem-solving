#include<stdio.h>

void main()
{
	printf("welcome to Insertion sort....\n Time complexity worst-case: O(n^2) best-case : O(n) \n Space Complexity : O(1)");
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
	
	for(int i=1;i<n;i++)
	{
		int key=arr[i],j=i-1; 
		while(j>=0 && arr[j]>key)
			{
				arr[j+1]=arr[j];
				j-=1;
			}
		arr[j+1]=key;
	}
	
	printf("\n the element after sorting the array : ");
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
}
