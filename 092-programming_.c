//Program To Keep On Reading Numbers From The User Till The User Inputs 0,and Count Number Of Even Numbers and Odd Numbers along With Sum
#include <stdio.h>
int main()
{
    int num;
    int evenCount = 0, oddCount = 0, sum = 0;

    printf("Enter numbers (0 to stop):\n");

    while (1)
      {
        scanf("%d", &num);

        if (num == 0)
            break;

        sum += num;

        if (num % 2 == 0)
            evenCount++;
        else
            oddCount++;
      }

    printf("\nTotal Sum = %d\n", sum);
    printf("Total Even Numbers = %d\n", evenCount);
    printf("Total Odd Numbers = %d\n", oddCount);

    return 0;
}
