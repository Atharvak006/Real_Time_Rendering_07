#include<stdio.h>

#define NUM_ELEMENTS 10

int main(void)
{   
    int iArray[NUM_ELEMENTS];
    int i, num, sum = 0;

    printf("\n\n");
    printf("Enter integer elements for array: \n\n");
    for(i = 0; i < NUM_ELEMENTS; i++)
    {
        scanf("%d",&num);
        iArray[i] = num;
    }

    printf("\n\n");
    printf("Even Numbers Amongst the array elements are: \n\n");
    
    for(i = 0; i < NUM_ELEMENTS; i++)
    {
        if((iArray[i] % 2) == 0)
        {
            printf("%d\n",iArray[i]);
        }
    }

    printf("\n\n");
    printf("Odd numbers amongst the array elements are : \n\n");

    for(i = 0; i < NUM_ELEMENTS; i++)
    {
        if((iArray[i] % 2) != 0){
            printf("%d\n",iArray[i]);
        }
    }
    
    return(0);
}