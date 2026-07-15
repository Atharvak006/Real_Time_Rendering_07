#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{   

    char strArray[10][15] = {"Hello!", "Welcome", "To", "Real", "Time", "Rendering", "Batch", "(2026-27)", "Of", "Astromedicomp."};

    int char_size;
    int strArray_size;
    int strArray_Num_Elements, strArray_Num_Rows, strArray_Num_Columns;

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

    strArray[0][0] = 'M';
    strArray[0][1] = 'y';
    strArray[0][2] = '\0';

    strArray[1][0] = 'N';
    strArray[1][1] = 'A';
    strArray[1][2] = 'M';
    strArray[1][3] = 'E';
    strArray[1][4] = '\0';

    strArray[2][0] = 'I';
    strArray[2][1] = 'S';
    strArray[2][2] = '\0';

    strArray[3][0] = 'A';
    strArray[3][1] = 'T';
    strArray[3][2] = 'H';
    strArray[3][3] = 'A';
    strArray[3][4] = 'R';
    strArray[3][5] = 'V';
    strArray[3][6] = 'A';
    strArray[3][7] = '\0';

    
    printf("\n\n");
    printf("Strings in the 2D char array : \n\n");

    for(i = 0; i < strArray_Num_Rows; i++)
    {
        printf("%s",strArray[i]);
    }

    printf("\n\n");
    
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