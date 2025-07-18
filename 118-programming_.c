//Program To Read User Name And Password
#include <stdio.h>
#include <conio.h>
int main()
{
    char username[100], password[100];
    int i = 0;
    char ch;

    printf("Enter Username: ");
    gets(username);

    printf("Enter Password: ");
    while (1)
       {
        ch = getch();
        if (ch == 13)
           {
            password[i] = '\0';
            break;
           } else if (ch == 8 && i > 0)
             {
              i--;
              printf("\b \b");
             }
              else if (ch != 8)
                {
                  password[i++] = ch;
                  printf("*");
                }
        }

    printf("\n\nLogin Details\n");
    printf("Username: %s\n", username);
    printf("Password: %s\n", password);

    return 0;
}
