#include<stdio.h>

int main(void)
{   
    int a, b;

    printf("\n\n");

    printf("Printing Digits 10 to 1 and 100 to 10: \n\n");

    a = 10;
    b = 100;

    do
    {
        printf("\t %d \t %d\n",a,b);
        a--;
        b = b - 10;
    }while(a >= 1, b >= 10);

    printf("\n\n");
    
    return 0;
}