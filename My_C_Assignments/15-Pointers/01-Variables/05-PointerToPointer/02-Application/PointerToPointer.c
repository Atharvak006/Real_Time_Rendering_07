#include<stdio.h>

int main(void)
{   
    int num;
    int *ptr = NULL;
    int **pptr = NULL;

    num = 10;

    printf("\n\n");

    printf("***** BEFORE ptr = &num *****\n\n");
    printf("Value of 'num' = %d\n\n",num);
    printf("Address of 'num' = %p\n\n",&num);
    printf("Value at address of 'num' = %d\n\n",*(&num));

    ptr = &num;

    printf("\n\n");

    printf("***** AFTER ptr = &num *****\n\n");
    printf("Value of 'num' = %d\n\n",num);
    printf("Address of 'num' = %p\n\n",ptr);
    printf("Value at address of 'num' = %d\n\n",*ptr);

    pptr = &ptr;

    printf("\n\n");
    printf("Value of 'num' = %d\n\n",num);
    printf("Address of 'num' (ptr) = %p\n\n",ptr);
    printf("Address of 'ptr' (pptr) = %p\n\n",pptr);
    printf("Address of 'ptr' (*pptr) = %p\n\n",*pptr);
    printf("Value at address stored in 'pptr' (**pptr) = %d\n\n", **pptr);

    return 0;
}