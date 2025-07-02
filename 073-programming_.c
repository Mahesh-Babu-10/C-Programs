//Program to display the traffic control signal lights by using switch case
#include <stdio.h>
int main()
{
    char signal;

    printf("Enter the signal character (R/r, Y/y, G/g): ");
    scanf(" %c", &signal);

    switch (signal)
     {
        case 'R':
        case 'r':
            printf("RED Light Please STOP\n");
            break;

        case 'Y':
        case 'y':
            printf("YELLOW Light Please Check and Go\n");
            break;

        case 'G':
        case 'g':
            printf("GREEN Light Please GO\n");
            break;

        default:
            printf("THERE IS NO SIGNAL POINT\n");
    }

    return 0;
}
