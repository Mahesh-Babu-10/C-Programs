//Program To Read A Table Number,Starting Value, Ending value To Print Table From Starting Value To Ending Value
#include <stdio.h>
int main()
{
    int tableNo, start, end;

    printf("Enter the table number: ");
    scanf("%d", &tableNo);

    printf("Enter the starting value: ");
    scanf("%d", &start);

    printf("Enter the ending value: ");
    scanf("%d", &end);

    if (start > end)
        {
          printf("Starting value should be less than or equal to ending value.\n");
        }
        else
            {
              printf("\nMultiplication table of %d from %d to %d:\n\n", tableNo, start, end);
          for (int i = start; i <= end; i++)
           {
            printf("%d x %d = %d\n", tableNo, i, tableNo * i);
          }
            }

    return 0;
}
