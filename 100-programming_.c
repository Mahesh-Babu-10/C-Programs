//Program To Read Array Of N Elements and Print Total & Average
#include <stdio.h>
int main()
{
    int n, i;
    float arr[100];
    float sum = 0.0;
    float average;

    printf("Enter the number of elements (1-100): ");
    scanf("%d", &n);

    while (n < 1 || n > 100)
      {
        printf("Error! Number should be in the range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
      }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; ++i)
      {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &arr[i]);
        sum += arr[i];
      }

    average = sum / n;

    printf("\nTotal Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
