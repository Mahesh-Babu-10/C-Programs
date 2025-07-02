//Program to Calculate Total expenses spend by Mr.Ravi for his Delhi Trip
#include<stdio.h>
int main()
{
    int f1,f2,f3,f4,total_fare;//declaration
    f1=f2=f3=f4=total_fare=0;//initialization

    printf("Enter Cab Fare.....................................:");
    scanf("%d",&f1);

    printf("Enter Ixigo Fare...................................:");
    scanf("%d",&f2);

    printf("Enter Boarding Pass Fare...........................:");
    scanf("%d",&f3);

    printf("Enter snacks Fare..................................:");
    scanf("%d",&f4);

    total_fare=f1+f2+f3+f4;

    printf("Enter Total_fare Spend by Mr.Ravi in his Delhi Trip:%d",total_fare);

    return 0;
}
