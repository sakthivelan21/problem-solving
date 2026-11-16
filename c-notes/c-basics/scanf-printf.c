#include <stdio.h>

void main(){
    int age;
    char name[20];
    printf("Enter your name: ");
    scanf("%[^\n]s",name);
    printf("\nEnter your age: ");
    scanf("%d",&age);
    printf("\nYour name is %s and age is %d\n",name,age);
}
