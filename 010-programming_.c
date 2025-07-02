//program to read the bill amount and the amount paid by customer and to display the balance amount to b returned to the customer
#include<stdio.h>
int main()
{
    int t1,m1,amount_to_be_returned;//declaration
    t1=m1=amount_to_be_returned=0;//initialization

    printf("Total amount.........................:");
    scanf("%d",&t1);

    printf("Amount paid by Customer..............:");
    scanf("%d",&m1);

    amount_to_be_returned=t1-m1;

    printf("Amount to be returned to the Customer:%d",amount_to_be_returned);

    return 0;
}
