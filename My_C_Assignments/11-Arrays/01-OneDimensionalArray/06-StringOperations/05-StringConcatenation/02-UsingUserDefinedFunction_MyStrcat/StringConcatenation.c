#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{   
    void MyStrcat(char[], char[]);

    char chArray_One[MAX_STRING_LENGTH];
    char chArray_Two[MAX_STRING_LENGTH];

    printf("\n\n");
    printf("Enter first string: \n\n");
    gets_s(chArray_One, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("Enter second string: \n\n");
    gets_s(chArray_Two, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("****BEFORE CONCATENATION****");
    printf("\n\n");
    printf("The original First String Entered by you (ie : 'chArray_One[]') is : \n\n");
    printf("%s\n",chArray_One);

    printf("\n\n");
    printf("The original Second String Entered By you (ie: 'chArray_Two[]') is : \n\n");
    printf("%s\n",chArray_Two);

    printf("\n\n");
    printf("*****AFTER CONCATENATION*****");
    printf("\n\n");
    printf("chArray_One[] is : \n\n");
    printf("%s\n",chArray_One);

    printf("\n\n");
    printf("'chArray_Two[]' is : \n\n");
    printf("%s\n",chArray_Two);

    return 0;
}

void MyStrCat(char str_destination[], char str_source[])
{
    int MyStrLen(char[]);

    int iStringLength_Source = 0, iStringLength_Destination = 0;
    int i, j;

    iStringLength_Source = MyStrLen(str_source);
    iStringLength_Destination = MyStrLen(str_destination);

    for(i = iStringLength_Destination, j = 0; j < iStringLength_Source; i++, j++)
    {
        str_destination[i] = str_source[j];
    }

    str_destination[i] = '\0';
}

int MyStrLen(char str[])
{
    int j;
    int string_length = 0;

    for(j = 0; j < MAX_STRING_LENGTH; j++)
    {
        if(str[j] == '\0'){
            break;
        }
        else{
            string_length++;
        }
    }

    return(string_length);
}