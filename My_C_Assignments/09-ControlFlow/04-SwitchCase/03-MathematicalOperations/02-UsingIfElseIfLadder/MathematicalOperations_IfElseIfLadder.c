#include<stdio.h>
#include<conio.h>

int main(void)
{
    int x, y;
    int iRet;

    char opt, opt_division;

    // code
    printf("\n\n");

    printf("Enter value for 'X' : ");
    scanf("%d", &x);

    printf("Enter value for 'Y' : ");
    scanf("%d", &y);

    printf("Enter option in character: \n\n");
    printf(" 'A' or 'a' for addition : \n");
    printf(" 'S' or 's' for subtraction : \n");
    printf(" 'M' or 'm' for multiplication : \n");
    printf(" 'D' or 'd' for division : \n\n");

    printf("Enter Option : ");
    opt = getch();

    printf("%c\n\n", opt);

    if(opt == 'A' || opt == 'a')
    {
        iRet = x + y;
        printf("Addition of x = %d and y = %d Gives result %d !!! \n\n", x, y, iRet);
    }
    else if(opt == 'S' || opt == 's')
    {
        if(x >= y)
        {
            iRet = x - y;
            printf("Subtraction of x = %d and y = %d Gives result %d !!! \n\n", x, y, iRet);
        }
        else
        {
            iRet = y - x;
            printf("Subtraction of y = %d and x = %d Gives result %d !!! \n\n", y, x, iRet);
        }
    }
    else if(opt == 'M' || opt == 'm')
    {
        iRet = x * y;
        printf("Multiplication of x = %d and y = %d Gives result %d !!! \n\n", x, y, iRet);
    }
    else if(opt == 'D' || opt == 'd')
    {
        printf("Enter option in Character : \n\n");
        printf("'Q' or 'q' or '/' For Quotient Upon Division : \n");
        printf("'R' or 'r' or '%%' For Remainder upon Division : \n");

        printf("Enter Option : ");
        opt_division = getch();

        printf("%c\n\n", opt_division);

        if(opt_division == 'Q' || opt_division == 'q' || opt_division == '/')
        {
            if(x >= y)
            {
                iRet = x / y;
                printf("Division of X = %d by Y = %d Gives Quotient = %d !!!\n\n", x, y, iRet);
            }
            else
            {
                iRet = y / x;
                printf("Division of Y = %d by X = %d Gives Quotient = %d !!!\n\n", y, x, iRet);
            }
        }
        else if(opt_division == 'R' || opt_division == 'r' || opt_division == '%')
        {
            if(x >= y)
            {
                iRet = x % y;
                printf("Division of X = %d by Y = %d Gives Remainder = %d !!!\n\n", x, y, iRet);
            }
            else
            {
                iRet = y % x;
                printf("Division of Y = %d by X = %d Gives Remainder = %d !!!\n\n", y, x, iRet);
            }
        }
        else
        {
            printf("Invalid character %c entered for division !!! Please Try Again...\n\n", opt_division);
        }
    }
    else
    {
        printf("Invalid character %c entered !!! Please Try Again...\n\n", opt);
    }

    printf("If-Else Block Complete !!!\n");

    return 0;
}