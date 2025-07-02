//Program to calculate total and average for the input of three subjects c,Java and python
#include<stdio.h>
int main()
{
    int c,java,python;
    float total,average;
    c=java=python=total=average=0;

    printf("Enter marks of C:");
    scanf("%d",&c);

    printf("Enter marks of java:");
    scanf("%d",&java);

    printf("Enter marks of python:");
    scanf("%d",&python);

    total=c+java+python;

    printf("Enter total %.0f",total);

    average=total/3;

    printf("\nEnter average %.2f%%",average);

    return 0;
}
