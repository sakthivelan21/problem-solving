#include<stdio.h>
#include<stdlib.h>
/*
    Find Starting position of str in matrix in either forward or reverse order 
    
    using two dimensional array in single dimension pointer array
    
    input 
        
        4 5
        a a g d e
        f o y k y
        o v d o b
        f s c l r
        bye
    output
        3 5
    
    input
        4 5
        a b c d e
        f l o i c 
        k o o n o 
        c c i d e
        cool
    output 
        1 3
*/
int* findStartingPosition(int R,int C,char* matrix,char* str)
{
    int* arr=malloc(sizeof(int*)*2);
    int strLength = strlen(str);
    for(int i=0;i<R;i++)
    {
        int r = i*C;
        for(int j=0;j<C;j++)
        {
            if(matrix[r+j] == str[0])
            {
                int temp = i,index=0;
                while(temp<R && index<strLength)
                {
                    if(str[index]!=matrix[temp*C+j])
                        break;
                    index++;temp++;
                }
                if(index>=strLength)
                {
                    arr[0]=i+1;arr[1]=j+1;
                    return arr;
                }
            }
            if(matrix[r+j] == str[strLength-1])
            {
                int temp = i,index=strLength-1;
                while(temp>=0 && index>=0)
                {
                    if(str[index]!=matrix[temp*C+j])
                        break;
                    index--;temp++;
                }
                if(index<=0)
                {
                    arr[0]=temp;arr[1]=j+1;
                    return arr;
                }
            }
        }
    }
    return arr;
}
int main()
{
    int R,C;
    scanf("%d%d",&R,&C);
    char matrix[R][C],str[C+1];
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
            scanf(" %c",&matrix[i][j]);
    }
    scanf("%s",str);
    int* pos = findStartingPosition(R,C,matrix,str);
    if(pos == NULL)
        printf("Array is not formed");
    printf("%d %d",pos[0],pos[1]);
    return 0;
}
