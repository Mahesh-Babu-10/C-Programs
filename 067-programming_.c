//Program to arthematic operators by using switch case
#include <stdio.h>
int main()
{
    float num1, num2, result;
    char op;

    printf("Enter a number: ");
    scanf("%f", &num1);

    printf("Enter another number: ");
    scanf("%f", &num2);

    printf("Enter your option (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
            result = num1 + num2;
            printf("Output: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("Output: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("Output: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0)
                {
                result = num1 / num2;
                printf("Output: %.2f / %.2f = %.2f\n", num1, num2, result);
                }
               else
                {
                printf("Error: Division by zero not allowed.\n");
                }
            break;

        default: printf("\aInvalid operator!\n");
    }

    return 0;
}
