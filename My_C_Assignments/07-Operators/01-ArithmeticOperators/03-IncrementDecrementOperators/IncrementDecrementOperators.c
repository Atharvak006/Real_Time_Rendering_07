#include<stdio.h>

int main(void)
{
    int iNum = 5;
    int iVal = 10;

    printf("\n\n");
    printf("iNum = %d\n",iNum);
    printf("iNum = %d\n",iNum++);
    printf("iNum = %d\n",iNum);
    printf("iNum = %d\n",++iNum);

    printf("iVal = %d\n",iVal);
    printf("iVal = %d\n",iVal--);
    printf("iVal = %d\n",iVal);
    printf("iVal = %d\n",--iVal);

    return(0);

}