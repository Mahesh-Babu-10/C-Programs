//Program To Read A Name And Print Length Many Number Of times Along With Serial Numbers
#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    int count, i, length;

    printf("Enter the name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    length = strlen(name);

    printf("Enter the number of times to print length: ");
    scanf("%d", &count);

    for (i = 1; i <= count; i++)
        {
          printf("%d. Length of name \"%s\" = %d\n", i, name, length);
        }

    return 0;
}
