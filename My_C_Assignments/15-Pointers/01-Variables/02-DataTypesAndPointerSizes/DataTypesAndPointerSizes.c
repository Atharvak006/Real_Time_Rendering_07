#include<stdio.h>

struct Employee
{
    char name[100];
    int age;
    float salary;
    char sex;
    char marital_status;
};

int main(void)
{
    printf("\n\n");

    printf("Sizes of data types and pointers to those respective data types are: \n\n");
    printf("Size of (int) : %d \t \t \t Size of pointer to int (int*) : %d\n\n",sizeof(int),(sizeof(int* )));
    printf("Size of (float) : %d \t \t \t Size of pointer to int (float*) : %d\n\n",sizeof(float),(sizeof(float* )));
    printf("Size of (double) : %d \t \t \t Size of pointer to int (double*) : %d\n\n",sizeof(double),(sizeof(double* )));
    printf("Size of (char) : %d \t \t \t Size of pointer to int (char*) : %d\n\n",sizeof(char),(sizeof(char* )));

    printf("Size of (struct Employee): %d\t\t Size of pointer to struct Employee (struct Employee* ): %d\n\n",sizeof(struct Employee), sizeof(struct Employee* ));
    
    return 0;
}