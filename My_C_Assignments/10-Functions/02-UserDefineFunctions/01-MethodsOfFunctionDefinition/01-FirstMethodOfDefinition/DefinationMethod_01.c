#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
    void MyAddition(void);
    
    MyAddition();

    return(0);

}


void MyAddition(void)
{
    int x,y,summation;

    printf("\n\n");
    printf("Enter Integer value for 'X' : ");
    scanf("%d",&x);

    printf("\n\n");
    printf("Enter Integer value for 'Y' : ");
    scanf("%d",&y);

    summation = x + y;

    printf("\n\n");
    printf("Sum of %d and %d = %d\n\n",x,y,summation);

}