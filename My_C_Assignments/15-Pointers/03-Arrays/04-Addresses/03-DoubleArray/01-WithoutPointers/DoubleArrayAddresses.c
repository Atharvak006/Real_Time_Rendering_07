#include<stdio.h>

int main(void)
{
    double dArray[10];
    int i;

    for(i = 0; i < 10; i++)
    {
        dArray[i] = (float)(i+1) * 1.22223;
    }

    printf("Elements of the double array: \n\n");

    for(i = 0; i < 10; i++)
    {
        printf("dArray[%d] = %lf\n",i,dArray[i]);
    }

    printf("\n\n");
    printf("Elements of the double array: \n\n");

    for(i = 0; i < 10; i++)
    {
        printf("dArray[%d] = %lf \t\t address = %p\n",i,dArray[i],&dArray[i]);
    }

    printf("\n\n");

    return 0;
}