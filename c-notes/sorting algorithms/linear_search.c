#include <stdio.h>
#include <stdlib.h>

int linear_search(int *arr,int n,int element)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==element)
			return i;
	}
	return -1;
}

void main()
{
	int n,x;
	printf("\n enter the number of elements in the array: ");
	scanf("%d",&n);int a[n];
	for(int i=0;i<n;i++)
	{
		printf("\n enter your element: ");
		scanf("%d",&a[i]);
	}
	printf("\n enter the element you want to search: ");
	scanf("%d",&x);
	int val=linear_search(a,n,x);
	if(val==-1)
		printf("\n element not in the list");
	else 
		printf("\n element %d is in the position %d",x,val);		
}


