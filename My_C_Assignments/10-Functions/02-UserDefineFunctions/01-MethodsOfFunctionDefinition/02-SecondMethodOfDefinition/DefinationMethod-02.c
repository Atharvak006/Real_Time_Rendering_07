#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
    int MyAddition(void);
    
    int result;

    result = MyAddition();

    printf("\n\n");
    printf("Sum = %d\n\n",result);
    return(0);

}


int MyAddition(int argc, char* argv[], char* envp[])
{
    int x,y,summation;

    printf("\n\n");
    printf("Enter Integer value for 'X' : ");
    scanf("%d",&x);

    printf("\n\n");
    printf("Enter Integer value for 'Y' : ");
    scanf("%d",&y);

    summation = x + y;

    return summation;

}