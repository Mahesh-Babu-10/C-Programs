//Program To Read A String And Count The First Character Of The String In The Inputted String
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char firstChar;
    int count = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if (strlen(str) == 0)
        {
          printf("Error: String is empty.\n");
          return 1;
        }

    firstChar = str[0];

    for (i = 0; str[i] != '\0'; i++)
        {
           if (str[i] == firstChar)
           {
            count++;
           }
        }

    printf("The first character '%c' appears %d time(s) in the string.\n", firstChar, count);

    return 0;
}
