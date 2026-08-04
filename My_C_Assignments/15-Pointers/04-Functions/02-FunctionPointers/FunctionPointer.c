#include<stdio.h>

int AddIntegers(int, int);
int SubtractIntegers(int, int);
float AddFloats(float, float);

int main(void)
{
    typedef int (*AddIntsFnPtr)(int, int);
    typedef float (*AddFloatsFnPtr)(float, float);

    AddIntsFnPtr ptrAddTwoIntegers = NULL;
    AddIntsFnPtr ptrFunc = NULL;
    AddFloatsFnPtr ptrAddTwoFloats = NULL;

    int iAnswer = 0;
    float fAnswer = 0.0f;

    ptrAddTwoIntegers = AddIntegers;
    iAnswer = ptrAddTwoIntegers(9, 30);

    printf("\n\n");
    printf("Sum of integers = %d\n\n", iAnswer);

    ptrFunc = SubtractIntegers;
    iAnswer = ptrFunc(9, 30);

    printf("\n\n");
    printf("Subtraction of integers = %d\n\n", iAnswer);

    ptrAddTwoFloats = AddFloats;
    fAnswer = ptrAddTwoFloats(11.45f, 8.2f);

    printf("\n\n");
    printf("Sum of floating-point numbers = %f\n\n", fAnswer);

    return 0;
}

int AddIntegers(int a, int b)
{
    int c;

    c = a + b;

    return c;
}

int SubtractIntegers(int a, int b)
{
    int c;

    if(a > b)
    {
        c = a - b;
    }
    else
    {
        c = b - a;
    }

    return c;
}

float AddFloats(float f_Num1, float f_Num2)
{
    float ans;

    ans = f_Num1 + f_Num2;

    return ans;
}