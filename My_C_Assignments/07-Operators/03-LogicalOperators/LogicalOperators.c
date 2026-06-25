#include<stdio.h>

int main(void)
{
    int iNum1;
    int iNum2;
    int iNum3;
    int iAnswer;

    printf("\n\n");
    printf("Enter first Integer : ");
    scanf("%d",&iNum1);

    printf("\n\n");
    printf("Enter second Integer : ");
    scanf("%d",&iNum2);

    printf("\n\n");
    printf("Enter third Integer : ");
    scanf("%d",&iNum3);

    printf("\n\n");
    printf("If answer = 0,It is 'False' .\n");
    printf("If answer = 1, It is 'True' .\n\n");

    iAnswer = (iNum1 <= iNum2) && (iNum2 != iNum3);
    printf("LOGICAL AND && : Answer is True(1) if and only if Both conditions are true. The answer is False (0), If any one or both conditions are false \n\n");
    printf("iNum1 = %d is less than or equal to iNum2 = %d And iNum2 = %d is Not equal to iNum3 = %d \t iAnswer = %d\n\n",iNum1,iNum2,iNum2,iNum3,iAnswer);

    iAnswer = (iNum2 >= iNum1) || (iNum1 == iNum3);
    printf("LOGICAL OR (||) : Answer is False(0) if and only if both conditions are false. The answer is true (1), if any one or both conditions are true.\n\n");
    printf("Either iNum2 = %d is Greater than or equal to iNum1 = %d OR iNum1 = %d is equal to iNum3 = %d\t iAnswer = %d\n\n ",iNum2,iNum1,iNum1,iNum3,iAnswer);
   
    iAnswer = !iNum1;
    printf("iNum1 = %d and using logical NOT(!) operator on iNum1 Gives result = %d\n\n",iNum1,iAnswer);

    iAnswer = !iNum2;
    printf("iNum2 = %d and using logical NOT(!) operator on iNum2 Gives result = %d\n\n",iNum2,iAnswer);
   
    iAnswer = !iNum3;
    printf("iNum3 = %d and using logical NOT(!) operator on iNum3 Gives result = %d\n\n",iNum3,iAnswer);

    iAnswer = (!(iNum1 <= iNum2) && (iNum2 != iNum3));
    printf("Using Logical NOT (!) on (iNum1 <= iNum2) and Also on (iNum2 != iNum3) and then Anding them afterwards gives result = %d\n",iAnswer);

    printf("\n\n");

    iAnswer = !((iNum2 >= iNum1) || (iNum1 == iNum3));
    printf("Using logical NOT (!) on Entire logical expression (iNum2 >= iNum1) || (iNum1 == iNum3) Gives Result = %d\n",iAnswer);

    printf("\n\n");
    
    return 0;
}