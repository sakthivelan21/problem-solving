#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Date
{
	int day;
	char month[4];
	int year;
};
/* input : 23-MAR-2000 in any order
   output : 23 MAR 2000
*/
struct Date* getDateFormat(char* dateStr)
{
	int firstDash=0,length=strlen(dateStr),index=0,secondDash=0;

	int dayStart=0,dayEnd=2,monthStart,monthEnd, yearStart=7,yearEnd=length;

	while(dateStr[index]!='-')
		index++;
	firstDash=index++;

	while(dateStr[index]!='-')
		index++;

	secondDash=index++;

	if(firstDash ==4)
	{
		yearStart=0;
		yearEnd=4;
	}
	else if(firstDash==3)
	{
		monthStart=0;
		monthEnd=3;
	}

	if(secondDash - firstDash-1 == 2)
	{
		dayStart = firstDash+1;
		dayEnd = firstDash+3;
	}
	else if( secondDash - firstDash -1==4)
	{
		yearStart = firstDash + 1;
		yearEnd = firstDash+5;
	}
	else
	{
		monthStart=firstDash+1;
		monthEnd=secondDash;
	}

	if( length-secondDash-1 ==3)
	{
		monthStart=secondDash+1;
		monthEnd=length;
	}
	else if(length- secondDash -1 == 2)
	{
		dayStart=secondDash+1;
		dayEnd=length;
	}

	struct Date* date= malloc(sizeof(struct Date*));

	while (dayStart<dayEnd)
		date -> day = date -> day * 10 + dateStr[dayStart++]-'0';

	int ind=0;

	while (monthStart<monthEnd)
		date-> month[ind++]=dateStr[monthStart++];

	while (yearStart < yearEnd )
		date -> year = date -> year * 10 + dateStr[yearStart++]-'0';
	return date;
}
void main()
{
	char string[100];
	scanf("%s",string);
	struct Date* date=getDateFormat(string);
	if(date== NULL)
	{
		printf("Date is not initalized");
	}
	else
	{
		printf("%02d %s %04d",date -> day,date -> month, date -> year);
	}
}
