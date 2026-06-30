#include<stdio.h>

int main(void)
{   
    int a,b;

    printf("\n\n");
    
    a = 1;
    do
    {
        printf("a = %d\n",a);
        printf("--------\n");

        b = 1;
        
        do
        {
            printf("\tb = %d\n",b);
            b++;
        }while(b <= 5);
        a++;
        printf("\n\n");
    }while(a <= 10);
    
    return 0;
}