//Program To Insert An Element In The Array Of N Elements
#include <stdio.h>
int main()
{
    int arr[100], N, i, pos, value;

    printf("Enter number of elements (max 100): ");
    scanf("%d", &N);

    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++)
        {
          scanf("%d", &arr[i]);
        }

    printf("Enter the element to insert: ");
    scanf("%d", &value);
    printf("Enter the position (1 to %d): ", N + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > N + 1)
        {
          printf("Invalid position!\n");
          return 1;
        }

    for (i = N; i >= pos; i--)
        {
          arr[i] = arr[i - 1];
        }

    arr[pos - 1] = value;
    N++;

    printf("Updated array:\n");
    for (i = 0; i < N; i++)
        {
          printf("%d ", arr[i]);
        }

    return 0;
}
