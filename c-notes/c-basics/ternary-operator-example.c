#include <stdio.h>

void main(){
	int age;
	printf("\n Enter your age: ");
	scanf("%d",&age);
	(age>18) ?
	printf("\n you are eligible to vote") :
	printf("\n you are not elgible to vote");
}
