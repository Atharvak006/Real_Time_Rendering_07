#include<stdio.h>
#include<ctype.h> // used for declaration of atoi()
#include<stdlib.h>

int main(int argc, char *argv[], char *envp[])
{
    int i;
    int num;
    int sum = 0;

    if(argc == 1){
        printf("\n\n");
        printf("No numbers given for addition !!! Exiting Now...\n\n");
        printf("Usage: CommandLineArgumentsApplication <First Number> <second number>...\n\n");
        exit(0);
    }


    printf("\n\n");

    printf("Sum of all integer command line arguments is : \n\n");


    for(i = 1; i < argc; i++)
    {
        num = atoi(argv[i]);
        sum = sum + num;
    }

    printf("Sum = %d\n\n",sum);

    return (0);
}

/*
    This program adds all command line arguments given in integer form only and oputputs the sum
    since we are using atoi(), all command line args other than int are ignored
*/
