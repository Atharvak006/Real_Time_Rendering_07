#include<stdio.h>
#include<stdlib.h>

#define NUM_ROWS 5
#define NUM_COLUMNS 3

int main(void)
{
    int iArray[NUM_ROWS][NUM_COLUMNS];

    int i, j;

    int *ptr_iArray_Row = NULL;

    for(i = 0; i < NUM_ROWS; i++)
    {
        ptr_iArray_Row = iArray[i];

        for(j = 0; j < NUM_COLUMNS; j++)
        {
            *(ptr_iArray_Row + j) = (i + 1) * (j + 1);
        }
    }

    printf("\n\n");
    printf("2D Integer array elements along with addresses: \n\n");

    for(i = 0; i < NUM_ROWS; i++)
    {
        ptr_iArray_Row = iArray[i];

        for(j = 0; j < NUM_COLUMNS; j++)
        {
            printf("*(iArray[%d] + %d) = %d \t\t At address (ptr_iArray_Row + %d): %p\n",
                   i, j, *(ptr_iArray_Row + j), j, (ptr_iArray_Row + j));
        }

        printf("\n\n");
    }

    return 0;
}