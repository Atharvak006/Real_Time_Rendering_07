#include <stdio.h>

int main(void)
{

    int iArray[] = {9, 30, 6, 12, 90, 95, 21, 45, 2, 5};
    int int_Size;
    int iArray_Size;
    int iArray_Num_Elements;

    
    float fArray[] = {1.2f, 2.3f, 3.4f, 4.5f, 5.6f, 6.7f, 7.8f, 8.8f};
    int Float_Size;
    int fArray_Size;
    int fArray_Num_Elements;

    
    char cArray[] = {'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P'};
    int Char_Size;
    int cArray_Size;
    int cArray_Num_Elements;

    printf("\n\n");

    //================ Integer Array ===========

    printf("In line initialization and Loop (for) Display of elements of Array 'iArray[]':\n\n");

    int_Size = sizeof(int);
    iArray_Size = sizeof(iArray);
    iArray_Num_Elements = iArray_Size / int_Size;

    for (int i = 0; i < iArray_Num_Elements; i++)
    {
        printf("iArray[%d] (Element %d) = %d\n", i, i + 1, iArray[i]);
    }

    printf("\n");
    printf("Size of data type 'int' = %d bytes\n", int_Size);
    printf("Number of elements in 'int' Array 'iArray[]' = %d Elements\n", iArray_Num_Elements);
    printf("Size of Array 'iArray[]' (%d Elements * %d bytes) = %d Bytes\n\n",
           iArray_Num_Elements, int_Size, iArray_Size);

    //================ Float Array ========

    printf("In line initialization and Loop (while) Display of elements of Array 'fArray[]':\n\n");

    Float_Size = sizeof(float);
    fArray_Size = sizeof(fArray);
    fArray_Num_Elements = fArray_Size / Float_Size;

    printf("Size of data type 'float' = %d bytes\n", Float_Size);
    printf("Number of elements in 'float' Array 'fArray[]' = %d Elements\n", fArray_Num_Elements);
    printf("Size of Array 'fArray[]' (%d Elements * %d bytes) = %d Bytes\n\n",
           fArray_Num_Elements, Float_Size, fArray_Size);

    int i = 0;
    while (i < fArray_Num_Elements)
    {
        printf("fArray[%d] (Element %d) = %f\n", i, i + 1, fArray[i]);
        i++;
    }

    //================ Character Array =========

    printf("\nIn line initialization and Loop (do-while) Display of elements of Array 'cArray[]':\n\n");

    Char_Size = sizeof(char);
    cArray_Size = sizeof(cArray);
    cArray_Num_Elements = cArray_Size / Char_Size;

    i = 0;
    do
    {
        printf("cArray[%d] (Element %d) = %c\n", i, i + 1, cArray[i]);
        i++;
    } while (i < cArray_Num_Elements);

    printf("\n");
    printf("Size of data type 'char' = %d byte\n", Char_Size);
    printf("Number of elements in 'char' Array 'cArray[]' = %d Elements\n", cArray_Num_Elements);
    printf("Size of Array 'cArray[]' (%d Elements * %d byte) = %d Bytes\n",
           cArray_Num_Elements, Char_Size, cArray_Size);

    return 0;
}