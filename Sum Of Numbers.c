//program TO Print Sum Of Numbers
#include <stdio.h>
int main()
{
    int n, i, num, sum = 0;
    for(i = 1; i <= n; i++)
      {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
      }

    printf("Sum of the numbers is: %d\n", sum);

    return 0;
}
