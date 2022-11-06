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

int search(int target)
{
	int pos = -1;
	for(int j=0;j<i;j++)
	{
		if(a[j]==target)
		{
			return j;
		}
	}
	return -1;
}

void delete(int element)
{	
	int pos = search(element);
	if(pos==-1)
		printf("\n The element %d is not found",element);
	else 
	{
		for(int j = pos;j<i-1;j++)
			a[j]=a[j+1];
		i--;
		printf("\n Element %d removed successfully",element);
	}
}
void main()
{
	int choice,val,element;
	do
	{
		printf("\n the choice list are 1.insert 2.display 3.delete 4.search");
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
					printf("\n Enter the element to be removed : ");
					scanf("%d",&element);
					delete(element);
					break;
			case 4:
					printf("\n Enter the element : ");
					scanf("%d",&element);
					int pos = search(element);
					if(pos==-1)
						printf("\nElement not found");
					else 
						printf("The element %d is found at position %d ",element,pos);
					break;
			default:
				printf("\nPlease enter a valid choice(1,2,3,4)");
				
		}
	}while(choice<5);
}


