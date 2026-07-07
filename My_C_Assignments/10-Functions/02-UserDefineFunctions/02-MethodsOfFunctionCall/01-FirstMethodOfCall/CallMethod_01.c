#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
    void MyAddition(void);
    int MySubtraction(void);
    void MyMultiplication(int,int);
    int MyDivision(int,int);

    int result_subtraction;
    int a_multiplication, b_multiplication;
    int a_division, b_division, result_division;

    // addition
    MyAddition();

    // subtraction
    result_subtraction = MySubtraction();
    printf("\n\n");

    printf("Subtraction yields result = %d\n",result_subtraction);

    // Multiplication
    printf("\n\n");
    printf("Enter integer value for 'A' for Multiplication: ");
    scanf("%d",&a_multiplication);

    printf("\n\n");
    printf("Enter integer value for 'B' for Multiplication: ");
    scanf("%d",&b_multiplication);

    MyMultiplication(a_multiplication,b_multiplication);

    // Division
    printf("\n\n");
    printf("Enter integer value for 'A' for division: ");
    scanf("%d",&a_division);

    printf("\n\n");
    printf("Enter integer value for 'B' for division: ");
    scanf("%d",&b_division);

    result_division = MyDivision(a_division,b_division);
    printf("\n\n");

    printf("Division of %d and %d gives = %d (Quotient)\n",a_division,b_division,result_division);

    printf("\n\n");

    return (0);
}


void MyAddition(void)
{
    int x,y,summation;

    printf("\n\n");
    printf("Enter Integer value for 'X' for addition: ");
    scanf("%d",&x);

    printf("\n\n");
    printf("Enter Integer value for 'Y' for addition: ");
    scanf("%d",&y);

    summation = x + y;
    printf("\n\n");

    printf("Sum of %d and %d is %d\n\n",x,y,summation);

}

int MySubtraction(void)
{
    int x,y,subtraction;

    printf("\n\n");
    printf("Enter Integer value for 'X' for subtraction: ");
    scanf("%d",&x);

    printf("\n\n");
    printf("Enter Integer value for 'Y' for subtraction: ");
    scanf("%d",&y);

    subtraction = x-y;
    return subtraction;

}

void MyMultiplication(int a, int b)
{
    int multiplication;

    multiplication = a * b;
    printf("\n\n");

    printf("Multiplication of %d and %d = %d\n\n",a,b,multiplication);
}

int MyDivision(int a, int b)
{
    int division_quotient;

    if(a>b)
    {
        division_quotient = a/b;
    }
    else{
        division_quotient = b/a;
    }

    return division_quotient;
}