#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)  
{
    char chArray_Original[MAX_STRING_LENGTH];
    char chArray_Copy[MAX_STRING_LENGTH];

    printf("\n\n");
    printf("Enter a string: \n\n");
    gets_s(chArray_Original, MAX_STRING_LENGTH);

    strcpy(chArray_Copy, chArray_Original);

    printf("\n\n");
    printf("The original String Entered By you (ie : 'chArray_Original[])' Is: \n\n");
    printf("%s\n",chArray_Original);

    printf("\n\n");
    printf("The Copied String Entered By you (ie : 'chArray_Copy[])' Is: \n\n");
    printf("%s\n",chArray_Copy);

    return 0;
}