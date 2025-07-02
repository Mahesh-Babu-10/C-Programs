//Program that prompts the user to enter the names and the ages of two friends,to display which friend is older or if they are the same age
#include<stdio.h>
int main()
{
    char name1[50],name2[50];
    int age1,age2;

    printf("Enter the name of the first friend:");
    scanf("%s",name1);
    printf("Enter the age of the first friend:");
    scanf("%d",&age1);

    printf("\nEnter the name of the second friend:");
    scanf("%s",name2);
    printf("Enter the age of the second friend:");
    scanf("%d",&age2);

    if(age1>age2)
       printf("\n%s is older than %s\n",name1,name2);
       else if(age2>age1)
       printf("\n%s is older than %s\n",name2,name1);
            else
                printf("\n%s and %s are same age \n",name1,name2);

    return 0;
}
