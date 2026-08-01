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
    int pointer_to_struct_mydata_size;

    struct MyData* pdata = NULL;

    printf("\n\n");

    pdata = (struct MyData*)malloc(sizeof(struct MyData));

    if(pdata == NULL)
    {
        printf("Failed to allocated memory to struct mydata\n");
        exit(0);
    }
    else
    {
        printf("Memory allocated successfully\n");
    }

    pdata -> i = 30;
    pdata -> f = 11.45;
    pdata -> d = 1.2995;

    printf("\n\n");
    printf("Data Members of 'struct MyData' Are: \n\n");
    printf("i = %d\n",pdata -> i);
    printf("f = %f\n",pdata -> f);
    printf("d = %lf\n",pdata -> d);

    iSize = sizeof(pdata -> i);
    fSize = sizeof(pdata -> f);
    dSize = sizeof(pdata -> d);

    printf("\n\n");
    printf("Sizes (in Bytes) of Data members of 'struct MyData' are: \n\n");
    printf("Size of 'i' = %d bytes\n",iSize);
    printf("Size of 'f' = %d bytes\n",fSize);
    printf("Size of 'd' = %d bytes\n",dSize);

    struct_MyData_Size = sizeof(struct MyData);

    pointer_to_struct_mydata_size = sizeof(struct MyData*);

    printf("\n\n");
    printf("Size of 'struct MyData' : %d bytes\n\n",struct_MyData_Size);
    printf("Size of pointer to 'struct MyData' : %d bytes\n\n",pointer_to_struct_mydata_size);

    if(pdata)
    {
        free(pdata);
        pdata = NULL;
        printf("Memory allocated to 'struct MyData' has been successfully freed !!!\n");
    }

    return 0;
}