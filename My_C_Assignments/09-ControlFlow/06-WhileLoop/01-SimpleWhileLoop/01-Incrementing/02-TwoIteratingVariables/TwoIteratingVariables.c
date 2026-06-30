#include<stdio.h>

int main(void)
{
    int a, b;

    printf("\n\n");

    printf("Printing Digits 1 to 10 and 10 to 100: \n\n");

    a = 1;
    b = 10;

    while(a <= 10, b <= 100)
    {
        printf("\t %d \t %d\n",a,b);
        a++;
        b = b + 10;
    }

    printf("\n\n");

    return 0;
}