//Program to read full name,Gender,and Native place of a person to display
#include<stdio.h>
int main()
{
    char name[100],gender[10],native_place[100];

    printf("Enter your Name:");
    scanf(" %s", &name);

    printf("\nEnter your Gender:");
    scanf(" %s", &gender);

    printf("\nEnter your Native_Place:");
    scanf(" %s", &native_place);

    printf("\nName-Gender-Native_Place : %s-%s-%s\n",name,gender,native_place);

    return 0;
}


















