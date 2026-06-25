#include<stdio.h>

int main(void)
{
    int iAge;

    //code

    printf("\n\n");
    printf("Enter Age : ");
    scanf("%d",&iAge);

    if(iAge >= 18)
    {
        printf("You are eligible for voting !!!\n\n");
    }

    printf("You are NOT eligible for voting !!!\n\n");
    
    return 0;
}