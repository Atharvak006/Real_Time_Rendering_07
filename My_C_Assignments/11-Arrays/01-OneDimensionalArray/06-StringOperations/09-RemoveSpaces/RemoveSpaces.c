#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{

    int MyStrLen(char[]);
    void MyStrCpy(char[], char[]);

    char chArray[MAX_STRING_LENGTH], chArray_SpacesRemoved[MAX_STRING_LENGTH];

    int iStringLength;
    int i, j;

    printf("\n\n");
    printf("Enter a string : \n\n");
    gets_s(chArray, MAX_STRING_LENGTH);

    iStringLength = MyStrLen(chArray);
    
    j = 0;

    for(i = 0; i < iStringLength; i++)
    {
        if(chArray[i] == ' ')
        {
            continue;
        }
        else{
            chArray_SpacesRemoved[j] = chArray[i];
            j++;
        }
    }

    chArray_SpacesRemoved[j] = '\0';

    printf("\n\n");
    printf("String Entered By you is : \n\n");
    printf("%s\n",chArray);

    printf("\n\n");
    printf("String after removal of spaces is : \n\n");
    printf("%s\n",chArray_SpacesRemoved);

    return(0);
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
            string_length;
        }
    }

    return(string_length);
}