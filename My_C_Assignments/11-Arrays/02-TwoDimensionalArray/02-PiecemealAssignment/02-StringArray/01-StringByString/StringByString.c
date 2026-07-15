#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{   
    void MyStrCpy(char[], char[]);

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


    MyStrCpy(strArray[0],"My");
    MyStrCpy(strArray[1],"Name");
    MyStrCpy(strArray[2],"Is");
    MyStrCpy(strArray[3],"Atharva");
    MyStrCpy(strArray[4],"Kshirsagar");

    printf("\n\n");
    printf("Strings in the 2D char array : \n\n");

    for(i = 0; i < strArray_Num_Rows; i++)
    {
        printf("%s",strArray[i]);
    }

    printf("\n\n");
    
    return 0;
}

void MyStrCpy(char str_destination[], char str_source[])
{
    int MyStrLen(char[]);

    int iStringLength = 0;
    int j;

    iStringLength = MyStrLen(str_source);

    for(j=0; j < iStringLength; j++)
    {
        str_destination[j] = str_source[j];
    }

    str_destination[j] = '\0';
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