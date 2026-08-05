#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main(void)
{
    char ch, ch_i;
    unsigned int ascii_ch = 0;

    printf("\n\n");
    printf("Enter the first char of first name: ");

    ch = getch();
    ch = toupper(ch);

    for (ch_i = 'A'; ch_i <= 'Z'; ch_i++)
    {
        if (ch == ch_i)
        {
            ascii_ch = (unsigned int)ch;
            goto result_output;
        }
    }

    printf("\n\n");
    printf("Goto statement not executed, so printing \"Hello, World !!!\".\n");

    return 0;

result_output:

    printf("\n\n");

    if (ascii_ch == 0)
    {
        printf("You must have a strange name. Could not find the character %c in the entire English alphabet!\n", ch);
    }
    else
    {
        printf("Character %c found. It has ASCII value %u.\n", ch, ascii_ch);
    }

    return 0;
}