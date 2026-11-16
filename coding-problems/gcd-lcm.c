#include <stdio.h>

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int a=30,b=10;
    printf("gcd %d",gcd(a,b));
    printf("LCM %d",(a*b)/gcd(a,b));
    return 0;
}
