//Program To Read e-Mail Id And Valid It
#include <stdio.h>
#include <string.h>
int isValidEmail(const char *email)
{
    int atIndex = -1, dotIndex = -1;
    int length = strlen(email);

    for (int i = 0; i < length; i++)
        {
          if (email[i] == '@' && atIndex == -1)
          {
            atIndex = i;
          }
              else if (email[i] == '.' && atIndex != -1 && dotIndex == -1)
                {
                  dotIndex = i;
                }
        }

    if (atIndex == -1 || dotIndex == -1)
        {
          return 0;
        }

    if (atIndex < 3)
        {
          return 0;
        }

    if (dotIndex - atIndex < 4)
        {
          return 0;
        }

    return 1;
}

int main()
{
    char email[100];

    printf("Enter your email ID: ");
    scanf("%s", email);

    if (isValidEmail(email))
        {
          printf("Valid email ID.\n");
        }
         else
            {
              printf("Invalid email ID.\n");
            }

    return 0;
}
