#include<stdio.h>

int main(void)
{
    int iVal1;
    int iVal2;
    int iRet;

    printf("\n\n");
    printf("Enter One Integer : ");
    scanf("%d",&iVal1);


    printf("\n\n");
    printf("Enter Another integer : ");
    scanf("%d",&iVal2);

    printf("\n\n");
    printf("If answer = 0, It is 'False'. \n");
    printf("If answer = 1, It is 'True'. \n\n");

    iRet = (iVal1 < iVal2);
    printf("(iVal1 < iVal2) iVal1 = %d Is less than iVal2 = %d \t Answer = %d\n",iVal1,iVal2,iRet);

    iRet = (iVal1 > iVal2);
    printf("(iVal1 > iVal2) iVal1 = %d Is Greater than iVal2 = %d \t Answer = %d\n",iVal1,iVal2,iRet);

    iRet = (iVal1 <= iVal2);
    printf("(iVal1 <= iVal2) iVal1 = %d Is less than or equal to iVal2 = %d \t Answer = %d\n",iVal1,iVal2,iRet);

    iRet = (iVal1 >= iVal2);
    printf("(iVal1 >= iVal2) iVal1 = %d Is greater than or equal to iVal2 = %d \t Answer = %d\n",iVal1,iVal2,iRet);

    iRet = (iVal1 == iVal2);
    printf("(iVal1 > iVal2) iVal1 = %d Is equal to iVal2 = %d \t Answer = %d\n",iVal1,iVal2,iRet);  

    iRet = (iVal1 != iVal2);
    printf("(iVal1 > iVal2) iVal1 = %d Is not equal to iVal2 = %d \t Answer = %d\n",iVal1,iVal2,iRet);  

    return (0);
}