//Program to accept a grade and declare the equivalent decription by using switch case
#include <stdio.h>
int main()
{
    char grade;

    printf("Enter the grade (E, V, G, A, F): ");
    scanf(" %c", &grade);

    switch (grade)
     {
        case 'E':
        case 'e':
            printf("Excellent\n");
            break;

        case 'V':
        case 'v':
            printf("Very Good\n");
            break;

        case 'G':
        case 'g':
            printf("Good\n");
            break;

        case 'A':
        case 'a':
            printf("Average\n");
            break;

        case 'F':
        case 'f':
            printf("Fail\n");
            break;

        default:
            printf("Invalid grade entered.\n");
    }

    return 0;
}
