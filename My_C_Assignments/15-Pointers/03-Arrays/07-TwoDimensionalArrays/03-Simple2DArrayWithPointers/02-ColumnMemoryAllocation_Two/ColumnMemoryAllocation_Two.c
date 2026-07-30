#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define NUM_COLUMNS_ONE 3
#define NUM_COLUMNS_TWO 8

int main(void)
{
    int *iArray[NUM_ROWS];

    int i, j;

    printf("\n\n");

    for(i = 0; i < NUM_ROWS; i++)
    {
        iArray[i] = (int *)malloc(NUM_COLUMNS_ONE * sizeof(int));

        if(iArray[i] == NULL)
        {
            printf("Failed to allocate memory to row %d of 2D integer array !!! Exiting now...\n\n", i);
            exit(0);
        }
        else
        {
            printf("Memory allocation to row %d of 2D integer array succeeded !!!\n\n", i);
        }
    }

    for(i = 0; i < NUM_ROWS; i++)
    {
        for(j = 0; j < NUM_COLUMNS_ONE; j++)
        {
            iArray[i][j] = (i + 1) * (j + 1);
        }
    }

    printf("\n\n");
    printf("Displaying 2D Array:\n\n");

    for(i = 0; i < NUM_ROWS; i++)
    {
        for(j = 0; j < NUM_COLUMNS_ONE; j++)
        {
            printf("iArray[%d][%d] = %d\n", i, j, iArray[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i = NUM_ROWS - 1; i >= 0; i--)
    {
        free(iArray[i]);
        iArray[i] = NULL;

        printf("Memory allocated to row %d of 2D integer array has been successfully freed\n\n", i);
    }

    printf("\n\n");
    printf("*********** SECOND MEMORY ALLOCATION TO 2D INTEGER ARRAY **********\n\n");

    for(i = 0; i < NUM_ROWS; i++)
    {
        iArray[i] = (int *)malloc(NUM_COLUMNS_TWO * sizeof(int));

        if(iArray[i] == NULL)
        {
            printf("Failed to allocate memory to row %d of 2D integer array !!! Exiting now...\n\n", i);
            exit(0);
        }
        else
        {
            printf("Memory allocation to row %d of 2D integer array succeeded !!!\n\n", i);
        }
    }

    for(i = 0; i < NUM_ROWS; i++)
    {
        for(j = 0; j < NUM_COLUMNS_TWO; j++)
        {
            iArray[i][j] = (i + 1) * (j + 1);
        }
    }

    printf("\n\n");
    printf("Displaying 2D Array After Second Memory Allocation:\n\n");

    for(i = 0; i < NUM_ROWS; i++)
    {
        for(j = 0; j < NUM_COLUMNS_TWO; j++)
        {
            printf("iArray[%d][%d] = %d\n", i, j, iArray[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    
    for(i = NUM_ROWS - 1; i >= 0; i--)
    {
        free(iArray[i]);
        iArray[i] = NULL;

        printf("Memory allocated to row %d of 2D integer array has been successfully freed\n\n", i);
    }

    return 0;
}