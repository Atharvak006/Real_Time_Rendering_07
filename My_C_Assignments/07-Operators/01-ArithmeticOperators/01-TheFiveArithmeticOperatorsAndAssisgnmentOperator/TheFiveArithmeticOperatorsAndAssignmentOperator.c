#include<stdio.h>

int main(void)
{

    int iValue1;
    int iValue2;
    int iRet;

    printf("\n\n");
    printf("Enter a Number : ");
    scanf("%d",&iValue1);

    printf("\n\n");
    printf("Enter Another Number : ");
    scanf("%d",&iValue2);

    printf("\n\n");

    iRet = iValue1 + iValue2;
    printf("Addition of iValue1 = %d and iValue2 = %d Gives %d\n",iValue1,iValue2,iRet);

    iRet = iValue1 - iValue2;
    printf("Substraction of iValue1 = %d and iValue2 = %d Gives %d\n",iValue1,iValue2,iRet);

    iRet = iValue1 * iValue2;
    printf("Multiplication of iValue1 = %d and iValue2 = %d Gives %d\n",iValue1,iValue2,iRet);

    iRet = iValue1 / iValue2;
    printf("Division of iValue1 = %d and iValue2 = %d Gives quotient %d\n",iValue1,iValue2,iRet);

    iRet = iValue1 % iValue2;
    printf("Division of iValue1 = %d and iValue2 = %d Gives remainder %d\n",iValue1,iValue2,iRet);


    printf("\n\n");

    return(0);
}