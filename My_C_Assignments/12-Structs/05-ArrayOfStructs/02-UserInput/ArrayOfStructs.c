#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

#define NUM_EMPLOYEES 5
#define NAME_LENGTH 100
#define MARITAL_STATUS 10

struct Employee
{
    char Name[NAME_LENGTH];
    int age;
    char sex;
    float salary;
    char marital_status;
};

void MyGetString(char[], int);

int main(void)
{
    struct Employee EmployeeRecord[NUM_EMPLOYEES];

    int i;

    for(i = 0; i < NUM_EMPLOYEES; i++)
    {
        printf("\n\n\n\n");

        printf("*********DATA ENTRY FOR EMPLOYEE NUMBER %d**********\n",(i+1));
        printf("Enter employee name: ");
        MyGetString(EmployeeRecord[i].Name, NAME_LENGTH);

        printf("\n\n\n");
        printf("Enter Employee's age (in years): ");
        scanf("%d",&EmployeeRecord[i].age);

        printf("\n\n");
        printf("Enter Employee's Sex (M/m for male, F/f for female): ");
        EmployeeRecord[i].sex = getch();
        printf("%c",EmployeeRecord[i].sex);
        EmployeeRecord[i].sex = toupper(EmployeeRecord[i].sex);

        printf("\n\n\n");
        printf("Enter Employee's Salary (in indian rupees): ");
        scanf("%f",&EmployeeRecord[i].salary);

        printf("\n\n");
        printf("Is the Employee Married? (Y/y for Yes, N/n for No): ");
        EmployeeRecord[i].marital_status = getch();
        printf("%c",EmployeeRecord[i].marital_status);
        EmployeeRecord[i].marital_status = toupper(EmployeeRecord[i].marital_status);

        printf("\n\n\n\n");
    }

    printf("**********DISPLAYING EMPLOYEE RECORDS**********\n\n");

    for(i = 0; i < NUM_EMPLOYEES; i++)
    {
        printf("**********EMPLOYEE NUMBER %d**********\n\n",(i+1));
        printf("Name: %s\n",EmployeeRecord[i].Name);
        printf("Age: %d years\n",EmployeeRecord[i].age);

        if(EmployeeRecord[i].sex == 'M')
        {
            printf("Sex: Male\n");
        }
        else if(EmployeeRecord[i].sex == 'F')
        {
            printf("Sex: Female\n");
        }
        else
        {
            printf("Sex: Invalid Data entered\n");
        }

        printf("Salary: Rs. %f\n",EmployeeRecord[i].salary);

        if(EmployeeRecord[i].marital_status == 'Y')
        {
            printf("Marital status: Married\n");
        }
        else if(EmployeeRecord[i].marital_status == 'N')
        {
            printf("Marital status: Unmarried\n");
        }
        else
        {
            printf("Marital status: Invalid Data entered\n");
        }

        printf("\n\n");
    }

    return 0;
}

void MyGetString(char str[], int str_size)
{
    int i;
    char ch = '\0';

    i = 0;
    do
    {
        ch = getch();

        if(ch != '\r')
        {
            str[i] = ch;
            printf("%c",str[i]);
            i++;
        }

    }while((ch != '\r') && (i < str_size - 1));

    str[i] = '\0';
}