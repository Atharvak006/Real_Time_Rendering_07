#include<stdio.h>

int main(void)
{   
    char chArray_1[] = {'A', 'S', 'T', 'R', 'O', 'M', 'E', 'D', 'I', 'C', 'O', 'M', 'P', '\0'};

    char chArray_2[9] = {'W', 'E', 'L', 'C', 'O', 'M', 'E', 'S', '\0'};

    char chArray_3[] = {'Y', 'O', 'U', '\0'};

    char chArray_4[] = "To";

    char chArray_5[] = "REAL TIME RENDERING BATCH OF 2020 - 21";

    char chArray_WithoutNULLTerminator[] = {'H','e','l','l','o'};


    printf("\n\n");

    printf("Size of chArray_01 : %lu\n\n",sizeof(chArray_1));
    printf("Size of chArray_02 : %lu\n\n",sizeof(chArray_2));
    printf("Size of chArray_03 : %lu\n\n",sizeof(chArray_3));
    printf("Size of chArray_04 : %lu\n\n",sizeof(chArray_4));
    printf("Size of chArray_05 : %lu\n\n",sizeof(chArray_5));

    printf("\n\n");

    printf("The strings are : \n\n");
    printf("chArray_01 : %s\n\n",chArray_1);
    printf("chArray_02 : %s\n\n",chArray_2);
    printf("chArray_03 : %s\n\n",chArray_3);
    printf("chArray_04 : %s\n\n",chArray_4);
    printf("chArray_05 : %s\n\n",chArray_5);

    printf("\n\n");
    printf("Size of chArray_WithoutNullTerminator : %lu\n\n",sizeof(chArray_WithoutNULLTerminator));
    printf("chArray_WithoutNullTerminator: %s\n\n",chArray_WithoutNULLTerminator);
    
    return 0;
}