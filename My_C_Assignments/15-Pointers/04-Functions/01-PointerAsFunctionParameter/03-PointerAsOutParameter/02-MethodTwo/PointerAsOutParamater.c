#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    void MathematicalOperations(int,int,int*,int*,int*,int*,int*);

    int x;
    int y;
    int *ans_sum;
    int *ans_diff;
    int *ans_product;
    int *ans_quotient;
    int *ans_remainder;

    printf("\n\n");
    printf("Enter value of x: ");
    scanf("%d",&x);

    printf("\n\n");
    printf("Enter value of y: ");
    scanf("%d",&y);

    ans_sum = (int *)malloc(1 * sizeof(int));

    if(ans_sum == NULL)
    {
        printf("Could not allocate memory for ans_sum\n");
        exit(0);
    }

    ans_diff = (int *)malloc(1 * sizeof(int));

    if(ans_diff == NULL)
    {
        printf("Could not allocate memory for ans_diff\n");
        exit(0);
    }

    ans_product = (int *)malloc(1 * sizeof(int));

    if(ans_product == NULL)
    {
        printf("Could not allocate memory for ans_product\n");
        exit(0);
    }

    ans_quotient = (int *)malloc(1 * sizeof(int));

    if(ans_quotient == NULL)
    {
        printf("Could not allocate memory for ans_quotient\n");
        exit(0);
    }

    ans_remainder = (int *)malloc(1 * sizeof(int));

    if(ans_remainder == NULL)
    {
        printf("Could not allocate memory for ans_remainder\n");
        exit(0);
    }

    MathematicalOperations(x,y,ans_sum,ans_diff,ans_product,ans_quotient,ans_remainder);

    printf("Results: \n");
    printf("Sum = %d\n",*ans_sum);
    printf("Difference: %d\n",*ans_diff);
    printf("Product = %d\n",*ans_product);
    printf("Quotient = %d\n",*ans_quotient);
    printf("Remainder = %d\n",*ans_remainder);

    if(ans_remainder)
    {
        free(ans_remainder);
        ans_remainder = NULL;
        printf("Memory freed for remainder freed\n");
    }

    if(ans_quotient)
    {
        free(ans_quotient);
        ans_quotient = NULL;
        printf("Memory freed for ans_quotient freed\n");
    }

    if(ans_product)
    {
        free(ans_product);
        ans_product = NULL;
        printf("Memory freed for ans_product freed\n");
    }

    if(ans_diff)
    {
        free(ans_diff);
        ans_diff = NULL;
        printf("Memory freed for ans_diff freed\n");
    }

    if(ans_sum)
    {
        free(ans_sum);
        ans_sum = NULL;
        printf("Memory freed for ans_sum freed\n");
    }

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