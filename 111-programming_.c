//program To Perform Matrix Multiplication Of Two Arrays Of 3*3 Size
#include <stdio.h>

int main()
{
    int A[3][3], B[3][3], C[3][3];
    int i, j, k;

    printf("Enter elements of Matrix A (3x3):\n");
    for (i = 0; i < 3; i++)
      {
        for (j = 0; j < 3; j++)
           {
            scanf("%d", &A[i][j]);
           }
      }

    printf("Enter elements of Matrix B (3x3):\n");
    for (i = 0; i < 3; i++)
      {
        for (j = 0; j < 3; j++)
           {
            scanf("%d", &B[i][j]);
           }
     }

    for (i = 0; i < 3; i++)
       {
        for (j = 0; j < 3; j++)
          {
            C[i][j] = 0;
          }
       }

    for (i = 0; i < 3; i++)
      {
        for (j = 0; j < 3; j++)
           {
            for (k = 0; k < 3; k++)
               {
                C[i][j] += A[i][k] * B[k][j];
               }
           }
     }

    printf("Resultant Matrix after Multiplication (C = A x B):\n");
    for (i = 0; i < 3; i++)
      {
        for (j = 0; j < 3; j++)
          {
            printf("%5d ", C[i][j]);
          }
        printf("\n");
     }

    return 0;
}
