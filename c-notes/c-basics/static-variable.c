#include<stdio.h>
/*
Every time you call this function static variable value will be incremented value
and the value of x remains the same 

*** output ***

11 11
11 12
11 13
11 14
11 15

*/

void function_name(){
	int x = 10;
	static int y = 10;
	printf("%d %d\n",++x,++y);
} 

void main(){
	for(int i=0;i<5;i++)
		function_name();
}