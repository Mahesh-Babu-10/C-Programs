//Program To Manage An Employee Payroll System
#include <stdio.h>
#include <string.h>
#define MAX_EMPLOYEES 100
struct Employee
{
    char name[50];
    int emp_id;
    char designation[50];
    float salary;
};

void addEmployee(struct Employee *e, int *count);
void displayEmployees(struct Employee *e, int count);
void calculateAverageSalary(struct Employee *e, int count);
void findHighestLowestSalary(struct Employee *e, int count);

int main()
{
    struct Employee employees[MAX_EMPLOYEES];
    int count = 0;
    int choice;

    do {
        printf("\n=== Employee Payroll Menu ===\n");
        printf("1. Add New Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Calculate Average Salary\n");
        printf("4. Display Highest and Lowest Salaries\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
            case 1:
                addEmployee(employees, &count);
                break;
            case 2:
                displayEmployees(employees, count);
                break;
            case 3:
                calculateAverageSalary(employees, count);
                break;
            case 4:
                findHighestLowestSalary(employees, count);
                break;
            case 5:
                printf("Exiting Program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 5);

    return 0;
}

void addEmployee(struct Employee *e, int *count)
{
    if (*count >= MAX_EMPLOYEES)
        {
          printf("Employee limit reached.\n");
          return;
        }

    printf("Enter Name: ");
    fgets(e[*count].name, sizeof(e[*count].name), stdin);
    e[*count].name[strcspn(e[*count].name, "\n")] = '\0';

    printf("Enter Employee ID: ");
    scanf("%d", &e[*count].emp_id);
    getchar();

    printf("Enter Designation: ");
    fgets(e[*count].designation, sizeof(e[*count].designation), stdin);
    e[*count].designation[strcspn(e[*count].designation, "\n")] = '\0';

    printf("Enter Salary: ");
    scanf("%f", &e[*count].salary);
    getchar();

    (*count)++;
    printf("Employee added successfully!\n");
}

void displayEmployees(struct Employee *e, int count)
{
    if (count == 0)
        {
          printf("No employees to display.\n");
          return;
        }

    printf("\n--- Employee List ---\n");
    for (int i = 0; i < count; i++)
      {
        printf("Name: %s\n", e[i].name);
        printf("Employee ID: %d\n", e[i].emp_id);
        printf("Designation: %s\n", e[i].designation);
        printf("Salary: %.2f\n", e[i].salary);
        printf("--------------------------\n");
     }
}

void calculateAverageSalary(struct Employee *e, int count)
{
    if (count == 0)
        {
          printf("No employees to calculate average salary.\n");
          return;
        }

    float sum = 0;
    for (int i = 0; i < count; i++)
        {
          sum += e[i].salary;
        }

    float avg = sum / count;
    printf("Average Salary: %.2f\n", avg);
}

void findHighestLowestSalary(struct Employee *e, int count)
{
    if (count == 0)
        {
         printf("No employees to analyze.\n");
         return;
        }

    float highest = e[0].salary;
    float lowest = e[0].salary;
    int highIndex = 0, lowIndex = 0;

    for (int i = 1; i < count; i++)
        {
          if (e[i].salary > highest)
          {
            highest = e[i].salary;
            highIndex = i;
          }
        if (e[i].salary < lowest)
        {
            lowest = e[i].salary;
            lowIndex = i;
        }
        }

    printf("\nEmployee with Highest Salary:\n");
    printf("Name: %s\nEmployee ID: %d\nDesignation: %s\nSalary: %.2f\n",
           e[highIndex].name, e[highIndex].emp_id, e[highIndex].designation, e[highIndex].salary);

    printf("\nEmployee with Lowest Salary:\n");
    printf("Name: %s\nEmployee ID: %d\nDesignation: %s\nSalary: %.2f\n",
           e[lowIndex].name, e[lowIndex].emp_id, e[lowIndex].designation, e[lowIndex].salary);
}
