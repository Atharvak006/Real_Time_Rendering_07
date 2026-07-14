#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
    int MyStrLen(char[]);

    char chArray[MAX_STRING_LENGTH];
    int iStringLength;
    int count_A = 0, count_E = 0, count_I = 0, count_O = 0, count_U = 0;

    int i;

    printf("\n\n");
    printf("Enter a string: \n\n");
    gets_s(chArray,MAX_STRING_LENGTH);

    printf("\n\n");
    printf("String Entered by you is : \n\n");
    printf("%s\n",chArray);

    iStringLength = MyStrLen(chArray);

    for(i = 0; i < iStringLength; i++)
    {
        switch(chArray[i]){
            case 'A':
            case 'a':
                count_A++;
                break;
            
            case 'E':
            case 'e':
                count_E++;
                break;

            case 'I':
            case 'i':
                count_I++;
                break;

            case 'O':
            case 'o':
                count_O++;
                break;

            case 'U':
            case 'u':
                count_U++;
                break;

            default:
                break;

        }
    }

    printf("\n\n");
    printf("In the string entered by you, the vowels and the number of their occurences are as follows..\n\n");
    printf("'A' has occured = %d Times !!!\n\n",count_A);
    printf("'E' has occured = %d Times !!!\n\n",count_E);
    printf("'I' has occured = %d Times !!!\n\n",count_I);
    printf("'O' has occured = %d Times !!!\n\n",count_O);
    printf("'U' has occured = %d Times !!!\n\n",count_U);

    return(0);
}

int MyStrLen(char str[])
{
    int j;
    int string_Length = 0;

    for(j = 0; j < MAX_STRING_LENGTH; j++)
    {
        if(str[j] == '\0'){
            break;
        }
        else{
            string_Length++;
        }
    }

    return(string_Length);
}