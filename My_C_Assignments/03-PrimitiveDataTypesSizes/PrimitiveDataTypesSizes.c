#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("\n\n");

    // Apn %zu use krto karan sizeof() size_t return krto integer nahi
    printf("Size of integer = %zu bytes \n", sizeof(int));

    printf("Size of unsigned int = %zu bytes \n", sizeof(unsigned int));
    printf("Size of long = %zu bytes \n", sizeof(long));
    printf("Size of long long = %zu bytes \n", sizeof(long long));

    printf("Size of float = %zu bytes \n", sizeof(float));
    printf("Size of double = %zu bytes \n", sizeof(double));
    printf("Size of long double = %zu bytes \n", sizeof(long double));

    // Apn exit(0) directly use krto karan return 0 internally exit lach call krto ani 
    // exit() a system call ahe
    // exit(EXIT_STATUS) -> mhanjech exit(0) apn 0 pass krto karan apn os la kalavto ki program executed successfully.
    
    exit(0);
}