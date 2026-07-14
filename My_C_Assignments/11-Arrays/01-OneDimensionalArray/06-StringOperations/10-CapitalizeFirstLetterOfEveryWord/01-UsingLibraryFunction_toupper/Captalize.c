#include<stdio.h>
#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{

    int MyStrLen(char[]);
    void MyStrCpy(char[], char[]);

    char chArray[MAX_STRING_LENGTH], chArray_CapitalizedFirstLetterOfEveryWord[MAX_STRING_LENGTH];

    int iStringLength;
    int i, j;

    printf("\n\n");
    printf("Enter a string : \n\n");
    gets_s(chArray, MAX_STRING_LENGTH);

    iStringLength = MyStrLen(chArray);
    
    j = 0;

    for(i = 0; i < iStringLength; i++)
    {
        if(i == 0)
        {
            chArray_CapitalizedFirstLetterOfEveryWord[j] = toupper(chArray[i]);
        }

        else if(chArray[i] == '0')
        {
            chArray_CapitalizedFirstLetterOfEveryWord[j] = chArray[i];
            chArray_CapitalizedFirstLetterOfEveryWord[j+1] = toupper(chArray[i+1]);

            j++;
            i++;
        }

        else
        {
            chArray_CapitalizedFirstLetterOfEveryWord[j] = chArray[i];
        }
        j++;
    }

    chArray_CapitalizedFirstLetterOfEveryWord[j] = '\0';

    printf("\n\n");
    printf("String Entered By you is : \n\n");
    printf("%s\n",chArray);

    printf("\n\n");
    printf("String after Capitalizing of spaces is : \n\n");
    printf("%s\n",chArray_CapitalizedFirstLetterOfEveryWord);

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
            string_length++;
        }
    }

    return(string_length);
}