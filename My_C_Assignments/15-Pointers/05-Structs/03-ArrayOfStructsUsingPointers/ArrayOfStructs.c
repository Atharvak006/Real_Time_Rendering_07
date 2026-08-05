#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>

#define NAME_LENGTH 100
#define MARITAL_STATUS 10

struct Employee
{
    char name[NAME_LENGTH];
    int age;
    char sex;
    float salary;
    char marital_status;
};

void MyGetString(char[], int);

int main(void)
{
    struct Employee* pEmployeeRec = NULL;
    int num_emp, i;

    printf("\nEnter number of employees: ");
    scanf("%d", &num_emp);

    pEmployeeRec = (struct Employee*)malloc(sizeof(struct Employee) * num_emp);

    if(pEmployeeRec == NULL)
    {
        printf("Failed to allocate memory for %d employees", num_emp);
        exit(0);
    }
    else
    {
        printf("Memory allocated successfully\n");
    }

    for(i = 0; i < num_emp; i++)
    {
        printf("\n\n");
        printf("*********** Data entry for employee number %d **********\n", (i + 1));

        printf("\nEnter employee Name: ");
        fflush(stdin);
        MyGetString(pEmployeeRec[i].name, NAME_LENGTH);

        printf("\n\nEnter employee's age (in years): ");
        scanf("%d", &pEmployeeRec[i].age);

        printf("\n\nEnter employee's sex (M/m for male, F/f for female): ");
        pEmployeeRec[i].sex = getch();
        printf("%c", pEmployeeRec[i].sex);
        pEmployeeRec[i].sex = toupper(pEmployeeRec[i].sex);

        printf("\n\nEnter Employee's Salary (in Indian Rupees): ");
        scanf("%f", &pEmployeeRec[i].salary);

        printf("\n\nIs the employee married? (Y/y for yes, N/n for no): ");
        pEmployeeRec[i].marital_status = getch();
        printf("%c", pEmployeeRec[i].marital_status);
        pEmployeeRec[i].marital_status = toupper(pEmployeeRec[i].marital_status);
    }

    printf("\n\n\n****** Displaying Employee Records ******\n\n");

    for(i = 0; i < num_emp; i++)
    {
        printf("****** Employee Number %d ******\n\n", (i + 1));

        printf("Name: %s\n", pEmployeeRec[i].name);
        printf("Age: %d years\n", pEmployeeRec[i].age);

        if(pEmployeeRec[i].sex == 'M')
        {
            printf("Sex: Male\n");
        }
        else if(pEmployeeRec[i].sex == 'F')
        {
            printf("Sex: Female\n");
        }
        else
        {
            printf("Sex: Invalid Data entered\n");
        }

        printf("Salary: %.2f\n", pEmployeeRec[i].salary);

        if(pEmployeeRec[i].marital_status == 'Y')
        {
            printf("Marital Status: Married\n");
        }
        else if(pEmployeeRec[i].marital_status == 'N')
        {
            printf("Marital Status: Unmarried\n");
        }
        else
        {
            printf("Marital Status: Invalid Data entered\n");
        }

        printf("\n");
    }

    if(pEmployeeRec)
    {
        free(pEmployeeRec);
        pEmployeeRec = NULL;
        printf("Memory allocated to %d employee(s) has been successfully freed\n\n", num_emp);
    }

    return 0;
}

void MyGetString(char str[], int str_size)
{
    int i = 0;
    char ch = '\0';

    do
    {
        ch = getch();
        str[i] = ch;
        printf("%c", str[i]);
        i++;
    }
    while((ch != '\r') && (i < str_size));

    if(i == str_size)
    {
        str[i - 1] = '\0';
    }
    else
    {
        str[i - 1] = '\0';
    }
}