#include<stdio.h>
#include <sieve-of-eratosthenes.h>

int main(int argc, char *argv[]){
    int n = 0;

    GList* glist = NULL;

    printf("starting....\n");
    
    if(argc<=1){
        printf("please enter the value n for which u want to calculate the prime numbers from 1 to n :");   
        scanf("%d",&n);
    }   
    else{
        n = atoi(argv[0]);
    }

    glist = sieve_of_erastosthenes(n);

    if(!glist)
    {
        printf("please enter valid %d n value to continue....\n",n);
        return 0;
    }

    printf("The prime numbers[total %d] from 1 to %d are : \n",g_list_length(glist),n);

    for(GList *iter = glist ; iter!=NULL;iter=iter->next)
    {
        printf("%d ",GPOINTER_TO_INT(iter->data));
    }

    g_list_free(glist);

    return 0;

}