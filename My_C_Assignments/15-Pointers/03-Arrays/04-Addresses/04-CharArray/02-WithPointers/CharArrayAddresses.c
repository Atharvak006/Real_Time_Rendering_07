#include<stdio.h>

int main(void)
{
    char cArray[10];
    char *ptr_cArray = NULL;
    int i;


    for(i = 0; i < 10; i++)
    {
        cArray[i] = (char)(i+65);
    }

    ptr_cArray = cArray;

    printf("\n\n");
    printf("Element of the character array: \n\n");

    for(i = 0; i < 10; i++)
    {
        printf("cArray[%d] = %c\n",i, *(ptr_cArray + i));
    }

    printf("\n\n");
    printf("Elements of the character array: \n\n");
    for(i = 0; i < 10; i++)
    {
        printf("cArray[%d] = %c\t\t Address = %p\n",i,*(ptr_cArray+i), (ptr_cArray+i));
    }

    printf("\n\n");
    
    return 0;
}