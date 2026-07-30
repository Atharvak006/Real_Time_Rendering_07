#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 5

int main(void)
{
    int *iArray[NUM_ROWS];

    int i,j;

    printf("\n\n");
    printf("********** MEMORY ALLOCATION 2D integer array **********\n");

    for(i = 0; i < NUM_ROWS; i++)
    {
        iArray[i] = (int *)malloc((NUM_COLUMNS - i) * sizeof(int));

        if(iArray[i] == NULL)
        {
            printf("Failed to allocate the memory\n");
            exit(0);
        }
        else
        {
            printf("Memory allocation to row %d of 2D integer array succeeded !!!\n\n",i);
        }
    }

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < (NUM_COLUMNS - i); j++)
        {
            iArray[i][j] = (i * 1) + (j * 1);
        }
    }

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < (NUM_COLUMNS - i); j++)
        {
            printf("iArray[%d][%d] = %d \t At address: %p\n",i,j,iArray[i][j], &iArray[i][j]);
        }
        printf("\n");
    }

    for(i = (NUM_ROWS - 1); i >= 0; i--)
    {
        if(iArray[i])
        {
            free(iArray[i]);
            iArray[i] = NULL;
            printf("memory allocated for %d freed\n\n",i);
        }
    }

    return 0;
    
}