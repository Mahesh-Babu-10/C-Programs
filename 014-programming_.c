//program to swap two variables without using three variables with addition and subtration
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
    a=a+b;
    b=a-b;
    a=a-b;

    //output
    printf("a is:%d",a);
    printf("\nb is:%d",b);

    return 0;
}

