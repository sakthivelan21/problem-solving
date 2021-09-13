#include <stdio.h>
#include <stdlib.h>

/*
	example :
	5
	2 3 4 7 1
	2

	output:
	12 5

	input:
	6
	4 12 8 16 7 13
	5

	output:
	29 31
*/
int main()
{
	int n,k;
	printf("\nEnter the total length of the array: ");
	scanf("%d",&n);
	int array[n];
	printf("\n Enter the elements of the array : ");
	for(int i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("\n enter the rotation left shift  value count: ");
	scanf("%d",&k);

	// optimising the rotation of the array towards left; as it may repeat the shift after a period of time
	k=k%n;

	// getting the sum of the three next values in array without even shifting the values;

	int index=k,sum=0;

	for(int ctr=1;ctr<=n;ctr++)
	{
		sum+=array[index++];

		if(index==n)
			index=0;

		if(ctr%3==0)
		{
			printf("%d ",sum);
			sum=0;// making sum =0 to reuse the value..
		}
	}
	// if the length of the array is not divisible by 3...
	if(sum!=0)
		printf("%d",sum);
	return 0;
}
