#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *flink;
	struct node *blink;
}*L=NULL;

struct node * find(int val)
{
 	struct node *p=L->flink;
 	while(p!=NULL && p->data!=val)
 		p=p->flink;
 	return p;
}
struct node * findPrev(int val)
{
	struct node *p=find(val);
	if(p==NULL) 
		return NULL;
	return p->blink;
}
struct node * findLast(int val)
{
	struct node *p=find(val);
	if(p==NULL) 
		return NULL;
	return p->flink;
}
int isempty()
{
	if(L->flink==NULL) 
		return 0; 
	return 1;
}
int islast()
{
	int val;
	printf("\n enter the element to check if it is last");
	scanf("%d",&val);
	struct node *p=find(val);
	if(p->flink==NULL) 
		return 1;
	return 0;
}
void insertBeg(int element)
{
 struct node *p;
 p=(struct node *) malloc(sizeof(struct node));
 if(p!=NULL)
 	{
 		p->data=element;
 		if(L->flink==NULL)
 		{	
 			p->flink=NULL;
 			L->flink=p;
 			p->blink=L;
 		}
 		else
 		{
 			p->flink=L->flink;
 			L->flink->blink=p;
 			L->flink=p;
 			p->blink=L;
 			
 		}
 	}
 else
 	{
 		printf("\nmemory allocation error occured");
 	}
}
void insertLast(int element)
{
	struct node *p;
	p=(struct node *) malloc(sizeof(struct node));
	if(p!=NULL)
	{
		p->data=element;
		if(L->flink==NULL)
		{
			p->flink=NULL;
			L->flink=p;
			p->blink=L;
		}
		else
		{
			struct node *ptr;
			ptr=L;
			while(ptr->flink!=NULL)
				ptr=ptr->flink;
			p->flink=NULL;
			p->blink=ptr;
			ptr->flink=p;
			
		}
	}
	else
	{
		printf("\nmemory allocation error occured");
	}
}
void insertMid(int element)
{
	struct node *p;
	p=(struct node*) malloc(sizeof(struct node));
	if(p!=NULL)
	{
		p->data=element;
		if(L->flink==NULL)
		{
			p->flink=NULL;
			p->blink=L;
			L->flink=p;
		}
		else
		{
			int val;
			printf("\n Enter the element after which you want to insert the element: ");
			scanf("%d",&val);
			struct node *ptr;
			ptr=find(val);
			p->flink=ptr->flink;
			ptr->flink->blink=p;
			ptr->flink=p;
			p->blink=ptr;
		}
	}
	else
	{	
		printf("\nmemory allocation error occured");
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
void deleteBeg()
{
	if(L->flink==NULL)
		printf("\n the doubly linked list is empty");
	else
	{
		struct node *p=L->flink;
		L->flink=p->flink;
		p->flink->blink=L;
		printf("\n the element %d has been removed from the beginning of the list",p->data);
		free(p);
	}
}

void deleteLast()
{
	if(L->flink==NULL)
		printf("\n the doubly linked list is empty");
	else
	{
		struct node *p=L->flink;
		while(p->flink!=NULL)
			p=p->flink;
		p->blink->flink=NULL;
		printf("\n the element %d has been removed from the beginning of the list",p->data);
		free(p);
	}
}

void deleteMid()
{
	if(L->flink==NULL)
		printf("\n the doubly linked list is empty");
	else
	{
		struct node *p;
		int val; 
		printf("\n enter the element which you want to remove: ");
		scanf("%d",&val);
		p=find(val);
		if(p->flink==NULL)
		{
			p->blink->flink=NULL;
		}
		else
		{
		p->blink->flink=p->flink;
		p->flink->blink=p->blink;
		printf("\n the element %d has been removed from the beginning of the list",p->data);
		}
		free(p);
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
	p=L;
	if(p->flink==NULL)
		printf("\n the linked list is empty");
	else
		{
			printf("\n the elements in doubly linked list:");
			while(p->flink!=NULL)
			{	
				p=p->flink;	
				printf("%d->",p->data);
				
			}
			printf("NULL");
		}
}

void main()
{
	int choice,val;struct node *ptr;
	L=(struct node *)malloc(sizeof(struct node));
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
				if(islast())
					printf("\nthe element is  the last element");
				else
					printf("\nthe element is not at the last");
				break;
			case 5:
				if(isempty())
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

