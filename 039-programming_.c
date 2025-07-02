//Program to check weather a given number is Positive or Negative
#include<stdio.h>
int main()
{
    int num;

    printf("Enter a number:");
    scanf("%d",&num);

    if(num>0)
       printf("\nHeyy %d is a positive number.\n",num);
            else if(num<0)
                    printf("\nHeyy %d is a negative number.\n",num);
                   else
                       printf("The Number is Zero.\n");
    return 0;
}
