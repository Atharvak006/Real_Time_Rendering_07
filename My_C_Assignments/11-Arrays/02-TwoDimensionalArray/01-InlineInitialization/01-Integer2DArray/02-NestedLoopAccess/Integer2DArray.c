#include<stdio.h>

int main(void)
{
    int iArray[5][3] = {{1,2,3},{2,4,6},{3,6,9},{4,8,12},{5,10,15}};

    int int_Size;
    int iArray_Size;
    int iArray_Num_Elements, iArray_Num_Rows, iArray_Num_Columns;

    printf("\n\n");

    int_Size = sizeof(int);

    iArray_Size = sizeof(iArray);
    printf("Size of two dimensional (2D) Integer Array is = %d\n\n",iArray_Size);

    iArray_Num_Rows = iArray_Size / sizeof(iArray[0]);
    printf("Number of rows in two dimensional (2D) Integer Array is = %d\n\n",iArray_Num_Rows);

    iArray_Num_Columns = sizeof(iArray[0]) / int_Size;
    printf("Number of columns in two dimensional (2D) Integer Array is = %d\n\n",iArray_Num_Columns);

    iArray_Num_Elements = iArray_Num_Rows * iArray_Num_Columns;
    printf("Number of elements in two dimensional (2D) Integer Array is = %d\n\n",iArray_Num_Elements);

    printf("\n\n");
    printf("Elements in the 2D array: \n\n");

   for(int i = 0; i < iArray_Num_Rows; i++)
    {
        printf("***** ROW %d *****\n", (i + 1));

        for(int j = 0; j < iArray_Num_Columns; j++)
        {
            printf("iArray[%d][%d] = %d\n", i, j, iArray[i][j]);
        }

        printf("\n");
    }

    return 0;
}