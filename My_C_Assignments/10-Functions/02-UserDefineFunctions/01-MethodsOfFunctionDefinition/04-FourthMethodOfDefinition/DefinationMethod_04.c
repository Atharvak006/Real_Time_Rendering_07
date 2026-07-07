#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
    int MyAddition(int,int);
    
    int x,y;
    printf("\n\n");
    printf("Enter Integer value for 'X' : ");
    scanf("%d",&x);

    printf("\n\n");
    printf("Enter Integer value for 'Y' : ");
    scanf("%d",&y);
   
    int result = MyAddition(x,y);
    printf("\n\n");
    printf("Sum of %d and %d = %d\n\n",x,y,result);
    return(0);

}

int MyAddition(int a, int b)
{
    int summation;

    summation = a + b;

    return summation;

}