#include<stdio.h>
#include<conio.h>

struct MyData
{
    int i;
    float f;
    double d;
    char ch;
};

int main(void)
{
    struct MyData data;

    printf("\n");

    printf("Enter integer value for data member 'i' of 'struct MyData' : \n");
    scanf("%d",&data.i);

    printf("Enter float value for data member 'i' of 'struct MyData' : \n");
    scanf("%f",&data.f);

    printf("Enter double value for data member 'i' of 'struct MyData' : \n");
    scanf("%lf",&data.d);

    printf("Enter character value for data member 'i' of 'struct MyData' : \n");
    data.ch = getch();

    printf("\n");
    printf("Values: \n");
    printf("i = %d\n",data.i);
    printf("f = %f\n",data.f);
    printf("d = %lf\n",data.d);
    printf("c = %c\n",data.ch);

    return 0;

}