#include<stdio.h>
#include<stdarg.h>

#define NUM_TO_BE_FOUND 3
#define NUM_ELEMENTS 10

int main(void)
{
    void FindNumber(int,int,...);

    printf("\n\n");

    FindNumber(NUM_TO_BE_FOUND,NUM_ELEMENTS,3,5,9,2,3,6,9,2,2,1);

    return 0;
}


void FindNumber(int num_to_be_found, int num, ...)
{
    int count = 0;
    int n;

    va_list num_list;

    va_start(num_list,num);

    while(num)
    {
        n = va_arg(num_list, int);
        if(n == num_to_be_found)
        {
            count++;
        }
        num--;
    }


    if(count == 0)
    {
        printf("Number %d could not be found !!! \n\n",num_to_be_found);
    }
    else
    {
        printf("Number %d found %d Times !!! \n\n",num_to_be_found,count);
    }

    va_end(num_list);

    
}