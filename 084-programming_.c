//Program To Read Number and Print That no That Many Times
#include <stdio.h>
int main()
{
    int number;
    int count;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (count = 0; count < number; count++)
      {
        printf("%d\n", number);
      }

    return 0;
}
