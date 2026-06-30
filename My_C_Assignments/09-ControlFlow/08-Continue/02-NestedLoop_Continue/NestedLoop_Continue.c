#include<stdio.h>

int main(void)
{
    int i,j;

    printf("\n\n");

    printf("Outer Loop Prints Odd Numbers Between 1 and 10. \n\n");
    printf("Inner loop Prints Even numbers between 1 and 10 for every odd Number printed by outer loop.\n\n");


    for(i = 1; i <= 10; i++)
    {
        if(i % 2 != 0)
        {
            printf("i = %d\n",i);
            printf("--------\n");

            for(j = 1; j <= 10; j++)
            {
                if(j % 2 == 0)
                {
                    printf("\tj = %d\n",j);
                }
                else
                {
                    continue;
                }
            }
            printf("\n\n");
        }
        else
        {
            continue;
        }
    } 
        
    return 0;

}