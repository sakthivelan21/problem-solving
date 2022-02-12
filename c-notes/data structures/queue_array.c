#include<stdio.h>

int queue[100],front=0,rear=0; 

//the queue size 
int n;
void display()
{
	if(front==rear)
		printf("\n queue is empty");
	else
	{
		printf("\n elements in the queue are");
		for(int i=front;i<rear;i++) 
			printf("%d ",queue[i]);
	}
}

void insert()
{
	if(rear==n) 
		printf("\n queue is full");
	else
	{	int val;
		printf("\n enter the number to be inserted into the queue:");
		scanf("%d",&val);
		queue[rear++]=val;
	}		
}

void delete()
{
	if(front==rear)
	{
		front=0;rear=0; 
		printf("\n the queue is empty");
	}
	else
	{
		printf("\n the element dequeued from the queue is %d",queue[front++]);
	}
}

void main()
{
	int choice;
	printf("\n enter the size of your queue:");
	scanf("%d",&n);
	do
	{
		printf("\n the choice list are 1.insert 2.display 3.delete");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:			
					insert();
					break;
			case 2:
					display();break;
			case 3:
					delete();
					break;
			default:
				printf("\nPlease enter a valid choice(1,2,3)");
				
		}
	}while(choice<4);
}

