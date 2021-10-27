#include <stdio.h>
#include <stdlib.h>

void printEveryRowCharacters(int R,int C,int *arr)
{
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			printf("%d ",arr[i*C+j]);
		}
		printf("\n");
	}
}


int main()
{
	int R,C;
	scanf("%d %d",&R,&C);
	int array[R][C];

	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			scanf("%d ",&array[i][j]);
		}
	}
	printEveryRowCharacters(R,C,(int*)array);
	return 0;
}

