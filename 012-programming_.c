//program to read basics salary of an employee and display gross salary and net salary#include <stdio.h>

int main() {
    float basic_salary, hra, da, pf, gross_salary, net_salary;

    // Input basic salary
    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);

    // Calculations
    hra = 0.20 * basic_salary;  // 20% of basic salary
    da = 0.10 * basic_salary;   // 10% of basic salary
    pf = 0.05 * basic_salary;   // 5% of basic salary

    gross_salary = basic_salary + hra + da;
    net_salary = gross_salary - pf;

    // Output
    printf("Gross Salary = %.2f\n", gross_salary);
    printf("Net Salary = %.2f\n", net_salary);

    return 0;
}
