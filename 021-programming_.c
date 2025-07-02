//Program to read lowercase letters and convert into uppercase letters
#include<stdio.h>
int main()
{
    char lwrcsl;

    printf("Enter upperCase letters:");
    scanf("%c",&lwrcsl);

    //Logic
    lwrcsl=lwrcsl-32;

    printf("ASCII character for upcsl is :%c",lwrcsl);

    return 0;
}

