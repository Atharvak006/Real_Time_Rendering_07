#include<stdio.h>

void change_count_two(void)
{
    extern int global_cnt;
    global_cnt = global_cnt + 1;
    printf("change_count_two(): Value of global_count in File_02 = %d\n",global_cnt);
}