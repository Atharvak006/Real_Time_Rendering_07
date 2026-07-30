#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3

int main(void)
{
    int i, j;
    int **ptr_iArray = NULL;

    printf("\n\n");

    ptr_iArray = (int **)malloc(NUM_ROWS * sizeof(int *));

    if(ptr_iArray == NULL)
    {
        printf("Memory allocation to the 1D array of base addresses of %d Rows Failed !!! Exiting Now...\n\n", NUM_ROWS);
        exit(0);
    }
    else
    {
        printf("Memory allocation to the 1D array of Base Addresses of %d Rows has succeeded !!!\n\n", NUM_ROWS);
    }

    /* Allocate memory for each row */
    for(i = 0; i < NUM_ROWS; i++)
    {
        ptr_iArray[i] = (int *)malloc(NUM_COLUMNS * sizeof(int));

        if(ptr_iArray[i] == NULL)
        {
            printf("Memory allocation to the columns of row %d failed !!! Exiting Now...\n\n", i);
            exit(0);
        }
        else
        {
            printf("Memory allocation to the columns of row %d has succeeded !!!\n\n", i);
        }
    }

    /* Initialize array */
    for(i = 0; i < NUM_ROWS; i++)
    {
        for(j = 0; j < NUM_COLUMNS; j++)
        {
            *(*(ptr_iArray + i) + j) = (i + 1) * (j + 1);
        }
    }

    printf("\n\n");
    printf("2D integer array elements along with addresses:\n\n");

    /* Display array */
    for(i = 0; i < NUM_ROWS; i++)
    {
        for(j = 0; j < NUM_COLUMNS; j++)
        {
            printf("ptr_iArray[%d][%d] = %d \t\t at address &ptr_iArray[%d][%d]: %p\n",
                   i, j, ptr_iArray[i][j], i, j, &ptr_iArray[i][j]);
        }
        printf("\n\n");
    }

    /* Free each row */
    for(i = NUM_ROWS - 1; i >= 0; i--)
    {
        if(*(ptr_iArray + i))
        {
            free(*(ptr_iArray + i));
            *(ptr_iArray + i) = NULL;
            printf("Memory freed\n");
        }
    }

    /* Free base pointer */
    if(ptr_iArray)
    {
        free(ptr_iArray);
        ptr_iArray = NULL;
        printf("Memory allocated to ptr_iArray freed\n\n");
    }

    return 0;
}