//Program To Check Whether The Given Word exists In The Main String Or Not
#include <stdio.h>
#include <string.h>
int main()
{
    char mainStr[200], word[50];

    printf("Enter the main string: ");
    fgets(mainStr, sizeof(mainStr), stdin);
    mainStr[strcspn(mainStr, "\n")] = '\0';

    printf("Enter the word to search: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    if (strstr(mainStr, word) != NULL)
        {
        printf("The word \"%s\" exists in the main string.\n", word);
        }
          else
            {
              printf("The word \"%s\" does NOT exist in the main string.\n", word);
            }

    return 0;
}
