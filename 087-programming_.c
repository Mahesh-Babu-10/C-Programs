//Program To Print Fibonacci Series till 100
#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 1, nextNum, i;

    printf("Fibonacci Series up to 100:\n");

    while (num1 <= 100)
      {
        printf("%d ", num1);
        nextNum = num1 + num2;
        num1 = num2;
        num2 = nextNum;
      }

    printf("\n");

    return 0;
}
