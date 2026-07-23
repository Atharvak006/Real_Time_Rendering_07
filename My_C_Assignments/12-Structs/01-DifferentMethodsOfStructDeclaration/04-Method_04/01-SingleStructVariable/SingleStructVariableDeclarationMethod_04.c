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

    int i_Size;
    int f_Size;
    int d_Size;
    int struct_MyData_Size;

    data.i = 30;
    data.f = 11.45f;
    data.d = 1.2995;

    // Displaying Values of the data members of 'struct MyData'
    printf("\n\n");
    printf("Data members of 'struct Mydata' ARE: \n\n"); 
    printf("i = %d\n",data.i);
    printf("f = %f\n",data.f);
    printf("d = %lf\n",data.d);

    i_Size = sizeof(data.i);
    f_Size = sizeof(data.f);
    d_Size = sizeof(data.d);

    struct_MyData_Size = sizeof(struct MyData);

    printf("SIZES (in bytes) of data members of 'struct MyData' ARE : \n\n");
    printf("\n\n");
    printf("Size of i = %d bytes \n",i_Size);
    printf("Size of f = %d bytes \n",f_Size);
    printf("Size of d = %d bytes \n",d_Size);


    printf("Size of 'struct Mydata' : %d bytes\n\n",struct_MyData_Size);
    
    return 0;
}