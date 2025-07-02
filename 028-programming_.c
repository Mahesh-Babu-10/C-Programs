//Program to Read rupees and convert into Paise
#include<stdio.h>
int main()
{
    int rupees;
    float paise;

    printf("Enter amount in Rupees:");
    scanf("%d",&rupees);

    paise=rupees*100;

    printf("\namount in paise:%.2f\n",paise);

    return 0;
}
