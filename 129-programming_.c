//Program To Read A Name And Display "Success Message"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char name[100];
    int length, i, onlySpaces = 1;
    const int MIN_LENGTH = 3;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    length = strlen(name);

    for (i = 0; i < length; i++)
        {
          if (!isspace(name[i]))
           {
            onlySpaces = 0;
            break;
           }
        }

    if (length == 0 || onlySpaces)
        {
         printf("Error: Name should not be blank.\n");
        }
         else if (length < MIN_LENGTH)
            {
              printf("\aError: Name should be at least %d characters long.\n", MIN_LENGTH);
             }
              else
                {
                  printf("Success! Hello, %s\n", name);
                }

    return 0;
}
