#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
	Break words at vowels

	The program must accept a string S with alphabets. The program must  always accept an integer N.
	Then the program must split S into several words at positions where a vowel occurs.
	the length of the words must not exceed N.
	The number of words split must be as minimum as possible .

	if there are no vowels in the last word, it can be merged with the previous words if the total length does not exceed N.

	input :

	5
	environment

	output:

	envi
	ronme
	nt

	input:

	6
	yellowpagebooks

	output:

	yello
	wpage
	sbooks
*/
int isVowel(char a)
{
	a=tolower(a);
	return (a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
}
int main()
{
	int n;
	printf("\n Enter the length of N: ");

	scanf("%d",&n);

	printf("\n Enter the string: ");
	char string[100];
	scanf("%s",string);

	int stringLength=strlen(string)-1,startIndex=0,maxLength=n-1;

	int endIndex=maxLength;

	while(1)
	{
		if(endIndex==stringLength)
		{
			printf("%s",&string[startIndex]);
			break;
		}

		while(!isVowel(string[endIndex]))
			endIndex--;

		for(int index=startIndex;index<=endIndex;index++)
			printf("%c",string[index]);

		printf("\n");
		startIndex=endIndex+1;
		endIndex+=n;

		if(endIndex>stringLength)
			endIndex=stringLength;
	}

	return 0;
}
