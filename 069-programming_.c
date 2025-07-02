//Program to find out whether the character presses through the keyboard is a digit or not by using conditioal operator
#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= '0' && ch <= '9')
        {
         printf("It is a digit.\n");
        }
     else
        {
         printf("It is not a digit.\n");
        }

    return 0;
}
