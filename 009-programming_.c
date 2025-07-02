//Program to read price of Iphone and cover case to calculate total bill
#include<stdio.h>
int main()
{
    int p1,c1,total_bill;//declaration
    p1=c1=total_bill=0;//initialization

    printf("price of Iphone......:");
    scanf("%d",&p1);

    printf("Price of cover case..:");
    scanf("%d",&c1);

    total_bill=p1+c1;

    printf("total_bill...........:%d",total_bill);

    return 0;
}
