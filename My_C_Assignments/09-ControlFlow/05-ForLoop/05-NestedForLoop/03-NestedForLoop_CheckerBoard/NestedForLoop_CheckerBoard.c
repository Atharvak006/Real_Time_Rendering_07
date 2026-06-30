#include<stdio.h>

int main(void)
{
    int i,j,k;

    printf("\n\n");

    for(i = 0; i < 64; i++)
    {
        for(j = 0; j < 64; j++)
        {
            k = ((i & 0x8) == 0) ^ ((j & 0x8) == 0);

            if(k == 0)
            {
                printf(" ");
            }

            if(k == 1){
                printf("* ");
            }
        }

        printf("\n\n");
    }
    
    return 0;
}