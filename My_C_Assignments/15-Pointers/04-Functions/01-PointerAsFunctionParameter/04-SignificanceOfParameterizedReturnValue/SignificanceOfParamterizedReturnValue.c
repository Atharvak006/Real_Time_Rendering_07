#include<stdio.h>

enum
{
    NEGATIVE = -1,
    ZERO,
    POSITIVE
};

int main(void)
{
    int Difference(int,int,int*);

    int x;
    int y;
    int answer,iret;

    printf("\n\n");
    printf("Enter value of 'x' : ");
    scanf("%d",&x);

    printf("\n\n");
    printf("Enter value of 'y': ");
    scanf("%d",&y);

    iret = Difference(x,y,&answer);

    printf("\n");
    printf("Difference of %d and %d = %d\n\n",x,y,answer);

    if(iret == POSITIVE)
    {
        printf("The difference of %d and %d is positve !!!",x,y);
    }
    else if(iret == NEGATIVE)
    {
        printf("The difference of %d and %d is negative !!!",x,y);
    }
    else{
        printf("The difference is zero !!!\n");
    }

    return 0;
}

int Difference(int a, int b, int *diff)
{
    *diff = a - b;

    if(*diff > 0)
    {
        return(POSITIVE);
    }
    else if(*diff < 0)
    {
        return(NEGATIVE);
    }
    else
    {
        return(ZERO);
    }
}