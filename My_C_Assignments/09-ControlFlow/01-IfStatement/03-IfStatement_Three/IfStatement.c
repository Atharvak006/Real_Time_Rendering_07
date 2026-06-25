#include<stdio.h>

int main(void)
{
    int iNum;

    printf("\n\n");

    printf("Enter Value for 'num' : ");
    scanf("%d",&iNum);

    if(iNum < 0)
    {
        printf("Num = %d is Less than 0 (Negative). \n\n",iNum);
    }

    if((iNum > 0) && (iNum <= 100)){
        printf("Num = %d is Between 0 and 100\n\n",iNum);
    }

    if((iNum > 100) && (iNum <= 200)){
    printf("Num = %d is Between 100 and 200\n\n",iNum);
    }

    if((iNum > 200) && (iNum <= 300)){
        printf("Num = %d is Between 200 and 300\n\n",iNum);
    }

    if((iNum > 300) && (iNum <= 400)){
        printf("Num = %d is Between 300 and 400\n\n",iNum);
    }

    if((iNum > 400) && (iNum <= 500)){
        printf("Num = %d is Between 400 and 500\n\n",iNum);
    }

    if(iNum > 500){
        printf("Num = %d is greater than 500\n\n",iNum);
    }

    return 0;
}