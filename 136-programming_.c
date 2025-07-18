//program To Swap The Values Of Two Variables Using Functions
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nBefore swap: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After swap:  num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
