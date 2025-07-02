//WAP to check whether the inputted data is captial letter or small letter or digit or special character
#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("It is a Capital Letter.\n");
    }     else if (ch >= 'a' && ch <= 'z')
    {
                printf("It is a Small Letter.\n");
    }                else if (ch >= '0' && ch <= '9')
    {
                         printf("It is a Digit.\n");
    }                    else
    {
                            printf("It is a Special Character.\n");
    }

return 0;
}
