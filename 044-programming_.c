//Program that reads two numbers from the user and print their absolute difference
#include<stdio.h>
int main()
{
    int num1, num2, diff;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    fflush(stdin);
    scanf("%d", &num2);

    if (num1 > num2)
        {
        diff = num1 - num2;
        }
         else
        {
           diff = num2 - num1;
        }

    printf("Absolute difference = %d\n", diff);

    return 0;

}
