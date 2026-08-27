#include <stdio.h>
#include <stdarg.h>

int va_Calculate(int, va_list);

int CalculateSum(int, ...);

int main(void)
{
    int iAns;

    printf("\n");

    iAns = CalculateSum(5, 10, 23, 43, 54, 56);
    printf("Answer = %d\n", iAns);

    iAns = CalculateSum(8, 1, 1, 1, 1, 1, 1, 1, 1);
    printf("Answer = %d\n", iAns);

    iAns = CalculateSum(0);
    printf("Answer = %d\n", iAns);

    return 0;
}

int CalculateSum(int num, ...)
{
    int sum_total = 0;
   
    va_list number_list;

    va_start(number_list, num);

    sum_total = va_Calculate(num, number_list);

    va_end(number_list);

    return sum_total;
}

int va_Calculate(int num, va_list list)
{
    int sum_total = 0;

    int x = 0;

    while (num)
    {
        x = va_arg(list, int);
        sum_total = sum_total + x;
        num--;
    }

    return sum_total;

}