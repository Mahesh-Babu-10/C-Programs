//Program to Fill The array of 10 Numbers with Random Numbers,Print Even Numbers,Odd Numbers And Prime Numbers Seperately
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int isPrime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++)
          {
            if (num % i == 0)
            return 0;
          }
    return 1;
}

int main()
{
    int arr[10];
    int i;

    srand(time(0));

    printf("Generated Random Numbers:\n");
    for (i = 0; i < 10; i++)
        {
         arr[i] = rand() % 100 + 1;
         printf("%d ", arr[i]);
        }

    printf("\n\nEven Numbers:\n");
    for (i = 0; i < 10; i++)
          {
            if (arr[i] % 2 == 0)
             {
               printf("%d ", arr[i]);
             }
          }

    printf("\n\nOdd Numbers:\n");
    for (i = 0; i < 10; i++)
         {
           if (arr[i] % 2 != 0)
           {
             printf("%d ", arr[i]);
           }
         }

    printf("\n\nPrime Numbers:\n");
    for (i = 0; i < 10; i++)
        {
          if (isPrime(arr[i]))
          {
            printf("%d ", arr[i]);
          }
        }

    return 0;
}
