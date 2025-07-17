//Program To Print Upper Triangle And Lower Triangle of (5*5) Array
#include <stdio.h>
int main()
{
    int matrix[5][5];
    int i, j;

    printf("Enter elements of 5x5 matrix:\n");
    for (i = 0; i < 5; i++)
      {
        for (j = 0; j < 5; j++)
          {
            scanf("%d", &matrix[i][j]);
          }
     }

    printf("\nUpper Triangular Matrix:\n");
    for (i = 0; i < 5; i++)
      {
        for (j = 0; j < 5; j++)
          {
            if (i <= j)
                printf("%4d", matrix[i][j]);
            else
                printf("    ");
          }
        printf("\n");
      }

    printf("\nLower Triangular Matrix:\n");
    for (i = 0; i < 5; i++)
      {
        for (j = 0; j < 5; j++)
          {
            if (i >= j)
                printf("%4d", matrix[i][j]);
            else
                printf("    ");
          }
        printf("\n");
     }

    return 0;
}
