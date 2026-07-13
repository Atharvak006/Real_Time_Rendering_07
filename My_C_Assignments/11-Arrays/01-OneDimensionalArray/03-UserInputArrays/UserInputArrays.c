#include <stdio.h>
#include <conio.h>   // For getch()

#define INT_ARRAY_NUM_ELEMENTS   5
#define FLOAT_ARRAY_NUM_ELEMENTS 3
#define CHAR_ARRAY_NUM_ELEMENTS  15

int main(void)
{
    int iArray[INT_ARRAY_NUM_ELEMENTS];
    float fArray[FLOAT_ARRAY_NUM_ELEMENTS];
    char cArray[CHAR_ARRAY_NUM_ELEMENTS];

    int i;

    // Integer Array Input
    printf("\nEnter %d elements for Integer Array:\n", INT_ARRAY_NUM_ELEMENTS);
    for(i = 0; i < INT_ARRAY_NUM_ELEMENTS; i++)
    {
        scanf("%d", &iArray[i]);
    }

    // Float Array Input
    printf("\nEnter %d elements for Float Array:\n", FLOAT_ARRAY_NUM_ELEMENTS);
    for(i = 0; i < FLOAT_ARRAY_NUM_ELEMENTS; i++)
    {
        scanf("%f", &fArray[i]);
    }

    // Character Array Input
    printf("\nEnter %d characters:\n", CHAR_ARRAY_NUM_ELEMENTS);
    for(i = 0; i < CHAR_ARRAY_NUM_ELEMENTS; i++)
    {
        cArray[i] = getch();      // character read karayche without enter
        printf("%c\n", cArray[i]); // print karayche
    }

    // Integer Array Output
    printf("\nEntered Integer Array:\n");
    for(i = 0; i < INT_ARRAY_NUM_ELEMENTS; i++)
    {
        printf("iArray[%d] = %d\n", i, iArray[i]);
    }

    // Float Array Output
    printf("\nEntered Float Array:\n");
    for(i = 0; i < FLOAT_ARRAY_NUM_ELEMENTS; i++)
    {
        printf("fArray[%d] = %.2f\n", i, fArray[i]);
    }

    // Character Array Output
    printf("\nEntered Character Array:\n");
    for(i = 0; i < CHAR_ARRAY_NUM_ELEMENTS; i++)
    {
        printf("cArray[%d] = %c\n", i, cArray[i]);
    }

    return 0;
}