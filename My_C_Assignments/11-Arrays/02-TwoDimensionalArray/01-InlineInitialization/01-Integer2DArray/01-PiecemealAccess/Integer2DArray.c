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

    printf("****** ROW 1 ******\n");
    printf("iArray[0][0] = %d\n",iArray[0][0]);
    printf("iArray[0][1] = %d\n",iArray[0][1]);
    printf("iArray[0][2] = %d\n",iArray[0][2]);

    printf("\n\n");

    printf("****** ROW 2 ******\n");
    printf("iArray[1][0] = %d\n",iArray[1][0]);
    printf("iArray[1][1] = %d\n",iArray[1][1]);
    printf("iArray[1][2] = %d\n",iArray[1][2]);
    
    printf("\n\n");

    printf("****** ROW 3 ******\n");
    printf("iArray[2][0] = %d\n",iArray[2][0]);
    printf("iArray[2][1] = %d\n",iArray[2][1]);
    printf("iArray[2][2] = %d\n",iArray[2][2]);

    printf("\n\n");

    printf("****** ROW 4 ******\n");
    printf("iArray[3][0] = %d\n",iArray[3][0]);
    printf("iArray[3][1] = %d\n",iArray[3][1]);
    printf("iArray[3][2] = %d\n",iArray[3][2]);
    
    printf("\n\n");

    printf("****** ROW 5 ******\n");
    printf("iArray[4][0] = %d\n",iArray[4][0]);
    printf("iArray[4][1] = %d\n",iArray[4][1]);
    printf("iArray[4][2] = %d\n",iArray[4][2]);

    printf("\n\n");

    return 0;
}