#include <stdio.h>
#include <stdlib.h>

/*
	input
	4 5
	96 66 74 60 18
	42 12 96 62 15
	68 29 64 92 24
	60 44 37 61 53
	
	output
	
	12 15 42 60 61 
	18 29 53 62 92 
	24 44 64 68 96 
	37 60 66 74 96
*/

void displayArray(int row,int col,int *matrix)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",matrix[i*col+j]);
		}
		printf("\n");
	}

}

void sortByColumn(int row,int col,int* matrix)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			int temp=j,r=i*col;
			for(int k=j+1;k<col;k++)
			{
				if(matrix[r+temp]>matrix[r+k])
					temp=k;
			}
			int temp_val=matrix[r+temp];
			matrix[r+temp]=matrix[r+j];
			matrix[r+j]=temp_val;
		}
	}
}

void sortByRow(int row,int col,int* matrix)
{
	for(int j=0;j<col;j++)
	{
		for(int i=0;i<row;i++)
		{
			int temp=i;
			for(int k=i+1;k<row;k++)
			{
				if(matrix[j+col*temp] > matrix[j+col*k])
					temp=k;
			}
			int temp_val=matrix[j+col*temp];
			matrix[j+col*temp]=matrix[j+i*col];
			matrix[j+i*col]=temp_val;
		}
		
		
	}
}
void main()
{
	int r,c;
	scanf("%d %d",&r,&c);

	int matrix[r][c];

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			scanf("%d",&matrix[i][j]);
	}

	printf("\n enter unsorted array:\n");

	displayArray(r,c,(int*)matrix);

	sortByColumn(r,c,(int*)matrix);

	printf("\n sorter array after column sorting:\n");

	displayArray(r,c,(int*)matrix);

	sortByRow(r,c,(int*)matrix);

	printf("\n sorted array after row sorting\n");

	displayArray(r,c,(int*)matrix);
}
