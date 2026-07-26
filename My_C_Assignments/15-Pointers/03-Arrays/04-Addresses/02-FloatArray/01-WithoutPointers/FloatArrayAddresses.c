#include<stdio.h>

int main(void)
{
    float fArray[10];
    int i;

    for(i = 0; i < 10; i++)
    {
        fArray[i] = (float)(i+1) * 1.2;
    }

    printf("Elements of the float array: \n\n");

    for(i = 0; i < 10; i++)
    {
        printf("fArray[%d] = %f\n",i,fArray[i]);
    }

    printf("\n\n");
    printf("Elements of the float array: \n\n");

    for(i = 0; i < 10; i++)
    {
        printf("fArray[%d] = %f \t\t address = %p\n",i,fArray[i],&fArray[i]);
    }

    printf("\n\n");

    return 0;
}