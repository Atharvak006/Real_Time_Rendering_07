#include<stdio.h>

int main(void)
{
    int i;
    char ch;

    printf("\n\n");

    printf("Printing Even Numbers from 1 to 100 for every user input. Exiting the loop when user enters characters 'q' or 'Q' :\n\n");

    printf("Enter character 'Q' or 'q' to exit loop : \n\n");

    for(i = 1; i <= 100; i++)
    {
        printf("\t%d\n",i);
        ch = getch();

        if(ch == 'Q' || ch == 'q')
        {
            break;
        }
    }


    printf("\n\n");
    printf("EXITING LOOP....");

    
    printf("\n\n");
    
    return 0;

}