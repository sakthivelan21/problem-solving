#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	This is an example of two dimensional matrix creating using dynamic array implementation
*/
char** stringToMatrix(int N,char *str1,char *str2)
{
	char **matrix=malloc(sizeof(char*)*N);
	int x=0,y=0,alternateFlag=0;
	for(int row=0;row<N;row++)
	{
		matrix[row]=malloc(sizeof(char)*N);
		for(int col=0;col<N;col++)
		{
			if(alternateFlag==0)
			{
				if(x<strlen(str1))
					matrix[row][col]=str1[x++];
				else
					matrix[row][col]=str2[y++];
			}
			else
			{
				if(y<strlen(str2))
					matrix[row][col]=str2[y++];
				else
					matrix[row][col]=str1[x++];
			}
			alternateFlag^=1;
		}
	}
	return matrix;
}

int main()
{
	int N;
	scanf("%d\n",&N);
	char str1[N*N],str2[N*N];
	scanf("%s\n%s",str1,str2);
	char** matrix=stringToMatrix(N,str1,str2);
	if(matrix==NULL)
		printf("Matrix is not formed\n");
	for(int row=0;row<N;row++)
	{
		for(int col=0;col<N;col++)
		{
			printf("%c ",matrix[row][col]);
		}
		printf("\n");
	}
	return 0;
}
