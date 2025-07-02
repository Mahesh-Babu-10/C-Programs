//program to read days from the user and convert it into years,months,weeks and days
#include<stdio.h>
int main()
{
    int yr,mnth,days,weeks;

    printf("Enter number of Days:");
    scanf("%d",&days);

    //Logic
    yr=days/365;
    mnth=days/30;
    weeks=days/7;

    printf("Number of Years:%d\n",yr);

    printf("Number of Month:%d\n",mnth);

    printf("Number of Weeks:%d\n",weeks);

    return 0;
}
