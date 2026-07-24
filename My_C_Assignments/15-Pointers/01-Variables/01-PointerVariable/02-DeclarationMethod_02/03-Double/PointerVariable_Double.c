#include<stdio.h>

int main(void)
{
    double val;
    double* ptr = NULL;

    val = 10.21545454f;
    printf("\n\n");

    printf("**********Before ptr = &val**********\n\n");
    printf("Value of 'val' = %lf\n\n",val);
    printf("Address of 'num' = %p\n\n",&val);
    printf("Value at address of 'val' = %lf\n\n",*(&val));

    ptr = &val;

    printf("\n\n");
    
    printf("**********After ptr = &val**********\n\n");
    printf("Value of 'val' = %lf\n\n",val);
    printf("Address of 'num' = %p\n\n",ptr);
    printf("Value at address of 'val' = %lf\n\n",*ptr);

    return 0;
}