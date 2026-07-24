#include<stdio.h>

int main(void)
{
    int num;
    int *ptr = NULL;
    int *cpy_ptr = NULL;

    num = 5;
    ptr = &num;

    printf("\n\n");
    printf("*****Before copy_ptr = ptr*****\n\n");
    printf("num = %d\n",num);
    printf("&num = %d\n",&num);
    printf("*(&num) = %d\n",*(&num));
    printf("ptr = %d\n",ptr);
    printf("*ptr = %d\n",*ptr);

    cpy_ptr = ptr;
    
    printf("\n\n");
    printf("*****After copy_ptr = ptr*****\n\n");
    printf("num = %d\n",num);
    printf("&num = %d\n",&num);
    printf("*(&num) = %d\n",*(&num));
    printf("ptr = %d\n",ptr);
    printf("*ptr = %d\n",*ptr);
    printf("cpy_ptr = %d\n",cpy_ptr);
    printf("*cpy_ptr = %d\n",*cpy_ptr);

    return 0;
}