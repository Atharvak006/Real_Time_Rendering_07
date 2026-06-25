#include<stdio.h>

int main(void)
{
    int num_month;

    printf("\n\n");

    printf("Enter Number of Month (1 to 12) : ");
    scanf("%d",&num_month);

    printf("\n\n");

    switch(num_month)
    {
        case 1: 
            printf("Month Number %d is JANUARY !!!\n\n",num_month);
            break;
        
        case 2:
            printf("Month Number %d is February !!!\n\n",num_month);
            break;

        case 3:
            printf("Month number %d is March !!!\n\n",num_month);
            break;
        
        case 4:
            printf("Month number %d is APRIL !!!\n\n",num_month);
            break;
        
        case 5:
            printf("Month number %d is MAY !!!\n\n",num_month);
            break;

        case 6:
            printf("Month number %d is June !!!\n\n",num_month);
            break;

        case 7:
            printf("Month number %d is July !!!\n\n",num_month);
            break;

        case 8:
            printf("Month number %d is August !!!\n\n",num_month);
            break;

        case 9:
            printf("Month number %d is September !!!\n\n",num_month);
            break;
        
        case 10:
            printf("Month number %d is October !!!\n\n",num_month);
            break;
        
        case 11:
            printf("Month number %d is November !!!\n\n",num_month);
            break;
        
        case 12:
            printf("Month number %d is December !!!\n\n",num_month);
            break;

        default:
            printf("Invalid Month Number %d Entered !!! Please try Again...\n\n",num_month);
            break;
    }

    printf("Switch Case block Complete !!!\n");

    return 0;
}