#include<stdio.h>

int main(void)
{
    float val;
    float *ptr = NULL;

    val = 10.21f;
    printf("\n\n");

    printf("**********Before ptr = &val**********\n\n");
    printf("Value of 'val' = %f\n\n",val);
    printf("Address of 'num' = %p\n\n",&val);
    printf("Value at address of 'val' = %f\n\n",*(&val));

    ptr = &val;

    printf("\n\n");
    
    printf("**********After ptr = &val**********\n\n");
    printf("Value of 'val' = %f\n\n",val);
    printf("Address of 'num' = %p\n\n",ptr);
    printf("Value at address of 'val' = %f\n\n",*ptr);

    return 0;
}