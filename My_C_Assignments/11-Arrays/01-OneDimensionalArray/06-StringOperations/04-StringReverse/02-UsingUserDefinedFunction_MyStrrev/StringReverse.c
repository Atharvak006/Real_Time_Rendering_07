#include<stdio.h>
#include<string.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    void MyStrrev(char[], char[]);

    char chArray_Original[MAX_STRING_LENGTH];
    char chArray_Reversed[MAX_STRING_LENGTH];

    printf("\n\n");
    printf("Enter a string: \n\n");
    gets_s(chArray_Original,MAX_STRING_LENGTH);

    MyStrrev(chArray_Reversed, chArray_Original);

    printf("\n\n");
    printf("The original String Entered by you (ie: 'chArray_Original[])' Is: \n\n");
    printf("%s\n",chArray_Original);

    printf("\n\n");
    printf("The Reversed String (ie: 'chArray_Reverse[]') is : \n\n");
    printf("%s\n",strrev(chArray_Original));

    return(0);
}

void MyStrrev(char str_destination[], char str_source[])
{
    int MyStrlen(char []);

    int iStringLength = 0;

    int i,j, len;


    iStringLength = MyStrlen(str_source);

    len = iStringLength - 1;


    for(i=0, j=len; i < iStringLength, j >= 0; i++, j--)
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
