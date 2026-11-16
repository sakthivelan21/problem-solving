#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data; 
	struct node *next;
}*Stack=NULL;
void push()
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	int value; 
	printf("\n Enter the value to be pushed:");
	scanf("%d",&value);
	if(Stack->next==NULL)
	{	
		p->data=value;
		p->next=NULL;
		Stack->next=p;
	}
	else
	{
		p->data=value;
		p->next=Stack->next;
		Stack->next=p;
	}
}
void pop()
{
	struct node *p;
	if(Stack->next==NULL)
		printf("\n the stack is empty");
	else
	{
		p=Stack->next;
		printf("\n the element %d is popped from the stack",p->data);
		Stack->next=p->next;
		free(p);		
	}
}
void display()
{
	struct node *p;
	p=Stack->next; 
	if(Stack->next==NULL)
		printf("\n the stack is empty");
	else
	{
	while(p!=NULL)
	{
		printf("%d->",p->data);
		p=p->next;
	}
	printf("NULL");
	}
}
void main()
{
	Stack=(struct node *)malloc(sizeof(struct node));
	Stack->next=NULL;
	
	int choice;
	do 
	{
		printf("\n Enter the choice 1.push 2.pop 3.display:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push(); 
				break; 
			case 2:
				pop();
				break;
			case 3:
				display();break; 
			default:
				printf("\n Enter only the choices 1/2/3");
		}
	}while(choice<4);
	
}
