//Program To Find Frequency Of Each Element From The Array Of N Elements
#include <stdio.h>

int main() {
    int N, i, j, count;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N], freq[N];

    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++)
        {
          scanf("%d", &arr[i]);
          freq[i] = -1;
       }

    for (i = 0; i < N; i++)
      {
        count = 1;
        if (freq[i] != 0)
          {
            for (j = i + 1; j < N; j++)
            {
              if (arr[i] == arr[j])
                  {
                    count++;
                    freq[j] = 0;
                  }
            }
            freq[i] = count;
        }
    }

    printf("\nElement\tFrequency\n");
    for (i = 0; i < N; i++)
       {
        if (freq[i] != 0)
          {
            printf("%d\t%d\n", arr[i], freq[i]);
          }
       }

    return 0;
}
