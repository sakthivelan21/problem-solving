#include <stdio.h>

void main()
{
	int arr[100]; 
	int *pt1=arr; 
	
	do{
	 int f; 
	 printf("enter your choice 1 to enter else enter anything to break\n");
	 scanf("%d",&f);
	 if(f==1)
	 {
	 	printf("enter your number to inserted\n");
	 	scanf("%d",pt1);pt1++;
	 	
	 }
	 else 
	    break;
	}while(1);
	
	int *ptr=arr; 
	printf("the elements in the array are :\n");
	while(ptr!=pt1)
	{
		printf("%d ",*ptr);
		ptr+=1;
	}
	
}
