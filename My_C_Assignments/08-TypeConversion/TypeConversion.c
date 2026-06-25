#include<stdio.h>

int main(void)
{
    int number1, number2;
    char char_1, char_2;

    int itemp, iResult_int;
    float ftemp, iResult_float;

    int iExplicit;
    float fExplicit;

    printf("\n\n");

    number1 = 70;
    char_1 = number1;
    printf("Number1 = %d\n",number1);
    printf("Character 1 (after char_1 = number1) = %c\n\n",char_1);

    char_2 = 'Q';
    number2 = char_2;
    printf("Character 1 = %c\n",char_2);
    printf("Number 2 (after Number 2 = char_2) = %d\n\n",number2);

    itemp = 5;
    ftemp = 7.8f;

    iResult_float = itemp + ftemp;
    printf("Integer itemp = %d And Floating Point number %f Added Gives Floating Point Sum = %f\n\n",itemp,ftemp,iResult_float);

    iResult_int = itemp + ftemp;
    printf("Integer itemp = %d And Floating Point number %f Added Gives Floating Point Sum = %d\n\n",itemp,ftemp,iResult_int);

    
    fExplicit = 30.1212192f;
    iExplicit = (int)fExplicit;

    printf("Floating Point Number which will Be type Casted Explicitly = %f\n",fExplicit);

    printf("Resultant Integer After Explicit Type Casting of = %f = %d\n",fExplicit,iExplicit);


    return 0;
}