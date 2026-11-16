#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string>
using namespace std;

void generate_combination(string name, int combination_count)
{
    int length = pow(2,name.length());

    for(int i=1;i<length;i++)
    {
        int value = i,ind=0;
        string temp = "";

        while(value>0)
        {
            if(value&1) // check if left-most-bit is set
            {
                temp+=name[ind];
            }
            ind++;
            value/=2;  // value>>=1;
        }
        if(temp.length() == combination_count) 
            printf("%s ",temp.c_str());
    }
}


int main()
{
    string characters = "bvwz";
    int combination_count = 2;
    generate_combination(characters,combination_count); 
    return 0;
}


/*
input : characters - bwvz , count - 2
answer = bv bw vw bz vz wz
*/