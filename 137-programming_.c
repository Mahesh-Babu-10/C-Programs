//Program To Calculate Area Of A Circle
#include <stdio.h>
#define PI 3.14159

float calculateArea(float radius)
{
    return PI * radius * radius;
}

int main()
{
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = calculateArea(radius);

    printf("Area of the circle = %.2f\n", area);

    return 0;
}
