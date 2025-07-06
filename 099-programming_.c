//Program To Read Name Of A Person and Display It’s Length
#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    char choice;

    do {

        printf("Enter a name: ");
        scanf("%s", name);

        printf("Length of \"%s\" is %lu\n", name, strlen(name));

        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &choice);

        } while (choice != 'N' && choice != 'n');

    return 0;
}
