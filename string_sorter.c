/*
	sorting three string 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* compareString(char* a,char* b,char* c)
{
    int length=strlen(a)+strlen(b)+strlen(c);
    char* arr=(char*) malloc(sizeof(char*)*length);
    char** twoArr=malloc(sizeof(char**)*3);
    twoArr[0]=a;
    twoArr[1]=b;
    twoArr[2]=c;
    char tempArr[100];
    for(int i=0;i<3;i++)
    {
        int temp=i;
        for(int j=i+1;j<3;j++)
        {
            if(strcmp(twoArr[temp],twoArr[j])>0)
                temp=j;
        }
        strcpy(tempArr,twoArr[i]);
        strcpy(twoArr[i],twoArr[temp]);
        strcpy(twoArr[temp],tempArr);
    }
    int itr=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<strlen(twoArr[i]);j++)
            arr[itr++]=twoArr[i][j];
    }
    return arr;
}
int main()
{
    char a[100],b[100],c[100];
    scanf("%s %s %s",a,b,c);
    printf("%s",compareString(a,b,c));
}
