//Program to accept marks of three subjects to calculate total and average
#include <stdio.h>
int main()
{
    int c, cpp, java;
    int total;
    float average;
    int failFlag = 0;

    printf("Enter marks in C: ");
    scanf("%d", &c);

    printf("Enter marks in C++: ");
    scanf("%d", &cpp);

    printf("Enter marks in Java: ");
    scanf("%d", &java);

    if (c < 35)
      {
        printf("Failed in C\n");
        failFlag = 1;
      }
       if (cpp < 35)
       {
         printf("Failed in C++\n");
         failFlag = 1;
       }
         if (java < 35)
         {
          printf("Failed in Java\n");
          failFlag = 1;
         }

           if (failFlag == 1)
           {
            printf("No Grade\n");
           }
              else {

        total = c + cpp + java;
        average = total / 3.0;

        printf("Total Marks = %d\n", total);
        printf("Average = %.2f\n", average);


        if (average >= 75)
           printf("Distinction\n");

          else if (average >= 60)
             printf("First Class\n");

           else if (average >= 50)
               printf("Second Class\n");

             else if (average >= 35)
                 printf("Pass Class\n");
    }

    return 0;
}
