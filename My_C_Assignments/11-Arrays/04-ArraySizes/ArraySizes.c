#include<stdio.h>

int main(void)
{
    int iArray_One[5];
    int iArray_Two[5][3];
    int iArray_Three[100][100][5];

    int Num_Rows_2D;
    int Num_Columns_2D;

    int Num_Rows_3D;
    int Num_Columns_3D;
    int Depth_3D;

    printf("\n\n");
    printf("Size of 1D integer array = %lu\n",sizeof(iArray_One));
    printf("Number of elements in 1D integer array iArray_One = %lu\n",(sizeof(iArray_One)/sizeof(int)));

    printf("\n\n");
    printf("Size of 2D integer array iArray_Two = %lu\n",sizeof(iArray_Two));

    printf("Number rows in 2D integer array iArray_Two = %lu\n",(sizeof(iArray_Two)/ sizeof(iArray_Two[0])));
    Num_Rows_2D = (sizeof(iArray_Two) / sizeof(iArray_Two));

    printf("Number of elements (columns) in each row in 2D array = %lu\n",(sizeof(iArray_Two[0]) / sizeof(iArray_Two[0][0])));

    Num_Columns_2D = (sizeof(iArray_Two[0]) / sizeof(iArray_Two[0][0]));

    printf("Number of elements in total in 2D array iArray_Two = %d\n",(Num_Rows_2D * Num_Columns_2D));


    printf("\n\n");

    printf("\n\n");

    printf("Size of 3D integer Array iArray_Three = %lu\n",(sizeof(iArray_Three)/sizeof(iArray_Three[0])));
    Num_Rows_3D = (sizeof(iArray_Three) / sizeof(iArray_Three[0]));

    printf("Number of elements (columns) in one row in 3D integer array iArray_Three = %lu\n",(sizeof(iArray_Three[0]) / sizeof(iArray_Three[0][0])));
    Num_Columns_3D = (sizeof(iArray_Three[0])/ sizeof(iArray_Three[0][0]));

    printf("Number of elements (depth) in one column in one row in 3D integer array iArray_Three = %lu\n",(sizeof(iArray_Three[0][0]) / sizeof(iArray_Three[0][0][0])));
    Depth_3D = (sizeof(iArray_Three[0][0])/ sizeof(iArray_Three[0][0][0]));

    printf("Number of elements in total in 3D Array iArray_Three = %d\n",(Num_Rows_3D * Num_Columns_3D * Depth_3D));
    return 0;
}