//Program To Find HCF Of Two Numbers
#include <stdio.h>
int main()
{
    int a, b, temp;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0)
      {
        printf("Please enter only positive integers.\n");
        return 1;
      }

    while (b != 0)
      {
        temp = b;
        b = a % b;
        a = temp;
      }

    printf("HCF = %d\n", a);
    return 0;
}
