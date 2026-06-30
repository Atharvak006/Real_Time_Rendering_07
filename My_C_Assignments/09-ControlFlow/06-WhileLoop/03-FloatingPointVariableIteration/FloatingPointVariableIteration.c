#include<stdio.h>

int main(void)
{
    float f;
    float f_val = 1.7f;

    printf("\n\n");

    printf("Printing Numbers %f to %f : \n\n",f_val,(f_val * 10.0f));

    f = f_val;

    while(f <= (f_val * 10.0f))
    {
        printf("\t%f\n",f);
        f = f + f_val;
    }

    printf("\n\n");

    return 0;
}