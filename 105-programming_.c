//Program To Build Tambola (House) App
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void shuffle(int arr[], int size)
{
    for (int i = size - 1; i > 0; i--)
        {
          int j = rand() % (i + 1);
          int temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
       }
}

int main()
{
    int tambola[90];

    for (int i = 0; i < 90; i++)
        {
          tambola[i] = i + 1;
       }

    srand(time(0));

    shuffle(tambola, 90);

    printf("Shuffled Tambola Numbers:\n");
    for (int i = 0; i < 90; i++)
        {
          printf("%2d ", tambola[i]);
          if ((i + 1) % 10 == 0)
          printf("\n");
        }

    return 0;
}
