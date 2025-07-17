//Program To Fill The Array of N elements of Multiple Of 5 and Copy to Another Array And Print
#include <stdio.h>
int main()
{
    int N, i;

    printf("Enter number of elements (N): ");
    scanf("%d", &N);

    int original[N], copy[N];

    printf("\nOriginal Array (Multiples of 5):\n");
    for (i = 0; i < N; i++)
        {
          original[i] = (i + 1) * 5;
          printf("%d ", original[i]);
        }

    for (i = 0; i < N; i++)
        {
          copy[i] = original[i];
        }

    printf("\n\nCopied Array:\n");
    for (i = 0; i < N; i++)
        {
          printf("%d ", copy[i]);
        }

    return 0;
}
