#include<stdio.h>
#include<conio.h>

#define CHAR_ALPHABET_UPPER_CASE_BEGINNING 65
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90

#define CHAR_ALPHABET_LOWER_CASE_BEGINNING 97
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122

#define CHAR_DIGIT_BEGINNING 48
#define CHAR_DIGIT_ENDING 57

int main(void)
{
    char Ch;
    int Ch_value;

    printf("\n\n");

    printf("Enter character : ");
    
    Ch = getch();
    
    printf("\n\n");

    switch(Ch)
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
            printf("Character \'%c\' Entered by You, is A VOWEL CHARACTER FROM THE ENGLISH ALPHABET !!!\n\n",Ch);
            break;

        default:
            Ch_value = (int)Ch;

        if((Ch_value >= CHAR_ALPHABET_UPPER_CASE_BEGINNING && Ch_value <= CHAR_ALPHABET_UPPER_CASE_ENDING) || (Ch_value >= CHAR_ALPHABET_LOWER_CASE_BEGINNING && Ch_value <= CHAR_ALPHABET_LOWER_CASE_ENDING))
        {
            printf("Character \'%c\' Entered by you, is a constant character from the english alphabet !!!\n\n",Ch);
        }

        else if(Ch_value >= CHAR_DIGIT_BEGINNING && Ch_value <= CHAR_DIGIT_ENDING)
        {
            printf("Character \'%c\' Entered by you, is a DIGIT CHARACTER !!!\n\n",Ch);
        }

        else{
            printf("Character \'%c\' Entered by you is a special character !!!\n\n",Ch);

        }
        break;
    }

    printf("Switch Case Block Complete !!!\n");


    return 0;
}