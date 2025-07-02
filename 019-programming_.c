//program to swap two variables without using three variables with multiplication and division
#include<stdio.h>
int main()
{
    int a,b;
    a=b=0;

    //Read the input
    printf("enter a:");
    scanf("%d",&a);

    printf("enter b:");
    scanf("%d",&b);

    //logic to swap their values
    a=b/a;
    b=a*b;
    a=b/a;
    b=b/a;
    b=a/b;

    //output
    printf("a is:%d",a);
    printf("\nb is:%d",b);

    return 0;
}

