#include<stdio.h>

int main(void)
{
    int iNum;

    printf("\n\n");

    printf("Enter Value for 'iNum' : ");
    scanf("%d", &iNum);

    if(iNum < 0) // if - 01
    {
        printf("iNum = %d is Less than 0 (Negative) !!!\n\n", iNum);
    }
    else // else - 01
    {
        if((iNum >= 0) && (iNum <= 100)) // if - 02
        {
            printf("iNum = %d is Between 0 and 100 !!!\n\n", iNum);
        }
        else // else  02
        {
            if((iNum > 100) && (iNum <= 200)) // if - 03
            {
                printf("Num = %d is Between 100 and 200 !!!\n\n", iNum);
            }
            else // else - 03
            {
                if((iNum > 200) && (iNum <= 300)) // if - 04
                {
                    printf("Num = %d is Between 200 and 300 !!!\n\n", iNum);
                }
                else // else  04
                {
                    if((iNum > 300) && (iNum <= 400)) // if - 05
                    {
                        printf("Num = %d is Between 300 and 400 !!!\n\n", iNum);
                    }
                    else // else - 05
                    {
                        if((iNum > 400) && (iNum <= 500)) // if - 06
                        {
                            printf("Num = %d is Between 400 and 500 !!!\n\n", iNum);
                        }
                        else // else 06
                        {
                            printf("Num = %d is Greater than 500 !!!\n\n", iNum);
                        }
                    }
                }
            }
        }
    }

    return(0);
}