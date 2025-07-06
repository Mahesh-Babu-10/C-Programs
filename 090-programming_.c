//Program To Read a vehicle Number and Chek Whether It is pallindrome Number Or Not
#include <stdio.h>
int main()
{
    int number, reversedNumber = 0, remainder, originalNumber;

    printf("Enter the numeric part of the vehicle number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (number != 0)
      {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
      }

    if (originalNumber == reversedNumber)
      {
        printf("%d is a palindrome number.\n", originalNumber);
      }
       else
        {
          printf("%d is not a palindrome number.\n", originalNumber);
         }

    return 0;
}
