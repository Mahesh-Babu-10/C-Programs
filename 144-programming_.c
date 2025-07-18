//Program To Read Employee ID,Name,Salary,and Store Into employee.dat file
//NOTE:Employee Name Must Be Unique
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILENAME "employee.dat"
struct Employee
{
    int id;
    char name[50];
    float salary;
};

int isNameUnique(const char *name)
{
    FILE *fp = fopen(FILENAME, "rb");
    if (fp == NULL)
        {
          return 1;
        }

    struct Employee e;
    while (fread(&e, sizeof(struct Employee), 1, fp))
        {
          if (strcmp(e.name, name) == 0)
          {
            fclose(fp);
            return 0; // Not unique
          }
        }

    fclose(fp);
    return 1;
}

void addEmployee()
{
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);
    getchar();

    printf("Enter Employee Name: ");
    fgets(e.name, sizeof(e.name), stdin);
    e.name[strcspn(e.name, "\n")] = '\0';

    if (!isNameUnique(e.name))
        {
          printf("Error: Employee name '%s' already exists. Cannot add duplicate.\n", e.name);
          return;
       }

    printf("Enter Employee Salary: ");
    scanf("%f", &e.salary);

    FILE *fp = fopen(FILENAME, "ab");
    if (fp == NULL)
        {
          printf("Error opening file.\n");
          return;
        }

    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Employee details saved successfully.\n");
}

void displayEmployees()
{
    FILE *fp = fopen(FILENAME, "rb");
    if (fp == NULL)
        {
          printf("No employee records found.\n");
          return;
        }

    struct Employee e;
    printf("\n--- Employee Records ---\n");
    while (fread(&e, sizeof(struct Employee), 1, fp))
        {
          printf("ID: %d | Name: %s | Salary: %.2f\n", e.id, e.name, e.salary);
        }

    fclose(fp);
}

int main()
{
    int choice;

    do {
        printf("\n1. Add Employee\n2. Display Employees\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 3);

    return 0;
}
