//Program to print the discount and the actual amount
#include<stdio.h>
int main()
{
    float sales, discount = 0, amount;

    printf("Enter the sales amount: ");
    scanf("%f", &sales);

    if (sales >= 25000)
        discount = 0.25 * sales;
        else if (sales >= 10000)
                discount = 0.20 * sales;
           else if (sales >= 5000)
                  discount = 0.10 * sales;
               else if (sales >= 2000)
                     discount = 0.05 * sales;
                  else
                      discount = 0.0;

    amount = sales - discount;

    printf("Discount = %.2f\n", discount);
    printf("Amount to be paid = %.2f\n", amount);

    return 0;
}
