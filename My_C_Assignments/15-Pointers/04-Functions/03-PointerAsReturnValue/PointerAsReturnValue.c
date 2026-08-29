#include<stdio.h>
#include<stdlib.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    char *ReplaceVowelsWithHashSymbol(char *);

    char string[MAX_STRING_LENGTH];
    char *replaced_string = NULL;

    printf("\n\n");
    printf("Enter string: ");
    gets_s(string, MAX_STRING_LENGTH);

    replaced_string = ReplaceVowelsWithHashSymbol(string);

    if(replaced_string == NULL)
    {
        printf("ReplaceVowelWithHashSymbol() function has failed !!! Exiting Now..\n\n");
        exit(0);
    }
    
    printf("Replaced string: %s\n", replaced_string);

    if(replaced_string){
        free(replaced_string);
        replaced_string = NULL;
    }
    return (0);

}

char *ReplaceVowelsWithHashSymbol(char *s)
{
    void MyStrcpy(char *, char *);

    int MyStrlen(char *);

    char *new_str = NULL;

    int i;

    new_str = (char *)malloc(MyStrlen(s) * sizeof(char));

    if(new_str == NULL)
    {
        printf("Could not allocate memory for new string !!!\n\n");
        return (NULL);
    }

    MyStrcpy(new_str,s);

    for(i = 0; i < MyStrlen(new_str); i++)
    {
        switch(new_str[i])
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
                new_str[i] = '#';
                break;
            default:
                break;
        }
    }
    return (new_str);
}


void MyStrcpy(char *str_destination, char* str_source)
{
    int MyStrlen(char *);

    int iStringLength = 0;

    int j;

    iStringLength = MyStrlen(str_source);

    for(j = 0; j < iStringLength; j++)
    {
        *(str_destination + j) = *(str_source + j);
    }

    *(str_destination + j) = '\0';
}

int MyStrlen(char *str)
{
    int j;
    int string_length = 0;


    for(j = 0; j < MAX_STRING_LENGTH; j++)
    {
        if(str[j] == '\0')
        {
            break;
        }
        else{
            string_length++;
        }
    }

    return(string_length);
}