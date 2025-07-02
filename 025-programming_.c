//Program to read Rollno,name,Gender,and Height of a person
#include<stdio.h>
int main()
{
    int rollno;
    float height;
    char name[100],gender[10];

    printf("Enter Your Name:");
    scanf("%s",&name);

    printf("\nEnter Your Gender:");
    scanf("%s",&gender);

    printf("\nEnter Your Height:");
    scanf("%f",&height);

    printf("\nEnter Your Rollno:");
    scanf("%d",&rollno);

    printf("\nEnter Name........:%s %1u bytes\n",name,sizeof(name));

    printf("\nEnter Gender......:%s %1u bytes\n",gender,sizeof(gender));

    printf("\nEnter Height......:%.1lf %1u bytes\n",height,sizeof(height));

    printf("\nEnter Rollno......:%d %1u bytes\n",rollno,sizeof(rollno));

    return 0;
}
