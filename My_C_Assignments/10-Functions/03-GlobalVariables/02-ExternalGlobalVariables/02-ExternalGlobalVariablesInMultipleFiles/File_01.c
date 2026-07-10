#include<stdio.h>

extern int global_cnt;

void change_count_one(void)
{
    global_cnt = global_cnt + 1;
    printf("Change_count_one(): Value of global_Cnt in File_01 = %d\n",global_cnt);
}