//Program To Read Your Name And Copy All The Vowels In One String And All the Consonents In Another String
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char name[100], vowels[100], consonants[100];
    int i, v = 0, c = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for (i = 0; name[i] != '\0'; i++)
        {
          char ch = tolower(name[i]);

        if (isalpha(ch))
            {
              if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
              {
                vowels[v++] = name[i];
              }
                else
                    {
                      consonants[c++] = name[i];     // Store as-is (original case)
            }
        }
    }

    vowels[v] = '\0';
    consonants[c] = '\0';

    printf("Vowels: %s\n", vowels);
    printf("Consonants: %s\n", consonants);

    return 0;
}
