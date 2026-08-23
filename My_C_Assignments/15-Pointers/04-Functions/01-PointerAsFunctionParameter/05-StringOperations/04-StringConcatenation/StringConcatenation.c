#include<stdio.h>
#include<stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    void MyStrcat(char *, char *);
    int MyStrlen(char *);

    char *chArray_Original = NULL, *chArray_Copy = NULL;

    int original_string_length;
    int copy_string_length;

    printf("\n\n");
    chArray_Original = (char *)malloc(MAX_STRING_LENGTH * sizeof(char));

    if(chArray_Original == NULL)
    {
        printf("Memory allocation for original string failed !! exiting now..\n\n");
        exit(0);
    }

    printf("Enter first string: \n");
    gets_s(chArray_Original,MAX_STRING_LENGTH);

    original_string_length = MyStrlen(chArray_Original);

    printf("\n\n");
    chArray_Copy = (char *)malloc(MAX_STRING_LENGTH * sizeof(char));

    if(chArray_Copy == NULL)
    {
        printf("Memory allocation for copied string failed !! exiting now..\n\n");
        exit(0);
    }

    printf("Enter second string: \n");
    gets_s(chArray_Copy,MAX_STRING_LENGTH);

    copy_string_length = MyStrlen(chArray_Copy);

    MyStrcat(chArray_Original,chArray_Copy);

    printf("\n\n");
    printf("The first string entered by you (ie : chArray_Original) is \n\n");

    printf("%s\n",chArray_Original);

    printf("\n\n");
    printf("The second string entered by you (ie : chArray_Copy) is: \n\n");
    printf("%s\n",chArray_Copy);

    printf("\n\n");
    printf("The concatenated string is: \n\n");
    printf("%s\n",chArray_Original);

    if(chArray_Copy)
    {
        free(chArray_Copy);
        chArray_Copy = NULL;
        printf("\n\n");
        printf("Memory allocated for second string has been successfully freed !!!\n\n");
    }

    if(chArray_Original)
    {
        free(chArray_Original);
        chArray_Original = NULL;
        printf("\n\n");
        printf("Memory allocated for first string has been successfully freed!!!\n\n");
    }

    return 0;
}

void MyStrcat(char *str_destination, char *str_source)
{
    int MyStrlen(char *);

    int iStringLength_Source = 0, iStringLength_Destination = 0;
    int i,j;

    iStringLength_Source = MyStrlen(str_source);
    iStringLength_Destination = MyStrlen(str_destination);

    for(i = iStringLength_Destination, j = 0; j < iStringLength_Source; i++,j++)
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