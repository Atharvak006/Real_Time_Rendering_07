#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    int MyStrLen(char[]);

    void MyStrcpy(char[], char[]);

    char chArray[MAX_STRING_LENGTH];

    int iStringLength;    
    int i;
    int word_count = 0;
    int space_count = 0;

    printf("\n\n");
    printf("Enter a string : \n\n");
    gets_s(chArray,MAX_STRING_LENGTH);

    iStringLength = MyStrLen(chArray);

    for(i = 0; i < iStringLength; i++)
    {
        switch(chArray[i]){
            case 32:
                space_count++;
                break;
            default:
                break;
        }
    }
    word_count = space_count + 1;

    printf("\n\n");
    printf("String Entered by you is : \n\n");
    printf("%s\n",chArray);

    printf("\n\n");
    printf("Number of spaces in the input string = %d\n\n",space_count);
    printf("Number of words in the input string = %d\n\n",word_count);

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