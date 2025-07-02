//Program To check whether the Person is eligible for Bonous or not by using Logical Operator
#include <stdio.h>
int main()
{
    char gender, maritalStatus;
    int age;

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter marital status (M for married / UM for unmarried): ");
    scanf(" %c", &maritalStatus);

    if (maritalStatus == 'M' ||
       (maritalStatus == 'UM' && gender == 'M' && age > 30) ||
       (maritalStatus == 'UM' && gender == 'F' && age > 25))
    {
        printf("Eligible for bonus.\n");
    }
      else
    {
        printf("Not eligible for bonus.\n");
    }
    return 0;
}
