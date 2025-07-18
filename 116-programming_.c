//Program To Convert The Inputted String Into Proper Case
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int newWord = 1;
    for (i = 0; str[i] != '\0'; i++)
        {
          if (isspace(str[i]))
          {
            newWord = 1;
          }
            else if (newWord && isalpha(str[i]))
                {
                  str[i] = toupper(str[i]);
                  newWord = 0;
                }
                  else
                    {
                      str[i] = tolower(str[i]);
                    }
       }

    printf("Proper Case String: %s\n", str);

    return 0;
}
