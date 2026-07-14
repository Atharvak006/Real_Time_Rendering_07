#include <stdio.h>

#define NUM_ELEMENTS 10

int main(void)
{
    int iArray[NUM_ELEMENTS];
    int i, j, num, cnt;

    printf("Enter %d integer elements:\n", NUM_ELEMENTS);

    for(i = 0; i < NUM_ELEMENTS; i++)
    {
        scanf("%d", &num);

        if(num < 0)
            num = -num;

        iArray[i] = num;
    }

    printf("\nArray Elements are:\n");

    for(i = 0; i < NUM_ELEMENTS; i++)
    {
        printf("%d\n", iArray[i]);
    }

    printf("\nPrime numbers in the array are:\n");

    for(i = 0; i < NUM_ELEMENTS; i++)
    {
        if(iArray[i] < 2)
            continue;

        cnt = 0;

        for(j = 1; j <= iArray[i]; j++)
        {
            if(iArray[i] % j == 0)
                cnt++;
        }

        if(cnt == 2)
            printf("%d\n", iArray[i]);
    }

    return 0;
}