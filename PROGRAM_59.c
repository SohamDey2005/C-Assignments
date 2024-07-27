// Employee File 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 50
#define MAX_DEPT 50
#define FILENAME "DEPARTMENT.DAT"

struct Employee 
{
    char name[MAX_NAME];
    int id;
    float basic_pay;
    char department[MAX_DEPT];
};

void addEmployee();
void displayAllEmployees();
void modifyEmployee();
void deleteEmployee();
void displayHighEarners();

int main() 
{
    int choice;
    while (1) 
    {
        printf("\nEmployee Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Modify Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Display High Earners\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                addEmployee();
                break;
            case 2:
                displayAllEmployees();
                break;
            case 3:
                modifyEmployee();
                break;
            case 4:
                deleteEmployee();
                break;
            case 5:
                displayHighEarners();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

void addEmployee() 
{
    struct Employee emp;
    FILE *file = fopen(FILENAME, "ab");
    if (file == NULL) 
    {
        printf("Error opening file.\n");
        return;
    }
    printf("Enter employee name: ");
    scanf(" %[^\n]", emp.name);
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter basic pay: ");
    scanf("%f", &emp.basic_pay);
    printf("Enter department: ");
    scanf(" %[^\n]", emp.department);
    fwrite(&emp, sizeof(struct Employee), 1, file);
    fclose(file);
    printf("Employee added successfully.\n");
}

void displayAllEmployees() 
{
    struct Employee emp;
    FILE *file = fopen(FILENAME, "rb");
    if (file == NULL) 
    {
        printf("Error opening file or file doesn't exist.\n");
        return;
    }
    printf("\nEmployee List:\n");
    while (fread(&emp, sizeof(struct Employee), 1, file)) 
    {
        printf("Name: %s, ID: %d, Basic Pay: %.2f, Department: %s\n", emp.name, emp.id, emp.basic_pay, emp.department);
    }
    fclose(file);
}

void modifyEmployee() 
{
    int id, found = 0;
    struct Employee emp;
    FILE *file = fopen(FILENAME, "rb+");
    if (file == NULL) 
    {
        printf("Error opening file or file doesn't exist.\n");
        return;
    }
    printf("Enter employee ID to modify: ");
    scanf("%d", &id);
    while (fread(&emp, sizeof(struct Employee), 1, file)) 
    {
        if (emp.id == id) 
        {
            printf("Enter new name: ");
            scanf(" %[^\n]", emp.name);
            printf("Enter new basic pay: ");
            scanf("%f", &emp.basic_pay);
            printf("Enter new department: ");
            scanf(" %[^\n]", emp.department);
            fseek(file, -sizeof(struct Employee), SEEK_CUR);
            fwrite(&emp, sizeof(struct Employee), 1, file);
            found = 1;
            break;
        }
    }
    fclose(file);
    if (found)
        printf("Employee record modified successfully.\n");
    else
        printf("Employee not found.\n");
}

void deleteEmployee() 
{
    int id, found = 0;
    struct Employee emp;
    FILE *file = fopen(FILENAME, "rb");
    FILE *tempFile = fopen("temp.dat", "wb");
    if (file == NULL || tempFile == NULL) 
    {
        printf("Error opening file.\n");
        return;
    }
    printf("Enter employee ID to delete: ");
    scanf("%d", &id);
    while (fread(&emp, sizeof(struct Employee), 1, file)) 
    {
        if (emp.id != id) 
        {
            fwrite(&emp, sizeof(struct Employee), 1, tempFile);
        } 
        else 
        {
            found = 1;
        }
    }
    fclose(file);
    fclose(tempFile);
    remove(FILENAME);
    rename("temp.dat", FILENAME);
    if (found)
        printf("Employee record deleted successfully.\n");
    else
        printf("Employee not found.\n");
}

void displayHighEarners() 
{
    struct Employee emp;
    FILE *file = fopen(FILENAME, "rb");
    if (file == NULL) 
    {
        printf("Error opening file or file doesn't exist.\n");
        return;
    }
    printf("\nEmployees earning more than 100,000 basic pay:\n");
    while (fread(&emp, sizeof(struct Employee), 1, file)) 
    {
        if (emp.basic_pay > 100000) 
        {
            printf("Name: %s, Basic Pay: %.2f\n", emp.name, emp.basic_pay);
        }
    }
    fclose(file);
}