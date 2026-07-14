#include<stdio.h>

#define NUM_ELEMENTS 10

int main(void)
{   
    int iArray[NUM_ELEMENTS];
    int i, num, sum = 0;

    printf("\n\n");
    printf("Enter integer elements for array: \n\n");
    for(i = 0; i < NUM_ELEMENTS; i++)
    {
        scanf("%d",&num);
        iArray[i] = num;
    }

    for(i = 0; i < NUM_ELEMENTS; i++)
    {
        sum = sum + iArray[i];
    }

    printf("\n\n");
    printf("Sum of all elements of array = %d\n\n",sum);

    return(0);
}