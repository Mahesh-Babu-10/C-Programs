//Program to design an application for resturant
#include <stdio.h>
int main()
{
    int choice, plates;
    float total = 0;

    do
      {
        printf("\n--- Veg KHANA Restaurant Menu ---\n");
        printf("1. Idli   - Rs.25\n");
        printf("2. Dosa   - Rs.50\n");
        printf("3. Vada   - Rs.20\n");
        printf("4. Upma   - Rs.25\n");
        printf("5. Exit\n");

        printf("Which item to order (1-5): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
            {
             printf("How many plates: ");
             scanf("%d", &plates);
            }

        switch (choice)
          {
            case 1: total += plates * 25; break;
            case 2: total += plates * 50; break;
            case 3: total += plates * 20; break;
            case 4: total += plates * 25; break;
            case 5: printf("Exiting order...\n");
            break;
            default: printf("\aInvalid choice!\n");
         }

    }
       while (choice != 5);

    printf("\nTotal bill is: %.2f\n", total);

    return 0;
}
