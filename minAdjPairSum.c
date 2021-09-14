#include <stdio.h>
#include <stdlib.h>
/*
	The program must accept N integer values. -1 should be ignored . The function must print the minimum sum of adjacent values.

	example :

	7
	50 -1 90 -1 -1 5 300

	output
	95

	my approach -- i tried to handle the loop more tough manner 
	bercolax approach was easy to handle and update
*/
int minAdjPairSum(int arr[],int n)
{
	int index=0,minSum=0,prev=0,found=0;

	while(index<n)
	{
		if(arr[index]==-1)
		{
			index++;continue;
		}
		found++;
		if(found==2)
		{
			minSum=prev+arr[index];
		}
		else if(found>2)
		{
			int curSum=arr[index]+prev;
			if(curSum<minSum)
				minSum=curSum;
		}
		prev=arr[index++];
	}

	return minSum;
}

void main()
{
	int n;
	printf("\n Enter the length of the array:");
	scanf("%d",&n);

	printf("\n Enter the array values: ");

	int array[n];

	for(int i=0;i<n;i++)
		scanf("%d",&array[i]);

	printf("\n minimum adjacent pair sum in the array ignoring -1 is %d",minAdjPairSum(array,n));
}
