#include<stdio.h>

int main(void)
{
    int val = 5;

    const int*ptr = NULL;

    ptr = &val;
    printf("\n");
    printf("Current value of 'val' = %d\n",val);
    printf("Current 'ptr' (address of 'val') = %p\n",ptr);

    val++;
    printf("\n\n");
    printf("After val++, value of 'val' = %d\n",val);

    ptr++;

    printf("\n\n");
    printf("After ptr++, value of 'ptr' = %p\n",ptr);
    printf("Value at this new 'ptr' = %d\n",*ptr);
    printf("\n");
    return 0;
}