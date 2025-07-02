//Program To Read Marks Of Three Subjects to calculate Total,Average and Grade
#include<stdio.h>
int main()
{
    int tel,mts,c,ttl,avg;
    tel=mts=c=ttl=avg=0;

    printf("Enter Marks of Telugu...:");
    scanf("%d",&tel);

    printf("\nEnter Marks of Maths....:");
    scanf("%d",&mts);

    printf("\nEnter Marks of c........:");
    scanf("%d",&c);

    ttl=tel+mts+c;
    printf("\n.................................");

    printf("\nTotal Marks is      \t:%d",ttl);

    printf("\n.................................");

    avg=ttl/3;

    printf("\n.................................");

    printf("\nAverage is     \t\t:%d",avg);

    printf("\n.................................");

    if(avg>=90)
       {printf("\nYour Grade is:A+");
        printf("\nHeyy congratulations");
       }
        else
            if(avg>=80)
              {printf("\nYour Grade is:A");
               printf("\nHeyy congratulations");
              }
               else
                   if(avg>=70)
                     {printf("\nYour Grade is:B+");
                      printf("\nHeyy congratulations");
                     }
                    else
                        if(avg>=60)
                           {printf("\nYour Grade is:B");
                            printf("\nHeyy congratulations");
                           }
                         else
                             if(avg>=50)
                                printf("\nYour Grade is:C");
                                    else
                                       printf("\nYour Failed");


    return 0;
}
