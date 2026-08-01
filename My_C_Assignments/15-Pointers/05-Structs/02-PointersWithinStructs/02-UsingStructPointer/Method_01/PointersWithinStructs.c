#include<stdio.h>
#include<stdlib.h>

struct MyData
{
    int *ptr_i;
    int i;

    float *ptr_f;
    float f;

    double *ptr_d;
    double d;
};

int main(void)
{   
    struct MyData* pdata;

    (*pdata).i = 9;
    (*pdata).ptr_i = &(*pdata).i;

    (*pdata).f = 9.232;
    (*pdata).ptr_f = &(*pdata).f;

    (*pdata).d = 9.232;
    (*pdata).ptr_d = &(*pdata).d;

    printf("\n\n");

    printf("i = %d\n",*((*pdata).ptr_i));
    printf("Address of i = %p\n",(*pdata).ptr_f);

    printf("f = %f\n",*((*pdata).ptr_f));
    printf("Address of f = %p\n",(*pdata).ptr_f);

    printf("d = %d\n",*((*pdata).ptr_d));
    printf("Address of d = %p\n",(*pdata).ptr_d);

    return 0;
}