#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
    int MyAddition(int,int);

    int r;
    int iNo_01, iNo_02;
    int iNo_03, iNo_04;

    iNo_01 = 10;
    iNo_02 = 20;
    iNo_03 = 30;
    iNo_04 = 40;

    r = MyAddition(MyAddition(iNo_01, iNo_02), MyAddition(iNo_03, iNo_04));

    printf("\n\n");
    printf("%d + %d + %d + %d = %d\n",iNo_01,iNo_02,iNo_03,iNo_04,r);
    printf("\n\n");

    return 0;
}

int MyAddition(int a, int b)
{
    int sum;

    sum = a+b;

    return sum;
}