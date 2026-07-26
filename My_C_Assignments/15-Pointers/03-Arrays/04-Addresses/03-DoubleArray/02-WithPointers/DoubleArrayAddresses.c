#include<stdio.h>

int main(void)
{
    double dArray[10];
    double *ptr_dArray = NULL;
    int i;


    for(i = 0; i < 10; i++)
    {
        dArray[i] = (float)(i+1) * 3.1221f;
    }

    ptr_dArray = dArray;

    printf("\n\n");
    printf("Element of the double array: \n\n");

    for(i = 0; i < 10; i++)
    {
        printf("dArray[%d] = %lf\n",i, *(ptr_dArray + i));
    }

    printf("\n\n");
    printf("Elements of the double array: \n\n");
    for(i = 0; i < 10; i++)
    {
        printf("dArray[%d] = %lf\t\t Address = %p\n",i,*(ptr_dArray+i), (ptr_dArray+i));
    }

    printf("\n\n");
    
    return 0;
}