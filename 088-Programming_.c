//Program To print Prime Numbers Between Two Given Positive Numbers
#include <stdio.h>
int isPrime(int num)
{
    if (num <= 1)
        {
         return 0;
        }
    for (int i = 2; i * i <= num; i++)
      {
        if (num % i == 0)
          {
            return 0;
          }
      }
    return 1;
}

int main()
{
    int num1, num2;

    printf("Enter the first positive number: ");
    scanf("%d", &num1);

    printf("Enter the second positive number: ");
    scanf("%d", &num2);

    if (num1 > num2)
       {
        printf("\aInvalid Range\n");
        exit(0);
       }

    printf("Prime numbers between %d and %d are:\n", num1, num2);
    for (int i = num1; i <= num2; i++)
       {
        if (isPrime(i))
         {
            printf("%d\n", i);
         }
    }

    return 0;
}
