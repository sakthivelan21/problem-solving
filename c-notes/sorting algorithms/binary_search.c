#include <stdio.h>
#include <stdlib.h>

int binary_search(int *arr,int first,int last,int element)
{
	while(first<=last)
	{
		int mid=(first+last)/2;
		
		if(arr[mid]==element)
			return mid;
		else if(arr[mid]>element)
			last=mid-1;
		else
			first=mid+1;
	}
	return -1;
}

void main()
{
	int n,x;
	printf("\n enter the number of elements in the array: ");
	scanf("%d",&n);int a[n];
	printf("\n enter your elements in sorted order for binary search:");
	for(int i=0;i<n;i++)
	{
		printf("\n enter your element: ");
		scanf("%d",&a[i]);
	}
	
	printf("\n enter the element you want to search: ");
	scanf("%d",&x);
	int val=binary_search(a,0,n-1,x);
	if(val==-1)
		printf("\n element not in the list");
	else 
		printf("\n element %d is in the position %d",x,val);		
}


