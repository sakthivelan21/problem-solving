#include <stdio.h>

void main()
{
	int n,k=0; 
	printf("\n the pointer variables and the variable whose address it will store must be same data type");
	printf("\n pointers in c enter a number:");
	scanf("%d",&n); 
	
	// creating a pointer an assigning it to point it to n; 
	
	int *ptr,*i=&k; 
	ptr=&n; 
	printf("\n dereferencing the value with the pointer %d",*ptr);
	
	printf("\n printing the address of the value %p",ptr);
	
	printf("\n printing all the even numbers from %d to %d " ,*i,*ptr);
	
	while (*i <= *ptr)
	{
		if(*i % 2==0) 
			printf("%d ",*i); 
		*i+=1;
	}
	
}
