//Heasder files
#include<stdio.h>
#include<stdlib.h>

struct MyData
{
    int *ptr_i;
    int i;

    float *ptr_f;
    float f;

    double *ptr_d;
    double d;
};

int main(void)
{   
    struct MyData* pdata;

    printf("\n\n");
    
    pdata = (struct MyData* )malloc(sizeof(struct MyData));

    if(pdata == NULL)
    {
        printf("Failed to allocated memory.\n");
        exit(0);
    }
    else
    {
        printf("successfully allocated memory\n");
    }
    printf("\n\n");

    pdata -> i = 9;
    pdata -> ptr_i = &(pdata -> i);

    //(*pdata).ptr_i = &((*pdata).i);

    pdata -> f = 11.45;
    pdata -> ptr_f = &(pdata -> f);

    pdata -> d = 30.12232;
    pdata -> ptr_d = &(pdata -> d);

    printf("i = %d\n",*(pdata->ptr_i));
    printf("Address of i = %p\n",pdata->ptr_f);

    printf("f = %f\n",*(pdata->ptr_f));
    printf("Address of f = %p\n",pdata->ptr_f);

    printf("d = %d\n",*(pdata->ptr_d));
    printf("Address of d = %p\n",pdata->ptr_d);

    if(pdata)
    {
        free(pdata);
        pdata = NULL;
        printf("MEMORY FREED\n");
    }

    return 0;
}