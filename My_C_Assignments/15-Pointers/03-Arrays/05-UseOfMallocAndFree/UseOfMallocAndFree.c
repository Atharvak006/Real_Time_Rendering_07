#include<stdio.h>
#include<stdlib.h>

int main(void)
{

    int *ptr_Array = NULL;

    unsigned int intArrayLength = 0;
    int i;

    printf("\n\n");
    printf("Enter the number of elements you want in your integer array: ");
    scanf("%d",&intArrayLength);

    ptr_Array = (int *)malloc(sizeof(int) * intArrayLength);

    if(ptr_Array == NULL)
    {
        printf("\n\n");
        printf("Memory allocation failed\n");
        exit(0);
    }

    else{
        printf("\n\n");
        printf("Memory addresses from %p to %p have been allocated to integer array!!!\n\n",ptr_Array,(ptr_Array+(intArrayLength - 1)));
    }

    printf("\n\n");

    printf("Enter %d Elements for the Integer Array: \n\n",intArrayLength);
    for(i = 0; i < intArrayLength; i++)
    {
        scanf("%d",(ptr_Array + i));
    }

    printf("\n\n");
    printf("The integer array entered by you, consisting of %d elements: \n\n",intArrayLength);

    for(i = 0; i<intArrayLength; i++)
    {
        printf("ptr_iArray[%d] = %d \t\t at address &ptr_iArray[%d]: %p\n",i,ptr_Array[i],i,&ptr_Array[i]);
    }

    printf("\n\n");
    for(i = 0; i < intArrayLength; i++)
    {
        printf("*(ptr_iArray + %d) = %d \t\t at address (ptr_iArray + %d): %p\n",i,*(ptr_Array+i),i,(ptr_Array+i));
    }


    if(ptr_Array)
    {
        free(ptr_Array);
        ptr_Array = NULL;

        printf("\n\n");
        printf("Memory ALLOCATED FOR INTEGER ARRAY HAS BEEN SUCCESSFULLY FREED !!!\n\n");
    }

    return 0;
}   