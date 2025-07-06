//Program To Read Date Of Birth in "MM DD YY" Format, Find Lucky Number and Display Suitable Gemstone for that person
#include <stdio.h>
int calculateLuckyNumber(int dob)
{
    int sum = 0;

    while (dob > 0)
      {
        sum += dob % 10;
        dob /= 10;
      }

    while (sum > 9)
      {
        int temp = 0;
        while (sum > 0)
          {
            temp += sum % 10;
            sum /= 10;
          }
        sum = temp;
     }

    return sum;
}
void displayGemstone(int luckyNumber)
{
    printf("Lucky Number: %d\n", luckyNumber);
    printf("Suitable Gemstone: ");
    switch (luckyNumber)
    {
        case 1: printf("Ruby\n"); break;
        case 2: printf("Pearl\n"); break;
        case 3: printf("Yellow Sapphire\n"); break;
        case 4: printf("Hessonite\n"); break;
        case 5: printf("Emerald\n"); break;
        case 6: printf("Diamond\n"); break;
        case 7: printf("Cat's Eye\n"); break;
        case 8: printf("Blue Sapphire\n"); break;
        case 9: printf("Coral\n"); break;
        default: printf("Invalid Lucky Number\n"); break;
    }
}
int main()
{
    long dob;
    printf("Enter your Date of Birth in MMDDYYYY format: ");
    scanf("%ld", &dob);

    int luckyNumber = calculateLuckyNumber(dob);
    displayGemstone(luckyNumber);

    return 0;
}
