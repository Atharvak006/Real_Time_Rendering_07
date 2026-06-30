#include<stdio.h>

int main(void)
{
    int a,b,c;

    printf("\n\n");
    
    a = 0;

    while(a <= 64)
    {
        b = 0;
        while(b < 64)
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
        }
        printf("\n\n");
        a++;
    }
    return 0;
}