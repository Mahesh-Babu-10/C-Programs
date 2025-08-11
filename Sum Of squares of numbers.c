//Program To Calculate Sum Of Squares Of Numbers
#include <stdio.h>
int main()
{
    int n, i, num;
    int sum = 0;

    printf("Enter how many numbers you want: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
      {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num * num;
      }

    printf("Sum of squares is: %d\n", sum);

    return 0;
}
