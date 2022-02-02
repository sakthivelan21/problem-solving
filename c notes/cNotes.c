TO GET MULTIPLE LINE INPUT IN C USING SCANF
#include <stdio.h>
#include <stdlib.h> 
void main()
{
    char arr[1000]; 
    while(scanf("%[^\n]%*c",arr)==1)
    {
        int index=0;
        for(int i=0;i<strlen(arr);i++)
        {
            if(arr[i]==' ')
            {
                index=i+1;
            }
        }
        printf("%s\n",arr+index);
    }
}

#include <stdio.h>
#include <string.h>

void main()
{
	char sentences[100][100];
	int i=0;
	
	while(scanf("%[^\n]%*c",sentences[i])==1)
		i+=1;
	printf("\n the sentences you entered as input");
	int j=0;
	while(j<=i)
	{
		printf("\n%s",sentences[j++]);
	}
}
---------------------------------------------------------
WHEN never you print a string as output if it has sakthi?? 
in output , then you have to place '\0' at the end of the string 
----------------------------------------------------------
TO HANDLE OPERATOR OVERLOADING WITH STDARG
// C program to demonstrate working of
// variable arguments to find average
// of multiple numbers.
#include <stdarg.h>
#include <stdio.h>

int average(int num, ...)
{
	va_list valist;

	int sum = 0, i;

	va_start(valist, num);
	for (i = 0; i < num; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return sum / num;
}

// Driver code
int main()
{
	printf("Average of {2, 3, 4} = %d\n",
						average(2, 3, 4));
	printf("Average of {3, 5, 10, 15} = %d\n",
					average(3, 5, 10, 15));
	return 0;
}

-----------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[101];
	scanf("%s",str);
	int x=0; 
	for(int index=0;str[index]!='\0';index++)
	{
		x=x|(1<<(str[index]-97);
	}
	printf("%d",x);
}

abcd

binary form of unique values -> 

zy xwvu tsrq ponm lkji hgfe dcba
00 0000 0000 0000 0000 0000 1111

convert the binary for to integer answer

15

