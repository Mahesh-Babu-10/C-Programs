//Program To Check whether The Input Number Is Prime Or not along with Number of iterations
#include <stdio.h>
#include <math.h>
int main()
{
    int num, i;
    int isPrime = 1;
    int iterations = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1)
       {
        isPrime = 0;
      }
       else if (num == 2)
        {
         isPrime = 1;
        }
           else if (num % 2 == 0)
            {
             isPrime = 0;
            }
                else
    {
        for (i = 3; i * i <= num; i += 2)
            {
             iterations++;
             if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        {
         printf("%d is a prime number.\n", num);
        }
        else
            {
              printf("%d is not a prime number.\n", num);
            }
    printf("Number of iterations: %d\n", iterations);

    return 0;
}
