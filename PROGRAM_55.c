// Structure Pointer
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee 
{
    int id;
    char name[50];
    char dateOfJoining[10];
    float salary;
};

int main() 
{
    struct Employee* employees = (struct Employee*)malloc(10 * sizeof(struct Employee));
    for (int i = 0; i < 2; i++) 
    {
        printf("Enter the Details of Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].id);
        printf("Employee Name: ");
        scanf("%s", employees[i].name);
        printf("Date of Joining (DD/MM/YYYY): ");
        scanf("%s", employees[i].dateOfJoining);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("\n");
    }
    printf("*****Employee Records*****\n");
    for (int i = 0; i < 2; i++) 
    {
        printf("Employee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Date of Joining: %s\n", employees[i].dateOfJoining);
        printf("Salary: %.2f\n\n", employees[i].salary);
    }
    for (int i = 0; i < 1; i++) 
    {
        for (int j = 0; j < 1 - i; j++) 
        {
            if (employees[j].salary < employees[j + 1].salary) 
            {
                struct Employee temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }
    printf("*****Employees in Decreasing Order of Salary*****\n");
    for (int i = 0; i < 2; i++) 
    {
        printf("Employee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Date of Joining: %s\n", employees[i].dateOfJoining);
        printf("Salary: %.2f\n\n", employees[i].salary);
    }
    free(employees);
    return 0;
}