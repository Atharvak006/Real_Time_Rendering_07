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

    struct MyData data_one = {43,2.2f,1.213,'A'};

    struct MyData data_two = {'P',2.3f,1.324,68};
    
    struct MyData data_three = {36,'G'};

    struct MyData data_four = {79};
    
    printf("\n\n");
    printf("Data members of 'struct MyData data_one: ' are: \n\n");
    printf("i = %d\n",data_one.i);
    printf("f = %f\n",data_one.f);
    printf("d = %lf\n",data_one.d);
    printf("c = %c\n\n",data_one.c);


    printf("\n\n");
    printf("Data members of 'struct MyData data_two: ' are: \n\n");
    printf("i = %d\n",data_two.i);
    printf("f = %f\n",data_two.f);
    printf("d = %lf\n",data_two.d);
    printf("c = %c\n\n",data_two.c);

    printf("\n\n");
    printf("Data members of 'struct MyData data_three: ' are: \n\n");
    printf("i = %d\n",data_three.i);
    printf("f = %f\n",data_three.f);
    printf("d = %lf\n",data_three.d);
    printf("c = %c\n\n",data_three.c);

    printf("\n\n");
    printf("Data members of 'struct MyData data_four: ' are: \n\n");
    printf("i = %d\n",data_four.i);
    printf("f = %f\n",data_four.f);
    printf("d = %lf\n",data_four.d);
    printf("c = %c\n\n",data_four.c);

    return 0;
}