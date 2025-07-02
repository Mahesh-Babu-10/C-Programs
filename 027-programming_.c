//Program to read the temperature in fahrenheit and convert into centigrate
#include<stdio.h>
int main()
{
    float fahrenheit,centigrate;

    printf("Enter Temperature in Fahrenheit:");
    scanf("%f",&fahrenheit);

    centigrate=(fahrenheit-32)*5/9;

    printf("\nEnter Temperature in centigrate:%.2f\n",centigrate);

    return 0;
}
