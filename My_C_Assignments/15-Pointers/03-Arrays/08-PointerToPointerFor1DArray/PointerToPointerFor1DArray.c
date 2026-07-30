#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    void MyAlloc(int **ptr, unsigned int numberOfElements);

    int *piArray = NULL;

    unsigned int num_elements;
    int i;


    printf("How many elements you want in integer array? \n\n");
    scanf("%u",&num_elements);

    printf("\n\n");
    MyAlloc(&piArray,num_elements);

    printf("Enter %u elements to fill up your integer array : \n\n",num_elements);

    for(i = 0; i < num_elements; i++)
    {
        scanf("%d",&piArray[i]);
    }

    printf("\n\n");
    printf("The %u elements entered by you in the integer array: \n\n",num_elements);
    for(i = 0; i < num_elements; i++)
    {
        printf("%u",piArray[i]);
    }

    printf("\n\n");

    if(piArray)
    {
        free(piArray);
        piArray = NULL;
        printf("Memory allocated has been freed\n");
    }

    return 0;
}

void MyAlloc(int **ptr, unsigned int numberOfElements)
{
    *ptr = (int *)malloc(numberOfElements * sizeof(int));


    if(*ptr == NULL)
    {
        printf("Could not allocate memory!!! exiting now...\n\n");
        exit(0);
    } 

    printf("MyAlloc() has successfully allocated %lu bytes for integer array \n",(numberOfElements * sizeof(int)));
}