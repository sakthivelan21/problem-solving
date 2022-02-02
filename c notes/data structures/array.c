#include <stdio.h>
#include <stdlib.h>

int a[1000],i=0; 
void insert(int p)
{
	a[i++]=p;
}
void display()
{
	for(int j=0;j<i;j++) 
		printf("%d ",a[j]);
}
void delete()
{	
	i-=1;
}
void main()
{
	int choice,val;
	do
	{
		printf("\n the choice list are 1.insert 2.display 3.delete");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					printf("\nTo insert a value into array\n Enter the number to be inserted:");
					scanf("%d",&val);			
					insert(val);
					break;
			case 2:
					printf("\n the values in the array are:");
					display();break;
			case 3:
					printf("\n to remove the last element in the array.\n Last element removed from the array");
					delete();
					break;
			default:
				printf("\nPlease enter a valid choice(1,2,3)");
				
		}
	}while(choice<4);
}


