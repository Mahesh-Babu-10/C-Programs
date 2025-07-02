//Program to check if a given number is divisible by both 3 and 5.
#include<stdio.h>
int main()
{
    int num;

    printf("Enter A Number:");
    scanf("%d",&num);

    if (num %3==0 && num %5==0)
        printf("\n%d is divisible by both 3 and 5.\n",num);
    else
        printf("\n%d is not divisible by both 3 and 5.\n",num);

    return 0;
}
