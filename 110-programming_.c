//program To Delete A From The Array Of N Elements
#include <stdio.h>
int main()
{
    int arr[100], N, i, j, value, found = 0;

    printf("Enter number of elements (max 100): ");
    scanf("%d", &N);

    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++)
        {
         scanf("%d", &arr[i]);
        }

    printf("Enter the element to delete: ");
    scanf("%d", &value);

    for (i = 0; i < N; i++)
        {
         if (arr[i] == value)
          {
            found = 1;
            for (j = i; j < N - 1; j++)
              {
                arr[j] = arr[j + 1];
              }
            N--;
            i--;
         }
        }

    if (!found)
        {
         printf("Element %d not found in the array.\n", value);
        }
        else
            {
              printf("Updated array after deleting %d:\n", value);
           for (i = 0; i < N; i++)
             {
               printf("%d ", arr[i]);
             }
        printf("\n");
            }

    return 0;
}
