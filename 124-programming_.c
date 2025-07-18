//Program To Generate Username From The Inputted e-mail Id:
#include <stdio.h>
#include <string.h>
int main()
{
    char email[100], username[100];
    int i = 0;

    printf("Enter your email ID: ");
    fgets(email, sizeof(email), stdin);

    email[strcspn(email, "\n")] = '\0';

    while (email[i] != '\0' && email[i] != '@')
        {
          username[i] = email[i];
          i++;
        }

    username[i] = '\0';

    printf("Generated username: %s\n", username);

    return 0;
}
