//program to read age of a candidate and determine whether he/she is eligible to cast his/her vote
#include<stdio.h>
int main()
{
    int age;
    age=0;
    printf("Enter Your Age:");
    scanf("%d",&age);

     if(age>=18)
     {
      printf("...................................................");
      printf("\nCongratulation You are eligible to vote\n");
      printf("...................................................");
     }
       else
        {
         printf("...................................................");
         printf("\nSorry you are not Eligible to vote\n");
         printf("...................................................");
        }
    return 0;
}
