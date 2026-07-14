#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)  
{
    void MyStrCpy(char[], char[]);
    char chArray_Original[MAX_STRING_LENGTH];
    char chArray_Copy[MAX_STRING_LENGTH];

    printf("\n\n");
    printf("Enter a string: \n\n");
    gets_s(chArray_Original, MAX_STRING_LENGTH);

    MyStrCpy(chArray_Copy, chArray_Original);

    printf("\n\n");
    printf("The original String Entered By you (ie : 'chArray_Original[])' Is: \n\n");
    printf("%s\n",chArray_Original);

    printf("\n\n");
    printf("The Copied String Entered By you (ie : 'chArray_Copy[])' Is: \n\n");
    printf("%s\n",chArray_Copy);

    return 0;
}

void MyStrCpy(char str_destination[], char str_source[])
{
    int MyStrLen(char []);

    int iStringLength = 0;
    int j;

    iStringLength = MyStrLen(str_source);

    for(j = 0; j < iStringLength; j++)
    {
        str_destination[j] = str_source[j];
    }

    str_destination[j] = '\0';
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
        else{
            string_Length++;
        }
    }

    return(string_Length);
}
