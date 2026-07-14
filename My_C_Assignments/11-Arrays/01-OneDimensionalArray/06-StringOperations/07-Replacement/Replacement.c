#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    int MyStrLen(char[]);

    void MyStrcpy(char[], char[]);

    char chArray_Original[MAX_STRING_LENGTH], chArray_VowelsReplaced[MAX_STRING_LENGTH];

    int iStringLength;
    
    int i;

    printf("\n\n");
    printf("Enter a string: \n\n");
    gets_s(chArray_Original, MAX_STRING_LENGTH);

    printf("\n\n");
    printf("String Entered by you is : \n\n");
    printf("%s\n", chArray_Original);

    MyStrcpy(chArray_VowelsReplaced, chArray_Original);
    iStringLength = MyStrLen(chArray_VowelsReplaced);

    for(i = 0; i < iStringLength; i++)
    {
        switch(chArray_VowelsReplaced[i])
        {
            case 'A':
            case 'a':

            case 'E':
            case 'e':

            case 'I':
            case 'i':

            case 'O':
            case 'o':

            case 'U':
            case 'u':
                chArray_VowelsReplaced[i] = '*';
                break;

            default:
                break;
        }
    }

    printf("\n\n");
    printf("In the string entered by you, the vowels and the number of their occurences are as follows..\n\n");

    printf("\n\n");
    printf("String after replacement of vowels by * is : \n\n");
    printf("%s\n", chArray_VowelsReplaced);

    return(0);
}

int MyStrLen(char str[])
{
    int j;
    int string_Length = 0;

    for(j = 0; j < MAX_STRING_LENGTH; j++)
    {
        if(str[j] == '\0')
        {
            break;
        }
        else
        {
            string_Length++;
        }
    }

    return(string_Length);
}

void MyStrcpy(char str_destination[], char str_source[])
{
    int MyStrLen(char[]);

    int iStringLength = 0;
    int j;

    iStringLength = MyStrLen(str_source);

    for(j = 0; j < iStringLength; j++)
    {
        str_destination[j] = str_source[j];
    }

    str_destination[j] = '\0';
}