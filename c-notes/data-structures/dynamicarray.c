#include <stdio.h>
// you need stdlib package for using dynamic memory allocation
#include<stdlib.h>

void main()
{
	int n; 
	printf("\nEnter the size of the array:");
	scanf("%d",&n);
	int *arr=(int*)malloc(sizeof(int)*n);
	if(arr==NULL)
		exit(1);
	for(int i=0;i<n;i++) 
	{
		printf("\nenter the number to be inserted:");
		scanf("%d",&arr[i]);
	}
	printf("\n elements in the array are");
	for(int i=0;i<n;i++) 
		printf("%d ",arr[i]);
	free(arr);
	
}
