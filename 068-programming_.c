//Program to accept a grade to declare the equivalent descripition
#include <stdio.h>
int main()
{
     char grade;

    printf("Enter the grade code (S, A, B, Y, F): ");
    scanf(" %c", &grade);  // space before %c to ignore previous newline

    switch (grade)
      {
        case 'S':
        case 's':
            printf("SUPER\n");
            break;

        case 'A':
        case 'a':
            printf("VERY GOOD\n");
            break;

        case 'B':
        case 'b':
            printf("FAIR\n");
            break;

        case 'Y':
        case 'y':
            printf("ABSENT\n");
            break;

        case 'F':
        case 'f':
            printf("FAILS\n");
            break;

        default:
            printf("\aInvalid grade code!\n");
    }
    return 0;
}
