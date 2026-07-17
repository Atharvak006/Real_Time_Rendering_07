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

    for(int i = 0; i < iArray_Width; i++)
    {
        printf("***** ROW %d *****\n",(i+1));
        for(int j = 0; j < iArray_Height; j++)
        {
            printf("***** COLUMN %d *****\n",(j+1));
            for(int k = 0; k < iArray_Depth; k++)
            {
                printf("iArray[%d][%d][%d] = %d\n",i,j,k, iArray[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    } 

    return 0;
}