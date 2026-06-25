#include<stdio.h>

int main(void)
{
    int S;

    printf("\n\n");

    S = 5;

    if(S)
    {
        printf("If block 1 : 'S' Exists And Has Value = %d !!!\n\n",S);
    }

    S = -5;
    if(S)
    {
        printf("If block 2 : 'S' Exists And Has Value = %d !!!\n\n",S);
    }

    S = 0;

    if(S)
    {
        printf("If block 3 : 'S' Exists And Has Value = %d !!!\n\n",S);
    }
    
    printf("All three if-statements are done !!!\n\n");
    
    return 0;
}