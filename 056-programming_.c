// Program to accept basic salary, allowances, deductions, and experience of an Employee
#include <stdio.h>
int main()
{
    float basic_salary, allowances, deductions;
    int experience;
    float gross_salary, net_salary, bonus;

    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);

    printf("Enter allowances: ");
    scanf("%f", &allowances);

    printf("Enter deductions: ");
    scanf("%f", &deductions);

    printf("Enter years of experience: ");
    scanf("%d", &experience);

    gross_salary = basic_salary + allowances;
    net_salary = gross_salary - deductions;

    if (experience > 5)
    {
    bonus = 3 * net_salary;
    }
    else if (experience > 3)
    {
    bonus = 2 * net_salary;
    }
    else
    {
    bonus = 1 * net_salary;
    }
    printf("\n--- Salary Details ---\n");

    printf("Gross Salary: %.2f\n", gross_salary);

    printf("Net Salary: %.2f\n", net_salary);

    printf("Bonus: %.2f\n", bonus);

    return 0;
}

