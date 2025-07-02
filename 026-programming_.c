//progrm to read Captial Alphabets from the user and display in lowercase
#include<stdio.h>
int main()
{
    char uprcseltr;

    printf("Enter uppercase letter...........................:");
    scanf("%c",&uprcseltr);

    //logic
    uprcseltr=uprcseltr+32;

    printf("\nAscii character for lowercase letter is..........:%c\n",uprcseltr);

    return 0;
}
