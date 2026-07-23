#include<stdio.h>

struct MyData
{
    int i;
    float f;
    double d;
    char c;
}; 

struct MyData data = {30,4.5f,11.45995,'x'};

int main(void)
{
    printf("\n\n");
    printf("Data members of 'struct MyData' are: \n\n");
    printf("i = %d\n",data.i);
    printf("f = %f\n",data.f);
    printf("d = %lf\n",data.d);
    printf("c = %c\n\n",data.c);

    return 0;
}