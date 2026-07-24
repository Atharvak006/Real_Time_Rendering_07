#include<stdio.h>

union MyUnion
{
    int i;
    float f;
    double d;
    char c;
};

int main(void)
{
    union MyUnion u1,u2;

    printf("\n\n");
    printf("Members of union u1 are: \n\n");

    u1.i = 6;
    u1.f = 1.5666f;
    u1.d = 5.5555555;
    u1.c = 'D';

    printf("MyUnion u1 = %p\n\n",&u1);

    printf("\n\n");
    printf("Member of Union u2 are: \n\n");

    u1.i = 3;
    printf("Members of union u2 are : \n\n");

    u2.f = 4.5f;
    printf("u2.f = %f\n\n",u2.f);

    u2.d = 5.5465;
    printf("u2.d = %lf\n\n",u2.d);

    u2.c = 'V';

    printf("u2.c = %c\n\n",u2.c);

    printf("Addresses of members of union u2 are: \n\n");
    printf("u2.i = %p\n\n",&u2.i);
    printf("u2.f = %p\n\n",&u2.f);
    printf("u2.d = %p\n\n",&u2.d);
    printf("u2.c = %p\n\n",&u2.c);

    printf("MyUnion u2 = %p\n\n",&u2);

    return 0;
}