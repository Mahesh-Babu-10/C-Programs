//Program To Print all the Arm strong Numbers between 100 and 1000.
 #include <stdio.h>
#include <math.h>
int main()
{
    int num, originalNum, remainder, sum = 0;

    printf("Armstrong numbers between 100 and 1000 are:\n");

    for (num = 100; num < 1000; num++)
      {
        originalNum = num;
        sum = 0;

        while (originalNum != 0)
         {
            remainder = originalNum % 10;
            sum += pow(remainder, 3);
            originalNum /= 10;
        }

        if (sum == num)
            {
            printf("%d\n", num);
           }
    }

    return 0;
}
