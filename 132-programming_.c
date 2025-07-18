//Program To Read A String And Copy The String Vowels In UpperCase And Consonents In LowerCase
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char input[100], result[100];
    int i;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    for (i = 0; input[i] != '\0'; i++)
        {
          char ch = input[i];

        if (isalpha(ch))
            {
              char lowerCh = tolower(ch);

            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u')
                {
                  result[i] = toupper(ch);
                }
                 else
                    {
                      result[i] = tolower(ch);
                    }
             }
                    else
                        {
                          result[i] = ch;
        }
      }

    result[i] = '\0';

    printf("Modified string: %s\n", result);

    return 0;
}
