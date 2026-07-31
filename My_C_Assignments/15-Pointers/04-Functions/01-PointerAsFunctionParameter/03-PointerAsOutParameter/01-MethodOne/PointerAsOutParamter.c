#include<stdio.h>

int main(void)
{   
    void MathematicalOperations(int,int,int*,int*,int*,int *, int*);

    int x;
    int y;
    int ans_sum;
    int ans_diff;
    int ans_product;
    int ans_quotient;
    int ans_remainder;

    printf("\n\n");
    printf("Enter value of x: ");
    scanf("%d",&x);

    printf("\n\n");
    printf("Enter value of y: ");
    scanf("%d",&y);

    MathematicalOperations(x,y,&ans_sum,&ans_diff,&ans_product,&ans_quotient,&ans_remainder);
    printf("Results: \n");
    printf("Sum = %d\n",ans_sum);
    printf("Difference: %d\n",ans_diff);
    printf("Product = %d\n",ans_product);
    printf("Quotient = %d\n",ans_quotient);
    printf("Remainder = %d\n",ans_remainder);
    
    return 0;
}

void MathematicalOperations(int a, int b, int *sum, int *diff, int *prod, int *qoutient, int *remainder)
{
    *sum = a+b;
    *diff = a-b;
    *prod = a*b;
    *qoutient = a/b;
    *remainder = a%b;
}