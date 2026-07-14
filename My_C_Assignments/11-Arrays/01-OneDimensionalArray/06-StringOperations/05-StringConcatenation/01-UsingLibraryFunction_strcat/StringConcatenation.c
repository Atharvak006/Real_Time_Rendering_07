#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    char chArray_One[MAX_STRING_LENGTH], chArray_Two[MAX_STRING_LENGTH];

    printf("\n\n");
    printf("Enter first string: \n\n");
    gets_s(chArray_One, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("Enter second string: \n\n");
    gets_s(chArray_Two,MAX_STRING_LENGTH);

    printf("\n\n");
    printf("*****BEFORE CONCATENATION*****");
    printf("\n\n");

    printf("The original first string entered by you (ie :) 'chArray_One[]' is \n\n");
    printf("%s\n",chArray_Two);

    strcat(chArray_One,chArray_Two);

    printf("\n\n");
    printf("*****AFTER CONCATENATION*****");
    printf("\n\n");
    printf("'chArray_One[]' is : \n\n");
    
    printf("\n\n");
    printf("'chArray_Two[]' is :\n\n");
    printf("%s\n",chArray_Two);

    return 0;
}