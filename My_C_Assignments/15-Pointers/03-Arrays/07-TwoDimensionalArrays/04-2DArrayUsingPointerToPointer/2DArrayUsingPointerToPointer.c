#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int **ptr_iArray = NULL;

    int i, j;
    int num_rows, num_cols;

    printf("\n\n");
    printf("Enter number of rows: ");
    scanf("%d", &num_rows);

    printf("\n\n");
    printf("Enter number of columns: ");
    scanf("%d", &num_cols);

    printf("\n\n");
    printf("*********** MEMORY ALLOCATION TO 2D INTEGER ARRAY **********\n\n");

    ptr_iArray = (int **)malloc(num_rows * sizeof(int *));

    if(ptr_iArray == NULL)
    {
        printf("FAILED TO ALLOCATE MEMORY\n");
        exit(0);
    }
    else
    {
        printf("Memory allocation successful.\n\n");
    }

    for(i = 0; i < num_rows; i++)
    {
        ptr_iArray[i] = (int *)malloc(num_cols * sizeof(int));

        if(ptr_iArray[i] == NULL)
        {
            printf("Failed to allocate memory to columns of row %d of 2D integer array !!! Exiting now...\n\n", i);
            exit(0);
        }
        else
        {
            printf("Memory allocation to columns of row %d of 2D integer array succeeded.\n\n", i);
        }
    }

    for(i = 0; i < num_rows; i++)
    {
        for(j = 0; j < num_cols; j++)
        {
            ptr_iArray[i][j] = (i + 1) * (j + 1);
        }
    }

    printf("Base addresses of each row:\n\n");

    for(i = 0; i < num_rows; i++)
    {
        printf("Base address of row %d : ptr_iArray[%d] = %p\tAt address : %p\n",
               i, i, ptr_iArray[i], &ptr_iArray[i]);
    }

    printf("\n\n");

    printf("2D Integer Array Elements:\n\n");

    for(i = 0; i < num_rows; i++)
    {
        for(j = 0; j < num_cols; j++)
        {
            printf("ptr_iArray[%d][%d] = %d\tAt address : %p\n",
                   i, j, ptr_iArray[i][j], &ptr_iArray[i][j]);
        }
        printf("\n");
    }

    for(i = num_rows - 1; i >= 0; i--)
    {
        if(ptr_iArray[i])
        {
            free(ptr_iArray[i]);
            ptr_iArray[i] = NULL;
            printf("Memory allocated to row %d has been freed.\n\n", i);
        }
    }

    if(ptr_iArray)
    {
        free(ptr_iArray);
        ptr_iArray = NULL;
        printf("Memory allocated to ptr_iArray has been freed.\n");
    }

    return 0;
}