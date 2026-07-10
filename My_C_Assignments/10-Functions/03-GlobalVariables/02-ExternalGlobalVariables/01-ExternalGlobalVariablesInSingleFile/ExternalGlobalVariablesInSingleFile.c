#include<stdio.h>

int main(void)
{
    void change_count(void);

    extern int global_Cnt;

    printf("\n");
    printf("Value of global_cnt before change_count() = %d\n",global_Cnt);
    change_count();
    printf("Value of global_Cnt after change_count() = %d\n",global_Cnt);
    printf("\n");
    return(0);
}


int global_Cnt = 0;

void change_count(void)
{
    global_Cnt = 5;
    printf("Value of global_Cnt in change_count() = %d\n",global_Cnt);
}