#include<stdio.h>

int main(void)
{
    int val = 5;

    int* const ptr = NULL;

    printf("\n");
    printf("Current value of 'val' = %d\n",val);
    printf("Current 'ptr' (address of 'val') = %p\n",ptr);

    val++;
    printf("\n\n");
    printf("After val++, value of 'val' = %d\n",val);

    (*ptr)++;

    printf("\n\n");
    printf("After (*ptr)++, value of 'ptr' = %p\n",ptr);
    printf("Value at this 'ptr' = %d\n",*ptr);
    printf("\n");
    return 0;
}