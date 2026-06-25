#include<stdio.h>
#include<conio.h>

int main(void)
{

    int x,y;
    int iRet;

    char opt, opt_division;

    // code
    printf("\n\n");

    printf("Enter value for 'X' : ");
    scanf("%d",&x);

    printf("Enter value for 'Y' : ");
    scanf("%d",&y);

    printf("Enter option in character: \n\n");
    printf(" 'A' or 'a' for addition : \n");
    printf(" 'S' or 's' for subtraction : \n");
    printf(" 'M' or 'm' for multiplication : \n");
    printf(" 'D' or 'd' for division : \n\n");

    printf("\n\n");

    switch(opt)
    {

        case 'A':
        case 'a':
            iRet = x + y;
            printf("Addition of x = %d and y = %d Gives result %d !!! \n\n",x,y,iRet);
            break;
        
        case 'S':
        case 's':
            if(x >= y)
            {
                iRet = x - y;
                printf("Subtraction of x = %d and y = %d Gives result %d !!! \n\n",x,y,iRet);
            }
            else
            {
                iRet = y - x;
                printf("Subtraction of y = %d and x = %d Gives result %d !!! \n\n",y,x,iRet);
            }
            break;

        case 'M':
        case 'm':
            iRet = x * y;
            printf("Multiplication of x = %d and y = %d Gives result %d !!! \n\n",x,y,iRet);
            break;
        
        case 'D':
        case 'd':
            printf("Enter option in Character : \n\n");
            printf("'Q' or 'q' or '/' For Quotient Upon Division : \n");
            printf("'R' or 'r' or '%%' For Remainder upon Division : \n");

            printf("Enter Option : ");
            opt_division = getch();

            switch(opt_division)
            {
                case 'Q':
                case 'q':
                case '/':
                    if(x >= y)
                    {
                        iRet = x / y;
                        printf("Division of X = %d by Y = %d Gives quotient = %d !!!\n\n",x,y,iRet);
                    }
                    else
                    {
                        iRet = y / x;
                        printf("Division of Y = %d and X = %d Gives Quotient = %d\n !!!\n\n",y,x,iRet);
                    }
                    break;

                case 'R':
                case 'r':
                case '%':
                    if(x >= y)
                    {
                        iRet = x % y;
                        printf("Division of X = %d by Y = %d Gives Remainder = %d !!!\n\n",x,y,iRet);
                    }
                    else
                    {
                        iRet = y % x;
                        printf("Division of Y = %d and X = %d Gives Remainder = %d\n !!!\n\n",y,x,iRet);
                    }
                    break;

                default:
                    printf("Invalid character %c entered for division !!! Please Try Again...\n\n");
                    break;
            }
            
            break;
        default:
            printf("Invalid character %c entered for division !!! Please Try Again...\n\n");
            break;
    }

    printf("Switch Case Block Complete !!!\n");

    return 0;
}