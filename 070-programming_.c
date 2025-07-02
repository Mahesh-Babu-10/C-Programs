//Program to reads two integer values
#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 < num2)
        {
         printf("up\n");
        }
      else if (num1 > num2)
          {
           printf("down\n");
          }
         else
           {
             printf("equal\n");
           }

    return 0;
}
