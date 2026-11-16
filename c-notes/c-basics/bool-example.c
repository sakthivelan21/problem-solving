#include<stdio.h>
#include<stdbool.h>
void main()
{
	bool x = true;
	bool y = false;
	printf("the value of %d && %d is %d\n",x,y,x&&y); 
	printf("the value of %d || %d is %d\n",x,y,x||y);
	printf("the value of !%d is %d\n",x,!x);
}
