//Program To Read 10 Numbers and Dsplay sum Of Even Numbers and Odd Numbers along with count
#include <stdio.h>
int main()
{
    int numbers[10];
    int evenSum = 0, oddSum = 0;
    int evenCount = 0, oddCount = 0;

    printf("Enter 10 integers:\n");

    for (int i = 0; i < 10; i++)
        {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0)
            {
            evenSum += numbers[i];
            evenCount++;
            }
            else
            {
            oddSum += numbers[i];
            oddCount++;
            }
        }

    printf("\n--- Results ---\n");

    printf("Even Numbers Count: %d | Sum: %d\n", evenCount, evenSum);

    printf("Odd Numbers Count : %d | Sum: %d\n", oddCount, oddSum);

    return 0;
}
