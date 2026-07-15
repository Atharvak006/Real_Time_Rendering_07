#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{   
    int MyStrLen(char[]);

    char strArray[10][15] = {"Hello!", "Welcome", "To", "Real", "Time", "Rendering", "Batch", "(2026-27)", "Of", "Astromedicomp."};

    int char_size;
    int strArray_size;
    int strArray_Num_Elements, strArray_Num_Rows, strArray_Num_Columns;
    int strActual_Num_Chars = 0;
    int i;

    printf("\n\n");

    char_size = sizeof(char);

    strArray_size = sizeof(strArray);
    printf("Size of two dimensional 2D character Array (String array) is = %d\n\n",strArray_size);

    strArray_Num_Rows = strArray_size / sizeof(strArray[0]);
    printf("Number of rows in two dimensional (2D) character Array (string Array) is = %d\n\n",strArray_Num_Rows);
 
    strArray_Num_Columns = sizeof(strArray[0]) / char_size;
    printf("Number of rows in two dimensional (2D) character Array (string Array) is = %d\n\n",strArray_Num_Rows);
    
    strArray_Num_Elements = strArray_Num_Rows * strArray_Num_Columns;
    printf("Maximum number of elements (CHARACTER) in two dimensional 2D character array (string Array) is = %d\n\n",strArray_Num_Elements);

    for(i = 0; i < strArray_Num_Rows; i++)
    {
        strActual_Num_Chars = strActual_Num_Chars + MyStrLen(strArray[i]);
    }

    printf("Actual Number of Elements (characters) in two dimensional (2D) character Array (string Array) is = %d\n\n",strActual_Num_Chars);

    printf("\n\n");
    printf("Strings in the 2D array : \n\n");

    printf("%s ",strArray[0]);
    printf("%s ",strArray[1]);
    printf("%s ",strArray[2]);
    printf("%s ",strArray[3]);
    printf("%s ",strArray[4]);
    printf("%s ",strArray[5]);
    printf("%s ",strArray[6]);
    printf("%s ",strArray[7]);
    printf("%s ",strArray[8]);
    printf("%s ",strArray[9]);

    return 0;
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