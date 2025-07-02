//program to calculate Electricity from the inputed present month and last month reading
#include<stdio.h>
int main()
{
    int lastreading,presentreading,unitsconsumed;
    float rateperunit = 5.50;
    float totalamount;

    printf("Enter Last Month Reading.....:");
    scanf("%d",&lastreading);

    printf("Enter Present Month Reading..:");
    scanf("%d",&presentreading);

    unitsconsumed=presentreading-lastreading;
    totalamount=unitsconsumed*rateperunit;

    printf("Units Consumed:%d\n",unitsconsumed);
    printf("Total Electricity Bill.......:%.2f\n",totalamount);

    return 0;
}
