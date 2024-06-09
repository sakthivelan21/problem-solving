
# Coding Tricks 

some Tricks i learned from others   

## Circular array iteration indexing trick

+ To make a circular iteration motion inside a list or string with index.  

+ we can use modulo operator with the counter value to make the motion.  

```
	N- represent the total length of the array 

	index - represent the movement 

	ctr - represent the necessary jump to be made 

	arr[(index+ctr)%N]

	comes in handy to reduce code length and good code
```
## To convert the ascii value in integer type into character 
	
```
	char c=(char)86;
	int c=(int)'a';
```
## To print the string from the particular position to the end in c

```
	printf("%s",&string[startIndex]); where startIndex will be the index specified by us
```

## To concatenate two numbers in c

```
	a = pow(a,log(n)+1)+n 
```

## To convert an array of numbers to a integer ( [1,2,3,4,5] to 12345)
	
```
	5+4*10 -> 45

	45+ 3*100 -> 345

	345 + 2*1000 -> 2345

	2345 + 1*10000 -> 12345
```
	
+ this way can save lot of rather than using tough approach   

## To convert binary to decimal value in an alternate approach

```
	int binary[32]={0};

	long long int X=0;

	for(int index=0;index<32;index++)
	{
		
		X=X*2+binary[index];
	}

	return X; //decimal value
```
## To find the most significant bit 

+ first find the position of the most significant bit   
+ for 10, binary value is (1010) msb-position is 4 and value is 8 (as per 8421)  

```
	int setBitNumber(int n) //n=10
	{
	 
		// To find the position of the most significant set bit
		int k = (int)(log2(n)); //k=4
	 
		// To return the the value of the number with set  bit at k-th position
		return 1 << k; // return 1000 which is 8 
		
		//example 
		
	}	
```
## To do binary addition of numbers to find a value 

```
	int ans=0;
	ans|=8;
```	
## We can pass long long int as a return type instead of int at needed places

```
		int getMSBBitMask(int size,int arr[])
		{
			int binaryHolder[32]={0};
			for(int i=0;i<size;i++)
			{
				int value=arr[i],curIndex=31,msbIndex;
				while(value>0)
				{
					if(value%2==1)
						msbIndex=curIndex;
					value/=2;
					curIndex--;
				}
				binaryHolder[msbIndex]=1;
			}

			long long int value=0;
			for(int i=0;i<32;i++)
			{
				value=value*2+binaryHolder[i];
			}
			return value;
		}

```

## To Check whether the given number is a power of number or not

```
		we have to check whether 

		125 is a power of 5 or not 

		we know that and we use logarithms to make the value easy to find

		5^X =125 , we need to get value 3



		take log on both sides



		log(5^X)=log(125)

		X*log(5)=log(125)

		X=log(125)/log(5)

		if X is a whole number without floating value then 125 is a power of 5
		
		
		implementation
		
		from math import log,floor,ceil
		def isPowerValue(number,base):
			#because log1 is 0
			if base==1:
				return False
			value=round(log(number)/log(base),8)
			# checking for floating values in the result
			if floor(value)==ceil(value):
				return True
			return False
```   
## Displaying a two dimensional array from a single dimensional matrix 
```
		#include<stdio.h>
		#include<stdlib.h>
		/*
			displaying a two dimensional array from a single dimensional matrix 
			
			input
			
				4 5
				a a g d e
				f o y k y
				o v d o b
				f s c l r
			
			output

			a a g d e
			f o y k y
			o v d o b
			f s c l r
		*/
		void display_array(int R,int C,char* matrix)
		{
			for(int i=0;i<R;i++)
			{
				int r = i*C;
				for(int j=0;j<C;j++)
				{
				    printf("%c ",matrix[r+j]);
				}
				printf("\n");
			}
		}
		int main()
		{
			int R,C;
			scanf("%d%d",&R,&C);
			char matrix[R][C];
			for(int i=0;i<R;i++)
			{
				for(int j=0;j<C;j++)
				    scanf(" %c",&matrix[i][j]);
			}
			display_array(R,C,matrix);
			return 0;
		}
```

## Reverse a number both negative and positive

```
	long num=0;
	while(x!=0)
	{
		num=num*10+x%10;
		x=x/10;
	}
```

### Best Approach to use a character array is with memset

```C
#include <stdio.h>
#include <string.h>

int main() {
    char myArray[20]; // Create a char array of size 10

    memset(myArray, '\0', sizeof(myArray)); // Set the array to null values

    // Print the contents of the array (ASCII values)
    for (int i = 0; i < sizeof(myArray); i++) {
        printf("myArray[%d] = %d\n", i, myArray[i]);
    }

    return 0;
}
```

### Best way to find the set-bit 


```C
#include <stdio.h>

int main()
{
    int val = 10;
    printf("val at 1 %d\n",val & (1<<0));
    printf("val at 2 %d\n",val & (1<<1));
    printf("val at 4 %d\n",val & (1<<2));
    printf("val at 8 %d\n",val & (1<<3));
    return 0;
}

/*
val at 1 0
val at 2 2 , set bit
val at 4 0
val at 8 8 , set bit 
*/
```