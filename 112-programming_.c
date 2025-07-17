//Program To Print Diagonal Elements Of A Square Matrix (5*5)
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

    printf("\nMain Diagonal Elements:\n");
    for (i = 0; i < 5; i++)
      {
        printf("%d ", matrix[i][i]);
      }

    printf("\n\nSecondary Diagonal Elements:\n");
    for (i = 0; i < 5; i++)
      {
        printf("%d ", matrix[i][4 - i]);
      }

    return 0;
}
