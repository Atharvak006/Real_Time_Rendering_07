#include<stdio.h>

int main(void)
{
    int iArray[5][3][2] = { 
                            { {9,18}, {27,36}, {45,54} } ,
                            { {8,16}, {24,32}, {40,48} } ,
                            { {7,14}, {21,28}, {35,42} } ,
                            { {6,12}, {18,24}, {30,36} } ,
                            { {5,10}, {15,20}, {25,30} }  
                          };
    
    int int_Size;
    int iArray_Size;
    int iArray_Num_Elements, iArray_Width, iArray_Height, iArray_Depth;
    
    printf("\n\n");

    int_Size = sizeof(int);

    iArray_Size = sizeof(iArray);

    printf("\n\n");
    int_Size = sizeof(int);

    iArray_Size = sizeof(iArray);
    printf("Size of three dimensional (3D) integer Array is = %d\n\n",iArray_Size);
    
    iArray_Width = iArray_Size/sizeof(iArray[0]);
    printf("Number of rows (width) is %d\n\n",iArray_Width);
                          
    iArray_Height = sizeof(iArray[0]) / sizeof(iArray[0][0]);
    printf("Number of columns (Height) is %d\n\n",iArray_Height);

    iArray_Depth = sizeof(iArray[0][0]) / sizeof(iArray[0][0][0]);
    printf("Number of columns (Height) is %d\n\n",iArray_Depth);

    iArray_Num_Elements = iArray_Width * iArray_Height * iArray_Depth;
    printf("Number of elements in 3D Integer Array = %d\n\n",iArray_Num_Elements);


    printf("\n\n");
    printf("Elements in integer 3D Array: \n\n");


    printf("***** ROW 1 *****\n");
    printf("***** COLUMN 1 *****\n");
    printf("iArray[0][0][0] = %d\n",iArray[0][0][0]);
    printf("iArray[0][0][1] = %d\n",iArray[0][0][1]);
    printf("\n");


    printf("***** COLUMN 2 *****\n");
    printf("iArray[0][1][0] = %d\n",iArray[0][1][0]);
    printf("iArray[0][1][1] = %d\n",iArray[0][1][1]);
    printf("\n");

    printf("***** COLUMN 3 *****\n");
    printf("iArray[0][2][0] = %d\n",iArray[0][2][0]);
    printf("iArray[0][2][1] = %d\n",iArray[0][2][1]);
    printf("\n");
    
    // *********** ROW 2 ************
    printf("***** ROW 2 *****\n");
    printf("***** COLUMN 1 *****\n");
    printf("iArray[1][0][0] = %d\n",iArray[1][0][0]);
    printf("iArray[1][0][1] = %d\n",iArray[1][0][1]);
    printf("\n");


    printf("***** COLUMN 2 *****\n");
    printf("iArray[1][1][0] = %d\n",iArray[1][1][0]);
    printf("iArray[1][1][1] = %d\n",iArray[1][1][1]);
    printf("\n");

    printf("***** COLUMN 3 *****\n");
    printf("iArray[1][2][0] = %d\n",iArray[1][2][0]);
    printf("iArray[1][2][1] = %d\n",iArray[1][2][1]);
    printf("\n");

    // *********** ROW 3 ************
    printf("***** ROW 3 *****\n");
    printf("***** COLUMN 1 *****\n");
    printf("iArray[2][0][0] = %d\n",iArray[2][0][0]);
    printf("iArray[2][0][1] = %d\n",iArray[2][0][1]);
    printf("\n");


    printf("***** COLUMN 2 *****\n");
    printf("iArray[2][1][0] = %d\n",iArray[2][1][0]);
    printf("iArray[2][1][1] = %d\n",iArray[2][1][1]);
    printf("\n");

    printf("***** COLUMN 3 *****\n");
    printf("iArray[2][2][0] = %d\n",iArray[2][2][0]);
    printf("iArray[2][2][1] = %d\n",iArray[2][2][1]);
    printf("\n");

    // *********** ROW 4 ************
    printf("***** ROW 4 *****\n");
    printf("***** COLUMN 1 *****\n");
    printf("iArray[3][0][0] = %d\n",iArray[3][0][0]);
    printf("iArray[3][0][1] = %d\n",iArray[3][0][1]);
    printf("\n");


    printf("***** COLUMN 2 *****\n");
    printf("iArray[3][1][0] = %d\n",iArray[3][1][0]);
    printf("iArray[3][1][1] = %d\n",iArray[3][1][1]);
    printf("\n");

    printf("***** COLUMN 3 *****\n");
    printf("iArray[3][2][0] = %d\n",iArray[3][2][0]);
    printf("iArray[3][2][1] = %d\n",iArray[3][2][1]);
    printf("\n");

    // *********** ROW 5 ************
    printf("***** ROW 5 *****\n");
    printf("***** COLUMN 1 *****\n");
    printf("iArray[4][0][0] = %d\n",iArray[4][0][0]);
    printf("iArray[4][0][1] = %d\n",iArray[4][0][1]);
    printf("\n");

    printf("***** COLUMN 2 *****\n");
    printf("iArray[4][1][0] = %d\n",iArray[4][1][0]);
    printf("iArray[4][1][1] = %d\n",iArray[4][1][1]);
    printf("\n");

    printf("***** COLUMN 3 *****\n");
    printf("iArray[4][2][0] = %d\n",iArray[4][2][0]);
    printf("iArray[4][2][1] = %d\n",iArray[4][2][1]);
    printf("\n");

    return 0;
}