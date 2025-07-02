//Program to read price of Samsung Mobile and Vivo Mobile and display which is costlier,if both the Mobiles are at same price then display "Both are at same price."
#include<stdio.h>
int main()
{
    int sm,vm;
    printf("Enter price of Samsung Mobile:");
    scanf("%d",&sm);

    printf("\nEnter price of vivo Mobile:");
    scanf("%d",&vm);

   {
    if(sm>vm)
       printf("\nHeyy Your Samsung Mobile is Costlier Handle it with care\n");

    else if(vm>sm)
       printf("\nHeyy Your Vivo Mobile Is costlier Handle it with care\n");

    else
       printf("\nHeyy Both Mobiles are at same price\n");
   }

    return 0;
}
