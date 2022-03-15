// LARGEST AND SMALLEST UNIT DIGIT NUMBERS DIFFERENCE
#include <stdio.h>
#include <stdlib.h>

/*
	Given N numbers, the program must find and print the difference between the largest and smallest unit digits
	if multiple numbers have the largest unit digit, then choose the largest number among them
	if multiple numbers have the smallest unit digit, then choose the smallest number among them.

	input

	5
	19 21 32 41 89

	output 

	68
*/

int main()
{
	 int n;
	 int number,unit_digit;
	 printf("Enter the value of n : ");
	 scanf("%d",&n);
	 printf("\n Enter the n values separated by space \n");
	 scanf("%d",&number);
	 unit_digit = number%10;
	 int smallest = number;
	 int largest = number;
	 int smallest_unit_digit = unit_digit;
	 int largest_unit_digit =  unit_digit;
	 for(int i=1;i<n;i++)
	 {
	 	scanf("%d",&number);
	 	unit_digit = number%10;
	 		
		if(unit_digit < smallest_unit_digit )
		{
			smallest_unit_digit = unit_digit;
			smallest = number;
		}
		else if(smallest_unit_digit == unit_digit && number < smallest)
			smallest = number;
	
	
		
		if( unit_digit > largest_unit_digit )
		{
            largest_unit_digit = unit_digit;
            largest = number;
        }
        else if( unit_digit == largest_unit_digit  && number > largest)
			largest = number;
	 		
		}
		printf("The difference of largest %d - smallest %d = %d",largest,smallest,largest-smallest);
}	


