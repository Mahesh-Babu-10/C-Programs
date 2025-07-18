//Program To Read A String And Display It Character By Character Along With memory Address
#include <stdio.h>
int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("\nCharacter-by-character display with memory addresses:\n");

    while (str[i] != '\0')
        {
          printf("Character: %c\t Address: %p\n", str[i], (void*)&str[i]);
          i++;
        }

    return 0;
}
