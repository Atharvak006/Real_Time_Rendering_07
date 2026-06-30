#include<stdio.h>

int main(void)
{
    int a,b,c;

    printf("\n\n");

    a = 1;
    while(a <= 10)
    {
        printf("a = %d\n",a);
        
        printf("---------\n\n");

        b = 1;
        while(b <= 5)
        {
            printf("\tb = %d\n",b);
            printf("\t--------\n\n");

            c = 1;

            while(c <= 3)
            {
                printf("\t\tc = %d\n",c);
                c++;
            }
            printf("\n\n");
            b++;
        }
        printf("\n\n");
        a++;
    }

    return 0;
}