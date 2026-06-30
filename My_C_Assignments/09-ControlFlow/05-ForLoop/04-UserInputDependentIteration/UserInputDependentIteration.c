#include<stdio.h>

int main(void)
{   
    int i_val, val, j;

    printf("\n\n");

    printf("Enter An integer Value from which iteration must begin : ");
    scanf("%d",&i_val);

    printf("How many Digits Do you want to print from %d Onwards ? : ",i_val);
    scanf("%d",&val);

    printf("Printing Digits %d to %d : \n\n",i_val, (i_val + val));

    for(j = i_val; j <= (i_val + val); j++)
    {
        printf("\t %d\n",j);
    }

    printf("\n\n");

    return 0;
}