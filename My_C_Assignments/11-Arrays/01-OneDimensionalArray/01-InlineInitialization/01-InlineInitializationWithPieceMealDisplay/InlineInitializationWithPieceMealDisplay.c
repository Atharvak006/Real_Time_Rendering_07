#include<stdio.h>

int main(void)
{
    int iArray[] = {9,30,6,12,90,95,21,45,2,5};
    int int_Size;
    int iArray_Size;
    int iArray_Num_Elements;

    float fArray[] = {1.2f,2.3f,3.4f,4.5f,5.6f,6.7f,7.8f,8.8f};
    int Float_Size;
    int fArray_Size;
    int fArray_Num_Elements;

    char cArray[] = {'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P'};

    int Char_Size;
    int cArray_Size;
    int cArray_Num_Elements;

    printf("\n\n");

    printf("In line inititialization and piece meal Display of elements of Array 'iArray[]': \n\n");

    printf("iArray[0] (1st Element) = %d\n",iArray[0]);
    printf("iArray[1] (2nd Element) = %d\n",iArray[1]);
    printf("iArray[2] (3rd Element) = %d\n",iArray[2]);
    printf("iArray[3] (4th Element) = %d\n",iArray[3]);
    printf("iArray[4] (5th Element) = %d\n",iArray[4]);
    printf("iArray[5] (6th Element) = %d\n",iArray[5]);
    printf("iArray[6] (7th Element) = %d\n",iArray[6]);
    printf("iArray[7] (8th Element) = %d\n",iArray[7]);
    printf("iArray[8] (9th Element) = %d\n",iArray[8]);
    printf("iArray[9] (10th Element) = %d\n",iArray[9]);
    
    int_Size = sizeof(int);
    iArray_Size = sizeof(iArray);

    iArray_Num_Elements = iArray_Size / int_Size;
    printf("Size of data type 'float' = %d bytes\n",int_Size);
    printf("Number of elements in 'float' Array 'iArray[]' = %d Element \n",iArray_Num_Elements);
    printf("Size of Array 'iArray[]' (%d Elements * %d bytes) = %d Bytes\n\n",iArray_Num_Elements,int_Size, iArray_Size);

    printf("fArray[0] (1st Element) = %f\n",fArray[0]);
    printf("fArray[1] (2nd Element) = %f\n",fArray[1]);
    printf("fArray[2] (3rd Element) = %f\n",fArray[2]);
    printf("fArray[3] (4th Element) = %f\n",fArray[3]);
    printf("fArray[4] (5th Element) = %f\n",fArray[4]);
    printf("fArray[5] (6th Element) = %f\n",fArray[5]);
    printf("fArray[6] (7th Element) = %f\n",fArray[6]);
    printf("fArray[7] (8th Element) = %f\n",fArray[7]);


    Float_Size = sizeof(float);
    fArray_Size = sizeof(fArray);

    fArray_Num_Elements = fArray_Size / Float_Size;
    printf("Size of data type 'float' = %d bytes\n",Float_Size);
    printf("Number of elements in 'float' Array 'fArray[]' = %d Element \n",fArray_Num_Elements);
    printf("Size of Array 'fArray[]' (%d Elements * %d bytes) = %d Bytes\n\n",fArray_Num_Elements,Float_Size, fArray_Size);

    printf("cArray[0] (1st Element) = %c\n",cArray[0]);
    printf("cArray[1] (2nd Element) = %c\n",cArray[1]);
    printf("cArray[2] (3rd Element) = %c\n",cArray[2]);
    printf("cArray[3] (4th Element) = %c\n",cArray[3]);
    printf("cArray[4] (5th Element) = %c\n",cArray[4]);
    printf("cArray[5] (6th Element) = %c\n",cArray[5]);
    printf("cArray[6] (7th Element) = %c\n",cArray[6]);
    printf("cArray[7] (8th Element) = %c\n",cArray[7]);
    printf("cArray[8] (9th Element) = %c\n",cArray[8]);
    printf("cArray[9] (10th Element) = %c\n",cArray[9]);
    printf("cArray[10] (11th Element) = %c\n",cArray[10]);
    printf("cArray[11] (12th Element) = %c\n",cArray[11]);
    printf("cArray[12] (13th Element) = %c\n",cArray[12]);

    Char_Size = sizeof(char);
    cArray_Size = sizeof(cArray);

    cArray_Num_Elements = cArray_Size / Char_Size;
    printf("Size of data type 'char' = %d bytes\n",Char_Size);
    printf("Number of elements in 'char' Array 'cArray[]' = %d Element \n",cArray_Num_Elements);
    printf("Size of Array 'cArray[]' (%d Elements * %d bytes) = %d Bytes\n\n",cArray_Num_Elements,Char_Size, cArray_Size);

    return 0;
}