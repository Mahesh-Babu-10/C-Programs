//Program To fill Array Of 10 Random Numbers and Count Numbers Of Digits Of Each Elements Of The Array
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int countDigits(int num)
{
    int count = 0;

    if (num == 0)
        return 1;

    while (num != 0)
      {
        count++;
        num /= 10;
      }

    return count;
}

int main() {
    int arr[10];
    int i;

    srand(time(0));

    printf("Random Numbers and their Digit Counts:\n\n");
    for (i = 0; i < 10; i++)
       {
        arr[i] = rand() % 10000;  // 0 to 9999
        printf("Number: %4d\tDigits: %d\n", arr[i], countDigits(arr[i]));
       }

    return 0;
}
