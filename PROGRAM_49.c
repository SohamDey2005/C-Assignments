// Structure Program
#include <stdio.h>
#include <string.h>
struct date
{
    int day;
    int month;
    int year;
};
struct employee 
{
    int code;
    char name[50];
    struct date joining;
    float salary;
};
int main() 
{
    struct employee employees[100];
    struct date currentDate;
    int tenureInYears;
    for (int i = 0; i < 100; i++) 
    {
        printf("\nEnter details for Employee %d --->\n", i + 1);
        printf("Employee Code: ");
        scanf("%d", &employees[i].code);
        printf("Employee Name: ");
        scanf("%s", employees[i].name);
        printf("Date of Joining (DD MM YYYY): ");
        scanf("%d %d %d", &employees[i].joining.day, &employees[i].joining.month, &employees[i].joining.year);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }
    printf("\nEnter the current date (DD MM YYYY): ");
    scanf("%d %d %d", &currentDate.day, &currentDate.month, &currentDate.year);
    printf("\nEmployees with tenure of 3 years or more and salary less than 21,600 --->\n");
    for (int i = 0; i < 100; i++) 
    {
        tenureInYears = currentDate.year - employees[i].joining.year;
        if (currentDate.month < employees[i].joining.month || (currentDate.month == employees[i].joining.month && currentDate.day < employees[i].joining.day)) 
        {
            tenureInYears--;
        }
        if (tenureInYears >= 3 && employees[i].salary < 21600) 
        {
            printf("Employee Code: %d\n", employees[i].code);
            printf("Employee Name: %s\n", employees[i].name);
            printf("Date of Joining: %02d/%02d/%04d\n", employees[i].joining.day, employees[i].joining.month, employees[i].joining.year);
            printf("Salary: %.2f\n\n", employees[i].salary);
        }
    }
    return 0;
}