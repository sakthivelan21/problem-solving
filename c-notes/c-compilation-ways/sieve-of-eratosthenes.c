#include <sieve-of-eratosthenes.h>
#include<stdbool.h>
#include<stdio.h>

GList *sieve_of_erastosthenes(int n)
{
    GList *glist = NULL;
    bool *prime = NULL;
    if(n<2)
        return glist; 
    
    printf("sieve_of_erastosthenes starting ...%d\n",n);

    prime =(bool *)malloc(sizeof(bool)*(n+1));

    memset(prime,true,sizeof(bool)*(n+1));

    for(int i=2;i*i<=n;i++)
    {
        if(prime[i])
        {

            for(int j=i*2;j<=n;j+=i)
            {
                prime[j]=false;
            }
        }
    }    

    // printf("sieve_of_erastosthenes ending ...%d\n",n);

    for(int i=2;i<=n;i++)
    {
        if(prime[i])
        {
            // printf("sieve %d ",i);
            glist = g_list_append(glist,GINT_TO_POINTER(i));
        }
    }
    // printf("\n");

    free(prime);
    return glist;

}