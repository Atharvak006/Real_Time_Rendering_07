#include<stdio.h>
#include<stdlib.h>

int main(void)
{

    void SwapNumbers(int*,int*);

    int x;
    int y;

    printf("\n\n");
    printf("Enter value for x : ");
    scanf("%d",&x);

    printf("\n\n");
    printf("Enter value for y: ");
    scanf("%d",&y);

    printf("Before swapping : \n");
    printf("Value of x = %d\n",x);
    printf("Value of y = %d\n",y);

    SwapNumbers(&x,&y);

    printf("After swapping: \n");
    printf("Value of x = %d\n",x);
    printf("Value of y = %d\n",y);

    return 0;
}

void SwapNumbers(int *B, int *C)
{
    int temp;

    temp = *B;
    *B = *C;
    *C = temp;

}