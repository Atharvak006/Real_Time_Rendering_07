#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
    void MyAddition(int,int);
    
    int x,y;
    printf("\n\n");
    printf("Enter Integer value for 'X' : ");
    scanf("%d",&x);

    printf("\n\n");
    printf("Enter Integer value for 'Y' : ");
    scanf("%d",&y);
   
    MyAddition(x,y);

    return(0);

}


void MyAddition(int a, int b)
{
    int summation;

    summation = a + b;

    printf("\n\n");
    printf("Sum of %d and %d = %d\n\n",a,b,summation);

}