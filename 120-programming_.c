//Program To Read Two passwords,Compare Their Lengths,If Lengths Are Equal And Check For similarities
#include <stdio.h>
#include <string.h>
int main()
{
    char password1[100], password2[100];
    int length1, length2, i, same = 1;

    printf("Enter first password: ");
    fgets(password1, sizeof(password1), stdin);
    password1[strcspn(password1, "\n")] = '\0';

    printf("Enter second password: ");
    fgets(password2, sizeof(password2), stdin);
    password2[strcspn(password2, "\n")] = '\0';

    length1 = strlen(password1);
    length2 = strlen(password2);

    if (length1 != length2)
        {
          printf("Passwords are of different lengths.\n");
        }
         else
            {
              printf("Passwords are of same length.\n");

        for (i = 0; i < length1; i++)
            {
              if (password1[i] != password2[i])
              {
                same = 0;
                break;
              }
            }

        if (same)
            printf("Passwords are exactly the same.\n");
        else
            printf("Passwords are of same length but different content.\n");
           }

    return 0;
}
