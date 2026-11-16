#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
	input 
	5
	120 50 75 64 44
	
	concatenate all binary value of each number and then convert the binary tp hexadecimal
	
	by picking every four binary value from LSB 
	
	output
	
	1E329702C
	
	for compiling in gcc with math.h
	
	gcc -o sphere sphere.c -lm

	The error you are seeing: error: ld returned 1 exit status is from the linker ld (part of gcc that combines the object files) because it is unable to find where the function pow is defined.

	Including math.h brings in the declaration of the various functions and not their definition. The def is present in the math library libm.a. You need to link your program with this library so that the calls to functions like pow() are resolved.
*/
typedef struct bin_array
{
	int* bin_arr;
	int length;
}bin_holder;

bin_holder binary_converter(int number)
{
	int binary_length,ind=0,temp_number=number;
	while(temp_number>0)
	{
		temp_number/=2;
		ind++;
	}
	binary_length=ind;
	int* array=(int*)malloc(sizeof(int*)*ind);
	ind--;
	while(ind>=0)
	{
		array[ind--]=number%2;
		number/=2;
	}
	
	bin_holder b;
	b.length=binary_length;
	b.bin_arr=array;
	return b;
}

char hexadecimalConverter(int binary_number)
{
	char arr[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	
	int number=0,count=0;
	while(binary_number>0)
	{
		number+=((int)pow(2,count++))*binary_number%10;
		binary_number/=10;
	}
	return arr[number];
}

void concatAndConvertToHex(int SIZE,int arr[])
{
	int* array;
	int length=0;
	for(int i=0;i<SIZE;i++)
	{
		bin_holder b= binary_converter(arr[i]);
		if(i==0)
		    array=malloc(sizeof(int*)*b.length);
		else
		    array=realloc(array,sizeof(int*)*(length+b.length));
		
		for(int j=0;j<b.length;j++)
				array[length++]=b.bin_arr[j];
		
	}
	
	char* hex_holder=malloc(sizeof(char*)*100);
	int index=0;
	while(length>0)
	{
		int val=0,start=0,end=length;
		if(length-4>=0)
			start=length-4;
		for(int i=start;i<end;i++)
			val=val*10+array[i];
		hex_holder[index++]=hexadecimalConverter(val);
		length-=4;
	}
	
	while(index>0)
	{
		printf("%c",hex_holder[--index]) ;
	}
}

int main()
{
	int N;
	scanf("%d",&N);
	int arr[N];
	for(int index=0;index<N;index++)
	{
		scanf("%d",&arr[index]);
	}
	concatAndConvertToHex(N,arr);
	return 0;
}
