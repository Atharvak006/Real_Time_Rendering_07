#include<stdio.h>

int main(void)
{
    int iArray[] = {10,20,30,40,50,60,70,80,90,100};
    int *ptr_iArray = NULL;

    printf("\n\n");

    printf("*** USING ARRAY NAME AS POINTER ie : Value of xth element of iArray: *(iArray + x) AND Address of xth element of iArray: (iArray + x)***\n\n");
    printf("Integer array elements and their addresses: \n\n");
    printf("*(iArray + 0) = %d \t at address (iArray + 0): %p\n",*(iArray + 0),(iArray + 0));
    printf("*(iArray + 1) = %d \t at address (iArray + 1): %p\n",*(iArray + 1),(iArray + 1));
    printf("*(iArray + 2) = %d \t at address (iArray + 2): %p\n",*(iArray + 2),(iArray + 2));
    printf("*(iArray + 3) = %d \t at address (iArray + 3): %p\n",*(iArray + 3),(iArray + 3));
    printf("*(iArray + 4) = %d \t at address (iArray + 4): %p\n",*(iArray + 4),(iArray + 4));
    printf("*(iArray + 5) = %d \t at address (iArray + 5): %p\n",*(iArray + 5),(iArray + 5));
    printf("*(iArray + 6) = %d \t at address (iArray + 6): %p\n",*(iArray + 6),(iArray + 6));
    printf("*(iArray + 7) = %d \t at address (iArray + 7): %p\n",*(iArray + 7),(iArray + 7));
    printf("*(iArray + 8) = %d \t at address (iArray + 8): %p\n",*(iArray + 8),(iArray + 8));
    printf("*(iArray + 9) = %d \t at address (iArray + 9): %p\n",*(iArray + 9),(iArray + 9));


    ptr_iArray = iArray;

    printf("\n\n");
    printf("***USING POINTER AS ARRAY NAME ie : Value of xth element of iarray: ptr_iArray[x] amd address of xth element of iArray: &ptr_iArray[x]***\n\n");

    printf("Integer array elements and their addresses: \n\n");
    printf("ptr_iArray[0] = %d \t at address &ptr_iArray[0]: %p\n",ptr_iArray[0],&ptr_iArray[0]);
    printf("ptr_iArray[1] = %d \t at address &ptr_iArray[1]: %p\n",ptr_iArray[1],&ptr_iArray[1]);
    printf("ptr_iArray[2] = %d \t at address &ptr_iArray[2]: %p\n",ptr_iArray[2],&ptr_iArray[2]);
    printf("ptr_iArray[3] = %d \t at address &ptr_iArray[3]: %p\n",ptr_iArray[3],&ptr_iArray[3]);
    printf("ptr_iArray[4] = %d \t at address &ptr_iArray[4]: %p\n",ptr_iArray[4],&ptr_iArray[4]);
    printf("ptr_iArray[5] = %d \t at address &ptr_iArray[5]: %p\n",ptr_iArray[5],&ptr_iArray[5]);
    printf("ptr_iArray[6] = %d \t at address &ptr_iArray[6]: %p\n",ptr_iArray[6],&ptr_iArray[6]);
    printf("ptr_iArray[7] = %d \t at address &ptr_iArray[7]: %p\n",ptr_iArray[7],&ptr_iArray[7]);
    printf("ptr_iArray[8] = %d \t at address &ptr_iArray[8]: %p\n",ptr_iArray[8],&ptr_iArray[8]);
    printf("ptr_iArray[9] = %d \t at address &ptr_iArray[9]: %p\n",ptr_iArray[9],&ptr_iArray[9]);
    
    return 0;
}