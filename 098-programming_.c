//Program To print factors Of A Positive Number
#include <stdio.h>
int main()
{
    int num;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num <= 0)
        {
          printf("Please enter a positive number.\n");
          return 1;
        }

    printf("Factors of %d are: ", num);

    for (int i = 1; i <= num; i++)
      {
        if (num % i == 0)
          {
            printf("%d ", i);
          }
      }

    printf("\n");
    return 0;
}
