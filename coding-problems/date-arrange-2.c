#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
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
	struct Date* date= malloc(sizeof(struct Date));
	
	char tempHolder[10];
	int index=0; 
	for(int i=0;i<strlen(dateStr)+1;i++)
	{
		if(dateStr[i]=='-' || dateStr[i]=='\0')
		{
			tempHolder[index]='\0';
			if(isalpha(tempHolder[0]))
				strcpy(date ->month,tempHolder);
			else if(index<=2)
				date -> day=atoi(tempHolder);
			else	
				date -> year=atoi(tempHolder);
			index=0; 
		}
		else
			tempHolder[index++]=dateStr[i];
	}
	
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
