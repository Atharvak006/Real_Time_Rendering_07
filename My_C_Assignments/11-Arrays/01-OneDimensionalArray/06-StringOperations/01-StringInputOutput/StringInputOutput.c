#include<stdio.h>
#include<conio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    char chArray[MAX_STRING_LENGTH];

    printf("\n\n");
    printf("Enter a string : \n\n");
    gets_s(chArray,MAX_STRING_LENGTH);

    printf("\n\n");
    printf("String Entered by you is : \n\n");
    printf("%s\n",chArray);

    return 0;
}
