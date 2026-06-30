#include<stdio.h>

int main(void)
{   
    int a,b;

    printf("\n\n");
    
    a = 1;
    while(a <= 10)
    {
        printf("a = %d\n",a);
        printf("--------\n");

        b = 1;
        while(b <= 5)
        {
            printf("\tb = %d\n",b);
            b++;
        }
        a++;
        printf("\n\n");
    }
    return 0;
}