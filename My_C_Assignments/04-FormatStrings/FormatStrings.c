#include<stdio.h>
#include<stdlib.h>

int main(void)
{

    // Code

    printf("**********************************************************");
    printf("\n\n");

    printf("Jay Ganesh !!!\n\n");

    int a = 24;
    printf("Integer Decimal Value of 'a' = %d\n",a);
    printf("Integer Octal Value of 'a' = %o\n",a);
    printf("Integer HexaDecimal Value of 'a' (Hexadecimal letters in lower case) = %x\n",a);
    printf("Integer hexadecimal value of 'a' (Hexadecimal letters in Lower case) = %X\n\n",a);

    printf("**********************************************************\n");

    char ch = 'Y';
    printf("Character ch = %c\n",ch);

    const char str[] = "Atharva Kshirsagar -> Student of AstroMediComp's Real Time Rendering Batch";
    printf("String str = %s\n\n",str);

    long num = 2093120913L;

    printf("Long integer = %ld \n\n",num);
    
    unsigned int x = 23;
    printf("Unsigned integer 'x' = %u\n\n",x);

    float f_Num = 3012.1995f;
    printf("Floating point number with just %%f 'f_Num' = %f\n",f_Num);
    printf("Floating point number with %%4.3f 'f_Num' = %4.3f\n",f_Num);
    printf("Floating point number with %%6.8f 'f_Num' = %6.8f\n",f_Num);

    
    double d_Pi = 3.1415926535879323846;
    printf("Double Precision Floating point number without exponential = %g\n",d_Pi);
    printf("Double Precision Floating Point Number with Exponential (Lower Case) = %e\n",d_Pi);
    printf("Double Precision floating point Number with exponential (Upper case) = %E\n\n",d_Pi);
    printf("Double Hexadecimal value of 'd_pi' (HexaDecimal letters in lower case) = %a\n",d_Pi);
    printf("Double hexadecimal value of 'd_Pi' (Hexadecimal letters in Upper case) = %A\n\n",d_Pi);

    printf("**********************************************************");

    printf("\n\n");

    exit(EXIT_SUCCESS);
    // apn 0 chya aivaji EXIT_SUCCESs pn use krto shakto its one and the same
}

/*
For My study ->

common printf() fomat specifier je apn use krto

%d  -> Signed decimal integer sathi
%i  -> Signed decimal integer sathi
%u  -> Unsigned decimal integer sathi
%o  -> Unsigned octal integer sathi
%x  -> Unsigned hexadecimal integer (lowercase letters) sathy
%X  -> Unsigned hexadecimal integer (UPPERCASE letters) sathi

----------------------------------------------------------------------

string ani character sathi format specifiers":

%c  -> Single character

%s  -> String (character array)

floating point sathi format specifiers

%f  -> Floating point number (fixed notation)

%e  -> Floating point number in exponential notation (lowercase e)
%E  -> Floating point number in exponential notation (UPPERCASE E)

%g  -> Uses %f or %e automatically (shorter representation)
%G  -> Uses %f or %E automatically

%a  -> Hexadecimal floating point (lowercase)
%A  -> Hexadecimal floating point (UPPERCASE)

pointer sathi:

%p  -> Memory address / pointer

special format specifiers

%%  -> Prints '%' symbol itself

length modifiers

SHORT
%hd -> short int
%hu -> unsigned short int

LONG
%ld -> long int
%lu -> unsigned long int

LONG LONG
%lld -> long long int
%llu -> unsigned long long int

CHAR
%hhd -> signed char as integer
%hhu -> unsigned char as integer

SIZE_T
%zu -> size_t type (used with sizeof())

precision ani width specifiers

Example:
printf("%4.2f", 3.14159);

Output:
3.14

Escape sequence ->

\n  -> New line
\t  -> Horizontal tab
\\  -> Backslash
\'  -> Single quote
\"  -> Double quote

*/