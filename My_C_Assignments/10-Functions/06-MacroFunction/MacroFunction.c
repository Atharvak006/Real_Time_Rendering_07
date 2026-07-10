#include<stdio.h>

#define MAX_NUMBER(a,b) ((a > b) ? a : b)

int main(int argc, char* argv[], char* envp[])
{
    int iVal_01;
    int iVal_02;
    int iRet;

    float fNum_01;
    float fNum_02;
    float fRet;

    printf("\n\n");
    printf("Enter an integer number: \n\n");
    scanf("%d",&iVal_01);

    printf("\n\n");
    printf("Enter another number: \n\n");
    scanf("%d",&iVal_02);

    iRet = MAX_NUMBER(iVal_01,iVal_02);
    printf("\n\n");
    printf("Result of macro function MAX_FUNCTION() = %d\n",iRet);

    printf("\n\n");

    printf("\n\n");
    printf("Enter a floating point number: \n\n");
    scanf("%f",&fNum_01);

    printf("\n\n");
    printf("Enter another floating point number: \n\n");
    scanf("%f",&fNum_02);

    fRet = MAX_NUMBER(fNum_01,fNum_02);
    printf("\n\n");
    printf("Result of macro function MAX_NUMBER() = %f\n",fRet);

    printf("\n\n");

    return(0);

}