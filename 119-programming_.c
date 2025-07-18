//Program To Read A Password And Check Its Strength
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char password[100];
    int hasLower = 0, hasUpper = 0, hasDigit = 0, hasSymbol = 0;
    int length;

    printf("Enter your password: ");
    scanf("%s", password);

    length = strlen(password);

    if (length < 8)
        {
          printf("Password must be at least 8 characters long.\n");
          return 1;
       }

    for (int i = 0; i < length; i++)
        {
         if (islower(password[i]))
           {
            hasLower = 1;
           }
             else if (isupper(password[i]))
                {
                  hasUpper = 1;
                }
                 else if (isdigit(password[i]))
                    {
                     hasDigit = 1;
                    }
                      else
                        {
                          hasSymbol = 1;
                        }
         }

    if (hasLower && hasUpper && hasDigit && hasSymbol)
        {
         printf("Password Strength: Very Strong\n");
        }
          else if ((hasLower || hasUpper) && (hasDigit || hasSymbol))
            {
             printf("Password Strength: Strong\n");
            }
              else if (hasLower && (hasUpper || hasDigit || hasSymbol))
                {
                  printf("Password Strength: Medium\n");
                }
                    else if (hasLower && !(hasUpper || hasDigit || hasSymbol))
                        {
                          printf("Password Strength: Weak\n");
                        }
                          else
                            {
                              printf("Password Strength: Weak\n");
                            }


    return 0;
}
