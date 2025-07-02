//Program to accept the height of a personn in centimeter
#include <stdio.h>
int main()
{
    float height_cm, height_ft;

    printf("Enter height of the person (in cm): ");
    scanf("%f", &height_cm);

    height_ft = height_cm / 30.48;

    printf("Height in feet: %.2f\n", height_ft);

    if (height_ft > 5.5)
        {
        printf("Category: Taller\n");
        }

      else if (height_ft < 4.5)
        {
         printf("Category: Dwarf (Low Height)\n");
        }
         else
          {
           printf("Category: Average Height\n");
          }

    return 0;
}
