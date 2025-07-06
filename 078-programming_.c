//Program To Print Alphabets from A to Z (UpperCase Letters)
#include <stdio.h>
int main()
{
    printf("Uppercase Letters from A to Z:\n");

    for (char letter = 'A'; letter <= 'Z'; letter++)
        {
        printf("%c ", letter);
        }

    printf("\n");
    return 0;
}

