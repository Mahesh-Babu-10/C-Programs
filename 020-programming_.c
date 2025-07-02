//Program to read upper case letters and convert into lower case letters
#include<stdio.h>
int main()
{
    char upcsl;

    printf("Enter upperCase letters:");
    scanf("%c",&upcsl);

    //Logic
    upcsl=upcsl+32;

    printf("ASCII character for lwrcsl is :%c",upcsl);

    return 0;
}
