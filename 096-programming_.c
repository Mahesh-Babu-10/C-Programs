//Program To Find LCM Of Two Numbers
#include <stdio.h>
int findHCF(int a, int b)
{
    int temp;
    while (b != 0)
      {
        temp = b;
        b = a % b;
        a = temp;
     }
    return a;
}

int main()
{
    int num1, num2, hcf, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0)
      {
        printf("Please enter only positive integers.\n");
        return 1;
      }

    hcf = findHCF(num1, num2);
    lcm = (num1 * num2) / hcf;

    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}
