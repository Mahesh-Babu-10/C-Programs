//program to read the marks of 5 subjects to caculate total and average
#include<stdio.h>
int main()
{
    int s1,e1,m1,m2,p1,c1,total_marks,avg;//declaration
    s1=e1=m1=m2=p1=c1=total_marks=avg=0;//initialization

    printf("Enter 1st year sans marks............:");
    scanf("%d",&s1);

    printf("Enter 1st year Eng marks.............:");
    scanf("%d",&e1);

    printf("Enter 1st  year maths 1A marks.......:");
    scanf("%d",&m1);

    printf("Enter 1st year maths 1B marks........:");
    scanf("%d",&m2);

    printf("Enter 1st year phy marks.............:");
    scanf("%d",&p1);

    printf("Enter 1st year chem marks............:");
    scanf("%d",&c1);

    total_marks=(s1+e1+m1+m2+p1+c1);

    printf("Enter 1st year Total_Marks...........:%d\n",total_marks);

    avg= (s1+e1+m1+m2+p1+c1)/6;

    printf("Average:%d");

    return 0;
}
