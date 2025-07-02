//Program to evaluate (a+b)2
#include<stdio.h>
int main()
{
    int a,b,result;

    printf("Enter Value of a......:");
    scanf("%d",&a);

    printf("\nEnter Value of b......:");
    scanf("%d",&b);

    result=(a+b)*(a+b);

    printf("\nThe Value of (a+b)2 is:%d\n",result);

    return 0;
}
