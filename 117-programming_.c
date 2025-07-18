//Program To Check Whether The Inputted String Is Pallindrome Or Not
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100], original[100];
    int i, j, len, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    strcpy(original, str);

    for (i = 0; str[i]; i++)
        {
          str[i] = tolower(str[i]);
        }

    len = strlen(str);
    for (i = 0, j = len - 1; i < j; i++, j--)
        {
          if (str[i] != str[j])
           {
            isPalindrome = 0;
            break;
           }
        }

    if (isPalindrome)
        {
          printf("The string \"%s\" is a Palindrome.\n", original);
        }
         else
            {
              printf("The string \"%s\" is NOT a Palindrome.\n", original);
            }

    return 0;
}
