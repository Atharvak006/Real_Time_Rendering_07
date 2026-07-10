#include<stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    unsigned int val;

    void recursive(unsigned int);

    printf("\n\n");
    printf("Enter any number : \n\n");
    scanf("%u",&val);

    printf("\n\n");
    printf("Output of Recursive Function: \n\n");

    recursive(val);

    printf("\n\n");
    return(0);

}

void recursive(unsigned int n)
{
    printf("n = %d\n",n);

    if(n > 0)
    {
        recursive(n-1);
    }
}