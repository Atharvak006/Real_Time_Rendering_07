#include<stdio.h>

int main(void)
{
    //function prototypes
    void PrintBinaryFormOfNumber(unsigned int);

    // variable Declarations
    unsigned int iNumber;
    unsigned int number_of_bits;
    unsigned int iret;

    // Code
    printf("\n\n");
    printf("Enter an integer = ");
    scanf("%u",&iNumber);

    printf("\n\n");
    printf("By how many bits do u want to shift iNumber = %d to the Right ? ",iNumber);
    scanf("%u",&number_of_bits);

    printf("\n\n\n\n");
    iret = iNumber >> number_of_bits;

    printf("Bitwise RIGHT SHIFTING A = %d by %d Bits \nGives the result = %d (Decimal).\n\n",iNumber,number_of_bits,iret);
    
    PrintBinaryFormOfNumber(iNumber);
    PrintBinaryFormOfNumber(iret);

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