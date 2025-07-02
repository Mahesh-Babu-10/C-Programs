//Program to generate the final bill of a customer
#include <stdio.h>
int main()
{
    float price, finalamount;
    int days;
    char paymentmode;

    printf("Enter the price of Smart TV: ");
    scanf("%f", &price);

    printf("Enter payment mode (C for Cash, R for Credit): ");
    scanf(" %c", &paymentmode);

    if (paymentmode == 'C' || paymentmode == 'c')
    {
        finalamount = price - (price * 0.25);
        printf("Payment Mode: Cash\n");
        printf("25%% discount applied.\n");
    }
    else if (paymentmode == 'R' || paymentmode == 'r')
    {
        printf("Enter number of days taken to pay: ");
        scanf("%d", &days);

        if (days <= 7)
        {
            finalamount = price - (price * 0.15);
            printf("Payment Mode: Credit (Paid within 7 days)\n");
            printf("15%% discount applied.\n");
        } else
        {
            finalamount = price + (price * 0.10);
            printf("Payment Mode: Credit (Paid after 7 days)\n");
            printf("10%% extra charge applied.\n");
        }
    }
            else
    {
               printf("Invalid payment mode.\n");
              return 1;
    }

      printf("Final Bill Amount: %.2f\n", finalamount);

    return 0;
}
