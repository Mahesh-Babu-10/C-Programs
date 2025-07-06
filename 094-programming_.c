//Program To Generate 10 Random Numbers To Display The Biggest One
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int numbers[10];
    int max;

    srand(time(0));

    printf("Generated 10 random numbers:\n");

    for (int i = 0; i < 10; i++) {
        numbers[i] = rand() % 100;
        printf("%d ", numbers[i]);
    }

    max = numbers[0];

    for (int i = 1; i < 10; i++)
      {
        if (numbers[i] > max)
         {
            max = numbers[i];
         }
     }

    printf("\nBiggest Number = %d\n", max);

    return 0;
}
