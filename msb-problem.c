#include <stdio.h>
#include <stdlib.h>
/*
5
48 7 12 200 37

output
172

explanation
00110000 -> 48
00000111 -> 7
00001100 -> 12
11001000 -> 200
00100101 -> 37

10101100 -> 172

connecting all msb no into binary value and converting them back to an decimal value

*/
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

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int index = 0; index < N; index++)
    {
        scanf("%d", &arr[index]);
    }
    printf("%d", getMSBBitMask(N, arr));
    return 0;
}
