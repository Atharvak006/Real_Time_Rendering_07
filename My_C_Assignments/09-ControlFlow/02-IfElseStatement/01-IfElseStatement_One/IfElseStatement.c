#include<stdio.h>

int main(void)
{
    int x,y,z;

    x = 9;
    y = 30;
    z = 30;

    // First ifelse pair 

    printf("\n\n");

    if(x < y)
    {
        printf("Entering first if-block...\n\n");
        printf("X is less than y !!! \n\n");
    }
    else{
        printf("Entering first else block...\n\n");
        printf("X is not less than Y !!!\n\n");
    }
    printf("First if-else Pair Done !!!\n\n");

    // Second if else pair

    printf("\n\n");

    if(y != z)
    {
        printf("Entering Second if block...\n\n");
        printf("Y is not equal to Z !!!\n\n");
    }
    else
    {
        printf("Entering Second if Block...\n\n");
        printf("Y is equal to Z !!!\n\n");
    }

    printf("Second if-else Pair done !!!\n\n");
    
    return (0);
}