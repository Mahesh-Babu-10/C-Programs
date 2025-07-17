//Program To Find Minimum and Maximum Numbers From The Array Of 10 Inputted Numbers
#include <stdio.h>

int main() {
    int arr[10];
    int i, min, max;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
        {
         printf("Number %d: ", i + 1);
         scanf("%d", &arr[i]);
        }

    min = max = arr[0];

    // Find min and max
    for (i = 1; i < 10; i++)
        {
         if (arr[i] < min)
            min = arr[i];
         if (arr[i] > max)
            max = arr[i];
        }

    printf("\nMinimum Number = %d\n", min);
    printf("Maximum Number = %d\n", max);

    return 0;
}
