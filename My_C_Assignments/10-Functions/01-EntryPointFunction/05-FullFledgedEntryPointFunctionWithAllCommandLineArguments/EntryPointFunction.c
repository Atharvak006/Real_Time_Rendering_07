#include<stdio.h>

int main(int argc, char *argv[], char *envp[])
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
    
    printf("First 20 Environmental Variables passed to this program are: \n\n");
    for(int i = 0; i < 20; i++)
    {
        printf("Environmental Variable number %d = %s\n",(i+1), envp[i]);
    }

    printf("\n\n");

    return 0;
}