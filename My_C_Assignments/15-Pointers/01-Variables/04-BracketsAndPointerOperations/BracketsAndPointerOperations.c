#include<stdio.h>

int main(void)
{
    int num;
    int *ptr = NULL;
    int ans;

    num = 5;
    ptr = &num;

    printf("\n\n");
    printf("*****Before copy_ptr = ptr*****\n\n");
    printf("num = %d\n",num);
    printf("&num = %d\n",&num);
    printf("*(&num) = %d\n",*(&num));
    printf("ptr = %d\n",ptr);
    printf("*ptr = %d\n",*ptr);

    printf("\n\n");

    printf("Answer of (ptr + 10) = %p\n",(ptr+10));
    printf("Answer of *(ptr + 10) = %d\n",*(ptr+10));
    printf("Answer of (*ptr + 10) = %d\n",(*ptr+10));
    ++*ptr;
    
    printf("Answer of ++*ptr = %p\n",*ptr);
    *ptr++;

    printf("Answer of *ptr++ = %d\n",*ptr);

    ptr = &num;
    (*ptr)++;

    printf("Answer of (*ptr)++ = %d\n",*ptr);

    return 0;
}