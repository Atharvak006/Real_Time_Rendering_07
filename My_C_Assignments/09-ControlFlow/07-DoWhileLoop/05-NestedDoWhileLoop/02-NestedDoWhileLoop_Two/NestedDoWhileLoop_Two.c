#include<stdio.h>

int main(void)
{
    int a,b,c;

    printf("\n\n");

    a = 1;
    do
    {
        printf("a = %d\n",a);
        
        printf("---------\n\n");

        b = 1;
        do
        {
            printf("\tb = %d\n",b);
            printf("\t--------\n\n");

            c = 1;

            do
            {
                printf("\t\tc = %d\n",c);
                c++;
            }while(c <= 3);
            
            printf("\n\n");
            b++;
        }while(b <= 5);
        printf("\n\n");
        a++;
    }while(a <= 10);

    return 0;
}