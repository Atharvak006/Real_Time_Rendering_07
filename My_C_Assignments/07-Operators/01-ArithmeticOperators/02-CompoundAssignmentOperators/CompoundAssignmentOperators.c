#include<stdio.h>

int main(void)
{
    int iNumber1 = 0;
    int iNumber2 = 0;
    int iAns = 0;

    printf("\n\n");
    printf("Enter a number : ");
    scanf("%d",&iNumber1);

    printf("\n\n");
    printf("Enter Another number : ");
    scanf("%d",&iNumber2);

    printf("\n\n");

    iAns = iNumber1; 
    iNumber1 += iNumber2; // iNumber1 = iNumber1 + iNumber2
    printf("Addition of iNumber1 = %d and iNumber2 = %d gives %d\n",iAns,iNumber2,iNumber1);

    iAns = iNumber1;
    iNumber1 -= iNumber2; // iNumber1 = iNumber1 - iNumber2
    printf("Substraction of iNumber1 = %d and iNumber2 = %d gives %d\n",iAns,iNumber2,iNumber1);

    iAns = iNumber1;
    iNumber1 *= iNumber2; // iNumber1 = iNumber1 * iNumber2
    printf("Multiplication of iNumber1 = %d and iNumber2 = %d gives %d\n",iAns,iNumber2,iNumber1);

    iAns = iNumber1;
    iNumber1 /= iNumber2; // iNumber1 = iNumber1 / iNumber2
    printf("Division of iNumber1 = %d and iNumber2 = %d gives quotient %d\n",iAns,iNumber2,iNumber1);

    iAns = iNumber1;
    iNumber1 %= iNumber2; // iNumber1 = iNumber1 % iNumber2
    printf("Division of iNumber1 = %d and iNumber2 = %d gives remainder %d\n",iAns,iNumber2,iNumber1);

    printf("\n\n");

    return 0;
}