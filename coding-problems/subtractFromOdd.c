#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number;
	printf("\n Enter your number : ");
	scanf("%d",&number);
	int multiplier=1,oddNum=0,temp=number;

	while(temp>0)
	{
		int unitDigit=temp%10;

		if(unitDigit%2==0)
		{
			// we are making ones tens movements with the multiplier
			oddNum= oddNum+unitDigit*multiplier;
			multiplier*=10;
		}

		temp/=10;
	}

	printf("the oddDigits removed and subtracted value is %d ",number-oddNum);
}
