#include<stdio.h>

int main(void)
{
    // Code
    printf("\n\n");

    printf("Going On to the next line..Using \\n Escape Sequence\n\n");
    printf("Demonstrating \t Horizontal \t Tab \t Using \t \\t Escape Sequence \n\n");
    printf("\" This is a double qouted output \" Done Using \\\" \\\" Esape Sequence\n\n");
    printf("\' This is a single qouted output \" Done Using \\\' \\\' Esape Sequence\n\n");
    printf("BACKSPACE Turned to BACKSPACE\b Using Escape Sequence \\b\n\n");

    printf("\r Demonstrating Carriage Return Using \\r Escape Sequence\n");
    printf("Demonstrating \r Carriage Return Using \\r Escape Sequence\n");
    printf("Demonstrating Carriage \r Return Using \\r Escape Sequence\n\n");

    printf("Demonstrating \x41 Using \\xxh Escape Sequence \n\n");
    printf("Demonstrating \102 Using \\ooo Escape Sequence \n\n");

    // Additional 
    printf("Demonstrating Alert/Bell \a Using \\a Escape Sequence\n\n");


    return(0);
}