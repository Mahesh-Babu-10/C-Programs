//program to read Dads_sal and Moms_sal to calculate Total income of the House
#include <stdio.h>

int main()
{
    int s1,s2,total_income;//declaration
    s1=s2=total_income=0;//initialization

    printf("Enter Dads Salary........:");
    scanf("%d",&s1);

    printf("Enter Moms Salary........:");
    scanf("%d",&s2);

    total_income=s1+s2;

    printf("Total_Income Of The House:%d",total_income);

    return 0;
}
