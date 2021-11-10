
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
