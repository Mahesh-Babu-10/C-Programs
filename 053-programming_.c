//Program to accept marks of three subjects
#include <stdio.h>
int main()
 {
    int m1, m2, m3, total;
    float average;

    printf("Enter marks of 3 subjects:");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    average = total / 3.0;

    printf("\nTotal Marks = %d\n", total);
    printf("\nAverage = %.2f\n\n", average);

    if (average > 90)
        printf("Grade: A+\n");
         else if (average >= 80)
               printf("Grade: A\n");
             else if (average >= 70)
                  printf("Grade: B+\n");
                else if (average >= 60)
                    printf("Grade: B\n");
                   else if (average >= 50)
                      printf("Grade: C\n");
                       else
                         printf("Grade: F\n");

    return 0;
}
