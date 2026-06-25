#include<stdio.h>

int main(void)
{
    //function prototypes
    void PrintBinaryFormOfNumber(unsigned int);

    // variable Declarations
    unsigned int iVal1;
    unsigned int iVal2;
    unsigned int iRet;

    // Code
    printf("\n\n");
    printf("Enter an integer = ");
    scanf("%u",&iVal1);

    printf("\n\n");
    printf("Enter an integer = ");
    scanf("%u",&iVal2);

    printf("\n\n\n\n");
    iRet = iVal1 ^ iVal2;

    printf("Bitwise XOR-ing of \nA = %d (Decimal) and B = %d (Decimal) gives result %d (Decimal). \n\n",iVal1,iVal2,iRet);

    PrintBinaryFormOfNumber(iVal1);
    PrintBinaryFormOfNumber(iVal2);
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