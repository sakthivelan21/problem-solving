#include <stdio.h>
#include <stdlib.h>

// top is the pointer of the array . top=-1 to indicate that the stack is empty
int stack[100],top=-1;

// to get the size of the stack from the user
int n;
void push()
{	
   if(top>=n-1) 
   		printf("\n the stack is full!!! stack overflow");
   else
   {
	   int number; 
	   printf("\nEnter the number to be pushed into the stack:");
	   scanf("%d",&number);
	   stack[++top]=number;
	}
}

void pop()
{
	if(top==-1) 
		printf("\n the stack is empty");
	else
		{
			printf("\n Last element removed from the stack:%d",stack[top]);
			top-=1;
		}
}

void display() 
{
	if(top!=-1)
	{
		printf("\n the elements in the stack in the entered order:");
		for(int i=top;i>=0;i--) 
			printf("\n %d",stack[i]);
	}
	else
		printf("\n the stack is empty!!!");
}

void main()
{
	printf("\n enter the size of your stack:");
	scanf("%d",&n);
	int choice;
	do
	{
		printf("\n the choice list are 1.push 2.display 3.pop");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:		
					push();
					break;
			case 2:
					display();break;
			case 3:
					pop();
					break;
			default:
				printf("\nPlease enter a valid choice(1,2,3)");
				
		}
	}while(choice<4);
}

