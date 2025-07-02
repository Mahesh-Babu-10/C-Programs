//Program to read cost price and selling from the user to calculate profit or loss or no loss no profit
#include <stdio.h>
int main()
 {
    float costPrice, sellingPrice, result;

    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("\nEnter Selling Price: ");
    scanf("%f", &sellingPrice);

   if (sellingPrice > costPrice)
    {
        result = sellingPrice - costPrice;
        printf("\nHeyy,You Have made a Profit of : %.2f\n", result);
    }
      else if (costPrice > sellingPrice)
    {
        result = costPrice - sellingPrice;
        printf("\nOops!You incurred a Loss of RS %.2f\n", result);
    }
         else
        printf("\nHmm!....No Profit....No Loss\n");


    return 0;
}
