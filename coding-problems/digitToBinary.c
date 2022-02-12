#include <stdio.h>
#include <stdlib.h>

int binaryDigit(int number)
{
	if(number<=1)
		return number;
	return binaryDigit(number/2)*10+number%2;
}

void main()
{
	int number;
	printf("Enter the number: ");
	scanf("%d",&number);
	printf("Binary value of the number %d is %d",number,binaryDigit(number));
}
