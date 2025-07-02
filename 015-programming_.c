//program to calculate amount for the input at rate and quantity
#include<stdio.h>
int main()
{
    int quantity;
    float rate,amount;

    printf("Enter quantity:");
    scanf("%d",&quantity);

    printf("Enter rate:");
    scanf("%f",&rate);

    amount=rate*quantity;

    printf("Enter amount %.2f",amount);


    return 0;
}
