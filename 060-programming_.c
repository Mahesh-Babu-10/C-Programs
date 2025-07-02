//Program to check if a passanger is eligible for concession
#include <stdio.h>
int main()
{
    char gender;
    int age;

    printf("Enter gender (M for Male, F for Female): ");
    scanf(" %c", &gender);

    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 5)
    {
        printf("Eligible for full concession (No ticket required).\n");
    }
         else if ((gender == 'M' && age > 60) || (gender == 'F' && age > 50))
    {
            printf("Eligible for 50%% concession on ticket.\n");
    }          else
    {
                 printf("Not eligible for any concession.\n");
    }

    return 0;
}
