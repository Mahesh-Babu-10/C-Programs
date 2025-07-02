//Program to prepare the electricity bill
#include <stdio.h>
int main()
{
    int units;
    char type;
    float bill;

    printf("Enter type of connection (D for Domestic, C for Commercial): ");
    scanf(" %c", &type);

    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    if (type == 'D' || type == 'd')
    {
        if (units < 100)
            bill = 100;
          else if (units < 200)
              bill = units * 1.50;
             else if (units < 300)
                bill = units * 3.00;
               else
                 bill = units * 5.00;

        printf("Connection Type: Domestic\n");
    }

       else if (type == 'C' || type == 'c')
          {
             if (units < 100)
               bill = 150;
               else if (units < 200)
                  bill = units * 2.50;
                  else if (units < 300)
                    bill = units * 4.50;
                     else
                       bill = units * 7.50;

        printf("Connection Type: Commercial\n");
          }
    else
       {
        printf("Invalid connection type!\n");
        return 1; // Exit
       }

    printf("Units Consumed: %d\n", units);
    printf("Electricity Bill: %.2f\n", bill);

    return 0;
}
