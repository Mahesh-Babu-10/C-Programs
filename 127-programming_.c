//Program To Read Your Name And Print In Right-Angle Pattern
#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    int i, j, length;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    length = strlen(name);

    for (i = 0; i < length; i++)
        {
            for (j = 0; j <= i; j++)
               {
                 printf("%c ", name[j]);
               }
        printf("\n");
        }

    return 0;
}
