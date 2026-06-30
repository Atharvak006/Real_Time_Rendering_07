#include<stdio.h>

int main(void)
{   
    int i_val, val, i;

    printf("\n\n");

    printf("Enter an integer value from which iteration must begin : ");
    scanf("%d",&i_val);

    printf("How many digits do you want to print from %d onwards ? : ",i_val);
    scanf("%d",&val);

    printf("Printing Digits %d to %d : \n\n",i_val, (i_val + val));

    i = i_val;

    do
    {
        printf("\t%d\n",i);
        i++;
    }while(i <= (i_val + val));

    printf("\n\n");
    
    return 0;
}