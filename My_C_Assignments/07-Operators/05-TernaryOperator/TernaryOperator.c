#include <stdio.h>

int main(void)
{
    int num1, num2;
    int x, y;

    char cRet1, cRet2;
    int iRet1, iRet2;

    printf("\n\n");

    num1 = 7;
    num2 = 5;

    cRet1 = (num1 > num2) ? 'A' : 'B';
    iRet1 = (num1 > num2) ? num1 : num2;

    printf("Ternary Operator Answer 1 ----- %c and %d.\n\n",cRet1, iRet1);

    x = 30;
    y = 30;

    cRet2 = (x != y) ? 'P' : 'Q';
    iRet2 = (x != y) ? x : y;

    printf("Ternary Operator Answer 2 ----- %c and %d.\n\n",cRet2, iRet2);

    printf("\n\n");

    return 0;
}