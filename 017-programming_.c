//program to read flying time of an aircraft in two minutes to convert into hours and minutes
#include<stdio.h>
int main()
{
    int tm,m,hrs;
    tm=m=hrs=0;

    printf("Enter flying time in total_minutes:");
    scanf("%d",&tm);

    //logic
    hrs=tm/60;
    m=tm%60;

    printf("Total flying time : %d hrs and %d minutes",hrs,m);

    return 0;
}
