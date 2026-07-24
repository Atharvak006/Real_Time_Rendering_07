#include<stdio.h>

int main(void)
{
    int val = 5;

    const int* const ptr = &val;

    printf("\n");
    printf("Current value of 'val' = %d\n",val);
    printf("Current 'ptr' (address of 'val') = %p\n",ptr);

    val++;
    printf("\n\n");
    printf("After val++, value of 'val' = %d\n",val);

    return 0;
}