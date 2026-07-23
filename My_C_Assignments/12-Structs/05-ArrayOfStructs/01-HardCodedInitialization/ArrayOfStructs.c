#include<stdio.h>
#include<string.h>

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

struct Employee
{
    char Name[NAME_LENGTH];
    int age;
    float salary;
    char sex;
    char marital_status[MARITAL_STATUS];
};

int main(void)
{
    struct Employee EmployeeRecord[5];

    char employee_atharva[] = "Rajesh";
    char employee_rahul[] = "Rahul";
    char employee_Om[] = "Om";
    char employee_shraddha[] = "Shraddha";
    char employee_Yogesh[] = "Yogesh";

    int i;

    strcpy(EmployeeRecord[0].Name, employee_atharva);
    EmployeeRecord[0].age = 22;
    EmployeeRecord[0].sex = 'M';
    EmployeeRecord[0].salary = 50000.0f;
    strcpy(EmployeeRecord[0].marital_status, "Unmarried");

    strcpy(EmployeeRecord[1].Name, employee_rahul);
    EmployeeRecord[1].age = 52;
    EmployeeRecord[1].sex = 'M';
    EmployeeRecord[1].salary = 500000.0f;
    strcpy(EmployeeRecord[1].marital_status, "Married");

    strcpy(EmployeeRecord[2].Name, employee_Om);
    EmployeeRecord[2].age = 27;
    EmployeeRecord[2].sex = 'M';
    EmployeeRecord[2].salary = 60000.0f;
    strcpy(EmployeeRecord[2].marital_status, "Unmarried");

    strcpy(EmployeeRecord[3].Name, employee_shraddha);
    EmployeeRecord[3].age = 32;
    EmployeeRecord[3].sex = 'F';
    EmployeeRecord[3].salary = 780000.0f;
    strcpy(EmployeeRecord[3].marital_status, "Married");

    strcpy(EmployeeRecord[4].Name, employee_Yogesh);
    EmployeeRecord[4].age = 42;
    EmployeeRecord[4].sex = 'M';
    EmployeeRecord[4].salary = 350000.0f;
    strcpy(EmployeeRecord[4].marital_status, "Married");

    printf("\n\n");
    printf("***** DISPLAYING EMPLOYEE RECORDS *****\n\n");

    for(i = 0; i < 5; i++)
    {
        printf("***** EMPLOYEE NUMBER %d *****\n\n", i + 1);

        printf("Name: %s\n", EmployeeRecord[i].Name);
        printf("Age: %d\n", EmployeeRecord[i].age);

        if(EmployeeRecord[i].sex == 'M' || EmployeeRecord[i].sex == 'm')
        {
            printf("Sex: Male\n");
        }
        else
        {
            printf("Sex: Female\n");
        }

        printf("Salary: %f\n", EmployeeRecord[i].salary);
        printf("Marital status: %s\n\n", EmployeeRecord[i].marital_status);
    }

    return 0;
}