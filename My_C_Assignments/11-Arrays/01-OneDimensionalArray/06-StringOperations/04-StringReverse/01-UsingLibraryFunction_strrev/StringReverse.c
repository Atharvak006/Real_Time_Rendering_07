#include<stdio.h>
#include<string.h>

#define MAX_STRING_LENGTH 512

int main(void)
{

    char chArray_Original[MAX_STRING_LENGTH];

    printf("\n\n");
    printf("Enter a string: \n\n");
    gets_s(chArray_Original,MAX_STRING_LENGTH);

    printf("\n\n");
    printf("The original String Entered by you (ie: 'chArray_Original[])' Is: \n\n");
    printf("%s\n",chArray_Original);

    printf("\n\n");
    printf("The Reversed String (ie: 'chArray_Reverse[]') is : \n\n");
    printf("%s\n",strrev(chArray_Original));

    return(0);
}