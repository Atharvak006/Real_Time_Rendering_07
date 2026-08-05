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
    void ChangeValues(struct MyData* );

    struct MyData* sobj = NULL;

    printf("\n\n");

    sobj = (struct MyData*)malloc(sizeof(struct MyData));

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

    ChangeValues(sobj);

    printf("\n\n");
    printf("Data members of sobj are: \n\n");
    printf("i = %d\n",sobj -> i);
    printf("f = %f\n",sobj -> f);
    printf("d = %lf\n",sobj -> d);

    if(sobj)
    {
        free(sobj);
        sobj = NULL;
        printf("Memory allocated to struct MyData has been successfully freed\n");
    }

    return 0;
}

void ChangeValues(struct MyData* pParam_Data)
{
    pParam_Data -> i = 9;
    pParam_Data -> f = 8.2f;
    pParam_Data -> d = 6.23343;
}