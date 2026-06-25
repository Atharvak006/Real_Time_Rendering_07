#include<stdio.h>

int main(void)
{   
    int Age;

    printf("\n\n");
    printf("Enter Age : ");
    scanf("%d",&Age);

    printf("\n\n");

    if(Age >= 18)
    {
        printf("Entering if-block...\n\n");
        printf("You are eligible for voting !!!\n\n");
    }
    else
    {
        printf("Entering else block...\n\n");
        printf("You are not eligible for voting !!!\n\n");
    }

    printf("Bye !!!\n\n");

    return 0;
}