#include<stdio.h>

int main(void)
{
    char ch;
    char *ptr = NULL;

    ch = 'R';
    printf("\n\n");

    printf("**********Before ptr = &ch**********\n\n");
    printf("value of 'ch' = %c\n\n",ch);
    printf("Address of 'num' = %p\n\n",&ch);
    printf("value at address of 'ch1' = %c\n\n",*(&ch));

    ptr = &ch;

    printf("\n\n");
    
    printf("**********After ptr = &ch**********\n\n");
    printf("value of 'ch' = %c\n\n",ch);
    printf("Address of 'num' = %p\n\n",ptr);
    printf("value at address of 'ch' = %c\n\n",*ptr);

    return 0;
}