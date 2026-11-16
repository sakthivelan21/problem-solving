#include<stdio.h>
#include<stdlib.h>

/*
	*** Linked List *** 

	methods:

		* insert 

			* insertAtBeginning

			* insertAtLast

			* insertAtMiddle

		* delete 

			* deleteFirst

			* deleteLast

			* deleteMiddle

		* display

		* isEmpty

		* findPrev

		* find

		* findNext


*/

struct node
{
	int val;
	struct node *next;
};

struct node *list =NULL;

struct node* middleOfList()
{
	if(list == NULL || list->next==NULL)
		return list;
	struct node* slowPtr = list;
	struct node* fastPtr = slowPtr->next;

	while(fastPtr!=NULL)
	{
		fastPtr=fastPtr->next; 

		if(fastPtr!=NULL)
			fastPtr = fastPtr->next; 

		slowPtr = slowPtr->next;
	}
	return slowPtr;
}

void display(){
	if(list==NULL){
		printf("\nList is Empty");
		return;
	}
	printf("\n Elements in the linked list are ");

	struct node *ptr = list;

	while(ptr!=NULL)
	{
		printf("%d->",ptr->val);
		ptr=ptr->next;
	}

	printf("NULL");

}

int isLast(struct node* ptr)
{
	return ptr->next==NULL;
}

int isEmpty()
{
	return list==NULL;
}

struct node* find(int val)
{
	struct node* ptr =list;
	while(ptr!=NULL && ptr->val!=val)
		ptr=ptr->next;
	return ptr;
}

struct node* findPrev(int val)
{
	struct node* ptr =list;
	while(ptr->next!=NULL && ptr->next->val!=val)
		ptr=ptr->next;
	return ptr;
}

struct node* findNext(int val)
{	
	struct node* ptr =list;
	while(ptr!=NULL && ptr->val!=val)
		ptr=ptr->next;
	return ptr->next;
}

void insertAtBeginning(int val)
{
	struct node* ptr = malloc(sizeof(struct node));
	ptr->val = val;
	
	if(list==NULL)
		list = ptr;
	else 
	{
		ptr->next = list ;
		list = ptr;
	}
}

void insertAtLast(int val)
{
	struct node* ptr = malloc(sizeof(struct node)); 
	ptr->val = val;
	ptr->next = NULL;
	if(list==NULL)
		list = ptr;
	else 
	{
		struct node* pointer = list;
		while(pointer->next!=NULL)
			pointer=pointer->next;
		printf("\n%d ",pointer->val);
		pointer->next = ptr;

	}
}

void insertAtMiddle(int val)
{
	struct node* ptr = malloc(sizeof(struct node));
	ptr->val = val;
	int target;
	if(list==NULL)
	{
		list = ptr;
	}
	else{
		printf("\n Enter the element after which %d has to be inserted",val);
		scanf("%d",&target);
		struct node* temp = find(target);
		if(temp==NULL)
		{
			printf("\n%d is not found in list !!!",target);
		}
		else{
			ptr->next = temp->next;
			temp->next = ptr;
		}
	}
}

void deleteFirst(){
	if(list==NULL)
		printf("\n List is Empty !!!");
	else 
	{
		struct node* temp = list; 
		list = list->next;
		printf("\n Element %d removed from first",temp->val);
		free(temp);
	}
}

void deleteMiddle(){

	int element;
	if(list==NULL)
		printf("\n List is Empty !!!");
	else 
	{
		printf("\n Enter the element which has to be deleted ");
		scanf("%d",&element);
		struct node* ptr = findPrev(element);
		if(ptr==NULL)
		{
			printf("\n%d is not found in list !!!",element);
		}
		else{
			struct node* temp= ptr->next; 
			ptr->next = temp->next;
			printf("\n Element %d removed from list",temp->val);
			free(temp);
		}	
	}
}

void deleteLast(){
	if(list==NULL)
		printf("\n List is Empty !!!");
	else 
	{
		struct node* ptr = list; 
		while(ptr->next->next!=NULL)
			ptr = ptr->next; 
		struct node* temp = ptr->next;
		printf("\n Element %d is removed from last",temp->val);
		free(temp);
		ptr->next = NULL;
	}
}


void insert(int val){
	int choice;
	do
	{
		printf("\nEnter your choice for insertion : 1)insertAtBeginning 2)insertAtMiddle 3) insertAtLast 4)exit.. \n Your choice : ");
		scanf("%d",&choice);
		switch (choice)
		{
		case 1:
			insertAtBeginning(val);
			break;
		case 2:
			insertAtMiddle(val);
			break;
		case 3:
			insertAtLast(val);
			break;
		case 4:
			break;
		default:
			printf("\n Enter the valid choice !!!");
			break;
		}
		/* code */
	} while (choice>4);

	
}

void delete()
{
	int choice;
	do
	{
		printf("\nEnter your choice for deletion : 1)delete First 2)delete Middle 3) delete Last 4)exit.. \n Your choice : ");
		scanf("%d",&choice);
		switch (choice)
		{
		case 1:
			deleteFirst();
			break;
		case 2:
			deleteMiddle();
			break;
		case 3:
			deleteLast();
			break;
		case 4:
			break;
		default:
			printf("\n Enter the valid choice !!!");
			break;
		}
		/* code */
	} while (choice>4);
}


void reverseList(){
	struct node* ptr = list; 

	struct node* L = NULL;
	if(ptr!=NULL)
	{
		L=ptr;
		ptr = ptr->next;
		L->next = NULL;
	}
	else 
		return;	
	while(ptr!=NULL)
	{
		struct node* temp = ptr;
		ptr=ptr->next;
		temp->next = L ; 
		L = temp;
	}
	list = L;
}
void main()
{
	int choice,num;

	struct node* pos = NULL;

	do{
		printf("\nEnter your choices : 1)insert 2)delete 3)display 4)isEmpty 5)find 6)findPrev 7)findNext 8)isLast 9)Middle of List 10)Reverse List 11)exit.. \nYour Choice : ");

		scanf("%d",&choice);

		switch (choice)
		{
		case 1:
			printf("\nEnter the element to be inserted : ");
			scanf("%d",&num);
			insert(num);
			break;
		case 2:
			delete();
			break;
		case 3:
			display();break;
		case 4:
			int status = isEmpty();
			printf("\n%s",status ? "List is Empty" : "List is not Empty");break;

		case 5:
			printf("\nEnter the element to be searched : ");
			scanf("%d",&num);
			pos = find(num);
			if(pos == NULL)
				printf("\n Element not found");
			else 
				printf("\n Element is found");
			break;

		case 6:
			printf("\nEnter the element to find previous value : ");
			scanf("%d",&num);
			pos = findPrev(num);
			if(pos==NULL)
			{
				printf("\n Element not found");
			}
			else{
				printf("\n the previous element to %d is %d",num,pos->val);
			}
			break;
		case 7:
			printf("\nEnter the element to find next value : ");
			scanf("%d",&num);
			struct node* pos = findNext(num);
			if(pos==NULL)
			{
				printf("\n Next Element not found");
			}
			else{
				printf("\n the next element to %d is %d",num,pos->val);
			}
			break;
		case 8:
			printf("\n Enter the element to check last : ");
			scanf("%d",&num);
			struct node *ptr = find(num);
			if(isLast(ptr))
				printf("\n %d is the last element",num);
			else 
				printf("\n%d is not the last element",num);
			break;
		case 9: 
			pos = middleOfList();
			if(pos==NULL)
				printf("\nList is Empty");
			else 
				printf("\n The middle value of the linked list is %d",pos->val);
			break;
		case 10:
			reverseList();
			display();
			break;
		default:
			printf("\n Enter valid choice !!!");
			break;
		}
	}while(choice!=11);

}