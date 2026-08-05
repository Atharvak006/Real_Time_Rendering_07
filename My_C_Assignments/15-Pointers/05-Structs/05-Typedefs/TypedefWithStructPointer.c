#include<stdio.h>
#include<stdlib.h>


struct MyData
{
    int i;
    float f;
    double d;
};

int main(void)
{   
    int iSize;
    int fSize;
    int dSize;
    int struct_MyData_Size;
    int pointer_to_struct_MyData_size;

    typedef struct MyData* mydataptr;

    mydataptr sobj;

    printf("\n\n");

    sobj = (mydataptr)malloc(sizeof(struct MyData));

    if(sobj == NULL)
    {
        printf("failed to allocated memory to 'struct sobj' !!!\n");
        exit(0);
    }
    else
    {
        printf("Successfully allocated memory to 'struct sobj' \n");
    }

    sobj -> i = 30;
    sobj -> f = 11.45;
    sobj -> d = 1.23434f;

    printf("\n\n");
    printf("Data members of sobj are: \n\n");
    printf("i = %d\n",sobj -> i);
    printf("f = %f\n",sobj -> f);
    printf("d = %lf\n",sobj -> d);

    iSize = sizeof(sobj -> i);
    fSize = sizeof(sobj -> f);
    dSize = sizeof(sobj -> d);

    printf("\n\n");

    printf("Sizes of data members of 'struct mydata' are: \n\n");
    printf("Size of i = %dbytes\n",iSize);
    printf("Size of f = %dbytes\n",fSize);
    printf("Size of d = %dbytes\n",dSize);

    struct_MyData_Size = sizeof(struct MyData);
    pointer_to_struct_MyData_size = sizeof(mydataptr);

    printf("\n\n");
    printf("Size of 'struct Mydata' %d bytes \n\n",struct_MyData_Size);
    printf("Size of pointer to 'struct MyData' : %d bytes\n\n",pointer_to_struct_MyData_size);
    if(sobj)
    {
        free(sobj);
        sobj = NULL;
        printf("Memory allocated to struct MyData has been successfully freed\n");
    }

    return 0;
}