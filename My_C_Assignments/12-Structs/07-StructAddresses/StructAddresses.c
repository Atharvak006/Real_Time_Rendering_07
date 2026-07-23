#include<stdio.h>

struct MyData
{
    int i;
    float f;
    double d;
    char c;
};

int main(void)
{
    struct MyData data;

    data.i = 30;
    data.f = 11.35f;
    data.d = 1.2995;
    data.c = 'A';

    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData' are: \n\n");
    printf("i = %d\n",data.i);
    printf("f = %f\n",data.f);
    printf("d = %lf\n",data.d);
    printf("c = %c\n\n",data.c);

    printf("\n\n");
    printf("Addresses of data members of 'struct MyData' are: \n\n");
    printf("i Occupies addresses from %p\n",&data.i);
    printf("f Occupies addresses from %p\n",&data.f);
    printf("d Occupies addresses from %p\n",&data.d);
    printf("c Occupies addresses from %p\n",&data.c);

    printf("Starting addresses of 'struct Mydata' variable 'data' = %p\n\n",&data);
}   
