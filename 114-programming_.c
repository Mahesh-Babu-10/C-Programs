//Program To Search For An Element in 5*5 Matrix
#include <stdio.h>
int main()
{
    int matrix[5][5];
    int i, j, key;
    int found = 0;

    printf("Enter elements of 5x5 matrix:\n");
    for (i = 0; i < 5; i++)
      {
        for (j = 0; j < 5; j++)
          {
            scanf("%d", &matrix[i][j]);
          }
      }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < 5; i++)
      {
        for (j = 0; j < 5; j++)
          {
            if (matrix[i][j] == key)
              {
                printf("Element %d found at position: Row %d, Column %d\n", key, i + 1, j + 1);
                found = 1;
              }
         }
      }

    if (!found)
      {
        printf("\aElement %d not found in the matrix.\n", key);
      }

    return 0;
}
