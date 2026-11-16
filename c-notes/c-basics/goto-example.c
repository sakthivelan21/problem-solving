#include<stdio.h>

/*
	C goto Statement

	*** output ***

	 num is 1
	 num is 2
 	 num is 3
 	 num is 4
     num is 5
     num is 6
     num is 7
     num is 8
     num is 9
	 num is 10

*/
void main(){
	int num=1;

	label:
	printf(" num is %d\n",num);
	num++;
	if(num<=10)
		goto label; // go to the label 
}
