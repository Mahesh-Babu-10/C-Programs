//Program print result for the input based and power.
#include <stdio.h>
#include <math.h>
int main()
{
    double base, exponent, result;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent);

    printf("%.2lf raised to the power of %.2lf is: %.2lf\n", base, exponent, result);

    return 0;
}
