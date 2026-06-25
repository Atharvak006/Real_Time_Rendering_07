#include<stdio.h>

int main(void)
{
    // Variable Declarations
    int iValue = 11;
    float fValue = 3.9f;
    double dValue = 9.329321;
    char cValue = 'Z';

    printf("\n\n");

    printf("iValue = %d\n",iValue);
    printf("fValue = %f\n",fValue);
    printf("dValue = %lf\n",dValue);
    printf("cValue = %c\n",cValue);

    printf("\n\n");

    iValue = 21;
    fValue = 23.23f;
    dValue = 101.2001221023;
    cValue = 'X';

    printf("iValue = %d\n",iValue);
    printf("fValue = %f\n",fValue);
    printf("dValue = %lf\n",dValue);
    printf("cValue = %c\n",cValue);

    printf("\n\n");

    exit(0); // System call
}