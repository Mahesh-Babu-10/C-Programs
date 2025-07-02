//program to read Total Travelling in Kilo Meters and Display into Meters
#include<stdio.h>
int main()
{
    float km,m;

    printf("Enter Distance in Kilo Meters..:");
    scanf("%f",&km);

    //Logic
    m=km*1000;

    printf("\nDistance in Meters.............:%.0f m\n",m);

    return 0;
}
