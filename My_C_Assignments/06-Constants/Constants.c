#include<stdio.h>

#define PI_VALUE 3.1415926535897932

#define AMC_STRING "Atharva AstroMediComp RTR Student"


enum
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};


enum
{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

// nAMED ENUMERATIONS
 

// Enums automatically increment values.

enum Numbers{
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE = 5, 
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN
};

enum boolean
{
    TRUE = 1,
    FALSE = 0
};

// Additional
enum ErrorCodes
{
    SUCCESS = 0,
    FAILURE = -1
};

int main(void)
{
    const double epsilon = 0.000001;

    printf("\n\n");
    printf("Local Constant Epsilon = %lf\n\n",epsilon);
    printf("Sunday is Day Number = %d\n",SUNDAY);
    printf("Monday is Day Number = %d\n",MONDAY);
    printf("Tuesday is day Number = %d\n",TUESDAY);
    printf("Wednesday is day number = %d\n",WEDNESDAY);
    printf("Thursday is day number = %d\n",THURSDAY);
    printf("Friday is day number = %d\n",FRIDAY);
    printf("Saturday is day number = %d\n\n",SATURDAY);

    printf("One is Enum Number = %d\n",ONE);
    printf("Two is Enum number = %d\n",TWO);
    printf("Three is Enum number = %d\n",THREE);
    printf("Four is Enum Number = %d\n",FOUR);
    printf("Five is Enum Number = %d\n",FIVE);
    printf("Six is Enum Number = %d\n",SIX);
    printf("Seven is Enum Number = %d\n",SEVEN);
    printf("Eight is Enum number = %d\n",EIGHT);
    printf("Nine is Enum number = %d\n",NINE);
    printf("Ten is Enum Number = %d\n\n",TEN);

    printf("January is Month Number = %d\n",JANUARY);
    printf("February is Month Number = %d\n",FEBRUARY);
    printf("March is Month number = %d\n",MARCH);
    printf("April is Month number = %d\n",APRIL);
    printf("May is Month number = %d\n",MAY);
    printf("June is month number = %d\n",JUNE);
    printf("July is month number = %d\n",JULY);
    printf("August is month number = %d\n",AUGUST);
    printf("September is month number = %d\n",SEPTEMBER);
    printf("October is month number = %d\n",OCTOBER);
    printf("November is month number = %d\n",NOVEMBER);
    printf("December is month number = %d\n",DECEMBER);

    printf("Value of TRUE is = %d\n",TRUE);
    printf("Value of FALSE is = %d\n",FALSE);

    printf("MY_PI Macro Value = %.10lf\n\n",PI_VALUE);
    printf("Area of Circle of radius 2 units = %f\n\n",(PI_VALUE * 2.0f * 2.0f)); // pi * r^2;
    
    printf("Success means : %d and Failure means: %d\n",SUCCESS,FAILURE);
    printf("\n\n");

    printf(AMC_STRING);
    // printf("%s",AMC_STRING);

    printf("\n\n");

    printf("AMC_STRING is : %s\n",AMC_STRING);
    printf("\n\n");

    return(0); // or exit(0)
}