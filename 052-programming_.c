//program to calculate and print the electricity bill of a given customer. To display the total amount to be paid to the customer.
#include <stdio.h>
int main()
 {
    int customerID, units;
    char name[50];
    float chargePerUnit, amount, netAmount;
    float surcharge = 0;

    printf("Input Customer ID: ");
    scanf("%d", &customerID);

    printf("Input Customer Name: ");
    scanf("%s", name);

    printf("Input Units Consumed: ");
    scanf("%d", &units);

    if (units <= 199)
        chargePerUnit = 1.20;
         else if (units >= 200 && units < 400)
           chargePerUnit = 1.50;
               else if (units >= 400 && units < 600)
             chargePerUnit = 1.80;
                else
                 chargePerUnit = 2.00;

    amount = units * chargePerUnit;

    if (amount > 400)
        surcharge = amount * 0.15;

    netAmount = amount + surcharge;

    if (netAmount < 100)
        netAmount = 100;

    printf("\nCustomer IDNO: %d\n", customerID);
    printf("Customer Name: %s\n", name);
    printf("Unit Consumed: %d\n", units);
    printf("Amount Charges @Rs. %.2f per unit: %.2f\n", chargePerUnit, amount);
    printf("Surcharge Amount: %.2f\n", surcharge);
    printf("Net Amount Paid by the Customer: %.2f\n", netAmount);

    return 0;
}
