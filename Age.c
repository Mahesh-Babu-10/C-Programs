//Program to Print age of a person
#include<stdio.h>
int main()
{
    int dob,age,present_yr;

    printf("Enter Your Date Of Birth:");
    scanf("%d",&dob);

    present_yr=2025;

    //Logic
    age=present_yr-dob;

    printf("\n-------------------------");
    printf("\nHeyy Your Age is:%d",age);
    printf("\n-------------------------");

    return 0;
}
