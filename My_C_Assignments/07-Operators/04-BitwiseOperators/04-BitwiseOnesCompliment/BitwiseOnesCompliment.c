#include<stdio.h>

int main(void)
{
    //function prototypes
    void PrintBinaryFormOfNumber(unsigned int);

    // variable Declarations
    unsigned int iNumber;
    unsigned int iResult;

    // Code
    printf("\n\n\n\n");
    printf("Enter an integer = ");
    scanf("%u",&iNumber);

    printf("\n\n\n\n");
    iResult = ~iNumber;

    printf("Bitwise COmplementing of \nA = %d (Decimal) gives reuslt %d (Decimal) \n\n",iNumber,iResult);
 
    PrintBinaryFormOfNumber(iNumber);
    PrintBinaryFormOfNumber(iResult);

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