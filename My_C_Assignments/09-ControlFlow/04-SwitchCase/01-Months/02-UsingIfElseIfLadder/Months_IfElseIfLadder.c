#include<stdio.h>

int main(void)
{
    int num_month;

    printf("\n\n");

    printf("Enter Number of Month (1 to 12) : ");
    scanf("%d",&num_month);

    printf("\n\n");


    if(num_month == 1) 
        printf("Month Number %d is JANUARY !!!\n\n",num_month);
         
    else if(num_month == 2) 
        printf("Month Number %d is February !!!\n\n",num_month);
            
    else if(num_month == 3) 
        printf("Month number %d is March !!!\n\n",num_month);
            
    else if(num_month == 4) 
        printf("Month number %d is APRIL !!!\n\n",num_month);
         
    else if(num_month == 5) 
        printf("Month number %d is MAY !!!\n\n",num_month);
           
    else if(num_month == 6) 
        printf("Month number %d is June !!!\n\n",num_month);
           
    else if(num_month == 7) 
        printf("Month number %d is July !!!\n\n",num_month);
        
    else if(num_month == 8) 
        printf("Month number %d is August !!!\n\n",num_month);
            
    else if(num_month == 9) 
        printf("Month number %d is September !!!\n\n",num_month);
            
    else if(num_month == 10) 
        printf("Month number %d is October !!!\n\n",num_month);
            
    else if(num_month == 11) 
        printf("Month number %d is November !!!\n\n",num_month);
        
    if(num_month == 12) 
        printf("Month number %d is December !!!\n\n",num_month);
        
    else
        printf("Invalid Month Number %d Entered !!! Please try Again...\n\n",num_month);
            

    printf("If - else if - Else ladder complete !!!\n");

    return 0;
}