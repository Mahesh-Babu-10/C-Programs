//Program to calculate the discount and final amount
#include<stdio.h>
int main()
{
    float sales,discount,final_amount;

    printf("Enter Total Sales amount:");
    scanf("%f",&sales);

    if(sales>=25000)
       discount=sales*0.10;
    else
       discount=sales*0.05;

    final_amount=sales-discount;

    printf("Discount:%.2f\n",discount);
    printf("Final_Amount:%.2f\n",final_amount);

    return 0;
}
