//Program to check whether inputted number is even or odd by using ternary operator
#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        {
        printf("The number is Even.\n");
        }
       else
         {
          printf("The number is Odd.\n");
         }

    return 0;
}
