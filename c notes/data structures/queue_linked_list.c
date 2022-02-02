#include<stdio.h>
#include<stdlib.h>


struct node 
{
	int data;
	struct node *next;
}*front=NULL,*rear=NULL;
void insert()
{
	int element;
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\n enter the element to be inserted into the queue:");
	scanf("%d",&element);
	newnode->data=element;
	newnode->next=NULL;
	if(rear==NULL)
	{
		
		rear=newnode;
		front=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}
void delete()
{
	if(front==NULL)
		{
			printf("\n the queue is empty");
		}
	else
	{
		struct node *p;
		p=front;
		if(front==rear)
			front=rear=NULL;
		else
			front=p->next;
		printf("\n the element removed from the queue %d",p->data);
		free(p);
	}
		
}
void display()
{
	if(front==NULL)
		printf("\n the queue is empty");
	else
		{
			struct node *p;
			printf("\n the elements in the queue are : ");
			p=front;
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
	front=(struct node *)malloc(sizeof(struct node));
	front=NULL;
	
	int choice;
	do
	{
		printf("\n the choices are 1.insert 2.delete 3.display \nenter your choice:");
		scanf("%d",&choice); 
		switch(choice)
		{
			case 1:
				insert();break;
			case 2:
				delete();break;
			case 3:
				display();break;
			default:
				printf("\n enter only valid choices 1/2/3");
		}
	}while(choice<4);
}
