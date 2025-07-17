//Program To Read Array of 10 elements with Even Numbers at Odd Index and Odd Numbers at Even Index
#include <stdio.h>
int main()
{
    int arr[10];
    int i, num;

    printf("Enter 10 numbers\n");
    printf("--------------------------------\n");
    for(i = 0; i < 10; i++)
        {
          while(1)
          {
            printf("Enter element at index %d: ", i);
            scanf("%d", &num);
                if ((i % 2 == 0 && num % 2 == 1) || (i % 2 == 1 && num % 2 == 0))
                 {
                  arr[i] = num;
                  break;
                 }
                    else
                         {
                           printf("Invalid input! ");
                           if(i % 2 == 0)
                           printf("Enter an ODD number at EVEN index.\n");
                             else
                                printf("Enter an EVEN number at ODD index.\n");
                         }
          }
        }
             printf("\nFinal Array:\n");
             for(i = 0; i < 10; i++)
                {
                 printf("%d ", arr[i]);
                 }

    return 0;
}
