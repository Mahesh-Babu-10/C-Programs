//Program that takes three numbers as input and displays them in ascending order by using if else statement
#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter Three Numbers:");
    scanf("%d%%d%d",&a,&b,&c);

    printf("Numbers in ascending order:");

        if(a<=b && a<=c && b<=c)
            printf("%d%d%d\n",a,b,c);
          else
             printf("%d%d%d\n",a,c,b);

              if(b<=a && b<=c && a<=c)
                 printf("%d%d%d\n",b,a,c);
                else
                   printf("%d%d%d\n",b,c,a);
                   if(a<=b)
                      printf("%d%d%d\n",c,a,b);
                     else
                         printf("%d%d%d\n",c,b,a);

    return 0;
}
