#include<stdio.h>

int main(void)
{
    int a,b,c;

    printf("\n\n");
    
    a = 0;

    do
    {
        b = 0;
        do
        {
            c = ((a & 0x8) == 0) ^ ((b & 0x8) == 0);

            if(c == 0)
            {
                printf("  ");
            }

            if(c == 1)
            {
                printf("*  ");
            }

            b++;
        }while(b < 64);
        
        printf("\n\n");
        a++;
    }while(a <= 64);
    return 0;
}