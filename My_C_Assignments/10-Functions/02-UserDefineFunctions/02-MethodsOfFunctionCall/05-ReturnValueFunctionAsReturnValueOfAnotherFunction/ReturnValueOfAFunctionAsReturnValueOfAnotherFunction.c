#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
    int MyAddition(int,int);

    int r;
    int iNo_01, iNo_02;

    iNo_01 = 10;
    iNo_02 = 20;


    printf("\n\n");
    printf("%d + %d = %d\n",iNo_01,iNo_02,MyAddition(iNo_01,iNo_02));
    printf("\n\n");

    return 0;
}

int MyAddition(int a, int b)
{
    int Add(int,int);

    return(Add(a,b));
}

int Add(int x,int y)
{
    return(x+y);
}