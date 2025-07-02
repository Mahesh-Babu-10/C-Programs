// program to calculate billamount
#include <stdio.h>
int main()
{

    int p1,p2,billamount;//declaration
    p1=p2=billamount=0;//initialization

    printf("Enter price of Dairy Milk.:");
    scanf("%d",&p1);

    printf("enter price of KitKat.....:");
    scanf("%d",&p2);

    billamount=p1+p2;

    printf("Total billamount is.......:%d",billamount);

    return 0;


}
