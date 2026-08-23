#include<stdio.h>
#include<stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    void MyStrrev(char *, char *);
    int MyStrlen(char*);

    int MyStrlen(char *);
    char *chArray_Original = NULL, *chArray_Copy = NULL;

    int original_string_length;

    printf("\n\n");
    chArray_Original = (char *)malloc(MAX_STRING_LENGTH * sizeof(char));

    if(chArray_Original == NULL)
    {
        printf("Memory allocation for original string failed !! exiting now..\n\n");
        exit(0);
    }

    printf("Enter a string: \n");
    gets_s(chArray_Original,MAX_STRING_LENGTH);

    original_string_length = MyStrlen(chArray_Original);
    chArray_Copy = (char *)malloc((original_string_length + 1) * sizeof(char));

    if(chArray_Copy == NULL)
    {
        printf("Memory allocation for copied string failed !! exiting now..\n\n");
        exit(0);
    }

    MyStrrev(chArray_Copy,chArray_Original);

    printf("\n\n");
    printf("The original string entered by you (ie : chArray_Original) is \n\n");

    printf("%s\n",chArray_Original);

    printf("\n\n");
    printf("The reversed string (ie : chArray_Copy) is: \n\n");
    printf("%s\n",chArray_Copy);

    if(chArray_Copy)
    {
        free(chArray_Copy);
        chArray_Copy = NULL;
        printf("\n\n");
        printf("Memory allocated for copied string has been successfully freed !!!\n\n");
    }

    if(chArray_Original)
    {
        free(chArray_Original);
        chArray_Original = NULL;
        printf("\n\n");
        printf("Memory allocated for original string has been successfully freed!!!\n\n");
    }

    return 0;
}

void MyStrrev(char *str_destination, char *str_source)
{
    int MyStrlen(char *);

    int iStringLength = 0;
    int i,j,len;

    iStringLength = MyStrlen(str_source);

    len = iStringLength - 1;

    for(i = 0, j = len; i < iStringLength; i++, j--)
    {
        *(str_destination + i) = *(str_source + j);
    }

    *(str_destination + i) = '\0';
}

int MyStrlen(char *str)
{
    int j;
    int string_length = 0;

    for(j = 0; j < MAX_STRING_LENGTH; j++)
    {
        if(*(str + j) == '\0')
        {
            break;
        }
        else
        {
            string_length++;
        }
    }

    return (string_length);
}