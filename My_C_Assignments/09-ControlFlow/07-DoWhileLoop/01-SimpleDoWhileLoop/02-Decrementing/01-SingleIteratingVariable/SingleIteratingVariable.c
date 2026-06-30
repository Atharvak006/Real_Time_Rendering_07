#include<stdio.h>

int main(void)
{
    int a;

    printf("\n\n");

    printf("Printing Digits 10 to 1 : \n\n");

    a = 10;

    do
    {
        printf("\t %d\n",a);
        a--;
    }while(a >= 1);

    printf("\n\n");

    return 0;
}