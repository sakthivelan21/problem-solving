#include<stdio.h>
void merge(int arr[],int first,int mid,int last)
{	
	int fbound=mid-first+1,lbound=last-mid;
	int firstArr[fbound],lastArr[lbound];
	for(int i=0;i<fbound;i++)
		firstArr[i]=arr[first+i];
	for(int i=0;i<lbound;i++)
		lastArr[i]=arr[mid+1+i];
	int i=0,j=0,p=first;
	while(i<fbound && j<lbound)
	{
		if(firstArr[i]<=lastArr[j])
			arr[p++]=firstArr[i++];
		else 
			arr[p++]=lastArr[j++];
	}
	while(i<fbound)
		arr[p++]=firstArr[i++];
	while(j<lbound)
		arr[p++]=lastArr[j++];
}

void mergesort(int arr[],int first,int last)
{
	if(first<last)
	{
		int mid=(first+last)/2;
		mergesort(arr,first,mid);
		mergesort(arr,mid+1,last);
		merge(arr,first,mid,last);
	}
}
void main()
{
	printf("welcome to Merge sort....\n Time complexity worst-case: O(nlogn) best-case : O(nlogn) \n Space Complexity : O(n)");
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
	
	mergesort(arr,0,n-1);
	
	printf("\n the element after sorting the array : ");
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
}
