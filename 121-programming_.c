//Program To Find The Largest And Smallest Words In A String
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[200];
    char word[50], smallest[50], largest[50];
    int i = 0, j = 0, minLen = 9999, maxLen = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    strcat(str, " ");

    for (i = 0; i < strlen(str); i++)
       {
        if (str[i] != ' ')
           {
            word[j++] = str[i];
           }
            else
                {
                  word[j] = '\0';
            if (j > 0)
              {
                if (j < minLen)
                  {
                    minLen = j;
                    strcpy(smallest, word);
                  }
                if (j > maxLen)
                   {
                    maxLen = j;
                    strcpy(largest, word);
                   }
              }
            j = 0;
                }
       }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}
