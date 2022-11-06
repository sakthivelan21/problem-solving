#include<stdio.h>
#include<stdlib.h>
int* stack;
int top=-1,n;
void push(){
	if(top>=n-1)
		printf("\nStack is Full");
	else
	{
		int number;
		printf("Enter the element to be inserted: ");
		scanf("%d",&number);
		stack[++top]=number;
	}
}
void pop(){
	if(top==-1)
	{
		printf("\nStack is Empty !!! ");
	}
	else{
		printf("\n The element popped out is %d",stack[top--]);
	}
}
void display_stack(){
	if(top<0)
	{
		printf("\n Stack is Empty");
		return;
	}
	printf("\n Elements in the stack : ");
	for(int i=top;i>=0;i--)
		printf("%d ",stack[i]);
}
int main(){
	int choice;
	printf("\nEnter the size of the stack: ");
	scanf("%d",&n);

	// initialsing the stack 
	stack = malloc(sizeof(int)*n);
	do{
		printf("\nYour choices : 1) push 2) pop 3) display 4)exit\n Enter your choice :");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				push();break;
			case 2:
				pop();break;
			case 3:
				display_stack();break;
			case 4:
				printf("Bye ..."); break;

			default:
				printf("Enter the valid choice");
				break;
		}


	}while(choice!=4);


}