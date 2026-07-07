#include<stdio.h>

int main(int argc, char *argv[])
{   
    printf("\n\n");
    printf("Hello world !!!\n");
    printf("Number of command line arguments = %d\n\n",argc);
    
    printf("Command line arguments passed to this program are: \n\n");

    for(int i = 0; i < argc; i++)
    {
        printf("Command line argument number %d = %s\n",(i+1), argv[i]);
    }

    printf("\n\n");
    
    return 0;
}