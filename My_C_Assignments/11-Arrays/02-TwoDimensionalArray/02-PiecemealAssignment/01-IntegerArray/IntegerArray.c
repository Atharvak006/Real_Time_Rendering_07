#include<stdio.h>

int main(void)
{   
    int iArray[3][5];
    int int_Size;
    int iArray_Size;
    int iArray_Num_Columns, iArray_Num_Rows, iArray_Num_Elements;
    int i,j;

    printf("\n\n");

    int_Size = sizeof(int);

    iArray_Size = sizeof(iArray);
    printf("Size of two dimensional (2D) integer Array is = %d\n\n",iArray_Size);

    iArray_Num_Rows = iArray_Size / sizeof(iArray[0]);
    printf("Number of columns in two dimensional (2D) integer array is = %d\n\n",iArray_Num_Rows);

    iArray_Num_Columns = sizeof(iArray[0]) / int_Size;
    printf("Number of columns in two dimensional (2D) integer array is = %d\n\n",iArray_Num_Columns);

    iArray_Num_Elements = iArray_Num_Rows * iArray_Num_Columns;
    printf("Number of elements in two dimensional (2D) integer array is = %d\n",iArray_Num_Elements);

    printf("\n\n");
    printf("Elements in the 2D array: \n\n");

    iArray[0][0] = 21;
    iArray[0][1] = 42;
    iArray[0][2] = 63;
    iArray[0][3] = 84;
    iArray[0][4] = 105;

    iArray[1][0] = 22;
    iArray[1][1] = 44;
    iArray[1][2] = 66;
    iArray[1][3] = 85;
    iArray[1][4] = 115;

    iArray[2][0] = 21;
    iArray[2][1] = 42;
    iArray[2][2] = 63;
    iArray[2][3] = 84;
    iArray[2][4] = 105;

    for(i = 0; i < iArray_Num_Rows; i++)
    {
        printf("****** ROW %d ******\n",(i+1));
        for(j = 0; j < iArray_Num_Columns; j++)
        {
            printf("iArray[%d][%d] = %d\n",i,j,iArray[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}