#include<stdio.h>

int main(void)
{
    char option, ch = '\0';

    printf("\n\n");

    printf("once the infienite loop begins, Enter 'Q' or 'q' to quit the infinite for loop : \n\n");

    printf("Enter 'y' or 'Y' to initiate User Controlled infinite Loop: ");
    printf("\n\n");

    option = getch();

    if(option == 'Y' || option == 'y')
    {
        for(;;){
            printf("In loop....\n");
            ch = getch();
            if(ch == 'Q' || ch == 'q'){
                break;
            }
        }
    }


    printf("\n\n");
    printf("Exiting user controlled infinite loop...");
    printf("\n\n");

    
    return 0;
}