#include <stdio.h>
#include <stdlib.h>

// structure to hold the data  for  the linked list
struct node
{
  int data;
  // it is a self referential pointer which is very useful and it points to the same struct node
  struct node *next;
}*LinkedList=NULL;// we are creating a  pointer varaible LinkedList to point to the node


struct node * find(int element)
{
	struct node *p;p=LinkedList->next;
	while(p!=NULL && p->data!=element)
		p=p->next;
	return p;	
}

struct node* findPrev(int element)
{
	struct node *p=LinkedList;
	while(p->next!=NULL && p->next->data!=element)
		p=p->next;
	return p;
}

struct node* findNext(int element)
{
	struct node *p=LinkedList->next;
	while(p->next!=NULL && p->data!=element)
		p=p->next;
	return p->next;
}
void insertBeg(int value)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node *));
	if(newnode!=NULL)
	{	if(LinkedList->next==NULL)
		{	
			newnode->data=value;
			newnode->next=NULL;
			LinkedList->next=newnode;
			
		}
		else
		{	
			newnode->data=value;
			newnode->next=LinkedList->next;
			LinkedList->next=newnode;
		}
	}
	else
	{
		printf("\nmemory allocation error occured!!");
	}
	
}

void insertLast(int value)
{
	struct node *newnode;
	newnode=(struct node *) malloc(sizeof(struct node));
	if(newnode!=NULL)
	{
		if(LinkedList->next==NULL)
		{	
			newnode->data=value;
			newnode->next=NULL;
			LinkedList->next=newnode;
		}
		else
		{
			struct node *p;
			p=LinkedList;
			while(p->next!=NULL)
				p=p->next;
			newnode->data=value;
			newnode->next=NULL;
			p->next=newnode;	
		}
	}
	else
	{
		printf("memory allocation error occured!!");
	}
}

void insertMid(int value)
{
	struct node *newnode;
	newnode=(struct node *) malloc(sizeof(struct node));
	if(newnode!=NULL)
	{
		if(LinkedList->next==NULL)
		{
			newnode->data=value;
			newnode->next=NULL;
			LinkedList->next=newnode;
		}
		else
		{
			struct node *p;
			int element;
			printf("\n enter the element after which you want to insert the value:");
			scanf("%d",&element);
			p=find(element);
			newnode->data=value;
			newnode->next=p->next;
			p->next=newnode;
		}
	}
	else
	{
		printf("memory allocation error occured!!");
	}
}
void insert()
{
	int val,choice; 
	printf("\n enter the value to be inserted:");
	scanf("%d",&val);
	printf("\n Select the choice to insert the element 1)Insert at Begining 2)Insert at middle 3)Insert at last:");
	scanf("%d",&choice);
	do
	{
	switch(choice)
	{
		case 1:
			insertBeg(val);break;
		case 2:
			insertMid(val);break;
		case 3:
			insertLast(val);break;
		default:
			printf("\n enter the valide choice 1/2/3");
	}
	}while(choice>3);	
}



int isEmpty()
{
	if(LinkedList->next==NULL)
		return 1; 
	return 0;
}

int isLast(struct node *p)
{
	if(p->next==NULL) 
		return 1; 
	return 0;
}

void deleteBeg()
{	
	if(LinkedList->next==NULL)
		printf("\nthe linked list is empty");
	else
	{
		struct node *p;
		p=LinkedList->next;
		LinkedList->next=p->next;
		printf("\n the element removed from the linkedlist is %d",p->data);
		free(p);
	}
}

void deleteLast()
{
	if(LinkedList->next==NULL)
		printf("\nthe linked list is empty");
	else
	{
		struct node *p,*temp;
		p=LinkedList;
		while(p->next->next!=NULL)
			p=p->next;
		temp=p->next;
		printf("\n the element removed from the linkedlist is %d",temp->data);
		p->next=NULL;
		free(temp);
	}
}
void deleteMid()
{
	if(LinkedList->next==NULL)
		printf("\n the linked list is empty");
	else
		{
			struct node *p,*temp; int t;
			printf("\n enter the number which you want to remove");
			scanf("%d",&t);
			p=findPrev(t);
			if(p->next!=NULL)
			{
				temp=p->next;
				p->next=temp->next;
				printf("\n the element removed from the linkedlist is %d",temp->data);
				free(temp);
			}
		}
}

void delete()
{
	int choice; 
	printf("\n Select the choice to delete the element 1)Delete at Begining 2)Delete at middle 3)Delete at last:");
	scanf("%d",&choice);
	do
	{
	switch(choice)
	{
		case 1:
			deleteBeg();break;
		case 2:
			deleteMid();break;
		case 3:
			deleteLast();break;
		default:
			printf("\n enter the valide choice 1/2/3");
	}
	}while(choice>3);	
}

void display()
{
	struct node *p;
	p=LinkedList;
	if(p->next==NULL)
		printf("\n the linked list is empty");
	else
		{
			while(p->next!=NULL)
			{	
				p=p->next;	
				printf("%d->",p->data);
				
			}
			printf("NULL");
		}
}

void main()
{
	int choice,val;struct node *ptr;
	LinkedList=(struct node *)malloc(sizeof(struct node));LinkedList->next=NULL;
	do
	{
		printf("\nthe choices are 1.insert 2.display 3.delete 4.is Last 5.is Empty 6.Find\n Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();break;
			case 2:
				display();break;
			case 3:
				delete();break;
			case 4:
				printf("\n enter the element to check if it is last");
				scanf("%d",&val);
				ptr=find(val);
				if(isLast(ptr))
					printf("\nthe element %d is  the last element",val);
				else
					printf("\nthe element %d is not at the last",val);
				break;
			case 5:
				if(isEmpty())
					printf("\nthe list is empty");
				else
					printf("\nthe list is not empty");
				break;
			case 6:
				printf("\n enter the element to check if it is present:");
				scanf("%d",&val);
				ptr=find(val);
				if(ptr!=NULL)
					printf("\n the element is present in the linked list");
				else
					printf("\n the element is not present in the linked list");
				break;
			default:
				printf("\n enter the valid choices 1/2/3/4/5/6");
		}			
	}while(choice<7);
}
