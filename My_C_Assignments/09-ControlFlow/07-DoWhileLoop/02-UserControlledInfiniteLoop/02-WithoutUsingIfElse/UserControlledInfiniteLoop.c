#include<stdio.h>

int main(void)
{

    char option, ch = '\0';

    printf("\n\n");
    printf("Once the infinite loop begins, Enter 'Q' or 'q' to Quit the infinite for loop: \n\n");

    do
    {
        do
        {
            printf("\n");
            printf("In loop...\n");
            ch = getch();
        } while (ch != 'Q' && ch != 'q');
        printf("\n\n");
        printf("Exiting User Controlled Infinite Loop...");

        printf("\n\n");
        printf("DO YOU WANT TO BEGIN USER CONTROLLED INFINITE LOOP AGAIN? ...(Y/y - Yes, Any other key - No) : ");
        option = getch();
    } while(option == 'Y' || option == 'y');
    

    return(0);
}