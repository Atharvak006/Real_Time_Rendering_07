#include <stdio.h>
#include <stdarg.h>

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
    int x;

    va_list number_list;

    va_start(number_list, num);

    while (num)
    {
        x = va_arg(number_list, int);
        sum_total += x;
        num--;
    }

    va_end(number_list);

    return sum_total;
}