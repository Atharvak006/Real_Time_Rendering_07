#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    int MyStrLen(char[]);

    char strArray[10][15] = {"Hello!", "Welcome", "To", "Real", "Time", "Rendering", "Batch", "(2026-27)", "Of", "Astromedicomp."};
    int iStrLengths[10];

    int strArray_Size;
    int strArray_Num_Rows;

    int i;

    strArray_Size = sizeof(strArray);
    strArray_Num_Rows = strArray_Size / sizeof(strArray[0]);

    for(i = 0; i < strArray_Num_Rows; i++)
    {
        iStrLengths[i] = MyStrLen(strArray[i]);
    }

    printf("\n\n");
    printf("The entire string array : \n\n");

    for(i = 0; i < strArray_Num_Rows; i++)
    {
        printf("%s ",strArray[i]);
    }

    printf("\n\n");
    printf("Strings in the 2D array : \n\n");
    for(i = 0; i < strArray_Num_Rows; i++)
    {
        printf("String Number %d => %s\n\n", (i + 1), strArray[i]);

        for(int j = 0; j < iStrLengths[i]; j++)
        {
            printf("Character %d = %c\n", (j + 1), strArray[i][j]);
        }

        printf("\n\n");
    }

    return 0;
}

int MyStrLen(char str[])
{
    int j;
    int string_length = 0;

    for(j = 0; j < MAX_STRING_LENGTH; j++)
    {
        if(str[j] == '\0')
        {
            break;
        }
        else
        {
            string_length++;
        }
    }

    return(string_length);
}