#include<stdio.h>

int main(void)
{   
    int iVal;

    printf("\n\n");

    printf("Enter the value for 'iVal' : ");
    scanf("%d",&iVal);

    // If - else - if ladder begins from here
    
    if(iVal < 0)
    {
        printf("iVal = %d is Less than 0 (NEGATIVE) !!! \n\n",iVal);
    }

    else if((iVal > 0) && (iVal <= 100)){
        printf("iVal = %d is between 0 and 100 !!!\n\n",iVal);
    }

    else if((iVal > 100) && (iVal <= 200)){
        printf("iVal = %d is between 100 and 200 !!!\n\n",iVal);
    }

    else if((iVal > 200) && (iVal <= 300)){
        printf("iVal = %d is between 200 and 300 !!!\n\n",iVal);
    }

    else if((iVal > 300) && (iVal <= 400)){
        printf("iVal = %d is between 300 and 400 !!!\n\n",iVal);
    }

    else if((iVal > 400) && (iVal <= 500)){
        printf("iVal = %d is between 400 and 500 !!!\n\n",iVal);
    }
    else if(iVal > 500){
        printf("iVal is greater than 500 !!!\n\n");
    }

    else
    {
        printf("Invalid value entered\n\n");
    }
    
    return 0;
}