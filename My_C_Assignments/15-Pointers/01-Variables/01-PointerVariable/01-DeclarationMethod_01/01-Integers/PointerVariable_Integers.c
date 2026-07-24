#include<stdio.h>

int main(void)
{
    int val;
    int *ptr = NULL;

    val = 10;
    printf("\n\n");

    printf("**********Before ptr = &val**********\n\n");
    printf("Value of 'val' = %d\n\n",val);
    printf("Address of 'num' = %p\n\n",&val);
    printf("Value at address of 'val' = %d\n\n",*(&val));

    ptr = &val;

    printf("\n\n");
    
    printf("**********After ptr = &val**********\n\n");
    printf("Value of 'val' = %d\n\n",val);
    printf("Address of 'num' = %p\n\n",ptr);
    printf("Value at address of 'val' = %d\n\n",*ptr);

    return 0;
}