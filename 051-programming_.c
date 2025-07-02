//Program to read your year of birth and check whether you were born on leap year or not.
#include <stdio.h>
int main()
{
    int year;

    printf("Enter your year of birth: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))

        printf("You were born in a Leap Year!\n");
     else
        printf("You were NOT born in a Leap Year.\n");


    return 0;
}
