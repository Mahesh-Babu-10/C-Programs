//program to calculate marks of class 11 and class 12
#include<stdio.h>
 int main()
 {
     int s1,e1,m1,m2,p1,c1,s2,e2,m3,m4,p2,c2,pp1,pp2,total_marks;//declaration
     s1=e1=m1=m2=p1=c1=s2=e2=m3=m4=p2=c2=pp1=pp2=total_marks=0;//initialization

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

     total_marks=s1+e1+m1+m2+p1+c1;

     printf("Enter 1st year Total_Marks...........:%d\n",total_marks);



     printf("\nEnter 2nd year sans marks............:");
     scanf("%d",&s2);

     printf("Enter 2nd year Eng marks.............:");
     scanf("%d",&e2);

     printf("Enter 2nd  year maths 2A marks.......:");
     scanf("%d",&m3);

     printf("Enter 2nd year maths 2B marks........:");
     scanf("%d",&m4);

     printf("Enter 2nd year phy marks.............:");
     scanf("%d",&p2);

     printf("Enter 2nd year chem marks............:");
     scanf("%d",&c2);

     printf("Enter phy practical..................:");
     scanf("%d",&pp1);

     printf("Enter chem practical.................:");
     scanf("%d",&pp2);

     total_marks=s2+e2+m3+m4+p2+c2+pp1+pp2;

     printf("Enter 2nd year Total_Marks...........:%d\n",total_marks);

     total_marks=s1+s2+e1+m1+m2+m3+m4+p1+p2+c1+c2+pp1+pp2;

     printf("\nEnter 1st and 2nd year Total_Marks...:%d",total_marks=s1+s2+e1+e2+m1+m2+m3+m4+p1+p2+c1+c2+pp1+pp2);

     return 0;
 }
