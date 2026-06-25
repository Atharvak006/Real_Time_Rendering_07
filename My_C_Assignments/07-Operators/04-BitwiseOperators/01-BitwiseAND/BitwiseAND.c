#include<stdio.h>

int main(void)
{
    //function prototypes
    void PrintBinaryFormOfNumber(unsigned int);

    // variable Declarations
    unsigned int Val1;
    unsigned int Val2;
    unsigned int iRet;

    // Code
    printf("\n\n");
    printf("Enter an integer = ");
    scanf("%u",&Val1);

    printf("\n\n");
    printf("Enter an integer = ");
    scanf("%u",&Val2);

    printf("\n\n\n\n");
    iRet = Val1 & Val2;

    printf("Bitwise AND-ing of \nVal1 = %d (Decimal) and Val2 = %d (Decimal) gives result %d (Decimal). \n\n",Val1,Val2,iRet);

    PrintBinaryFormOfNumber(Val1);
    PrintBinaryFormOfNumber(Val2);
    PrintBinaryFormOfNumber(iRet);

    return 0;
}


void PrintBinaryFormOfNumber(unsigned int decimal_number)
{
    // Variable declarations
    unsigned int iQuotient, iRemainder;
    unsigned int iNum;
    unsigned int iBinary_array[8];
    int iCnt;

    for(iCnt = 0; iCnt < 8; iCnt++)
    {
        iBinary_array[iCnt] = 0;
    }

    printf("The binary form of the decimal Integer %d is \t = \t",decimal_number);
    iNum = decimal_number;
    iCnt = 7;

    while(iNum != 0)
    {
        iQuotient = iNum / 2;
        iRemainder = iNum % 2;
        iBinary_array[iCnt] = iRemainder;
        iNum = iQuotient;
        iCnt--;
    }

    for(iCnt = 0; iCnt < 8; iCnt++)
        printf("%u",iBinary_array[iCnt]);

    printf("\n\n");    
}