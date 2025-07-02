//Program to read Radius of a circle and calculate area
#include<stdio.h>
int main()
{
    const float PI=3.14;
    float radius,area;
    printf("Enter Radius of a circle:");
    scanf("%f",&radius);

    //logic
    area=PI*radius*radius;

    printf("\nEnter Area of Circle:%.2f\n",area);

    return 0;
}
