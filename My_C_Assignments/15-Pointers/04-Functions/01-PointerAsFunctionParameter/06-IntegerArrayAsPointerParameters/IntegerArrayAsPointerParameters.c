#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    void MultiplyArrayElementsByNumber(int *, int, int);

    int *iArray = NULL;

    int num_elements;
    int i,num;

    printf("\n\n");
    printf("Enter how many elements you want in the integer array: ");
    scanf("%d",&num_elements);

    iArray = (int *)malloc(num_elements * sizeof(int));

    if(iArray == NULL)
    {
        printf("Memory allocation failed\n");
        exit(0);
    }

    printf("\n\n");
    printf("Enter %d elements for the integer array: \n\n",num_elements);

    for(i = 0; i < num_elements; i++)
    {
        scanf("%d",&iArray[i]);
    }

    printf("\n\n");
    printf("Array before passing to function MultiplyArrayElementsByNumber(): \n\n");

    for(i = 0; i < num_elements; i++)
    {
        printf("iArray[%d] = %d\n",i,iArray[i]);
    }

    printf("\n\n");

    printf("Enter the number by which you want to multiply each array element: ");
    scanf("%d",&num);

    MultiplyArrayElementsByNumber(iArray,num_elements,num);

    printf("\n\n");
    printf("Array returned by function MultiplyArrayElementsByNumber(): \n");

    for(i = 0; i < num_elements; i++)
    {
        printf("iArray[%d] = %d\n",i,iArray[i]);
    }

    if(iArray)
    {
        free(iArray);
        iArray = NULL;
        printf("\n\n");
        printf("Memory allocated to iArray has been freed successfully\n\n");
    }

    return 0;
}

void MultiplyArrayElementsByNumber(int *arr, int iNumElements, int n)
{
    int i;

    for(i = 0; i < iNumElements; i++)
    {
        arr[i] = arr[i] * n;
    }
}