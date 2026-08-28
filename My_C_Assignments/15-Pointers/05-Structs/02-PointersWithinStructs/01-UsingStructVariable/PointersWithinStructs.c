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
    struct MyData data;

    data.i = 9;
    data.ptr_i = &data.i;

    data.f = 9.232;
    data.ptr_f = &data.f;

    data.d = 9.232;
    data.ptr_d = &data.d;

    printf("\n\n");

    printf("i = %d\n",*(data.ptr_i));
    printf("Address of i = %p\n",data.ptr_i);

    printf("f = %f\n",*(data.ptr_f));
    printf("Address of f = %p\n",data.ptr_f);

    printf("d = %d\n",*(data.ptr_d));
    printf("Address of d = %p\n",data.ptr_d);

    return 0;
}