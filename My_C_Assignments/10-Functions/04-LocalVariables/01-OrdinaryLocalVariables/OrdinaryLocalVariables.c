#include<stdio.h>

int main(void)
{
    int x = 5;

    void change_count(void);

    printf("\n");
    printf("X = %d\n\n",x);

    change_count();

    change_count();

    change_count();

    return 0;
}

void change_count(void)
{
    int local_count = 0;

    local_count = local_count + 1;

    printf("Local Count = %d\n",local_count);
}