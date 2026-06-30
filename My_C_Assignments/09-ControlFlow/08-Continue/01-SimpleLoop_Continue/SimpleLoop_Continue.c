#include<stdio.h>

int main(void)
{
    int x;

    printf("\n\n");

    printf("Printing Even Numbers From 0 to 100: \n\n");

    for(x = 0; x <= 100; x++)
    {
        if(x % 2 != 0)
        {
            continue;
        }
        else
        {
            printf("\t%d\n",i);
        }
    }

    printf("\n\n");

    return 0;

}