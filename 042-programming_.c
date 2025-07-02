//Program to read the price of 3 pens Reynolds,Montex and parker to display which is the costliest one
#include<stdio.h>
int main()
{
    float reynold,montex,parker;

    printf("Enter Price of Reynold Pen:");
    scanf("%f",&reynold);

    printf("\nEnter Price of Montex Pen:");
    scanf("%f",&montex);

    printf("\nEnter Price of Parker Pen:");
    scanf("%f",&parker);

    if(reynold>montex && reynold>parker)
        printf("\nReynolds is the Costliest pen.\n");
          else if(montex>reynold && parker>montex)
               printf("\nParker is the Costliest Pen.\n");
               else
                  printf("\nTwo or More Pens have the same Highest Price.\n");

    return 0;
}
