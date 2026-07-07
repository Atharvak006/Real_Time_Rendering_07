#include<stdio.h>
#include<ctype.h> // used for declaration of atoi()
#include<stdlib.h>

int main(int argc, char *argv[], char *envp[])
{
    int i;
    int num;
    int sum = 0;

    if(argc != 4){
        printf("\n\n");
        printf("Invalid Usage!!! Exiting now...\n\n");
        printf("Usage: CommandLineArgumentsApplication <First name> <middle name> <surname>\n\n");
        exit(0);
    }

    printf("\n\n");

    printf("Your full name is: ");

    for(i = 1; i < argc; i++)
    {
        printf("%s ",argv[i]);
    }

    return (0);
}
