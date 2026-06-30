#include<stdio.h>

int main(void)
{
    char option, ch = '\0';

    printf("\n\n");

    printf("Once the infinite loop begins, Enter 'Q' or 'q' to Quit the infinite for loop : \n\n");
    printf("Enter 'y' or 'Y' to initiate user controlled infinite loop : ");
    printf("\n\n");
    option = getch();

    if(option == 'Y' || option == 'y')
    {
        while(1)
        {
            printf("In loop...\n");
            ch = getch();
            if(ch == 'Q' || ch == 'q')
                break;
        }

        printf("\n\n");
        printf("EXITING USER CONTROLLED INFINITE LOOP...");
        printf("\n\n");
    }
    else
    {
        printf("You must press Y or y to initiate the user controlled infinite loop...Please Try Again...\n\n");
    }
    
    return 0;
}