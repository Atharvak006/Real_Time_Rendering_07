#include<stdio.h>
#include<stdlib.h>

#define INT_SIZE sizeof(int)
#define FLOAT_SIZE sizeof(float)
#define DOUBLE_SIZE sizeof(double)
#define CHAR_SIZE sizeof(char)

int main(void)
{
    int *ptr_iArray = NULL;
    unsigned int intArrayLength = 0;

    float *ptr_fArray = NULL;
    unsigned int floatArrayLength = 0;

    double *ptr_dArray = NULL;
    unsigned int doubleArrayLength = 0;

    char *ptr_cArray = NULL;
    unsigned int charArrayLength = 0;

    int i;

    printf("\n\n");
    printf("Enter the number of elements you want in the integer array: ");
    scanf("%u",&intArrayLength);

    ptr_iArray = (int *)malloc(INT_SIZE * intArrayLength);

    if(ptr_iArray == NULL)
    {
        printf("\n\n");
        printf("Memory allocation for integer failed !!! Exiting now...\n\n");
        exit(0);
    }
    else
    {
        printf("\n\n");
        printf("Memory allocation for integer array succeeded !!!\n\n");
    }

    printf("\n\n");
    printf("Enter the %u integer elements to fill up the integer array: \n\n",intArrayLength);

    for(i = 0; i < intArrayLength; i++)
    {
        scanf("%d",(ptr_iArray + i));
    }

    //////////// FLOAT ARRAY ///////////
    printf("\n\n");
    printf("Enter the number of elements you want in the float array: ");
    scanf("%u",&floatArrayLength);

    ptr_fArray = (float *)malloc(FLOAT_SIZE * floatArrayLength);

    if(ptr_fArray == NULL)
    {
        printf("\n\n");
        printf("Memory allocation for float failed !!! Exiting now...\n\n");
        exit(0);
    }
    else
    {
        printf("\n\n");
        printf("Memory allocation for float array succeeded !!!\n\n");
    }

    printf("\n\n");
    printf("Enter the %u float elements to fill up the float array: \n\n",floatArrayLength);

    for(i = 0; i < floatArrayLength; i++)
    {
        scanf("%f",(ptr_fArray + i));
    }

    ////////// DOUBLE ARRAY //////////

    printf("\n\n");
    printf("Enter the number of elements you want in the double array: ");
    scanf("%u",&doubleArrayLength);

    ptr_dArray = (double *)malloc(DOUBLE_SIZE * doubleArrayLength);

    if(ptr_dArray == NULL)
    {
        printf("\n\n");
        printf("Memory allocation for double failed !!! Exiting now...\n\n");
        exit(0);
    }
    else
    {
        printf("\n\n");
        printf("Memory allocation for double array succeeded !!!\n\n");
    }

    printf("\n\n");
    printf("Enter the %u double elements to fill up the double array: \n\n",doubleArrayLength);

    for(i = 0; i < doubleArrayLength; i++)
    {
        scanf("%lf",(ptr_dArray + i));
    }

    ////////// CHAR ARRAY //////////

    printf("\n\n");
    printf("Enter the number of elements you want in the char array: ");
    scanf("%u",&charArrayLength);

    ptr_cArray = (char *)malloc(CHAR_SIZE * charArrayLength);

    if(ptr_cArray == NULL)
    {
        printf("\n\n");
        printf("Memory allocation for char failed !!! Exiting now...\n\n");
        exit(0);
    }
    else
    {
        printf("\n\n");
        printf("Memory allocation for char array succeeded !!!\n\n");
    }

    printf("\n\n");
    printf("Enter the %u char elements to fill up the char array: \n\n",charArrayLength);

    for(i = 0; i < charArrayLength; i++)
    {
        scanf(" %c",(ptr_cArray + i));
    }

    // Display
    printf("\n\n");
    printf("The integer array entered by you: \n");

    for(i = 0; i < intArrayLength; i++)
    {
        printf(" %d \t \t at address : %p\n",*(ptr_iArray + i),(ptr_iArray + i));
    }

    printf("\n\n");
    printf("The float array entered by you: \n");

    for(i = 0; i < floatArrayLength; i++)
    {
        printf(" %f \t \t at address : %p\n",*(ptr_fArray + i),(ptr_fArray + i));
    }

    printf("\n\n");
    printf("The double array entered by you: \n");

    for(i = 0; i < doubleArrayLength; i++)
    {
        printf(" %lf \t \t at address : %p\n",*(ptr_dArray + i),(ptr_dArray + i));
    }

    printf("\n\n");
    printf("The character array entered by you: \n");

    for(i = 0; i < charArrayLength; i++)
    {
        printf(" %c \t \t at address : %p\n",*(ptr_cArray + i),(ptr_cArray + i));
    }

    /// FREEING MEMORY OCCUPIED BY ARRAYS (IN REVERSE ORDER OF ALLOCATION)

    if(ptr_cArray)
    {
        free(ptr_cArray);
        ptr_cArray = NULL;

        printf("\n");
        printf("Memory of char freed");
    }

    if(ptr_dArray)
    {
        free(ptr_dArray);
        ptr_dArray = NULL;

        printf("\n");
        printf("Memory of double freed");
    }

    if(ptr_fArray)
    {
        free(ptr_fArray);
        ptr_fArray = NULL;

        printf("\n");
        printf("Memory of float freed");
    }

    if(ptr_iArray)
    {
        free(ptr_iArray);
        ptr_iArray = NULL;

        printf("\n");
        printf("Memory of int freed");
    }

    return 0;
}