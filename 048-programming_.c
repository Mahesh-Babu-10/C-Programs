//Program to read the floor number and display which view the floor has.
#include <stdio.h>
int main()
{
    int floor;

    printf("Enter Floor Number (1 to 50): ");
    scanf("%d", &floor);

    if (floor > 50)
        printf("We have only 50 floors\n");
       else if (floor % 2 == 0)
        printf("Floor %d has a Beach View\n", floor);
           else
        printf("Floor %d has a Forest View\n", floor);

    return 0;
}
