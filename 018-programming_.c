//Program to read basic salary or an employee allowances,Deductions and calculate gross salary and net salary
#include<stdio.h>
double main()
{
    double basic_salary,alwnces,ded,gs,ns;
    basic_salary=alwnces=ded=gs=ns=0;

    printf("basic_salary of an employee:");
    scanf("%lf",&basic_salary);

    printf("\nalwnces of an employee:");
    scanf("%lf",&alwnces);

    printf("\nDed of an employee:");
    scanf("%lf",&ded);

    ns=gs-ded;
    gs=basic_salary+alwnces;

    printf("\ngross salary is %.lf\n",gs);

    printf("\nNet salary of an employee %.lf\n",ns);

    return 0;
}
